/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x180026664
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x180026638 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@@Z @ 0x180025E98 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180025E98.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D7984 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Forced_rehash(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 result; // rax
  _QWORD *v9; // r11
  _QWORD *v10; // rbx
  unsigned __int16 *v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r10
  _QWORD *v16; // rdx
  unsigned __int64 *v17; // r10
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rdx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = *(_QWORD *)(a1 + 8);
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>>>>>::_Assign_grow(
    (unsigned __int64 **)(a1 + 24),
    2 * v6,
    v4);
  *(_QWORD *)(a1 + 56) = v6;
  result = v6 - 1;
  *(_QWORD *)(a1 + 48) = v6 - 1;
  v9 = **(_QWORD ***)(a1 + 8);
  v10 = v9;
  while ( v9 != (_QWORD *)v4 )
  {
    v10 = (_QWORD *)*v10;
    result = std::_Fnv1a_append_bytes(v7, (const unsigned __int8 *const)v9 + 16, 2uLL);
    v13 = *(_QWORD *)(a1 + 24);
    v14 = 2 * (*(_QWORD *)(a1 + 48) & result);
    if ( *(_QWORD *)(v13 + 16 * (*(_QWORD *)(a1 + 48) & result)) == v4 )
    {
      *(_QWORD *)(v13 + 16 * (*(_QWORD *)(a1 + 48) & result)) = v12;
LABEL_6:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v12;
      goto LABEL_7;
    }
    result = *(_QWORD *)(v13 + 16 * (*(_QWORD *)(a1 + 48) & result) + 8);
    v7 = *v11;
    if ( (_WORD)v7 == *(_WORD *)(result + 16) )
    {
      v15 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v12 )
      {
        v16 = *(_QWORD **)(v12 + 8);
        *v16 = v10;
        v7 = v10[1];
        *(_QWORD *)v7 = v15;
        result = *(_QWORD *)(v15 + 8);
        *(_QWORD *)result = v12;
        *(_QWORD *)(v15 + 8) = v7;
        v10[1] = v16;
        *(_QWORD *)(v12 + 8) = result;
      }
      goto LABEL_6;
    }
    while ( 1 )
    {
      v17 = (unsigned __int64 *)(result + 8);
      if ( *(_QWORD *)(v13 + 8 * v14) == result )
        break;
      result = *v17;
      if ( (_WORD)v7 == *(_WORD *)(*v17 + 16) )
      {
        v18 = *(_QWORD *)result;
        v19 = *(_QWORD **)(v12 + 8);
        *v19 = v10;
        v7 = v10[1];
        *(_QWORD *)v7 = v18;
        result = *(_QWORD *)(v18 + 8);
        *(_QWORD *)result = v12;
        *(_QWORD *)(v18 + 8) = v7;
        v10[1] = v19;
        *(_QWORD *)(v12 + 8) = result;
        goto LABEL_7;
      }
    }
    v20 = *(_QWORD **)(v12 + 8);
    *v20 = v10;
    v7 = v10[1];
    *(_QWORD *)v7 = result;
    result = *v17;
    *(_QWORD *)result = v12;
    *v17 = v7;
    v10[1] = v20;
    *(_QWORD *)(v12 + 8) = result;
    *(_QWORD *)(v13 + 8 * v14) = v12;
LABEL_7:
    v9 = v10;
  }
  return result;
}
