#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <fmt/core.h>

int main(int argc, char* argv[])
{
	fmt::print("Hello, World!");
	QApplication app(argc, argv);
	QLabel* label = new QLabel("Hello Qt!");
	label->show();
	return app.exec();
}
