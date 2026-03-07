struct SURFACE *__fastcall BLTRECORD::pSurfMskOut(BLTRECORD *this)
{
  if ( (*((_DWORD *)this + 53) & 0x10000) != 0 )
    return (struct SURFACE *)*((_QWORD *)this + 10);
  else
    return 0LL;
}
