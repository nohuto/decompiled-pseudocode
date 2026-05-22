/*
 * XREFs of ??$_Emplace_reallocate@VWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180151A70
 * Callers:
 *     ?AddNodePoseValidityChangedCallback@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJPEAUISpatialGraphNodePoseValidityChangedCallback@234@@Z @ 0x180159444 (-AddNodePoseValidityChangedCallback@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows.c)
 *     ?AddNodePropertiesUpdatedCallback@DynamicNodeSourceBase@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphNodePropertiesUpdatedCallback@234@@Z @ 0x1801595C0 (-AddNodePropertiesUpdatedCallback@DynamicNodeSourceBase@Holographic@Internal@Windows@@UEAAJAEBUS.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180012E00 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UICursor@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@0@@Z @ 0x1800D5828 (--$_Uninitialized_move@PEAV-$ComPtr@UICursor@@@WRL@Microsoft@@PEAV123@V-$allocator@V-$ComPtr@UIC.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@_K1@Z @ 0x1800DA974 (-_Change_array@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v6; // r15
  __int64 v7; // r14
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  size_t size_of; // rax
  __int64 *v13; // rax
  __int64 v14; // rsi
  __int64 *v15; // rcx
  __int64 *v16; // rdx
  __int64 *v17; // r8
  __int64 *v18; // rcx
  __int64 result; // rax
  __int64 *v20; // [rsp+20h] [rbp-48h]
  __int64 *v21; // [rsp+70h] [rbp+8h]
  __int64 *v22; // [rsp+78h] [rbp+10h]

  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  size_of = std::_Get_size_of_n<8>(v11);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (__int64)v13;
  v20 = v13;
  v15 = &v13[v6];
  v21 = v15 + 1;
  try
  {
    *v15 = 0LL;
    if ( v15 != a3 )
    {
      *v15 = *a3;
      *a3 = 0LL;
    }
    v22 = &v13[v6];
    v16 = a1[1];
    v17 = v13;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<Microsoft::WRL::ComPtr<ICursor> *,Microsoft::WRL::ComPtr<ICursor> *,std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(
        v18,
        a2,
        v13);
      v22 = (__int64 *)v14;
      v17 = v21;
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<ICursor> *,Microsoft::WRL::ComPtr<ICursor> *,std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(
      v18,
      v16,
      v17);
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Change_array((__int64)a1, v14, v8, v11);
    result = (__int64)&(*a1)[v6];
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>>(
      v22,
      v21);
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(8 * v11));
    throw;
  }
  return result;
}
