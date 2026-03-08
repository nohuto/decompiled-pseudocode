/*
 * XREFs of ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C02D590C
 * Callers:
 *     NtGdiExtFloodFill @ 0x1C02D6200 (NtGdiExtFloodFill.c)
 * Callees:
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x1C02D55E8 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 *     ?vMergeSpans@@YAXPEAU_SPAN@@0000@Z @ 0x1C02D6194 (-vMergeSpans@@YAXPEAU_SPAN@@0000@Z.c)
 */

__int64 __fastcall RGNMEMOBJ::bMergeScanline(RGNMEMOBJ *this, struct STACKOBJ *a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  int v6; // r8d
  int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  unsigned int *v11; // r9
  unsigned int v12; // edx
  _DWORD *v13; // r8
  unsigned int *v14; // r8
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int *v17; // r8
  int v18; // ecx
  __int64 v19; // r9
  unsigned int v20; // r12d
  signed int v21; // r8d
  unsigned int *v22; // rbx
  unsigned int *v23; // r15
  unsigned int v24; // ecx
  __int64 v25; // r11
  int v26; // edx
  unsigned int v27; // edx
  __int64 v29; // r11
  int v30; // eax
  unsigned int v31; // edx
  int v32; // eax
  unsigned int *v33; // rdi
  __int64 v34; // rcx
  unsigned int v35; // eax
  int v36; // eax
  int v37; // edx
  int v38; // eax
  __int128 v39; // [rsp+30h] [rbp-38h]
  __int128 v40; // [rsp+30h] [rbp-38h]
  __m128i v41; // [rsp+30h] [rbp-38h]
  __int128 v42; // [rsp+30h] [rbp-38h]
  unsigned int v43; // [rsp+70h] [rbp+8h]

  v2 = 0LL;
  v3 = *((_QWORD *)a2 + 1);
  v6 = *(_DWORD *)(*(_QWORD *)this + 48LL);
  v7 = *(_DWORD *)(v3 + 4);
  v8 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  if ( v6 != 16 )
  {
    v19 = (unsigned int)(8 * v7);
    v20 = v19 + 16;
    v43 = 8 * v7;
    if ( (int)v19 + 16 > v8 - v6 )
    {
      if ( !RGNOBJ::bExpand(this, v20 + v8 + 4832) )
        return 0LL;
      v19 = v43;
    }
    v21 = *(_DWORD *)v3;
    v22 = *(unsigned int **)(*(_QWORD *)this + 32LL);
    v23 = *(unsigned int **)(*(_QWORD *)this + 40LL);
    while ( v21 > (int)v22[1] )
      v22 += *v22 + 4;
    v24 = v22[1];
    if ( v21 != v24 )
    {
      v22[-*(v22 - 1) - 2] = v21;
      ++*(_DWORD *)(*(_QWORD *)this + 52LL);
      v41 = *(__m128i *)(*(_QWORD *)this + 56LL);
      v30 = _mm_cvtsi128_si32(_mm_srli_si128(v41, 4));
      if ( *(_DWORD *)v3 < v41.m128i_i32[1] )
        v30 = *(_DWORD *)v3;
      v41.m128i_i32[1] = v30;
      *(__m128i *)(*(_QWORD *)this + 56LL) = v41;
      goto LABEL_24;
    }
    if ( v24 + 1 != v22[2] )
    {
      ++*(_DWORD *)(*(_QWORD *)this + 52LL);
      v40 = *(_OWORD *)(*(_QWORD *)this + 56LL);
      HIDWORD(v40) = *(_DWORD *)v3 + 1;
      *(_OWORD *)(*(_QWORD *)this + 56LL) = v40;
      v22[1] = *(_DWORD *)v3 + 1;
      goto LABEL_24;
    }
    v25 = *((_QWORD *)a2 + 2);
    v20 = v19;
    *(_DWORD *)v25 = v24;
    v26 = *(_DWORD *)(v3 + 4) + (*v22 >> 1);
    *(_DWORD *)(v25 + 4) = v26;
    v27 = 8 * v26 + 24;
    if ( v27 > *(_DWORD *)(v25 + 8) )
    {
      if ( !(unsigned int)STACKOBJ::bExpandScanline(a2, v27, 0LL, v19) )
        return 0LL;
      v25 = *((_QWORD *)a2 + 2);
    }
    vMergeSpans(
      (struct _SPAN *)(v22 + 3),
      (struct _SPAN *)&v22[*v22 + 3],
      (struct _SPAN *)(v3 + 24),
      (struct _SPAN *)(v3 + 8 * (*(unsigned int *)(v3 + 4) + 3LL)),
      (struct _SPAN *)(v25 + 24));
    v3 = v29;
LABEL_24:
    *(_QWORD *)(*(_QWORD *)this + 40LL) = (char *)v23 + v20;
    while ( v23 > v22 )
    {
      --v23;
      *(unsigned int *)((char *)v23 + v20) = *v23;
    }
    v31 = 2 * *(_DWORD *)(v3 + 4);
    *v22 = v31;
    v22[1] = *(_DWORD *)v3;
    v32 = *(_DWORD *)v3;
    v33 = (unsigned int *)(v3 + 24);
    v22[2] = v32 + 1;
    if ( v31 )
    {
      do
      {
        v34 = (unsigned int)(v2 + 1);
        v22[v2 + 3] = *v33;
        v2 = (unsigned int)(v2 + 2);
        v35 = v33[1];
        v33 += 2;
        v22[v34 + 3] = v35;
      }
      while ( (unsigned int)v2 < v31 );
    }
    v22[v2 + 3] = v31;
    v36 = _mm_cvtsi128_si32(*(__m128i *)(*(_QWORD *)this + 56LL));
    v42 = *(_OWORD *)(*(_QWORD *)this + 56LL);
    if ( v36 > (int)v22[3] )
      v36 = v22[3];
    LODWORD(v42) = v36;
    v37 = v22[v31 + 2];
    v38 = *(_QWORD *)(*(_QWORD *)this + 64LL);
    if ( SDWORD2(v42) < v37 )
      v38 = v37;
    DWORD2(v42) = v38;
    *(_OWORD *)(*(_QWORD *)this + 56LL) = v42;
    *(_DWORD *)(*(_QWORD *)this + 48LL) += v20;
    return 1LL;
  }
  v9 = 2 * v7;
  v10 = 8 * v7 + 48;
  if ( v10 > v8 && !RGNOBJ::bExpand(this, 8 * v7 + 4880) )
    return 0LL;
  v11 = (unsigned int *)(v3 + 24);
  v12 = 0;
  *(_DWORD *)(*(_QWORD *)this + 48LL) = v10;
  *(_DWORD *)(*(_QWORD *)this + 52LL) = 3;
  v13 = *(_DWORD **)(*(_QWORD *)this + 32LL);
  v13[2] = *(_DWORD *)v3;
  v14 = (_DWORD *)((char *)v13 + (unsigned int)(4 * *v13 + 16));
  *v14 = v9;
  v14[1] = *(_DWORD *)v3;
  for ( v14[2] = *(_DWORD *)v3 + 1; v12 < v9; v14[v16 + 3] = *(v11 - 1) )
  {
    v15 = *v11;
    v11 += 2;
    v14[v12 + 3] = v15;
    v16 = v12 + 1;
    v12 += 2;
  }
  v14[v12 + 3] = v9;
  LODWORD(v39) = v14[3];
  DWORD1(v39) = *(_DWORD *)v3;
  DWORD2(v39) = v14[v9 + 2];
  HIDWORD(v39) = *(_DWORD *)v3 + 1;
  *(_OWORD *)(*(_QWORD *)this + 56LL) = v39;
  v17 = &v14[*v14 + 4];
  *v17 = 0;
  v18 = *(_DWORD *)v3 + 1;
  *((_QWORD *)v17 + 1) = 0x7FFFFFFFLL;
  v17[1] = v18;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = v17 + 4;
  return 1LL;
}
