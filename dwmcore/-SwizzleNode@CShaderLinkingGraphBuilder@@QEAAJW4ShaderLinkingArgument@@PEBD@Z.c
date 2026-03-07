__int64 __fastcall CShaderLinkingGraphBuilder::SwizzleNode(__int64 a1, __int16 a2)
{
  __int64 appended; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int16 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  appended = std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)&v8, 2uLL);
  v4 = std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Find<enum ShaderLinkingArgument>(
         a1 + 16,
         (__int64)&v8,
         appended);
  if ( v4 == *(_QWORD *)(a1 + 24) )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024809, 0x9Eu, 0LL);
  }
  else
  {
    strcpy_s((char *)(v4 + 33), 5uLL, "xy");
    return 0;
  }
  return v6;
}
