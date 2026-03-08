/*
 * XREFs of ?vSrcTranCopyS1D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C00C5C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcTranCopyS1D32(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9)
{
  int v9; // edi
  unsigned __int8 *v10; // rax
  const unsigned __int8 *v11; // rbx
  int v12; // r15d
  unsigned __int8 *v13; // rsi
  __int64 v14; // r11
  unsigned __int8 *v15; // r8
  char v16; // dl
  unsigned __int8 *v17; // r9
  unsigned __int8 *i; // rdx
  char v19; // cl
  char v20; // cl

  v9 = a2 & 7;
  v10 = &a4[4 * a5];
  v11 = &a1[(__int64)a2 >> 3];
  v12 = 8 - v9;
  v13 = &v10[a8 * a7];
  v14 = a3 - ((v9 + a6 - a5 + 7) >> 3);
  if ( a6 - a5 < 8 - v9 )
    v12 = a6 - a5;
  do
  {
    v15 = &v10[4 * (a6 - a5)];
    if ( v9 )
    {
      v16 = *v11++ << v9;
      v17 = &v10[4 * v12];
      do
      {
        if ( v16 < 0 )
          *(_DWORD *)v10 = a9;
        v10 += 4;
        v16 *= 2;
      }
      while ( v10 != v17 );
    }
    for ( i = &v10[(v15 - v10) & 0xFFFFFFFFFFFFFFE0uLL]; v10 != i; v10 += 32 )
    {
      v19 = *v11;
      if ( *(char *)v11 < 0 )
        *(_DWORD *)v10 = a9;
      if ( (v19 & 0x40) != 0 )
        *((_DWORD *)v10 + 1) = a9;
      if ( (v19 & 0x20) != 0 )
        *((_DWORD *)v10 + 2) = a9;
      if ( (v19 & 0x10) != 0 )
        *((_DWORD *)v10 + 3) = a9;
      if ( (v19 & 8) != 0 )
        *((_DWORD *)v10 + 4) = a9;
      if ( (v19 & 4) != 0 )
        *((_DWORD *)v10 + 5) = a9;
      if ( (v19 & 2) != 0 )
        *((_DWORD *)v10 + 6) = a9;
      if ( (v19 & 1) != 0 )
        *((_DWORD *)v10 + 7) = a9;
      ++v11;
    }
    if ( v10 != v15 )
    {
      v20 = *v11++;
      do
      {
        if ( v20 < 0 )
          *(_DWORD *)v10 = a9;
        v20 *= 2;
        v10 += 4;
      }
      while ( v10 != v15 );
    }
    v10 += a7 - 4 * (a6 - a5);
    v11 += v14;
  }
  while ( v10 != v13 );
}
