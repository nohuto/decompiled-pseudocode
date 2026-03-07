__int64 __fastcall std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::emplace<EffectDescriptionKey &,CEffectCompilationTask *>(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned int *a3,
        _QWORD *a4)
{
  __int64 v4; // rbp
  _QWORD *inserted; // rax
  SIZE_T size_of; // rax
  __int64 v11; // r15
  __int64 v12; // rdx
  float v13; // xmm0_4
  __int64 v14; // rcx
  float v15; // xmm1_4
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *a3;
  std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Find_last<EffectDescriptionKey>(
    a1,
    v19,
    a3,
    v4);
  inserted = (_QWORD *)v19[1];
  if ( v19[1] )
  {
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( a1[2] == 0x666666666666666LL )
      std::_Xlength_error("unordered_map/set too long");
    size_of = std::_Get_size_of_n<40>(1uLL);
    v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *(_OWORD *)(v11 + 16) = *(_OWORD *)a3;
    *(_QWORD *)(v11 + 32) = *a4;
    v12 = a1[2] + 1;
    if ( v12 < 0 )
      v13 = (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1))
          + (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1));
    else
      v13 = (float)(int)v12;
    v14 = a1[7];
    if ( v14 < 0 )
    {
      v18 = a1[7] & 1 | (a1[7] >> 1);
      v15 = (float)(int)v18 + (float)(int)v18;
    }
    else
    {
      v15 = (float)(int)v14;
    }
    if ( (float)(v13 / v15) > *(float *)a1 )
    {
      v17 = std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Desired_grow_bucket_count(
              (__int64)a1,
              v12);
      std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Forced_rehash(
        a1,
        v17);
      *(_OWORD *)v19 = *(_OWORD *)std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Find_last<EffectDescriptionKey>(
                                    a1,
                                    v19,
                                    v11 + 16,
                                    v4);
    }
    inserted = std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Insert_new_node_before(
                 a1,
                 v4,
                 v19[0],
                 (_QWORD *)v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  *(_QWORD *)a2 = inserted;
  return a2;
}
