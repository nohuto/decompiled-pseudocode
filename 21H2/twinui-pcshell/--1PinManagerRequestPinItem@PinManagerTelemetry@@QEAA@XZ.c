/*
 * XREFs of ??1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ @ 0x180136450
 * Callers:
 *     ??$HandleRequestPinItemAsync@VPinManagerRequestPinItem@PinManagerTelemetry@@@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@45@Uhstring@5@0USecondaryTile@StartScreen@UI@45@PEFBU_ITEMIDLIST@@_N3W4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x180131C38 (--$HandleRequestPinItemAsync@VPinManagerRequestPinItem@PinManagerTelemetry@@@PinManager@implemen.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor$2 @ 0x180131DAA (_winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemA_ea_180131DAA.c)
 *     ??0_parameters_@?BK@???$HandleRequestPinItemAsync@VPinManagerRequestPinItem@PinManagerTelemetry@@@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@0USecondaryTile@StartScreen@UI@56@PEFBU_ITEMIDLIST@@_N3W4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z@QEAA@QEAU123456@0012334567Ususpend_never@experimental@std@@@Z @ 0x180134FA4 (--0_parameters_@-BK@---$HandleRequestPinItemAsync@VPinManagerRequestPinItem@PinManagerTelemetry@.c)
 *     ??1_lambda_3157cebf66dd36ffc1ef22aa7a99425b_@@QEAA@XZ @ 0x1801359AC (--1_lambda_3157cebf66dd36ffc1ef22aa7a99425b_@@QEAA@XZ.c)
 *     ??1_parameters_@?BK@???$HandleRequestPinItemAsync@VPinManagerRequestPinItem@PinManagerTelemetry@@@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@0USecondaryTile@StartScreen@UI@56@PEFBU_ITEMIDLIST@@_N3W4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z@QEAA@XZ @ 0x180135AE8 (--1_parameters_@-BK@---$HandleRequestPinItemAsync@VPinManagerRequestPinItem@PinManagerTelemetry@.c)
 *     ?RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@0USecondaryTile@StartScreen@UI@56@@Z @ 0x18013FBB4 (-RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$IAsyncOper.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::RequestPinItemAsync_::_1_::dtor$11 @ 0x18013FF82 (_winrt--Windows--Internal--Shell--implementation--PinManager--RequestPinItemAsync_--_1_--dtor$11.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::RequestPinItemAsync_::_1_::dtor$14 @ 0x18013FFA6 (_winrt--Windows--Internal--Shell--implementation--PinManager--RequestPinItemAsync_--_1_--dtor$14.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180138D7C (-Destroy@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 */

void __fastcall PinManagerTelemetry::PinManagerRequestPinItem::~PinManagerRequestPinItem(
        PinManagerTelemetry::PinManagerRequestPinItem *this)
{
  *(_QWORD *)this = &PinManagerTelemetry::PinManagerRequestPinItem::`vftable';
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
