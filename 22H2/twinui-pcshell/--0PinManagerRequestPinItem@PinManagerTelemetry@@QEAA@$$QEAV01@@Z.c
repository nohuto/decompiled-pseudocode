/*
 * XREFs of ??0PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@$$QEAV01@@Z @ 0x1801357BC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_InitCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012A838 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012A838.c)
 * Callees:
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180134F94 (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

struct wil::details::IFailureCallback *__fastcall PinManagerTelemetry::PinManagerRequestPinItem::PinManagerRequestPinItem(
        struct wil::details::IFailureCallback *a1)
{
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(a1);
  *(_QWORD *)a1 = &PinManagerTelemetry::PinManagerRequestPinItem::`vftable';
  return a1;
}
