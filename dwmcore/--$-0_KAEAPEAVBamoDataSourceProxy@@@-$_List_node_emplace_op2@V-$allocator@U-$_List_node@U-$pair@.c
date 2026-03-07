_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        void (__fastcall ****a4)(_QWORD))
{
  __int64 v7; // rax
  void (__fastcall ***v8)(_QWORD); // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  a1[1] = v7;
  *(_QWORD *)(v7 + 16) = *a3;
  v8 = *a4;
  *(_QWORD *)(v7 + 24) = *a4;
  if ( v8 )
    (**v8)(v8);
  return a1;
}
