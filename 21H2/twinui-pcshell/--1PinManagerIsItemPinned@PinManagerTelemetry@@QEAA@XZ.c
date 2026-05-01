/*
 * XREFs of ??1PinManagerIsItemPinned@PinManagerTelemetry@@QEAA@XZ @ 0x1801363CC
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::IsItemPinned_::_1_::dtor$0 @ 0x18013B29C (_winrt--Windows--Internal--Shell--implementation--PinManager--IsItemPinned_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180138D7C (-Destroy@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 */

void __fastcall PinManagerTelemetry::PinManagerIsItemPinned::~PinManagerIsItemPinned(
        PinManagerTelemetry::PinManagerIsItemPinned *this)
{
  *(_QWORD *)this = &PinManagerTelemetry::PinManagerIsItemPinned::`vftable';
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
