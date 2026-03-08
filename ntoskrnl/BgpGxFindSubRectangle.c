/*
 * XREFs of BgpGxFindSubRectangle @ 0x140AE97BC
 * Callers:
 *     AnFwDisplayFade @ 0x140AE99E8 (AnFwDisplayFade.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     BgpGxRectangleCreate @ 0x140AEAA94 (BgpGxRectangleCreate.c)
 */

__int64 __fastcall BgpGxFindSubRectangle(unsigned int *a1, int a2, __int64 a3, unsigned int *a4, _BYTE *a5)
{
  unsigned int *v5; // r13
  __int64 v6; // r11
  unsigned int *v7; // r14
  unsigned int v8; // ebp
  unsigned int v9; // r9d
  unsigned int v10; // r10d
  unsigned int v11; // esi
  __int64 v12; // rcx
  unsigned int v13; // edi
  unsigned int v14; // ebx
  unsigned int v15; // r12d
  unsigned int v16; // r15d
  unsigned int v17; // r8d
  unsigned int i; // edx
  int v19; // edi
  __int64 v20; // rsi
  __int64 result; // rax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // r11d
  unsigned int v27; // r8d
  __int64 v28; // rax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // edx
  size_t v34; // rdi
  char *v35; // rbp
  char *v36; // rbx
  __int64 v37; // r14
  char v38; // [rsp+20h] [rbp-68h]
  int v39; // [rsp+28h] [rbp-60h] BYREF
  __int64 v40; // [rsp+2Ch] [rbp-5Ch]

  v40 = 0LL;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  if ( !a4 )
    return 3221225485LL;
  if ( !a1 )
    return 3221225485LL;
  v8 = a1[2];
  if ( ((v8 - 24) & 0xFFFFFFF7) != 0 )
    return 3221225485LL;
  v9 = *a1;
  v10 = a1[1];
  v11 = 0;
  v12 = *((_QWORD *)a1 + 3);
  v13 = 0;
  v14 = v8 >> 3;
  v15 = v9;
  v38 = 0;
  v16 = v10;
  if ( a2 == -16777216 && v14 == 4 )
  {
    v17 = 0;
    if ( !v9 )
    {
LABEL_49:
      *a5 = 1;
      *(_QWORD *)a3 = 0LL;
      return 0LL;
    }
    do
    {
      for ( i = 0; i < v10; ++i )
      {
        if ( *(_DWORD *)v12 )
        {
          v38 = 1;
          v22 = i;
          if ( i >= v16 )
            v22 = v16;
          v16 = v22;
          v23 = i;
          if ( i <= v13 )
            v23 = v13;
          v13 = v23;
          v24 = v17;
          if ( v17 >= v15 )
            v24 = v15;
          v15 = v24;
          v25 = v17;
          if ( v17 <= v11 )
            v25 = v11;
          v11 = v25;
        }
        v12 += 4LL;
      }
      ++v17;
    }
    while ( v17 < v9 );
  }
  else
  {
    v26 = 0;
    if ( !v9 )
      goto LABEL_49;
    do
    {
      v27 = 0;
      if ( v10 )
      {
        v28 = v14;
        do
        {
          if ( *(_BYTE *)(v12 + 2) != BYTE2(a2) || *(_WORD *)v12 != (_WORD)a2 )
          {
            v38 = 1;
            v29 = v27;
            if ( v27 >= v16 )
              v29 = v16;
            v16 = v29;
            v30 = v27;
            if ( v27 <= v13 )
              v30 = v13;
            v13 = v30;
            v31 = v26;
            if ( v26 >= v15 )
              v31 = v15;
            v15 = v31;
            v32 = v26;
            if ( v26 <= v11 )
              v32 = v11;
            v11 = v32;
            v28 = v14;
          }
          v12 += v28;
          ++v27;
        }
        while ( v27 < v10 );
      }
      ++v26;
    }
    while ( v26 < v9 );
    v7 = a1;
    v5 = a4;
    v6 = a3;
  }
  if ( !v38 )
    goto LABEL_49;
  v19 = v13 - v16 + 1;
  v20 = v11 - v15 + 1;
  v39 = v19;
  LODWORD(v40) = v20;
  if ( !v15 && !v16 && v19 == v10 && (_DWORD)v20 == v9 )
    return 3221226021LL;
  result = BgpGxRectangleCreate(&v39, v8, v6);
  if ( (int)result >= 0 )
  {
    v33 = v7[1] * v14;
    v34 = v14 * v19;
    v35 = *(char **)(*(_QWORD *)a3 + 24LL);
    v36 = (char *)(*((_QWORD *)v7 + 3) + v33 * v15 + v16 * v14);
    if ( (_DWORD)v20 )
    {
      v37 = v33;
      do
      {
        memmove(v35, v36, v34);
        v35 += v34;
        v36 += v37;
        --v20;
      }
      while ( v20 );
    }
    *v5 = v16;
    v5[1] = v15;
    *a5 = 0;
    return 0LL;
  }
  return result;
}
