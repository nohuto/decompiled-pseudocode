/*
 * XREFs of ?DrawBottomLogicallyLeftCorner@@YAXPEAXJHJ@Z @ 0x1C02236B4
 * Callers:
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x1C0223998 (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrawBottomLogicallyLeftCorner(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // r10d
  int *v7; // r8
  int v8; // r10d
  int *v9; // rdx
  __int64 v10; // r9
  _DWORD *v11; // rcx
  int v12; // eax
  _DWORD *v13; // rdx
  int v14; // r10d
  __int128 v15; // xmm0
  int v16; // eax
  __int64 v17; // rcx

  v4 = 5 * a4;
  if ( a3 )
  {
    v7 = (int *)&unk_1C0322A60;
    v8 = a2 * v4;
    do
    {
      v9 = v7;
      v10 = 5LL;
      v11 = &a1[v8 - 10];
      do
      {
        v12 = *v9--;
        *v11++ = v12;
        --v10;
      }
      while ( v10 );
      v8 -= a2;
      v7 += 5;
    }
    while ( (__int64)v7 < (__int64)dword_1C0322AC4 );
  }
  else
  {
    v13 = &unk_1C0322A50;
    v14 = a2 * (v4 - 1);
    do
    {
      v15 = *(_OWORD *)v13;
      v16 = v13[4];
      v13 += 5;
      v17 = v14;
      v14 -= a2;
      *(_OWORD *)&a1[v17 + 5] = v15;
      a1[v17 + 9] = v16;
    }
    while ( (__int64)v13 < (__int64)dword_1C0322AB4 );
  }
}
