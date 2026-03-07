bool __fastcall Gre::Base::IsSessionGlobalsAreaAllocated(Gre::Base *this)
{
  return *(_QWORD *)(SGDGetSessionState(this) + 24) != 0LL;
}
