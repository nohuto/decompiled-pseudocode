__int64 __fastcall std::map<void *,DEVICE_INFO>::_Try_emplace<void * const &,>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v4; // r9
  _QWORD *v5; // r10
  _QWORD *v6; // rax
  __int64 v7; // rdi
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  void *v10; // [rsp+38h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]
  _QWORD *v13; // [rsp+70h] [rbp+8h] BYREF

  v13 = a1;
  std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::_Find_lower_bound<void *>(
    (__int64)a1,
    (__int64)&v11,
    a3);
  if ( *(_BYTE *)(v12 + 25) || *v5 < *(_QWORD *)(v12 + 32) )
  {
    if ( *((_QWORD *)&CPointerDeviceCache::s_deviceCache + 1) == 0x2AAAAAAAAAAAAAALL )
      std::_Throw_tree_length_error();
    v13 = v5;
    v6 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *>>>(
           &v9,
           (__int64)&CPointerDeviceCache::s_deviceCache,
           CPointerDeviceCache::s_deviceCache,
           v4,
           &v13);
    v7 = v6[1];
    v6[1] = 0LL;
    if ( v10 )
      std::_Deallocate<16,0>(v10, 0x60uLL);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Insert_node(
                      &CPointerDeviceCache::s_deviceCache,
                      &v11,
                      v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
