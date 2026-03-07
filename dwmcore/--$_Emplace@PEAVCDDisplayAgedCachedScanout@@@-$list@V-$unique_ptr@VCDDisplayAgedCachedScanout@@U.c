_QWORD *__fastcall std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::_Emplace<CDDisplayAgedCachedScanout *>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  SIZE_T size_of; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_QWORD *)(a1 + 8) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list too long");
  v12[0] = a1;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v7 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v8 = *a3;
  v9 = v7;
  v12[1] = 0LL;
  v7[2] = v8;
  ++*(_QWORD *)(a1 + 8);
  v10 = *(_QWORD **)(a2 + 8);
  *v7 = a2;
  v7[1] = v10;
  *(_QWORD *)(a2 + 8) = v7;
  *v10 = v7;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>(v12);
  return v9;
}
