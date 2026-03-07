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
