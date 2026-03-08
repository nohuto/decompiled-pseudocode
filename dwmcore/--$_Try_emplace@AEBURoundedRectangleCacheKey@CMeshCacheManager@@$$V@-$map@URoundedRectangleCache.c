/*
 * XREFs of ??$_Try_emplace@AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$V@?$map@URoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@U?$less@URoundedRectangleCacheKey@CMeshCacheManager@@@std@@V?$allocator@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@Z @ 0x1800EE478
 * Callers:
 *     ?TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCRoundedRectangleShape@@AEBVMatrix3x2F@D2D1@@_N@Z @ 0x18007F5A8 (-TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEAVVertexAAOffsetsResource@Mesh@.c)
 * Callees:
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800EE5A4 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@1@.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800EE620 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCache.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800EE728 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCache.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1801A4234 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

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
