/*
 * XREFs of ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x1405C225C
 * Callers:
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1405C2B20 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E7380 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     qsort_s @ 0x1403D4C90 (qsort_s.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x1405B8130 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x1405B9120 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1405B94B0 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x1405BAA54 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineBufferAddEntry(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        _DWORD *a4)
{
  char *v5; // rdi
  unsigned __int64 v6; // r10
  unsigned int *v7; // r9
  _QWORD *v10; // r8
  unsigned int v11; // ebx
  int v12; // ecx
  int v13; // ecx
  __int16 v14; // ax
  __int64 v15; // rax
  char *v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned int v19; // r10d
  __int64 v20; // rsi
  unsigned int v21; // r11d
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  _DWORD **v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 LeafSibling; // rax
  unsigned int v29; // r9d
  __int64 v30; // rdx
  __int64 v31; // rcx
  _DWORD *v32; // rdx
  unsigned __int64 v33; // r8
  __int64 v34; // rax
  char *v35; // rcx
  int v36; // ecx
  unsigned int *v37; // rsi
  unsigned int *v38; // r9
  unsigned int v39; // edx
  int *v40; // r8
  __int16 v41; // cx
  char *v43; // [rsp+30h] [rbp-30h]
  unsigned __int64 v44; // [rsp+38h] [rbp-28h]
  __int128 v45; // [rsp+40h] [rbp-20h] BYREF
  __int128 Context; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v47; // [rsp+A0h] [rbp+40h]
  unsigned int v48; // [rsp+A8h] [rbp+48h]

  v5 = (char *)a2 + *((unsigned __int16 *)a2 + 3);
  v6 = (unsigned __int64)a2 + *((unsigned __int16 *)a2 + 2);
  v7 = a3;
  v44 = v6;
  v10 = v5 + 8;
  v43 = v5 + 8;
  Context = 0LL;
  v45 = 0LL;
  if ( (unsigned __int64)(v5 + 8) > v6 )
    goto LABEL_2;
  v11 = 0;
  *(_QWORD *)v5 = 0LL;
  v12 = 0;
  if ( v5 )
  {
    v12 = *a4 & *(_DWORD *)(a1 + 808);
    *(_DWORD *)v5 = v12;
  }
  *(_DWORD *)v5 = 16 * v12;
  v13 = a4[1] & 0xFFF;
  v14 = 4096;
  if ( v13 )
    v14 = v13;
  *((_WORD *)v5 + 2) = v14;
  if ( v7[1] == a4[2] && v7[2] == (a4[1] & 0xFFF) )
  {
    v15 = *v7;
    if ( (_DWORD)v15 )
    {
      v16 = (char *)a2 + v15;
      if ( (unsigned __int64)&v5[(unsigned int)((_DWORD)v5 - ((_DWORD)a2 + v15))] <= v6 )
      {
        v17 = (unsigned __int64)(v16 + 8);
        v18 = (unsigned __int64)&v16[8 * (unsigned __int8)v16[6] + 8];
        while ( v17 < v18 )
        {
          if ( *(_DWORD *)(v17 + 4) != *(_DWORD *)v5 || *(_DWORD *)v17 != *a2 )
          {
            *v10++ = *(_QWORD *)v17;
            ++v5[6];
          }
          v17 += 8LL;
        }
        if ( v5[6] )
          goto LABEL_60;
        goto LABEL_61;
      }
LABEL_2:
      v11 = -2147483643;
      goto LABEL_61;
    }
  }
  if ( (*(_DWORD *)(a1 + 184) & 1) == 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 128),
      a1 + 152);
  *(_DWORD *)(a1 + 184) |= 1u;
  *(_DWORD *)(*(_QWORD *)(a1 + 760) + 8LL) = a4[2];
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
    a1 + 128,
    *(_DWORD *)(a1 + 768),
    a1 + 152);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
    (unsigned __int8 **)(a1 + 128),
    (__int64)&v45,
    a1 + 152);
  v19 = 0;
  v20 = v45;
  v47 = 0;
  v21 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2LL * *a2) >> 13;
  v48 = v21;
  while ( v20 )
  {
    v22 = *((_QWORD *)&v45 + 1) + 4LL;
    v23 = (unsigned __int16)*(_DWORD *)v20 + 4LL;
    *((_QWORD *)&v45 + 1) = v22;
    if ( v22 >= v20 + 4 * v23 )
    {
      v24 = a1 + 128;
      if ( a1 == -128 )
      {
        v25 = 0LL;
        v26 = 0LL;
      }
      else
      {
        v25 = (_DWORD **)(a1 + 144);
        v26 = a1 + 128;
      }
      v27 = v26 + 16;
      if ( **v25 == -1 )
      {
        LeafSibling = 3358LL;
        if ( **(_DWORD **)(v27 & -(__int64)(v24 != 0)) == -1 )
          LeafSibling = *(_QWORD *)(v20 + 8);
      }
      else
      {
        LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                        v24,
                        v20);
        if ( LeafSibling == -1 )
        {
          v22 = -1LL;
LABEL_35:
          v19 = v47;
          v21 = v48;
          goto LABEL_36;
        }
      }
      if ( LeafSibling )
      {
        v22 = LeafSibling + 16;
        *(_QWORD *)&v45 = LeafSibling;
        *((_QWORD *)&v45 + 1) = LeafSibling + 16;
        v20 = LeafSibling;
      }
      else
      {
        v22 = 0LL;
      }
      goto LABEL_35;
    }
LABEL_36:
    if ( !v22 )
      break;
    v29 = *(_DWORD *)v22;
    v30 = (unsigned int)(*(_DWORD *)v22 >> *(_DWORD *)(a1 + 456));
    _BitScanReverse((unsigned int *)&v31, v30);
    v32 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                   + *(_DWORD *)(a1 + 464) * (v29 & *(_DWORD *)(a1 + 460))
                   + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v31 + 192) + 16 * (v30 ^ (unsigned int)(1 << v31))));
    if ( v32 != a4 )
    {
      if ( v32[2] != a4[2] )
        break;
      if ( ((v32[1] ^ a4[1]) & 0xFFF) == 0 )
      {
        v33 = (unsigned int)(*v32 >> *(_DWORD *)(a1 + 812));
        if ( *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v33) >> 13 >= v21 )
        {
          v34 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 6568LL);
          if ( (!v34 || v34 != -1 && !_bittest64(*(const signed __int64 **)(v34 + 16), v33))
            && (v32[1] & 0xFFFFF000) < 0xFFEFF000 )
          {
            v35 = v43;
            if ( (unsigned __int64)(v43 + 8) > v44 )
              goto LABEL_2;
            v43 += 8;
            *(_QWORD *)v35 = 0LL;
            *(_DWORD *)v35 = *v32;
            *((_DWORD *)v35 + 1) = v32[1] >> 12;
            ++v5[6];
          }
          v20 = v45;
        }
      }
    }
    v47 = ++v19;
    if ( v19 >= 0x10 )
      break;
  }
  v36 = (unsigned __int8)v5[6];
  if ( (_BYTE)v36 )
  {
    v37 = (unsigned int *)&v43[-8 * (unsigned __int8)v5[6]];
    if ( (unsigned __int8)v36 > 1u )
    {
      *(_QWORD *)&Context = *a2;
      *((_QWORD *)&Context + 1) = a1;
      qsort_s(
        &v43[-8 * v36],
        (unsigned __int8)v5[6],
        8uLL,
        (int (__cdecl *)(void *, const void *, const void *))ST_STORE<SM_TRAITS>::StDmCombineTargetCompare,
        &Context);
    }
    v38 = &v37[2 * (unsigned __int8)v5[6]];
    while ( v37 < v38 )
    {
      v39 = *v37;
      v40 = (int *)(v37 + 1);
      *(_QWORD *)v37 = 0LL;
      if ( v37 != (unsigned int *)-4LL )
        *v40 = v39 & *(_DWORD *)(a1 + 808);
      if ( v37 )
        *v37 = v39 >> *(_DWORD *)(a1 + 812);
      *v40 *= 16;
      v37 += 2;
    }
    v7 = a3;
LABEL_60:
    v41 = (unsigned __int8)v5[6];
    *v7 = *((unsigned __int16 *)a2 + 3);
    v7[1] = a4[2];
    v7[2] = a4[1] & 0xFFF;
    *((_WORD *)a2 + 3) = (_WORD)v5 + 8 * (v41 + 1) - (_WORD)a2;
  }
LABEL_61:
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
    (__int64 *)&v45,
    (__int64 *)(a1 + 128));
  return v11;
}
