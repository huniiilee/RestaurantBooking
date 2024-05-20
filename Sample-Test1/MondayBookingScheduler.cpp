#include "../cra3-0520-restaurent/BookingScheduler.cpp"


class MondayBookingScheduler : public BookingScheduler {
public:
	MondayBookingScheduler(int capacityPerHour) : BookingScheduler{ capacityPerHour } {}

	time_t getNow() override {
		return getTime(2021, 6, 3, 17, 0);
	}

private:
	time_t getTime(int year, int mon, int day, int hour, int min) {
		tm result = { 0, min, hour, day, mon - 1, year - 1900, 0, 0,-1 };
		return mktime(&result);
	}

};