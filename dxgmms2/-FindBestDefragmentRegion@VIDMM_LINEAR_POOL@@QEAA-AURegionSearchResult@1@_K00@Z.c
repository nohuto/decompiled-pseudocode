/*
 * XREFs of ?FindBestDefragmentRegion@VIDMM_LINEAR_POOL@@QEAA?AURegionSearchResult@1@_K00@Z @ 0x1C0101FC8
 * Callers:
 *     ?MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00FE23C (-MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall VIDMM_LINEAR_POOL::FindBestDefragmentRegion(
        __int64 a1,
        _OWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  __int64 *v5; // rdi
  __int64 *v6; // r8
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r10
  char v9; // bp
  __int64 *v10; // rbx
  __int64 *v11; // r9
  unsigned __int64 v12; // r15
  __int64 *v13; // r14
  __int64 *v14; // rdx
  __int64 v15; // r12
  __int64 *v16; // r13
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  char v21; // cl
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 *v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v27; // [rsp+60h] [rbp+8h]
  _OWORD *v28; // [rsp+68h] [rbp+10h]

  v28 = a2;
  v5 = (__int64 *)(a1 + 72);
  v6 = *(__int64 **)(a1 + 72);
  v27 = -1LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = v6;
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v6 == (__int64 *)(a1 + 72) )
    return a2;
  v14 = 0LL;
  while ( 1 )
  {
    v15 = *(v6 - 4);
    v16 = v6 - 5;
    v17 = *(v6 - 5);
    v18 = v8;
    if ( v17 + v15 > a3 )
      break;
LABEL_27:
    if ( v6 == v5 )
      goto LABEL_28;
  }
  if ( v17 >= a4 )
    goto LABEL_28;
  if ( *((_BYTE *)v6 + 16) != 2 )
  {
    v8 -= v15;
    if ( !v9 )
      v8 = v18;
LABEL_26:
    v6 = (__int64 *)*v6;
    goto LABEL_27;
  }
  if ( !v9 )
  {
    v13 = (__int64 *)*v6;
    v9 = 1;
  }
  if ( v13 != v5 )
  {
    while ( 1 )
    {
      v19 = v7;
      if ( v7 >= a5 )
        break;
      v14 = v13 - 5;
      v20 = *(v13 - 4);
      v21 = *((_BYTE *)v13 + 16);
      v7 += v20;
      if ( v21 != 2 )
        v7 = v19;
      v22 = v8 + v20;
      if ( v21 != 2 )
        v8 = v22;
    }
  }
  v23 = v7;
  if ( v7 >= a5 )
  {
    v7 -= v15;
    v24 = v14;
    if ( v8 >= v27 )
    {
      v24 = v11;
      v16 = v10;
    }
    v11 = v24;
    if ( v8 >= v27 )
      v23 = v12;
    v25 = v8;
    v10 = v16;
    if ( v8 >= v27 )
      v25 = v27;
    v12 = v23;
    v27 = v25;
    goto LABEL_26;
  }
LABEL_28:
  a2 = v28;
  if ( v10 && v11 )
  {
    *(_QWORD *)v28 = *v10;
    *((_QWORD *)v28 + 1) = *v11 + v11[1];
    *((_QWORD *)v28 + 2) = v12;
    *((_BYTE *)v28 + 24) = 1;
  }
  return a2;
}
