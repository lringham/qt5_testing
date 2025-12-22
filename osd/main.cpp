#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include "QPointF"
#include <fmt/core.h>

int main(int argc, char* argv[])
{
	fmt::print("Hello, World!");
	QApplication app(argc, argv);
	QPointF point(10.0, 20.0);
	fmt::print("Point coordinates: ({}, {})\n", point.x(), point.y());
	return app.exec();
}