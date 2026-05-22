/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1801517BC
 * Callers:
 *     _lambda_fa6b829d8739de4b5d4653aa8baa7884_::operator() @ 0x180158CD8 (_lambda_fa6b829d8739de4b5d4653aa8baa7884_--operator().c)
 *     ?InvokeNodePropertiesUpdatedCallback@DynamicNodeSourceBase@Holographic@Internal@Windows@@IEAAXAEBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@234@@Z @ 0x1801600F8 (-InvokeNodePropertiesUpdatedCallback@DynamicNodeSourceBase@Holographic@Internal@Windows@@IEAAXAE.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180012E00 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1800CDC38 (--$_Uninitialized_move@PEAV-$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@In.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@_K1@Z @ 0x1800D3AD4 (-_Change_array@-$vector@V-$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Win.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback> const &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // r12
  __int64 v6; // r14
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  size_t size_of; // rax
  __int64 *v12; // rax
  __int64 *v13; // rsi
  __int64 *v14; // r15
  __int64 *v15; // rdx
  __int64 *v16; // r8
  __int64 *v17; // rcx
  __int64 result; // rax
  __int64 *v19; // [rsp+20h] [rbp-48h]
  __int64 *v20; // [rsp+70h] [rbp+8h]

  v5 = a2 - *a1;
  v6 = a1[1] - *a1;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = a1[2] - *a1;
  v9 = v8 >> 1;
  if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  size_of = std::_Get_size_of_n<8>(v10);
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v19 = v12;
  v14 = &v12[v5];
  try
  {
    *v14 = *a3;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v14);
    v20 = v14;
    v15 = a1[1];
    v16 = v13;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback> *,Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback> *,std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback>>>(
        v17,
        a2,
        v13);
      v20 = v13;
      v16 = v14 + 1;
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback> *,Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback> *,std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback>>>(
      v17,
      v15,
      v16);
    std::vector<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>::_Change_array(
      (__int64)a1,
      (__int64)v13,
      v7,
      v10);
    result = (__int64)&(*a1)[v5];
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>>(
      v20,
      v14 + 1);
    std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)(8 * v10));
    throw;
  }
  return result;
}
