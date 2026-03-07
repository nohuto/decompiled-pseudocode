bool __fastcall Gre::Umfd::IsSessionGlobalsAreaAllocated(Gre::Umfd *this)
{
  return *(_QWORD *)(SGDGetSessionState(this) + 40) != 0LL;
}
