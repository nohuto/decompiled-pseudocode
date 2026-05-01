/*
 * XREFs of ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18013AD4C
 * Callers:
 *     ?Stop@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@QEAAX_N000@Z @ 0x1800AA0B8 (-Stop@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@.c)
 *     ?StopActivity@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@MEAAXXZ @ 0x1800AA3E0 (-StopActivity@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTel.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$2 @ 0x1800FA6C0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 *     ?StopActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@MEAAXXZ @ 0x1800FE280 (-StopActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@MEAAXXZ @ 0x1800FE4A0 (-StopActivity@WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@MEAAXXZ.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800FEB60 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012ADA0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E410 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E410.c)
 *     ?Stop@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXPEBG_N@Z @ 0x180141BEC (-Stop@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXPEBG_N@Z.c)
 *     ?Stop@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBGW4PinManagerIsPinAllowedResult@2@@Z @ 0x180141E54 (-Stop@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBGW4PinManagerIsPinAllowedResult@2@@Z.c)
 *     ?Stop@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@2@@Z @ 0x1801420BC (-Stop@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemR.c)
 *     ?Stop@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@2@@Z @ 0x180142378 (-Stop@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@.c)
 *     ?StopActivity@CanPinToTaskbar@TaskbarPinningTelemetry@@MEAAXXZ @ 0x180142640 (-StopActivity@CanPinToTaskbar@TaskbarPinningTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinManagerIsItemPinned@PinManagerTelemetry@@MEAAXXZ @ 0x180142860 (-StopActivity@PinManagerIsItemPinned@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinManagerIsPinAllowed@PinManagerTelemetry@@MEAAXXZ @ 0x180142A80 (-StopActivity@PinManagerIsPinAllowed@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@MEAAXXZ @ 0x180142CA0 (-StopActivity@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinManagerRequestPinItem@PinManagerTelemetry@@MEAAXXZ @ 0x180142EC0 (-StopActivity@PinManagerRequestPinItem@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18015C3E8 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?StopActivity@TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ @ 0x18015C930 (-StopActivity@TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ @ 0x18015CD60 (-StopActivity@TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ActivityBase<TaskbarLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(
        __int64 a1)
{
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
