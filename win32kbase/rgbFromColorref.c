/*
 * XREFs of rgbFromColorref @ 0x1C0199DC0
 * Callers:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C0027D30 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rgbFromColorref(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edx
  unsigned int v4; // r8d
  unsigned int v5; // eax
  unsigned int v7; // [rsp+18h] [rbp+18h]

  v7 = a3;
  if ( (a3 & 0x1000000) != 0 )
  {
    v3 = *(_DWORD *)(*(_QWORD *)(a2 + 112)
                   + 4LL
                   * ((unsigned __int16)a3 & (unsigned int)-((unsigned int)(unsigned __int16)a3 < *(_DWORD *)(a2 + 28))));
    v7 = v3;
    if ( HIBYTE(v3) == 2 )
    {
      if ( a1 )
      {
        v4 = *(_DWORD *)(a1 + 28);
        if ( v4 )
        {
          v5 = (unsigned __int8)v3;
          if ( (unsigned __int8)v3 >= v4 )
            v5 = (unsigned __int8)v3 % v4;
          v7 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL * v5);
        }
      }
    }
  }
  HIBYTE(v7) = 0;
  return v7;
}
