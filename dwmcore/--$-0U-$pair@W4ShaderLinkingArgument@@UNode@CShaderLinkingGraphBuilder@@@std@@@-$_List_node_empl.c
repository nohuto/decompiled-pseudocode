/*
 * XREFs of ??$?0U?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@std@@@1@$$QEAU?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@1@@Z @ 0x1800297C0
 * Callers:
 *     ??$emplace@U?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@1@@Z @ 0x1800296F4 (--$emplace@U-$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@-$_Hash@V-$.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180036984 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int16 *a3)
{
  SIZE_T size_of; // rax
  __int64 v6; // rax
  __int16 v7; // dx
  _WORD *v8; // rbx

  *a1 = a2;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1LL);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v6;
  v7 = *a3;
  v8 = a3 + 4;
  *(_WORD *)(v6 + 16) = v7;
  *(_QWORD *)(v6 + 24) = 0LL;
  if ( (_WORD *)(v6 + 24) != v8 )
  {
    *(_QWORD *)(v6 + 24) = *(_QWORD *)v8;
    *(_QWORD *)v8 = 0LL;
  }
  *(_BYTE *)(v6 + 32) = *((_BYTE *)v8 + 8);
  *(_DWORD *)(v6 + 33) = *(_DWORD *)((char *)v8 + 9);
  *(_BYTE *)(v6 + 37) = *((_BYTE *)v8 + 13);
  return a1;
}
