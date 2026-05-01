/*
 * XREFs of ?EnsureWatchingCurrentThread@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180011A34
 * Callers:
 *     ?StartActivity@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1800A9C8C (-StartActivity@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTe.c)
 *     ?StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXPEBG@Z @ 0x1800CCD20 (-StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z @ 0x1800FDE78 (-StartActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z.c)
 *     ?StartActivity@WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z @ 0x1800FDF74 (-StartActivity@WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z.c)
 *     ?StartActivity@CanPinToTaskbar@TaskbarPinningTelemetry@@QEAAXXZ @ 0x180141684 (-StartActivity@CanPinToTaskbar@TaskbarPinningTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXXZ @ 0x180141720 (-StartActivity@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBG@Z @ 0x1801417D4 (-StartActivity@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAAXXZ @ 0x180141890 (-StartActivity@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00@Z @ 0x180141944 (-StartActivity@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002F6D0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(
        __int64 a1)
{
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
