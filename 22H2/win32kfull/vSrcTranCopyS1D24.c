/*
 * XREFs of vSrcTranCopyS1D24 @ 0x1C0138040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vSrcTranCopyS1D24(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // r14d
  char *v11; // r10
  __int64 v12; // rbx
  int v13; // r9d
  int v14; // r8d
  __int64 v15; // r12
  __int64 v16; // r15
  __int64 v17; // r11
  int v18; // r13d
  __int64 v19; // r9
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  char result; // al
  __int64 i; // rcx
  char v24; // al
  __int64 v25; // rcx

  v10 = a2 & 7;
  v11 = (char *)(a1 + ((__int64)a2 >> 3));
  v12 = a4 + 3 * a5;
  v13 = a6 - a5;
  v14 = 3 * (a6 - a5);
  v15 = v14;
  v16 = v12 + a8 * a7;
  v17 = a3 - ((v10 + a6 - a5 + 7) >> 3);
  if ( a6 - a5 >= 8 - v10 )
    v13 = 8 - v10;
  v18 = 3 * v13;
  v19 = a7 - v14;
  do
  {
    v20 = v15 + v12;
    if ( v10 )
    {
      v24 = *v11++ << v10;
      v25 = v12 + v18;
      do
      {
        if ( v24 < 0 )
        {
          *(_WORD *)v12 = a9;
          *(_BYTE *)(v12 + 2) = BYTE2(a9);
        }
        v12 += 3LL;
        v24 *= 2;
      }
      while ( v12 != v25 );
    }
    v21 = (v20 - v12) / 0x18uLL;
    result = 3 * v21;
    for ( i = v12 + 24 * v21; v12 != i; v12 += 24LL )
    {
      result = *v11;
      if ( *v11 < 0 )
      {
        *(_WORD *)v12 = a9;
        *(_BYTE *)(v12 + 2) = BYTE2(a9);
      }
      if ( (result & 0x40) != 0 )
      {
        *(_WORD *)(v12 + 3) = a9;
        *(_BYTE *)(v12 + 5) = BYTE2(a9);
      }
      if ( (result & 0x20) != 0 )
      {
        *(_WORD *)(v12 + 6) = a9;
        *(_BYTE *)(v12 + 8) = BYTE2(a9);
      }
      if ( (result & 0x10) != 0 )
      {
        *(_WORD *)(v12 + 9) = a9;
        *(_BYTE *)(v12 + 11) = BYTE2(a9);
      }
      if ( (result & 8) != 0 )
      {
        *(_WORD *)(v12 + 12) = a9;
        *(_BYTE *)(v12 + 14) = BYTE2(a9);
      }
      if ( (result & 4) != 0 )
      {
        *(_WORD *)(v12 + 15) = a9;
        *(_BYTE *)(v12 + 17) = BYTE2(a9);
      }
      if ( (result & 2) != 0 )
      {
        *(_WORD *)(v12 + 18) = a9;
        *(_BYTE *)(v12 + 20) = BYTE2(a9);
      }
      if ( (result & 1) != 0 )
      {
        *(_WORD *)(v12 + 21) = a9;
        *(_BYTE *)(v12 + 23) = BYTE2(a9);
      }
      ++v11;
    }
    if ( v12 != v20 )
    {
      result = *v11++;
      do
      {
        if ( result < 0 )
        {
          *(_WORD *)v12 = a9;
          *(_BYTE *)(v12 + 2) = BYTE2(a9);
        }
        result *= 2;
        v12 += 3LL;
      }
      while ( v12 != v20 );
    }
    v12 += v19;
    v11 += v17;
  }
  while ( v12 != v16 );
  return result;
}
