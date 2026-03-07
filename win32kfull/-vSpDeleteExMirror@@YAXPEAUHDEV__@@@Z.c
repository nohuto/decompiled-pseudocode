void __fastcall vSpDeleteExMirror(_QWORD *a1)
{
  SURFOBJ *v2; // rcx

  if ( a1 )
  {
    v2 = (SURFOBJ *)a1[176];
    if ( v2 )
    {
      EngUnlockSurface(v2);
      if ( !(unsigned int)HmgQueryAltLock(*(_QWORD *)(a1[176] + 8LL)) )
      {
        *(_DWORD *)(a1[176] + 92LL) = 0;
        EngDeleteSurface(*(HSURF *)(a1[176] + 8LL));
        a1[176] = 0LL;
      }
    }
  }
}
