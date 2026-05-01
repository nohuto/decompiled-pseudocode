/*
 * XREFs of ??1?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180358964
 * Callers:
 *     ??1XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x180358AAC (--1XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ??1CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x18035C94C (--1CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ??1RunWindowCallback@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x180364814 (--1RunWindowCallback@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     _lambda_64960682c46b5a18a905cfbd0aa4a0cd_::operator() @ 0x1803649E0 (_lambda_64960682c46b5a18a905cfbd0aa4a0cd_--operator().c)
 *     ??1WindowCreatedCallback@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18036C938 (--1WindowCreatedCallback@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??1CreateAltTabControl@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18037F8DC (--1CreateAltTabControl@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18037F908 (--1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18037F960 (--1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ?CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVSwitchItemDataView@Multitasking@5Internal@Windows@@@Z @ 0x180380604 (-CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@W.c)
 *     ??1OnAltKeyUp@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18038F390 (--1OnAltKeyUp@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ?OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ @ 0x180390148 (-OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803589A0 (--1-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18035B510 (-reset@-$shared_object@V-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
