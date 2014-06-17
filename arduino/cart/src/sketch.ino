
#define LED_PIN 13

int FRONT_LEFT = 1;
int FRONT_MIDDLE = 2;
int FRONT_RIGHT = 3;

void turn_left() {
}

void turn_right() {
}

void walk() {
}

void stop() {
}

int is_front_blocked() {
	return 0;
}

int is_front_left_blocked() {
	return 0;
}

int is_front_right_blocked() {
	return 0;
}

void setup() {
}

void loop() {
	while(1) {
		delay(500);
		if (!is_front_blocked()) {
			walk();
		} else {
			if (is_front_left_blocked() && is_front_right_blocked()) {
				stop();
			} else if (is_front_right_blocked() && !is_front_left_blocked()) {
				turn_left();
			} else if (is_front_left_blocked() && !is_front_right_blocked()) {
				turn_right();
			}
		}
	}
}
