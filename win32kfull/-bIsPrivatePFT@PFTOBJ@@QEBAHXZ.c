_BOOL8 __fastcall PFTOBJ::bIsPrivatePFT(PFTOBJ *this)
{
  return *(_QWORD *)this == *((_QWORD *)Gre::Base::Globals(this) + 796);
}
