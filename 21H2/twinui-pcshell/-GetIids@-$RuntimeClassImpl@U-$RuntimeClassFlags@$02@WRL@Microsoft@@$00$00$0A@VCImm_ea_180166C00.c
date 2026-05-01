/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInternalFullScreenHandler@@UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@U?$CloakedIid@UITabbingAwarePositioner@@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@@23@@Details@WRL@Microsoft@@WJI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180166C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInternalFullScreenHandler,IHolographicViewManager,IHolographicViewTransitionNotificationService,Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::CloakedIid<ITabbingAwarePositioner>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>>>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return HolographicPositioner::GetIids((HolographicPositioner *)(a1 - 152), a2, a3);
}
