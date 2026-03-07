REDIROPEN *__fastcall REDIROPEN::REDIROPEN(REDIROPEN *this, struct _SURFOBJ *a2)
{
  PVOID *p_pvScan0; // rdi

  *(_QWORD *)this = 0LL;
  if ( a2 )
  {
    if ( ((__int64)a2[1].hsurf & 0x800) != 0 )
    {
      p_pvScan0 = &a2[-1].pvScan0;
      if ( (unsigned int)bUndoMakeOpaque((struct SURFACE *)&a2[-1].pvScan0) )
        *(_QWORD *)this = p_pvScan0;
    }
  }
  return this;
}
