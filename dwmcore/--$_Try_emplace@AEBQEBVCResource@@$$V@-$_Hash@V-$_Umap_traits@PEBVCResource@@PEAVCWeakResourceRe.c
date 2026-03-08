/*
 * XREFs of ??$_Try_emplace@AEBQEBVCResource@@$$V@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@std@@_N@1@AEBQEBVCResource@@@Z @ 0x180024EF8
 * Callers:
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x18009995C (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x18009A0B0 (--1CResource@@MEAA@XZ.c)
 * Callees:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180024DD0 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_com.c)
 *     ??$_Find_last@PEBVCResource@@@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@std@@@1@AEBQEBVCResource@@_K@Z @ 0x1800251D0 (--$_Find_last@PEBVCResource@@@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x180025F40 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Try_emplace<CResource const * const &,>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rbp
  unsigned __int64 i; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 *v9; // rax
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  float v14; // xmm0_4
  float v15; // xmm1_4
  __int64 **v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rax
  char v25[40]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v7 = *((unsigned __int8 *)a3 + i);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  v8 = qword_1803E3068;
  v9 = *(__int64 **)(qword_1803E3078 + 16 * (v5 & xmmword_1803E3090) + 8);
  if ( v9 == (__int64 *)qword_1803E3068 )
    goto LABEL_8;
  while ( 1 )
  {
    if ( *a3 == v9[2] )
    {
      v8 = *v9;
      goto LABEL_6;
    }
    if ( v9 == *(__int64 **)(qword_1803E3078 + 16 * (v5 & xmmword_1803E3090)) )
      break;
    v9 = (__int64 *)v9[1];
  }
  v8 = (__int64)v9;
  v9 = 0LL;
LABEL_6:
  if ( !v9 )
  {
LABEL_8:
    if ( qword_1803E3070 == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v10 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
    v11 = *a3;
    v10[3] = 0LL;
    v10[2] = v11;
    v12 = qword_1803E3070;
    v13 = qword_1803E3070 + 1;
    if ( qword_1803E3070 + 1 < 0 )
      v14 = (float)(int)(v13 & 1 | (v13 >> 1)) + (float)(int)(v13 & 1 | (v13 >> 1));
    else
      v14 = (float)(int)v13;
    if ( xmmword_1803E3090 < 0 )
      v15 = (float)(int)(BYTE8(xmmword_1803E3090) & 1 | (*((_QWORD *)&xmmword_1803E3090 + 1) >> 1))
          + (float)(int)(BYTE8(xmmword_1803E3090) & 1 | (*((_QWORD *)&xmmword_1803E3090 + 1) >> 1));
    else
      v15 = (float)SDWORD2(xmmword_1803E3090);
    if ( (float)(v14 / v15) > *(float *)&CWeakResourceReference::s_weakReferenceMap )
    {
      v21 = std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Desired_grow_bucket_count();
      std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Forced_rehash(
        v22,
        v21);
      v24 = (__int64 *)std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Find_last<CResource const *>(
                         v23,
                         v25,
                         v10 + 2,
                         v5);
      v12 = qword_1803E3070;
      v8 = *v24;
    }
    v16 = *(__int64 ***)(v8 + 8);
    qword_1803E3070 = v12 + 1;
    *v10 = v8;
    v10[1] = (__int64)v16;
    *v16 = v10;
    *(_QWORD *)(v8 + 8) = v10;
    v17 = qword_1803E3078;
    v18 = 2 * (v5 & xmmword_1803E3090);
    v19 = *(_QWORD *)(qword_1803E3078 + 16 * (v5 & xmmword_1803E3090));
    if ( v19 == qword_1803E3068 )
    {
      *(_QWORD *)(qword_1803E3078 + 16 * (v5 & xmmword_1803E3090)) = v10;
    }
    else
    {
      if ( v19 == v8 )
      {
        *(_QWORD *)(qword_1803E3078 + 16 * (v5 & xmmword_1803E3090)) = v10;
        goto LABEL_18;
      }
      if ( *(__int64 ***)(qword_1803E3078 + 16 * (v5 & xmmword_1803E3090) + 8) != v16 )
        goto LABEL_18;
    }
    *(_QWORD *)(v17 + 8 * v18 + 8) = v10;
LABEL_18:
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
