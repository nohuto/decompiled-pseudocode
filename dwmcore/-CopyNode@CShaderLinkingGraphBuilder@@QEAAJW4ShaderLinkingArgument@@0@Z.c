__int64 __fastcall CShaderLinkingGraphBuilder::CopyNode(unsigned __int64 a1, __int16 a2, __int16 a3)
{
  unsigned __int64 appended; // rax
  unsigned int v5; // ecx
  __int64 v6; // rbx
  __int64 v7; // rdi
  _BYTE *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned int v11; // ebx
  _BYTE v13[40]; // [rsp+30h] [rbp-28h] BYREF
  __int16 v14; // [rsp+68h] [rbp+10h] BYREF
  __int16 v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = a3;
  v14 = a2;
  appended = std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)&v15, 2uLL);
  v6 = std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Find<enum ShaderLinkingArgument>(
         a1 + 16,
         &v15,
         appended);
  if ( v6 == *(_QWORD *)(a1 + 24) )
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024809, 0xB6u, 0LL);
  }
  else
  {
    v7 = *(_QWORD *)std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Try_emplace<enum ShaderLinkingArgument const &,>(
                      a1 + 16,
                      v13,
                      &v14)
       + 24LL;
    Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=(v7, v6 + 24);
    v8 = (_BYTE *)(v7 + 9);
    *(_BYTE *)(v7 + 8) = *(_BYTE *)(v6 + 32);
    v9 = v6 - v7;
    v10 = 5LL;
    do
    {
      *v8 = v8[v9 + 24];
      ++v8;
      --v10;
    }
    while ( v10 );
    return 0;
  }
  return v11;
}
