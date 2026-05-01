/*
 * XREFs of ??0PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@$$QEAV01@@Z @ 0x1801358DC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_InitCoro$1_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012A5BC (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_InitCoro.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_InitCoro$1 @ 0x18013C62C (winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimAsync$_InitCoro.c)
 * Callees:
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180135104 (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

struct wil::details::IFailureCallback *__fastcall PinManagerTelemetry::PinManagerPinItemToTaskbarShim::PinManagerPinItemToTaskbarShim(
        struct wil::details::IFailureCallback *a1)
{
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(a1);
  *(_QWORD *)a1 = &PinManagerTelemetry::PinManagerPinItemToTaskbarShim::`vftable';
  return a1;
}
