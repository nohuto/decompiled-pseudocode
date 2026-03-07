BMPDEVOPEN *__fastcall BMPDEVOPEN::BMPDEVOPEN(BMPDEVOPEN *this, struct _SURFOBJ *a2)
{
  PVOID *p_pvScan0; // rdi

  *(_QWORD *)this = 0LL;
  if ( a2 )
  {
    if ( ((__int64)a2[1].hsurf & 0x10) != 0 )
    {
      p_pvScan0 = &a2[-1].pvScan0;
      if ( (unsigned int)bBmpUndoMakeOpaque((struct SURFACE *)&a2[-1].pvScan0) )
        *(_QWORD *)this = p_pvScan0;
    }
  }
  return this;
}
