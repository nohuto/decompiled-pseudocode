/*
 * XREFs of ?InternalRelease@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180474AA0
 * Callers:
 *     ?OnApplicationViewChanged@ScreenManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800801C0 (-OnApplicationViewChanged@ScreenManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@P.c)
 *     ??1?$ComPtr@VScreenManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180473FB4 (--1-$ComPtr@VScreenManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5da5069c1ec2393567e9fe231930dfb9___::_scalar_deleting_destructor_ @ 0x180474020 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5da5069c1ec2393567e9fe231930dfb9___--_scala.c)
 *     ?ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180474F74 (-ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktopTabletModePolicy@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopTabletModePolicy@@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1804AE57C (--$MakeAndInitialize@VVirtualDesktopTabletModePolicy@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualD.c)
 *     ?VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1804AEFC8 (-VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollec.c)
 *     ?VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x1804AFA80 (-VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIVirtualDesktopTabletModePolicy@@UIVirtualDesktopTabletModePolicyService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180474E10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_180474E10.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktopTabletModePolicy,IVirtualDesktopTabletModePolicyService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
