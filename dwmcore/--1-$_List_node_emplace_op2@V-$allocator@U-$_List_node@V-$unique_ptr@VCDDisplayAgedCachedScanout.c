void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>(
        __int64 a1,
        unsigned int a2)
{
  __int64 v3; // rcx
  CDDisplayAgedCachedScanout *v4; // rcx
  void *v5; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = *(CDDisplayAgedCachedScanout **)(v3 + 16);
    if ( v4 )
      CDDisplayAgedCachedScanout::`scalar deleting destructor'(v4, a2);
  }
  v5 = *(void **)(a1 + 8);
  if ( v5 )
    std::_Deallocate<16,0>(v5, 0x18uLL);
}
