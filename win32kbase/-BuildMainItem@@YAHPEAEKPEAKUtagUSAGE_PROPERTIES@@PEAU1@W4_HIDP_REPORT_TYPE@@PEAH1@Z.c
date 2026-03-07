__int64 __fastcall BuildMainItem(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        _OWORD *a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        unsigned int *a8)
{
  int v9; // r8d
  unsigned int v10; // r14d
  unsigned int v12; // r12d
  int v13; // edi
  __int128 v14; // xmm1
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int16 v20; // r9
  unsigned __int8 v21; // al
  __int64 v22; // rdx
  unsigned int v23; // edx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int16 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  __int16 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int8 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 result; // rax
  unsigned int v41; // edx
  unsigned int v42; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v43[3]; // [rsp+34h] [rbp-3Ch] BYREF
  int v44[4]; // [rsp+40h] [rbp-30h] BYREF
  int v45[4]; // [rsp+50h] [rbp-20h] BYREF

  v9 = 0;
  v10 = a2;
  v12 = *a8;
  v13 = *a7;
  v43[0] = *a8;
  v14 = a4[1];
  *(_OWORD *)v44 = *a4;
  *(_OWORD *)v45 = v14;
  if ( (unsigned int)a2 < 4 )
    return 0LL;
  if ( !v13 )
    goto LABEL_10;
  *a7 = 0;
  v15 = OpenCollection(a1, a2, 0LL, a3);
  v16 = *a3;
  if ( v10 < (int)v16 + 2 )
    return 0LL;
  a1[v16] = -123;
  v17 = (unsigned int)(v16 + 1);
  a1[v17] = 1;
  *a3 = v17 + 1;
  if ( !v15 || !SetCollectionLabel(a1, v10, a3) )
    return 0LL;
  if ( a1[1] != 13 || (v18 = 1LL, (unsigned __int8)(a1[3] - 1) > 1u) )
    v18 = 2LL;
  v9 = OpenCollection(a1, v10, v18, a3);
LABEL_10:
  v19 = *a3;
  if ( !v9 && v13 || (int)v19 + 4 > v10 )
    return 0LL;
  v20 = HIWORD(v44[0]);
  if ( v13 && HIWORD(v44[0]) != a1[1] || *(_WORD *)(a5 + 2) != HIWORD(v44[0]) )
  {
    a1[v19] = 5;
    a1[(unsigned int)(v19 + 1)] = v20;
    v19 = (unsigned int)(v19 + 2);
    *(_WORD *)(a5 + 2) = v20;
  }
  v21 = v44[1];
  a1[v19] = 9;
  v22 = (unsigned int)(v19 + 1);
  a1[v22] = v21;
  v23 = v22 + 1;
  v42 = v23;
  if ( !v9 )
  {
    if ( v13 )
      return 0LL;
  }
  if ( *(_DWORD *)(a5 + 8) != v44[2] || v13 )
  {
    v24 = SetMultiByteValue(a1, v10, &v42, &v44[2], 4u, 0LL);
    v23 = v42;
    v9 = v24;
    *(_DWORD *)(a5 + 8) = v44[2];
  }
  if ( !v9 && v13 )
    return 0LL;
  if ( *(_DWORD *)(a5 + 12) != v44[3] || v13 )
  {
    v25 = SetMultiByteValue(a1, v10, &v42, &v44[3], 5u, v43);
    v23 = v42;
    v9 = v25;
    v12 = v43[0];
    *(_DWORD *)(a5 + 12) = v44[3];
  }
  if ( !v9 && v13 )
    return 0LL;
  if ( *(_DWORD *)(a5 + 24) != v45[2] || v13 )
  {
    v26 = SetMultiByteValue(a1, v10, &v42, &v45[2], 0xDu, 0LL);
    v23 = v42;
    v9 = v26;
    *(_DWORD *)(a5 + 24) = v45[2];
  }
  if ( !v9 && v13 )
    return 0LL;
  if ( *(_DWORD *)(a5 + 28) != v45[3] || v13 )
  {
    v27 = SetMultiByteValue(a1, v10, &v42, &v45[3], 0xEu, 0LL);
    v23 = v42;
    v9 = v27;
    *(_DWORD *)(a5 + 28) = v45[3];
  }
  if ( !v9 && v13 || v23 + 12 > v10 )
    return 0LL;
  v28 = v45[0];
  if ( *(_WORD *)(a5 + 16) != LOWORD(v45[0]) || v13 )
  {
    v29 = v23;
    v30 = v23 + 1;
    v23 += 2;
    a1[v29] = 101;
    a1[v30] = v28;
    *(_WORD *)(a5 + 16) = v28;
  }
  v31 = HIWORD(v45[0]);
  if ( *(_WORD *)(a5 + 18) != HIWORD(v45[0]) || v13 )
  {
    v32 = v23;
    v33 = v23 + 1;
    v23 += 2;
    a1[v32] = 85;
    a1[v33] = v31;
    *(_WORD *)(a5 + 18) = v31;
  }
  if ( *a8 != v12 )
  {
    v34 = v23;
    v35 = v23 + 1;
    v23 += 2;
    a1[v34] = 117;
    a1[v35] = v12;
    *a8 = v12;
  }
  v36 = v45[1];
  if ( *(_BYTE *)(a5 + 20) != LOBYTE(v45[1]) || v13 )
  {
    v37 = v23;
    v38 = v23 + 1;
    a1[v37] = -107;
    a1[v38] = v36;
    v23 = v38 + 1;
    *(_BYTE *)(a5 + 20) = v36;
  }
  v39 = v23;
  result = 1LL;
  v41 = v23 + 1;
  a1[v39] = -127;
  a1[v41] = 2;
  *a3 = v41 + 1;
  return result;
}
