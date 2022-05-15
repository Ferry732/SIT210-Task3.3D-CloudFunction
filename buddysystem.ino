void setup() {
    pinMode(D7, OUTPUT);
    Particle.subscribe("FakeEvent", toggle, MY_DEVICES);

}

void loop() {

}

void toggle (const char *event, const char *data){
    digitalWrite(D7, HIGH);
    delay(1000);
    
    digitalWrite(D7, LOW);
    delay(1000);
    
    digitalWrite(D7, HIGH);
    delay(1000);
    
    digitalWrite(D7, LOW);
    delay(1000);
    
    digitalWrite(D7, HIGH);
    delay(1000);
    
    digitalWrite(D7, LOW);
    delay(1000);
}