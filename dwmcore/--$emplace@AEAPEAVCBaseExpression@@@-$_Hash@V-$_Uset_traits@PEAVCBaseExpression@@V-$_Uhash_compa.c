__int64 __fastcall std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::emplace<CBaseExpression * &>(
        _QWORD *a1,
        __int64 a2,
        const unsigned __int8 *a3)
{
  __int64 appended; // rsi
  SIZE_T size_of; // rax
  _QWORD *v8; // rbp
  __int64 v10[5]; // [rsp+20h] [rbp-28h] BYREF

  appended = std::_Fnv1a_append_bytes((unsigned __int64)a1, a3, 8uLL);
  std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Find_last<CBaseExpression *>(
    a1,
    v10,
    a3,
    appended);
  if ( v10[1] )
  {
    *(_QWORD *)a2 = v10[1];
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( a1[2] == 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("unordered_map/set too long");
    size_of = std::_Get_size_of_n<24>((unsigned int)(LODWORD(v10[1]) + 1));
    v8 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v8[2] = *(_QWORD *)a3;
    if ( std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Check_rehash_required_1((__int64)a1) )
    {
      std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Rehash_for_1((__int64)a1);
      *(_OWORD *)v10 = *(_OWORD *)std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Find_last<CBaseExpression *>(
                                    a1,
                                    v10,
                                    v8 + 2,
                                    appended);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Insert_new_node_before(
                      a1,
                      appended,
                      v10[0],
                      v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
