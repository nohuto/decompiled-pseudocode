/*
 * XREFs of ??0PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@AEBV01@@Z @ 0x180135904
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_ResumeCoro$2 @ 0x18013C8D0 (winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimAsync$_ResumeCo.c)
 * Callees:
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801351E4 (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect_ea_1801351E4.c)
 */

PinManagerTelemetry::PinManagerPinItemToTaskbarShim *__fastcall PinManagerTelemetry::PinManagerPinItemToTaskbarShim::PinManagerPinItemToTaskbarShim(
        PinManagerTelemetry::PinManagerPinItemToTaskbarShim *this,
        const struct PinManagerTelemetry::PinManagerPinItemToTaskbarShim *a2)
{
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)a2);
  *(_QWORD *)this = &PinManagerTelemetry::PinManagerPinItemToTaskbarShim::`vftable';
  return this;
}
