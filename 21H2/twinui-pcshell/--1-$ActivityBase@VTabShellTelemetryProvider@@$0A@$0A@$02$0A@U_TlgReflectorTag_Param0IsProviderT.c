/*
 * XREFs of ??1?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802D9AA4
 * Callers:
 *     ??1TabViewManager_OnTitleBarsCreated@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1802DA348 (--1TabViewManager_OnTitleBarsCreated@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ??1TabViewManager_OnTitleBarsLost@TabViewManagerTraceLogging@@QEAA@XZ @ 0x1802DA374 (--1TabViewManager_OnTitleBarsLost@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?OnTitleBarsLost@TabViewManager@@UEAAJXZ @ 0x1802E45F0 (-OnTitleBarsLost@TabViewManager@@UEAAJXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802D9AE0 (--1-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderTyp_ea_1802D9AE0.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1802F1344 (-reset@-$shared_object@V-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTa_ea_1802F1344.c)
 */

void __fastcall wil::ActivityBase<TabShellTelemetryProvider,0,0,3,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,0,0,3,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<TabShellTelemetryProvider,1,0,3,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<TabShellTelemetryProvider,0,0,3,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
