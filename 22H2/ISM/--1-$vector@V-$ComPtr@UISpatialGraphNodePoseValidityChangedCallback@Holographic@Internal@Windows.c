/*
 * XREFs of ??1?$vector@V?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800CE4AC
 * Callers:
 *     _std::_Func_impl_no_alloc__lambda_be1afa1ad46a34c97b71e3333d61116f__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x18004FEF0 (_std--_Func_impl_no_alloc__lambda_be1afa1ad46a34c97b71e3333d61116f__void__MIT_INPUT_FOCUS_MESSAG.c)
 *     _InputSite::GetAllAttachedObjectsByType_IActivationListenerInputObjectProxy__::_1_::dtor$0 @ 0x18004FF10 (_InputSite--GetAllAttachedObjectsByType_IActivationListenerInputObjectProxy__--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$8 @ 0x1800511D7 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800511D7.c)
 *     __lambda_fa6b829d8739de4b5d4653aa8baa7884_::operator()_::_1_::dtor$0 @ 0x180158E8E (__lambda_fa6b829d8739de4b5d4653aa8baa7884_--operator()_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::DynamicNodeSourceBase::InvokeNodePropertiesUpdatedCallback_::_1_::dtor$0 @ 0x18016027B (_Windows--Internal--Holographic--DynamicNodeSourceBase--InvokeNodePropertiesUpdatedCallback_--_1.c)
 *     _InputSite::GetAllAttachedObjectsByType_IAttachableInputObjectSampleProxy__::_1_::dtor$0 @ 0x180170CEB (_InputSite--GetAllAttachedObjectsByType_IAttachableInputObjectSampleProxy__--_1_--dtor$0.c)
 *     _TestCommands::RequestHitTest_::_1_::dtor$2 @ 0x1801711E3 (_TestCommands--RequestHitTest_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1800CD87C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graph.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback>>::~vector<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback>>(
        __int64 a1)
{
  __int64 *v1; // rdi

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>>(
      *(__int64 **)a1,
      *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(
      v1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
