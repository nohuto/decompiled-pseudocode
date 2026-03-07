_QWORD *__fastcall std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Find_last<enum ShaderLinkingArgument>(
        _QWORD *a1,
        _QWORD *a2,
        _WORD *a3,
        __int64 a4)
{
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // r9

  v4 = a1[3];
  v5 = a1[1];
  v6 = 2 * (a4 & a1[6]);
  v7 = *(_QWORD *)(v4 + 16 * (a4 & a1[6]) + 8);
  if ( v7 == v5 )
  {
    *a2 = v5;
  }
  else
  {
    while ( 1 )
    {
      if ( *a3 == *(_WORD *)(v7 + 16) )
      {
        *a2 = *(_QWORD *)v7;
        a2[1] = v7;
        return a2;
      }
      if ( v7 == *(_QWORD *)(v4 + 8 * v6) )
        break;
      v7 = *(_QWORD *)(v7 + 8);
    }
    *a2 = v7;
  }
  a2[1] = 0LL;
  return a2;
}
