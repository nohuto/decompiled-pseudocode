/*
 * XREFs of ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C02B7DC4
 * Callers:
 *     NtGdiExtFloodFill @ 0x1C02B8670 (NtGdiExtFloodFill.c)
 * Callees:
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x1C02B7AA0 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 *     ?vMergeSpans@@YAXPEAU_SPAN@@0000@Z @ 0x1C02B8600 (-vMergeSpans@@YAXPEAU_SPAN@@0000@Z.c)
 */

__int64 __fastcall RGNMEMOBJ::bMergeScanline(RGNMEMOBJ *this, struct STACKOBJ *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  __int64 v5; // rbp
  int v7; // edx
  int v8; // ecx
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  unsigned int *v11; // r9
  unsigned int v12; // edx
  _DWORD *v13; // r8
  unsigned int *v14; // r8
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int *v17; // r8
  int v18; // ecx
  int v19; // r9d
  unsigned int v20; // r12d
  signed int v21; // r8d
  unsigned int *v22; // rbx
  unsigned int *v23; // r14
  unsigned int v24; // ecx
  __int64 v25; // r11
  int v26; // edx
  unsigned int v27; // edx
  __int64 v29; // r11
  unsigned int v30; // r8d
  signed int v31; // eax
  unsigned int *v32; // rdi
  __int64 v33; // rcx
  unsigned int v34; // eax
  _DWORD *v35; // rdx
  signed int v36; // eax
  signed int v37; // eax
  int v38; // [rsp+60h] [rbp+8h]

  v2 = *(_QWORD *)this;
  v4 = *((_QWORD *)a2 + 1);
  v5 = 0LL;
  v7 = *(_DWORD *)(*(_QWORD *)this + 80LL);
  v8 = *(_DWORD *)(v4 + 4);
  if ( v7 != 16 )
  {
    v19 = 8 * v8;
    v38 = 8 * v8;
    v20 = 8 * v8 + 16;
    if ( v20 > *(_DWORD *)(v2 + 24) - v7 )
    {
      if ( !RGNOBJ::bExpand(this, v20 + *(_DWORD *)(v2 + 24) + 4832) )
        return 0LL;
      v19 = v38;
    }
    v21 = *(_DWORD *)v4;
    v22 = *(unsigned int **)(*(_QWORD *)this + 88LL);
    v23 = *(unsigned int **)(*(_QWORD *)this + 40LL);
    while ( v21 > (int)v22[1] )
      v22 += *v22 + 4;
    v24 = v22[1];
    if ( v21 != v24 )
    {
      v22[-*(v22 - 1) - 2] = v21;
      ++*(_DWORD *)(*(_QWORD *)this + 84LL);
      if ( *(_DWORD *)v4 < *(_DWORD *)(*(_QWORD *)this + 100LL) )
        *(_DWORD *)(*(_QWORD *)this + 100LL) = *(_DWORD *)v4;
      goto LABEL_23;
    }
    if ( v24 + 1 != v22[2] )
    {
      ++*(_DWORD *)(*(_QWORD *)this + 84LL);
      *(_DWORD *)(*(_QWORD *)this + 108LL) = *(_DWORD *)v4 + 1;
      v22[1] = *(_DWORD *)v4 + 1;
      goto LABEL_23;
    }
    v25 = *((_QWORD *)a2 + 2);
    v20 = v19;
    *(_DWORD *)v25 = v24;
    v26 = *(_DWORD *)(v4 + 4) + (*v22 >> 1);
    *(_DWORD *)(v25 + 4) = v26;
    v27 = 8 * v26 + 24;
    if ( v27 > *(_DWORD *)(v25 + 8) )
    {
      if ( !(unsigned int)STACKOBJ::bExpandScanline(a2, v27, 0) )
        return 0LL;
      v25 = *((_QWORD *)a2 + 2);
    }
    vMergeSpans(
      (struct _SPAN *)(v22 + 3),
      (struct _SPAN *)&v22[*v22 + 3],
      (struct _SPAN *)(v4 + 24),
      (struct _SPAN *)(v4 + 8 * (*(unsigned int *)(v4 + 4) + 3LL)),
      (struct _SPAN *)(v25 + 24));
    v4 = v29;
LABEL_23:
    *(_QWORD *)(*(_QWORD *)this + 40LL) = (char *)v23 + v20;
    while ( v23 > v22 )
    {
      --v23;
      *(unsigned int *)((char *)v23 + v20) = *v23;
    }
    v30 = 2 * *(_DWORD *)(v4 + 4);
    *v22 = v30;
    v22[1] = *(_DWORD *)v4;
    v31 = *(_DWORD *)v4;
    v32 = (unsigned int *)(v4 + 24);
    v22[2] = v31 + 1;
    if ( v30 )
    {
      do
      {
        v33 = (unsigned int)(v5 + 1);
        v22[v5 + 3] = *v32;
        v5 = (unsigned int)(v5 + 2);
        v34 = v32[1];
        v32 += 2;
        v22[v33 + 3] = v34;
      }
      while ( (unsigned int)v5 < v30 );
    }
    v22[v5 + 3] = v30;
    v35 = *(_DWORD **)this;
    v36 = v22[3];
    if ( *(_DWORD *)(*(_QWORD *)this + 96LL) > v36 )
    {
      v35[24] = v36;
      v35 = *(_DWORD **)this;
    }
    v37 = v22[v30 + 2];
    if ( v35[26] < v37 )
    {
      v35[26] = v37;
      v35 = *(_DWORD **)this;
    }
    v35[20] += v20;
    return 1LL;
  }
  v9 = 2 * v8;
  v10 = 8 * v8 + 48;
  if ( v10 > *(_DWORD *)(v2 + 24) && !RGNOBJ::bExpand(this, 8 * v8 + 4880) )
    return 0LL;
  v11 = (unsigned int *)(v4 + 24);
  v12 = 0;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = v10;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 3;
  v13 = *(_DWORD **)(*(_QWORD *)this + 88LL);
  v13[2] = *(_DWORD *)v4;
  v14 = (_DWORD *)((char *)v13 + (unsigned int)(4 * *v13 + 16));
  *v14 = v9;
  v14[1] = *(_DWORD *)v4;
  for ( v14[2] = *(_DWORD *)v4 + 1; v12 < v9; v14[v16 + 3] = *(v11 - 1) )
  {
    v15 = *v11;
    v11 += 2;
    v14[v12 + 3] = v15;
    v16 = v12 + 1;
    v12 += 2;
  }
  v14[v12 + 3] = v9;
  *(_DWORD *)(*(_QWORD *)this + 100LL) = *(_DWORD *)v4;
  *(_DWORD *)(*(_QWORD *)this + 108LL) = *(_DWORD *)v4 + 1;
  *(_DWORD *)(*(_QWORD *)this + 96LL) = v14[3];
  *(_DWORD *)(*(_QWORD *)this + 104LL) = v14[v9 + 2];
  v17 = &v14[*v14 + 4];
  *v17 = 0;
  v18 = *(_DWORD *)v4 + 1;
  *((_QWORD *)v17 + 1) = 0x7FFFFFFFLL;
  v17[1] = v18;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = v17 + 4;
  return 1LL;
}
