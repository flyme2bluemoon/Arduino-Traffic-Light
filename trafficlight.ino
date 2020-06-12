#define RED1 8
#define YELLOW1 9
#define GREEN1 10
#define BUTTON1 7

#define RED2 11
#define YELLOW2 12
#define GREEN2 13
#define BUTTON2 6

void setup() {
    // Set pins to output
    pinMode(RED1, OUTPUT);
    pinMode(YELLOW1, OUTPUT);
    pinMode(GREEN1, OUTPUT);
    pinMode(RED2, OUTPUT);
    pinMode(YELLOW2, OUTPUT);
    pinMode(GREEN2, OUTPUT);

    // Set pins to input
    pinMode(BUTTON1, INPUT);
    pinMode(BUTTON2, INPUT);

    return;
}

void loop () {
    // Start up sequence
    delay(1000);
    
    digitalWrite(RED1, HIGH);
    digitalWrite(RED2, HIGH);
    digitalWrite(YELLOW1, HIGH);
    digitalWrite(YELLOW2, HIGH);
    digitalWrite(GREEN1, HIGH);
    digitalWrite(GREEN2, HIGH);

    delay(1000);

    // The actual thing

    digitalWrite(RED1, HIGH);
    digitalWrite(RED2, HIGH);
    digitalWrite(YELLOW1, LOW);
    digitalWrite(YELLOW2, LOW);
    digitalWrite(GREEN1, LOW);
    digitalWrite(GREEN2, LOW);

    delay(2000);

    digitalWrite(RED1, LOW);
    digitalWrite(GREEN1, HIGH);

    delay(7000);

    digitalWrite(GREEN1, LOW);
    digitalWrite(YELLOW1, HIGH);

    delay(3000);

    digitalWrite(YELLOW1, LOW);
    digitalWrite(RED1, HIGH);

    delay(2000);

    digitalWrite(RED2, LOW);
    digitalWrite(GREEN2, HIGH);

    delay(7000);

    digitalWrite(GREEN2, LOW);
    digitalWrite(YELLOW2, HIGH);

    delay(3000);

    digitalWrite(YELLOW2, LOW);
    digitalWrite(RED2, HIGH);

    return;
}