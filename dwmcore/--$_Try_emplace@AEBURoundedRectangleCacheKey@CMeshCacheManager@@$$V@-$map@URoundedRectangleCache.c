__int64 __fastcall std::map<CMeshCacheManager::RoundedRectangleCacheKey,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>::_Try_emplace<CMeshCacheManager::RoundedRectangleCacheKey const &,>(
        __int64 **a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v3; // r10
  float *v6; // r9
  float *v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  _BYTE v13[16]; // [rsp+30h] [rbp-38h] BYREF
  float *v14; // [rsp+40h] [rbp-28h] BYREF
  int v15; // [rsp+48h] [rbp-20h]
  unsigned __int64 *v16; // [rsp+70h] [rbp+8h] BYREF

  v3 = *a1;
  v15 = 0;
  v6 = (float *)v3;
  v7 = (float *)v3[1];
  v14 = v7;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v8 = *a3;
    do
    {
      v14 = v7;
      if ( *((_QWORD *)v7 + 4) < v8
        || *((_QWORD *)v7 + 4) <= v8 && (float)(*((float *)a3 + 2) - v7[10]) > 0.0000011920929 )
      {
        v15 = 0;
        v7 = (float *)*((_QWORD *)v7 + 2);
      }
      else
      {
        v6 = v7;
        v15 = 1;
        v7 = *(float **)v7;
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( *((_BYTE *)v6 + 25)
    || (v9 = *((_QWORD *)v6 + 4), *a3 < v9)
    || *a3 <= v9 && (float)(v6[10] - *((float *)a3 + 2)) > 0.0000011920929 )
  {
    if ( a1[1] == (__int64 *)0x492492492492492LL )
      std::_Throw_tree_length_error();
    v16 = a3;
    v11 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>,void *>>>(
            (unsigned int)v13,
            (_DWORD)a1,
            (_DWORD)v3,
            (_DWORD)v6,
            (__int64)&v16);
    v12 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(v11 + 8) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>,void *>>>(v13);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Insert_node(
                      a1,
                      &v14,
                      v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
