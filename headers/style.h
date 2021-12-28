#include <iostream>
#include <string>

using std::string;

class Style
{
	public:
		Style(string*,int);
		~Style();

        void set_style();
	private:
		string m_style;
		int m_parameter;
};
