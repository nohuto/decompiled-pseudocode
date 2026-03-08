/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@@Z @ 0x180025E98
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x180025CC0 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManag.c)
 *     ??0CAnimationLoggingManager@@QEAA@PEAVCComposition@@@Z @ 0x180025DD0 (--0CAnimationLoggingManager@@QEAA@PEAVCComposition@@@Z.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x180026664 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilde.c)
 *     ??0CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x180027824 (--0CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B9880 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

unsigned __int64 *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>>>>>::_Assign_grow(
        unsigned __int64 **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 *v5; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbp
  SIZE_T size_of; // rax
  unsigned __int64 *v10; // rdi
  unsigned __int64 *result; // rax
  unsigned __int64 v12; // rcx

  v5 = a1[1];
  v7 = (char *)v5 - (char *)*a1;
  v8 = v7 >> 3;
  if ( v7 >> 3 >= a2 )
  {
    result = 0LL;
    v12 = (unsigned __int64)(v7 + 7) >> 3;
    if ( *a1 > v5 )
      v12 = 0LL;
    if ( v12 )
    {
      result = (unsigned __int64 *)a3;
      memset64(*a1, a3, v12);
    }
  }
  else
  {
    size_of = std::_Get_size_of_n<8>(a2);
    v10 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    if ( v8 )
      std::_Deallocate<16,0>(*a1, 8 * v8);
    result = &v10[a2];
    *a1 = v10;
    a1[1] = result;
    a1[2] = result;
    while ( v10 != result )
      *v10++ = a3;
  }
  return result;
}
