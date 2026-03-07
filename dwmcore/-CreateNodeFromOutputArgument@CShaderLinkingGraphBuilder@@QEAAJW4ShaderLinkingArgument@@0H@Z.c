__int64 __fastcall CShaderLinkingGraphBuilder::CreateNodeFromOutputArgument(
        unsigned __int64 a1,
        __int16 a2,
        __int16 a3,
        char a4)
{
  unsigned __int64 appended; // rax
  unsigned int v7; // ecx
  __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned int v10; // ebx
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF
  __int16 v13; // [rsp+68h] [rbp+10h] BYREF
  __int16 v14; // [rsp+70h] [rbp+18h] BYREF

  v14 = a3;
  v13 = a2;
  appended = std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)&v14, 2uLL);
  v8 = std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Find<enum ShaderLinkingArgument>(
         a1 + 16,
         &v14,
         appended);
  if ( v8 == *(_QWORD *)(a1 + 24) )
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0x87u, 0LL);
  }
  else
  {
    v9 = *(_QWORD *)std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Try_emplace<enum ShaderLinkingArgument const &,>(
                      a1 + 16,
                      v12,
                      &v13);
    Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=(v9 + 24, v8 + 24);
    v10 = 0;
    *(_BYTE *)(v9 + 32) = a4;
    *(_BYTE *)(v9 + 33) = 0;
  }
  return v10;
}
