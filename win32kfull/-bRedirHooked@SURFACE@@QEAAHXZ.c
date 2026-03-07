__int64 __fastcall SURFACE::bRedirHooked(SURFACE *this)
{
  unsigned int v1; // edx

  v1 = 1;
  if ( (*((_DWORD *)this + 29) & 1) != 0 || (*((_DWORD *)this + 28) & 0x800) == 0 || *((_WORD *)this + 50) != 3 )
    return 0;
  return v1;
}
