/*
 * XREFs of ?DrawBottomLogicallyRightCorner@@YAXPEAXJHJ@Z @ 0x1C02393AC
 * Callers:
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x1C02395E8 (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrawBottomLogicallyRightCorner(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // r10d
  int v5; // r11d
  __int64 v6; // rdi
  int *v9; // r8
  int v10; // r10d
  int *v11; // rdx
  __int64 v12; // r9
  _DWORD *v13; // rcx
  int v14; // eax
  _DWORD *v15; // rdx
  int v16; // r10d
  int v17; // eax
  __int128 v18; // xmm0
  __int64 v19; // rcx

  v4 = 5 * a4;
  v5 = -a2;
  v6 = 5 * a4;
  if ( a3 )
  {
    v9 = (int *)&unk_1C02F4910;
    v10 = a2 * (v4 - 1);
    do
    {
      v11 = v9;
      v12 = 5LL;
      v13 = &a1[v6 - 5 + v10];
      do
      {
        v14 = *v11--;
        *v13++ = v14;
        --v12;
      }
      while ( v12 );
      v10 += v5;
      v9 += 5;
    }
    while ( (__int64)v9 < (__int64)dword_1C02F4974 );
  }
  else
  {
    v15 = &unk_1C02F4900;
    v16 = a2 * v4;
    do
    {
      v17 = v15[4];
      v18 = *(_OWORD *)v15;
      v15 += 5;
      v19 = v16 - v6;
      v16 += v5;
      *(_OWORD *)&a1[v19] = v18;
      a1[v19 + 4] = v17;
    }
    while ( (__int64)v15 < (__int64)dword_1C02F4964 );
  }
}
