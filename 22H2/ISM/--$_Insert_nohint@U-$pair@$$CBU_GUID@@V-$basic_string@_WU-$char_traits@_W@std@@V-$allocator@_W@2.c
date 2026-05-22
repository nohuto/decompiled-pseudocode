/*
 * XREFs of ??$_Insert_nohint@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UGuidLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@std@@_N@1@_N$$QEAU?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@U_Not_a_node_tag@1@@Z @ 0x180155618
 * Callers:
 *     ??$?RV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@_lambda_0f0bae3cf8d5116e9b9b4d57b869a88f_@@QEBAXAEAVHolographicDeviceSnapshot@Holographic@Internal@Windows@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18014E2B8 (--$-RV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-Relea.c)
 *     ??R_lambda_0ec230e0adbac92e2fff9cb336d4370d_@@QEBAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x18015842C (--R_lambda_0ec230e0adbac92e2fff9cb336d4370d_@@QEBAXAEBV-$basic_string@_WU-$char_traits@_W@std@@V.c)
 * Callees:
 *     memcmp_0 @ 0x18004B24F (memcmp_0.c)
 *     ??$_Insert_at@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialNodeIdLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@1@$$QEAU?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@U_Not_a_node_tag@1@@Z @ 0x180152D88 (--$_Insert_at@U-$pair@$$CBUSPATIAL_NODE_ID@@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocato.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<_GUID,std::wstring,Windows::Internal::Holographic::GuidLess,std::allocator<std::pair<_GUID const,std::wstring>>,0>>::_Insert_nohint<std::pair<_GUID const,std::wstring>,std::_Not_a_node_tag>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const void *a4)
{
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  __int64 *v9; // rbx
  char v10; // r15
  int v11; // eax
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v7 = (_QWORD *)*a1;
  v8 = (_QWORD *)*a1;
  v9 = *(__int64 **)(*a1 + 8LL);
  v10 = 1;
  while ( !*((_BYTE *)v9 + 25) )
  {
    v8 = v9;
    v11 = memcmp_0(a4, v9 + 4, 0x10uLL);
    if ( v11 >= 0 )
    {
      v10 = 0;
      v9 = (__int64 *)v9[2];
    }
    else
    {
      v10 = 1;
      v9 = (__int64 *)*v9;
    }
  }
  try
  {
    v12 = v8;
    v13 = v8;
    if ( v10 )
    {
      if ( v8 == (_QWORD *)*v7 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,std::wstring,Windows::Internal::Holographic::SpatialNodeIdLess,std::allocator<std::pair<SPATIAL_NODE_ID const,std::wstring>>,0>>::_Insert_at<std::pair<SPATIAL_NODE_ID const,std::wstring>,std::_Not_a_node_tag>(
                           a1,
                           &v18,
                           1,
                           v8,
                           (__int64)a4);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v8 + 25) )
      {
        v12 = (_QWORD *)v8[2];
      }
      else
      {
        v15 = *v8;
        if ( *(_BYTE *)(*v8 + 25LL) )
        {
          v16 = v8[1];
          if ( !*(_BYTE *)(v16 + 25) )
          {
            v17 = v8;
            do
            {
              v13 = v17;
              if ( v17 != *(_QWORD **)v16 )
                break;
              v12 = (_QWORD *)v16;
              v16 = *(_QWORD *)(v16 + 8);
              v17 = v12;
              v13 = v12;
            }
            while ( !*(_BYTE *)(v16 + 25) );
          }
          if ( !*((_BYTE *)v12 + 25) )
          {
            v12 = (_QWORD *)v16;
            v13 = (_QWORD *)v16;
          }
          goto LABEL_21;
        }
        do
        {
          v12 = (_QWORD *)v15;
          v15 = *(_QWORD *)(v15 + 16);
        }
        while ( !*(_BYTE *)(v15 + 25) );
      }
      v13 = v12;
    }
LABEL_21:
    if ( memcmp_0(v13 + 4, a4, 0x10uLL) >= 0 )
    {
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,std::wstring,Windows::Internal::Holographic::SpatialNodeIdLess,std::allocator<std::pair<SPATIAL_NODE_ID const,std::wstring>>,0>>::_Insert_at<std::pair<SPATIAL_NODE_ID const,std::wstring>,std::_Not_a_node_tag>(
                         a1,
                         &v18,
                         v10,
                         v8,
                         (__int64)a4);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    throw;
  }
  return result;
}
