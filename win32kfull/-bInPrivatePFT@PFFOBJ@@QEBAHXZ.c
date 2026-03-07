_BOOL8 __fastcall PFFOBJ::bInPrivatePFT(PFFOBJ *this)
{
  return *(_QWORD *)(*(_QWORD *)this + 128LL) == *((_QWORD *)Gre::Base::Globals(this) + 796);
}
