/*
 * XREFs of vSrcTranCopyS1D16 @ 0x1C028EE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcTranCopyS1D16(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int16 a9)
{
  int v9; // edi
  int v10; // ebp
  char *v11; // r11
  char *v12; // r9
  char *v13; // rsi
  __int64 v14; // r10
  char *v15; // r8
  char v16; // dl
  char *v17; // rcx
  __int64 result; // rax
  char *v19; // rdx
  char v20; // cl
  char v21; // cl

  v9 = a2 & 7;
  v10 = a6 - a5;
  v11 = (char *)(a4 + 2LL * a5);
  v12 = (char *)(a1 + ((__int64)a2 >> 3));
  v13 = &v11[a8 * a7];
  v14 = a3 - ((v9 + a6 - a5 + 7) >> 3);
  if ( a6 - a5 >= 8 - v9 )
    v10 = 8 - v9;
  do
  {
    v15 = &v11[2 * (a6 - a5)];
    if ( v9 )
    {
      v16 = *v12++ << v9;
      v17 = &v11[2 * v10];
      do
      {
        result = a9;
        if ( v16 < 0 )
          *(_WORD *)v11 = a9;
        v11 += 2;
        v16 *= 2;
      }
      while ( v11 != v17 );
    }
    else
    {
      result = a9;
    }
    v19 = &v11[(v15 - v11) & 0xFFFFFFFFFFFFFFF0uLL];
    while ( v11 != v19 )
    {
      v20 = *v12;
      if ( *v12 < 0 )
        *(_WORD *)v11 = result;
      if ( (v20 & 0x40) != 0 )
        *((_WORD *)v11 + 1) = result;
      if ( (v20 & 0x20) != 0 )
        *((_WORD *)v11 + 2) = result;
      if ( (v20 & 0x10) != 0 )
        *((_WORD *)v11 + 3) = result;
      if ( (v20 & 8) != 0 )
        *((_WORD *)v11 + 4) = result;
      if ( (v20 & 4) != 0 )
        *((_WORD *)v11 + 5) = result;
      if ( (v20 & 2) != 0 )
        *((_WORD *)v11 + 6) = result;
      if ( (v20 & 1) != 0 )
        *((_WORD *)v11 + 7) = result;
      ++v12;
      v11 += 16;
    }
    if ( v11 != v15 )
    {
      v21 = *v12++;
      do
      {
        if ( v21 < 0 )
          *(_WORD *)v11 = result;
        v21 *= 2;
        v11 += 2;
      }
      while ( v11 != v15 );
    }
    v11 += a7 - 2 * (a6 - a5);
    v12 += v14;
  }
  while ( v11 != v13 );
  return result;
}
