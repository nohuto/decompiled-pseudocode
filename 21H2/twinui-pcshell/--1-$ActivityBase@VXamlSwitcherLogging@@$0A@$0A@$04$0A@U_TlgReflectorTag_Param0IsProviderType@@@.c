/*
 * XREFs of ??1?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180358C34
 * Callers:
 *     ??1XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x180358D7C (--1XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ??1CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x18035CC1C (--1CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ??1RunWindowCallback@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x180364AE4 (--1RunWindowCallback@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     _lambda_64960682c46b5a18a905cfbd0aa4a0cd_::operator() @ 0x180364CB0 (_lambda_64960682c46b5a18a905cfbd0aa4a0cd_--operator().c)
 *     ??1WindowCreatedCallback@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18036CC08 (--1WindowCreatedCallback@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??1CreateAltTabControl@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18037FBAC (--1CreateAltTabControl@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18037FBD8 (--1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18037FC30 (--1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ?CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVSwitchItemDataView@Multitasking@5Internal@Windows@@@Z @ 0x1803808D4 (-CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@W.c)
 *     ??1OnAltKeyUp@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18038F660 (--1OnAltKeyUp@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ?OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ @ 0x180390418 (-OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180358C70 (--1-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18035B7E0 (-reset@-$shared_object@V-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
