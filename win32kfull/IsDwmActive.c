_BOOL8 __fastcall IsDwmActive(Gre::Base *a1)
{
  return *((_QWORD *)Gre::Base::Globals(a1) + 38) != 0LL;
}
