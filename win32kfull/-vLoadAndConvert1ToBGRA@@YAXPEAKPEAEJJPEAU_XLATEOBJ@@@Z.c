void __fastcall vLoadAndConvert1ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4, struct _XLATEOBJ *a5)
{
  char v6; // bp
  char v7; // di
  unsigned __int8 *v8; // rsi
  int v9; // r8d
  char v10; // bl
  int v11; // edi
  __int64 v12; // rax
  ULONG cEntries; // ecx
  unsigned __int64 v14; // rbx
  unsigned int v15; // r8d
  ULONG v16; // ecx
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  ULONG v20; // ecx
  int v21; // ecx
  __int64 v22; // rax
  ULONG v23; // ecx
  int v24; // ecx
  __int64 v25; // rax
  ULONG v26; // ecx
  int v27; // ecx
  __int64 v28; // rax
  ULONG v29; // ecx
  int v30; // ecx
  __int64 v31; // rax
  ULONG v32; // ecx
  int v33; // ecx
  unsigned int v34; // eax
  ULONG v35; // ecx
  unsigned int v36; // r8d
  ULONG v37; // ecx
  int v38; // r8d
  __int64 v39; // rax
  ULONG v40; // ecx

  if ( (a5->flXlate & 2) != 0 )
  {
    v6 = 7;
    v7 = a3 & 7;
    v8 = &a2[(__int64)a3 >> 3];
    v9 = -(a3 & 7) & 7;
    if ( a4 < v9 )
      v9 = a4;
    if ( v9 )
    {
      v10 = 7 - v7;
      v11 = *v8++;
      a4 -= v9;
      do
      {
        --v9;
        v12 = (unsigned int)((v11 & (1 << v10)) >> v10);
        cEntries = a5->cEntries;
        if ( (unsigned int)v12 > cEntries )
          v12 = (unsigned int)v12 % cEntries;
        --v10;
        *a1++ = *(&a5[3].cEntries + v12) | 0xFF000000;
      }
      while ( v9 );
    }
    if ( a4 >= 8 )
    {
      v14 = (unsigned __int64)(unsigned int)a4 >> 3;
      a4 -= 8 * ((unsigned int)a4 >> 3);
      do
      {
        v15 = *v8;
        v16 = a5->cEntries;
        v17 = v15 >> 7;
        if ( (unsigned int)v17 > v16 )
          v17 = (unsigned int)v17 % v16;
        v18 = *(&a5[3].cEntries + v17);
        v19 = (v15 >> 6) & 1;
        *a1 = v18 | 0xFF000000;
        v20 = a5->cEntries;
        if ( (unsigned int)v19 > v20 )
          v19 = (unsigned int)v19 % v20;
        v21 = *(&a5[3].cEntries + v19);
        v22 = (v15 >> 5) & 1;
        a1[1] = v21 | 0xFF000000;
        v23 = a5->cEntries;
        if ( (unsigned int)v22 > v23 )
          v22 = (unsigned int)v22 % v23;
        v24 = *(&a5[3].cEntries + v22);
        v25 = (v15 >> 4) & 1;
        a1[2] = v24 | 0xFF000000;
        v26 = a5->cEntries;
        if ( (unsigned int)v25 > v26 )
          v25 = (unsigned int)v25 % v26;
        v27 = *(&a5[3].cEntries + v25);
        v28 = (v15 >> 3) & 1;
        a1[3] = v27 | 0xFF000000;
        v29 = a5->cEntries;
        if ( (unsigned int)v28 > v29 )
          v28 = (unsigned int)v28 % v29;
        v30 = *(&a5[3].cEntries + v28);
        v31 = (v15 >> 2) & 1;
        a1[4] = v30 | 0xFF000000;
        v32 = a5->cEntries;
        if ( (unsigned int)v31 > v32 )
          v31 = (unsigned int)v31 % v32;
        v33 = *(&a5[3].cEntries + v31);
        v34 = (v15 >> 1) & 1;
        a1[5] = v33 | 0xFF000000;
        v35 = a5->cEntries;
        if ( v34 > v35 )
          v34 %= v35;
        v36 = v15 & 1;
        a1[6] = *(&a5[3].cEntries + v34) | 0xFF000000;
        v37 = a5->cEntries;
        if ( v36 > v37 )
          v36 %= v37;
        ++v8;
        a1[7] = *(&a5[3].cEntries + v36) | 0xFF000000;
        a1 += 8;
        --v14;
      }
      while ( v14 );
    }
    if ( a4 )
    {
      v38 = *v8;
      do
      {
        v39 = (unsigned int)((v38 & (1 << v6)) >> v6);
        v40 = a5->cEntries;
        if ( (unsigned int)v39 > v40 )
          v39 = (unsigned int)v39 % v40;
        --v6;
        *a1++ = *(&a5[3].cEntries + v39) | 0xFF000000;
        --a4;
      }
      while ( a4 );
    }
  }
}
