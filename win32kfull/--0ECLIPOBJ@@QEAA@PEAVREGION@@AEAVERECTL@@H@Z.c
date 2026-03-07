ECLIPOBJ *__fastcall ECLIPOBJ::ECLIPOBJ(ECLIPOBJ *this, struct REGION *a2, struct ERECTL *a3, int a4)
{
  *((_DWORD *)this + 32) = 1;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 18) = 0LL;
  XCLIPOBJ::vSetup(this, a2, a3, a4);
  return this;
}
