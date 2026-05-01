/*
 * XREFs of ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableItem@@U?$ChainInterfaces@UIVirtualDesktopItemInternal@@UIVirtualDesktopItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180215D88
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewArrangePositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802143F0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_1802143F0.c)
 *     ??$MakeAndInitialize@VVirtualDesktopItem@@V1@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktop@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItem@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktop@@@Z @ 0x18040EBB8 (--$MakeAndInitialize@VVirtualDesktopItem@@V1@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableItem,Microsoft::WRL::ChainInterfaces<IVirtualDesktopItemInternal,IVirtualDesktopItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::InternalAddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 84), a2);
}
