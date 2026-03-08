/*
 * XREFs of ?ReleaseUnusedCaches@CMeshCacheManager@@QEAAXXZ @ 0x180050708
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAXPEA_N@Z @ 0x18004EF0C (-ProcessComposition@CComposition@@IEAAXPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000DA7C (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18001B4B8 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCacheMana.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E458C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBURoundedRecta.c)
 */

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
