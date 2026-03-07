void __fastcall UMPDOBJ::UnlockSurface(UMPDOBJ *this, struct _SURFOBJ *a2)
{
  LONG *pv; // [rsp+30h] [rbp+8h]

  if ( a2 )
  {
    pv = &a2[-1].lDelta;
    if ( a2[-1].lDelta == 1431130959 )
    {
      if ( *((_QWORD *)pv + 1) )
        EngFreeUserMem(pv);
    }
  }
}
