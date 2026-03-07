__int64 __fastcall XEPALOBJ::bGenColorXlate555(XEPALOBJ *this)
{
  unsigned int v2; // ebx
  struct Gre::Base::SESSION_GLOBALS *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  Gre::Base *v7; // rcx

  v2 = 0;
  v3 = Gre::Base::Globals(this);
  v6 = *(_QWORD *)(*(_QWORD *)this + 104LL);
  if ( !v6 || v6 == *((_QWORD *)v3 + 492) )
    *(_QWORD *)(*(_QWORD *)this + 104LL) = Win32AllocPool(0x8000LL, 1650946631LL, v4, v5);
  v7 = *(Gre::Base **)(*(_QWORD *)this + 104LL);
  if ( v7 )
  {
    MakeITable(v7, *(struct RGBX **)(*(_QWORD *)this + 112LL), *(_DWORD *)(*(_QWORD *)this + 28LL));
    v2 = 1;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = XEPALOBJ::ulTime(this);
  }
  return v2;
}
