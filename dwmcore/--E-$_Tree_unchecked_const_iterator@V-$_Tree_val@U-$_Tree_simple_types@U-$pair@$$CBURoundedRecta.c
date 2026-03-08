/*
 * XREFs of ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E458C
 * Callers:
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18001B4B8 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCacheMana.c)
 *     ?ReleaseUnusedCaches@CMeshCacheManager@@QEAAXXZ @ 0x180050708 (-ReleaseUnusedCaches@CMeshCacheManager@@QEAAXXZ.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@SAPEAU?$_Tree_node@_KPEAX@2@PEAU32@@Z @ 0x18010CCB4 (-_Min@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@SAPEAU-$_Tree_node@_KPEAX@2@PEAU32@@Z.c)
 */

__int64 *__fastcall std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(
        __int64 *a1)
{
  __int64 *v1; // r8
  __int64 v2; // rcx
  __int64 i; // rax

  v1 = a1;
  v2 = *a1;
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 16) + 25LL) )
  {
    for ( i = *(_QWORD *)(v2 + 8); !*(_BYTE *)(i + 25) && v2 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
    {
      *v1 = i;
      v2 = i;
    }
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Min(*(_QWORD *)(v2 + 16));
  }
  *v1 = i;
  return v1;
}
