/*
 * XREFs of ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801F46B0
 * Callers:
 *     ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002DF80 (-OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F4340 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_1801F4340.c)
 *     ??$MakeAndInitialize@VApplicationViewManagerVisibilityDebouncer@@V1@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewManagerVisibilityDebouncer@@AEAPEAUIApplicationViewCollection@@@Z @ 0x1801FFF20 (--$MakeAndInitialize@VApplicationViewManagerVisibilityDebouncer@@V1@AEAPEAUIApplicationViewColle.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x180200A9C (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___::Run @ 0x180200F10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___--Run.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@V1@AEAUCRect@Geometry@@@Details@WRL@Microsoft@@YAJPEAPEAVCCommonApplicationViewPosition@@AEAUCRect@Geometry@@@Z @ 0x1804491E8 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@V1@AEAUCRect@Geometry@@@Details@WRL@Micros.c)
 *     ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x18047C900 (-CancelPlacement@WindowArrangementView@@UEAAJXZ.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x18047D6F0 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     ?InternalAddRef@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ @ 0x18047E110 (-InternalAddRef@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ResetPlaceModeIdleTimer@WindowArrangementView@@AEAAXXZ @ 0x18047ECB8 (-ResetPlaceModeIdleTimer@WindowArrangementView@@AEAAXXZ.c)
 *     ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x18047EDF8 (-SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z.c)
 *     ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18047F0B0 (-Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18047F3C8 (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 *     ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x180480030 (-TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback @ 0x1804810B0 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_InvokeCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 68), a2);
}
