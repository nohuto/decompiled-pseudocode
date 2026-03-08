/*
 * XREFs of ?SmFeEvictUpdatePass@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@@Z @ 0x1405BD3D4
 * Callers:
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x1405BD2AC (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 * Callees:
 *     SmKmStoreReferenceEx @ 0x140356558 (SmKmStoreReferenceEx.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictUpdatePass(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        _DWORD *a4,
        __int64 a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  int v7; // esi
  unsigned int v8; // r9d
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // r8
  unsigned int v12; // r12d
  __m128i *v13; // rax
  __int64 v14; // r13
  unsigned __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rbp
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // r8d
  unsigned __int16 *v21; // rbp
  __int64 v22; // rax
  unsigned int v24; // [rsp+80h] [rbp+8h]
  unsigned __int64 v28; // [rsp+A0h] [rbp+28h]

  v5 = *a2;
  v6 = 0;
  v7 = 0;
  v8 = *a3;
  v9 = *(_DWORD *)(a5 + 24);
  v10 = *a3 + *a2 - 1;
  v11 = a1;
  v24 = v8;
  v12 = 1024;
  if ( v9 == -1 || !v9 )
    v13 = (__m128i *)(a5 + 8);
  else
    v13 = (__m128i *)(*(_QWORD *)a5 + 16LL * (unsigned int)(v9 - 1));
  v14 = v13->m128i_i64[0];
  v15 = _mm_srli_si128(*v13, 8).m128i_u64[0] - 8;
  v28 = v15;
  while ( 1 )
  {
    if ( !v14 )
    {
      v16 = 0LL;
      v17 = 0LL;
LABEL_8:
      v18 = v10;
      v19 = 1;
      goto LABEL_9;
    }
    v16 = v15 + 8;
    v28 = v15 + 8;
    if ( v15 + 8 >= v14 + 8 * (unsigned __int64)(unsigned __int16)*(_DWORD *)v14 + 16 )
    {
      v22 = *(_QWORD *)(v14 + 8);
      if ( v22 )
      {
        v14 = *(_QWORD *)(v14 + 8);
        v28 = v22 + 16;
      }
      v16 = (v22 + 16) & -(__int64)(v22 != 0);
    }
    v17 = v16;
    if ( !v16 )
      goto LABEL_8;
    v18 = *(_DWORD *)v16;
    if ( v5 >= *(_DWORD *)v16 && (*(_BYTE *)(v16 + 7) & 1) == 0 )
      goto LABEL_13;
    if ( v10 < v18 )
      goto LABEL_8;
    v19 = 0;
LABEL_9:
    v7 += v18 - v5;
    v20 = v7;
    if ( v6 )
      break;
    if ( v19 )
      goto LABEL_37;
    v6 = v18 - v5;
    v5 = v18;
    if ( (*(_BYTE *)(v16 + 7) & 1) != 0 )
      goto LABEL_35;
    v11 = a1;
LABEL_13:
    if ( v12 == 1024 )
    {
      v21 = (unsigned __int16 *)(v17 + 4);
    }
    else
    {
      v21 = (unsigned __int16 *)(v16 + 4);
      if ( v12 != *(unsigned __int16 *)(v16 + 4) )
        goto LABEL_40;
    }
    if ( *(_BYTE *)(v16 + 6) == 2 )
    {
      if ( v12 != 1024 )
        goto LABEL_40;
    }
    else
    {
      if ( v6 )
      {
        if ( v12 == 1024 )
          goto LABEL_40;
      }
      else
      {
        if ( !SmKmStoreReferenceEx(v11, *v21) )
        {
LABEL_37:
          ++v7;
          goto LABEL_40;
        }
        v12 = *v21;
        v8 = v24;
      }
      *(_BYTE *)(v16 + 6) = 2;
    }
LABEL_35:
    ++v6;
    ++v7;
    if ( v6 == v8 )
      goto LABEL_40;
    v15 = v28;
    ++v5;
    v11 = a1;
  }
  ++v7;
  if ( !v19 )
    v7 = v20;
LABEL_40:
  *a3 = v6;
  *a4 = v7;
  return v12;
}
