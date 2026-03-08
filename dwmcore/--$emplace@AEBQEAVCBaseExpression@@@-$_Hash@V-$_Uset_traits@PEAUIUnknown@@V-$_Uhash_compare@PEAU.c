/*
 * XREFs of ??$emplace@AEBQEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@@std@@_N@1@AEBQEAVCBaseExpression@@@Z @ 0x18021C9B8
 * Callers:
 *     ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x18001F3EC (-TransitionTrue@CAnimationTrigger@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800BC3DC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D7984 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1801B4D7C (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@PEAUIUnknown@@V-$_Uhash_compare@PEAUIUnknown.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x1801E0BC8 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@.c)
 *     ??$_Find_last@PEAUIUnknown@@@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@PEAUIUnknown@@PEAX@std@@@1@AEBQEAUIUnknown@@_K@Z @ 0x18021C960 (--$_Find_last@PEAUIUnknown@@@-$_Hash@V-$_Uset_traits@PEAUIUnknown@@V-$_Uhash_compare@PEAUIUnknow.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18021CB30 (-_Forced_rehash@-$_Hash@V-$_Uset_traits@PEAUIUnknown@@V-$_Uhash_compare@PEAUIUnknown@@U-$hash@PE.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::emplace<CBaseExpression * const &>(
        float *a1,
        __int64 a2,
        _QWORD *a3)
{
  SIZE_T size_of; // rax
  unsigned __int8 *v7; // rbp
  __int64 v8; // rcx
  __int64 appended; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  float v12; // xmm0_4
  __int64 v13; // rcx
  float v14; // xmm1_4
  __int64 v15; // rax
  __int64 v16; // rax
  __int128 v18; // [rsp+20h] [rbp-18h] BYREF

  size_of = std::_Get_size_of_n<24>(1uLL);
  v7 = (unsigned __int8 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *((_QWORD *)v7 + 2) = *a3;
  appended = std::_Fnv1a_append_bytes(v8, v7 + 16, 8uLL);
  std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::_Find_last<IUnknown *>(
    a1,
    &v18,
    (_QWORD *)v7 + 2,
    appended);
  if ( *((_QWORD *)&v18 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v18 + 1);
    *(_BYTE *)(a2 + 8) = 0;
    std::_Deallocate<16,0>(v7, 0x18uLL);
  }
  else
  {
    v10 = *((_QWORD *)a1 + 2);
    if ( v10 == 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("unordered_map/set too long");
    v11 = v10 + 1;
    if ( v11 < 0 )
      v12 = (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1))
          + (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1));
    else
      v12 = (float)(int)v11;
    v13 = *((_QWORD *)a1 + 7);
    if ( v13 < 0 )
    {
      v15 = *((_QWORD *)a1 + 7) & 1LL | (*((_QWORD *)a1 + 7) >> 1);
      v14 = (float)(int)v15 + (float)(int)v15;
    }
    else
    {
      v14 = (float)(int)v13;
    }
    if ( (float)(v12 / v14) > *a1 )
    {
      v16 = std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::_Desired_grow_bucket_count(
              (__int64)a1,
              v11);
      std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::_Forced_rehash(
        a1,
        v16);
      v18 = *(_OWORD *)std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::_Find_last<IUnknown *>(
                         a1,
                         &v18,
                         (_QWORD *)v7 + 2,
                         appended);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Insert_new_node_before(
                      a1,
                      appended,
                      v18,
                      v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
