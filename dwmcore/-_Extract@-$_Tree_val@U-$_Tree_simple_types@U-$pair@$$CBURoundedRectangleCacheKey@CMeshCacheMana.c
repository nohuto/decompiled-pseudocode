/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18001B4B8
 * Callers:
 *     ?ReleaseUnusedCaches@CMeshCacheManager@@QEAAXXZ @ 0x180050708 (-ReleaseUnusedCaches@CMeshCacheManager@@QEAAXXZ.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x18001B6B4 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCacheMana.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x18001ECC0 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBURoundedRectangleCacheKey@CMeshCacheMana.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E458C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBURoundedRecta.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@SAPEAU?$_Tree_node@_KPEAX@2@PEAU32@@Z @ 0x18010CCB4 (-_Min@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@SAPEAU-$_Tree_node@_KPEAX@2@PEAU32@@Z.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Extract(
        __int64 **a1,
        __int64 a2)
{
  __int64 *v3; // r11
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // r9
  char v7; // dl
  __int64 *v8; // rcx
  __int64 *v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rcx
  __int64 v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v18);
  v4 = v3[2];
  if ( !*(_BYTE *)(*v3 + 25) )
  {
    if ( *(_BYTE *)(v4 + 25) )
    {
      v4 = *v3;
    }
    else
    {
      v5 = v18;
      v4 = *(_QWORD *)(v18 + 16);
      if ( (__int64 *)v18 != v3 )
      {
        *(_QWORD *)(*v3 + 8) = v18;
        *(_QWORD *)v5 = *v3;
        if ( v5 == v3[2] )
        {
          v6 = v5;
        }
        else
        {
          v6 = *(_QWORD *)(v5 + 8);
          if ( !*(_BYTE *)(v4 + 25) )
            *(_QWORD *)(v4 + 8) = v6;
          *(_QWORD *)v6 = v4;
          *(_QWORD *)(v5 + 16) = v3[2];
          *(_QWORD *)(v3[2] + 8) = v5;
        }
        if ( (__int64 *)(*a1)[1] == v3 )
        {
          (*a1)[1] = v5;
        }
        else
        {
          v17 = (__int64 *)v3[1];
          if ( (__int64 *)*v17 == v3 )
            *v17 = v5;
          else
            v17[2] = v5;
        }
        v7 = *(_BYTE *)(v5 + 24);
        *(_QWORD *)(v5 + 8) = v3[1];
        *(_BYTE *)(v5 + 24) = *((_BYTE *)v3 + 24);
        *((_BYTE *)v3 + 24) = v7;
        goto LABEL_9;
      }
    }
  }
  v6 = v3[1];
  if ( !*(_BYTE *)(v4 + 25) )
    *(_QWORD *)(v4 + 8) = v6;
  if ( (__int64 *)(*a1)[1] == v3 )
  {
    (*a1)[1] = v4;
  }
  else if ( *(__int64 **)v6 == v3 )
  {
    *(_QWORD *)v6 = v4;
  }
  else
  {
    *(_QWORD *)(v6 + 16) = v4;
  }
  v10 = *a1;
  if ( (__int64 *)**a1 == v3 )
  {
    if ( *(_BYTE *)(v4 + 25) )
      v11 = v6;
    else
      v11 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Min(v4);
    *v10 = v11;
  }
  if ( (__int64 *)(*a1)[2] == v3 )
  {
    if ( *(_BYTE *)(v4 + 25) )
    {
      v15 = v6;
    }
    else
    {
      v16 = *(_QWORD *)(v4 + 16);
      v15 = v4;
      while ( !*(_BYTE *)(v16 + 25) )
      {
        v15 = v16;
        v16 = *(_QWORD *)(v16 + 16);
      }
    }
    (*a1)[2] = v15;
  }
LABEL_9:
  if ( *((_BYTE *)v3 + 24) != 1 )
    goto LABEL_10;
  if ( v4 != (*a1)[1] )
  {
    do
    {
      v12 = v6;
      if ( *(_BYTE *)(v4 + 24) != 1 )
        break;
      v13 = *(_QWORD *)v6;
      if ( v4 == *(_QWORD *)v6 )
      {
        v13 = *(_QWORD *)(v6 + 16);
        if ( !*(_BYTE *)(v13 + 24) )
        {
          *(_BYTE *)(v13 + 24) = 1;
          *(_BYTE *)(v6 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Lrotate(
            a1,
            v6);
          v13 = *(_QWORD *)(v6 + 16);
        }
        if ( *(_BYTE *)(v13 + 25) )
          goto LABEL_33;
        if ( *(_BYTE *)(*(_QWORD *)v13 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v13 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v13 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v13 + 24LL) = 1;
            *(_BYTE *)(v13 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(a1);
            v13 = *(_QWORD *)(v6 + 16);
          }
          *(_BYTE *)(v13 + 24) = *(_BYTE *)(v6 + 24);
          *(_BYTE *)(v6 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v13 + 16) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Lrotate(
            a1,
            v6);
          break;
        }
      }
      else
      {
        if ( !*(_BYTE *)(v13 + 24) )
        {
          *(_BYTE *)(v13 + 24) = 1;
          *(_BYTE *)(v6 + 24) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(a1);
          v13 = *(_QWORD *)v6;
        }
        if ( *(_BYTE *)(v13 + 25) )
          goto LABEL_33;
        v14 = *(_QWORD *)(v13 + 16);
        if ( *(_BYTE *)(v14 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v13 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v13 + 24LL) == 1 )
          {
            *(_BYTE *)(v14 + 24) = 1;
            *(_BYTE *)(v13 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Lrotate(
              a1,
              v13);
            v13 = *(_QWORD *)v6;
          }
          *(_BYTE *)(v13 + 24) = *(_BYTE *)(v6 + 24);
          *(_BYTE *)(v6 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v13 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<CMeshCacheManager::RoundedRectangleCacheKey const,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>>>::_Rrotate(a1);
          break;
        }
      }
      *(_BYTE *)(v13 + 24) = 0;
LABEL_33:
      v4 = v12;
      v6 = *(_QWORD *)(v6 + 8);
    }
    while ( v12 != (*a1)[1] );
  }
  *(_BYTE *)(v4 + 24) = 1;
LABEL_10:
  v8 = a1[1];
  if ( v8 )
    a1[1] = (__int64 *)((char *)v8 - 1);
  return v3;
}
