void __fastcall CMeshCacheManager::ReleaseUnusedCaches(__int64 **this)
{
  __int64 *v2; // r9
  __int64 v3; // r9
  __int64 *v4; // rbx
  __int64 *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)**this;
LABEL_2:
  v5 = v2;
  while ( v2 != *this )
  {
    if ( *(_DWORD *)(v2[6] + 8) == 1 )
    {
      v5 = v2;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v5);
      v4 = std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Extract(
             this,
             v3);
      wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>(v4 + 6);
      std::_Deallocate<16,0>(v4, 56LL);
      v2 = v5;
      goto LABEL_2;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v5);
    v2 = v5;
  }
}
