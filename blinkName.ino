/* References: Following code by Louis da Silva adapted from "blink-d7" which can be found at:
               https://docs.particle.io/tutorials/developer-tools/build/#flashing-your-first-app
*/

int LED = D7; // the output pin for the LED

/* set only the time for the dot, 
    all other units are calculated as per international morse code timing
    https://morsecode.world/international/morse2.html */
int const dot = 90; // time space chosen to fit within 5 second window for video submission
int const dash = 3 * dot;
int const ccs = dot; // ccs = character component space
int const character_space = dash;
int const word_space = 7 * dot;

// blink function, pass in dot or dash from set constants
void blink(int length){
    digitalWrite(LED, HIGH);
    delay(length);
    digitalWrite(LED, LOW);
}

void setup() {
    pinMode(LED, OUTPUT);
}

void loop() {
    
    // L .-..
    blink(dot);
    delay(ccs);
    blink(dash);
    delay(ccs);
    blink(dot);
    delay(ccs);
    blink(dot);
    
    delay(character_space);
    
    // O ---
    blink(dash);
    delay(ccs);
    blink(dash);
    delay(ccs);
    blink(dash);
    
    delay(character_space);
    
    // U ..-
    blink(dot);
    delay(ccs);
    blink(dot);
    delay(ccs);
    blink(dash);
    
    delay(character_space);
    
    // I ..
    blink(dot);
    delay(ccs);
    blink(dot);
    
    delay(character_space);
    
    // S ...
    blink(dot);
    delay(ccs);
    blink(dot);
    delay(ccs);
    blink(dot);
    
    delay(word_space);
}