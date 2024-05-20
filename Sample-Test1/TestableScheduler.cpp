#include "../cra3-0520-restaurent/BookingScheduler.cpp"


class TestableScheduler : public BookingScheduler {
public:
	TestableScheduler(int capacityPerHour, tm dateTime):
		BookingScheduler{capacityPerHour},
		dateTime{dateTime}{
	}

	time_t getNow() override {
		return mktime(&dateTime);
	}

private:
	tm dateTime;
};