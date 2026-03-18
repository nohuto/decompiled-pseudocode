/*
 * XREFs of ?DrawTopLogicallyRightCorner@@YAXPEAXJJHJ@Z @ 0x1C02396FC
 * Callers:
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x1C02395E8 (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrawTopLogicallyRightCorner(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int *v7; // r9
  int v8; // r8d
  int *v9; // rdx
  __int64 v10; // r10
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // edx
  _DWORD *v14; // r8
  int v15; // eax
  __int128 v16; // xmm0
  __int64 v17; // rcx

  v5 = -a2;
  if ( a4 )
  {
    v7 = (int *)&unk_1C02F4980;
    v8 = a2 * (a3 - 6);
    do
    {
      v9 = v7;
      v10 = 5LL;
      v11 = &a1[5 * a5 - 5 + v8];
      do
      {
        v12 = *v9--;
        *v11++ = v12;
        --v10;
      }
      while ( v10 );
      v8 += v5;
      v7 += 5;
    }
    while ( (__int64)v7 < (__int64)dword_1C02F49E4 );
  }
  else
  {
    v13 = a2 * (a3 - 5);
    v14 = &unk_1C02F4970;
    do
    {
      v15 = v14[4];
      v16 = *(_OWORD *)v14;
      v14 += 5;
      v17 = v13 - (__int64)(5 * a5);
      v13 += v5;
      *(_OWORD *)&a1[v17] = v16;
      a1[v17 + 4] = v15;
    }
    while ( (__int64)v14 < (__int64)dword_1C02F49D4 );
  }
}
