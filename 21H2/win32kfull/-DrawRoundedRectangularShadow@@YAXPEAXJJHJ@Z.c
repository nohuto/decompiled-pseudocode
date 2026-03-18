/*
 * XREFs of ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x1C02395E8
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012E518 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     ?DrawBottomLogicallyRightCorner@@YAXPEAXJHJ@Z @ 0x1C02393AC (-DrawBottomLogicallyRightCorner@@YAXPEAXJHJ@Z.c)
 *     ?DrawBottomSide@@YAXPEAXJHJ@Z @ 0x1C0239460 (-DrawBottomSide@@YAXPEAXJHJ@Z.c)
 *     ?DrawLogicallyRightSide@@YAXPEAXJJHJ@Z @ 0x1C0239510 (-DrawLogicallyRightSide@@YAXPEAXJJHJ@Z.c)
 *     ?DrawTopLogicallyRightCorner@@YAXPEAXJJHJ@Z @ 0x1C02396FC (-DrawTopLogicallyRightCorner@@YAXPEAXJJHJ@Z.c)
 */

void __fastcall DrawRoundedRectangularShadow(char *a1, int a2, int a3, int a4, int a5)
{
  int v9; // ecx
  int *v10; // rdx
  int v11; // ecx
  int *v12; // r9
  __int64 v13; // r10
  char *v14; // r8
  int v15; // eax
  int v16; // edx
  _DWORD *v17; // r8
  int v18; // eax
  __int128 v19; // xmm0
  __int64 v20; // rcx

  DrawTopLogicallyRightCorner(a1, a2, a3, a4, a5);
  DrawLogicallyRightSide(a1, a2, a3, a4, a5);
  DrawBottomLogicallyRightCorner(a1, a2, a4, a5);
  DrawBottomSide(a1, a2, a4, a5);
  v9 = 5 * a5;
  if ( a4 )
  {
    v10 = (int *)&unk_1C02F4890;
    v11 = a2 * v9;
    do
    {
      v12 = v10;
      v13 = 5LL;
      v14 = &a1[4 * v11 - 40];
      do
      {
        v15 = *v12--;
        *(_DWORD *)v14 = v15;
        v14 += 4;
        --v13;
      }
      while ( v13 );
      v11 -= a2;
      v10 += 5;
    }
    while ( (__int64)v10 < (__int64)((int *)&xmmword_1C02F48E8 + 3) );
  }
  else
  {
    v16 = a2 * (v9 - 1);
    v17 = &unk_1C02F4880;
    do
    {
      v18 = v17[4];
      v19 = *(_OWORD *)v17;
      v20 = v16;
      v17 += 5;
      v16 -= a2;
      *(_OWORD *)&a1[4 * v20 + 20] = v19;
      *(_DWORD *)&a1[4 * v20 + 36] = v18;
    }
    while ( (__int64)v17 < (__int64)&dword_1C02F48E4 );
  }
}
