#define RED1 8
#define YELLOW1 9
#define GREEN1 10
#define RED2 11
#define YELLOW2 12
#define GREEN2 13

void setup() {
  // Set pins to output
    pinMode(RED1, OUTPUT);
    pinMode(YELLOW1, OUTPUT);
    pinMode(GREEN1, OUTPUT);
    pinMode(RED2, OUTPUT);
    pinMode(YELLOW2, OUTPUT);
    pinMode(GREEN2, OUTPUT);

  // Set pins to input
}

void main () {
    digitalWrite(RED1, HIGH);
    digitalWrite(RED2, HIGH);
    digitalWrite(YELLOW1, HIGH);
    digitalWrite(YELLOW2, HIGH);
    digitalWrite(GREEN1, HIGH);
    digitalWrite(GREEN2, HIGH);
}