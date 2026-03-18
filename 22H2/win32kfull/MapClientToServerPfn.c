/*
 * XREFs of MapClientToServerPfn @ 0x1C00CC3D0
 * Callers:
 *     xxxSetClassData @ 0x1C00ADD68 (xxxSetClassData.c)
 *     xxxSetWindowData @ 0x1C00CA930 (xxxSetWindowData.c)
 *     InternalRegisterClassEx @ 0x1C00CB7A0 (InternalRegisterClassEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapClientToServerPfn(__int64 a1)
{
  int v2; // eax
  _QWORD *i; // r8
  _QWORD *v4; // rcx

  v2 = 666;
  for ( i = (_QWORD *)(gpsi + 584LL); *i != a1; ++i )
  {
    if ( ++v2 > 672 )
    {
      v4 = (_QWORD *)(gpsi + 392LL);
      v2 = 666;
      while ( *v4 != a1 )
      {
        ++v2;
        ++v4;
        if ( v2 > 672 )
          return 0LL;
      }
      return *(_QWORD *)(gpsi + 8LL * ((v2 & 0xFFFF2FFF) - 666) + 272);
    }
  }
  return *(_QWORD *)(gpsi + 8LL * ((v2 & 0xFFFF2FFF) - 666) + 272);
}
