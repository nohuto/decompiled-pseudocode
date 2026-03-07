struct Gre::Base::SESSION_GLOBALS *__fastcall Gre::Base::Globals(Gre::Base *this)
{
  return *(struct Gre::Base::SESSION_GLOBALS **)(SGDGetSessionState(this) + 24);
}
