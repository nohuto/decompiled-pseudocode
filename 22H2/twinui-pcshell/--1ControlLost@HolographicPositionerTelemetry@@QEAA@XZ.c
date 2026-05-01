/*
 * XREFs of ??1ControlLost@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1802AEB74
 * Callers:
 *     _HolographicPositioner::ControlLost_::_1_::dtor$4 @ 0x1802AFDDA (_HolographicPositioner--ControlLost_--_1_--dtor$4.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802AFE54 (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 */

void __fastcall HolographicPositionerTelemetry::ControlLost::~ControlLost(
        HolographicPositionerTelemetry::ControlLost *this)
{
  *(_QWORD *)this = &HolographicPositionerTelemetry::ControlLost::`vftable';
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
