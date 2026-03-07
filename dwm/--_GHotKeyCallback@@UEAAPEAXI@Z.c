HotKeyCallback *__fastcall HotKeyCallback::`scalar deleting destructor'(HotKeyCallback *this, char a2)
{
  HotKeyCallback::~HotKeyCallback(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
