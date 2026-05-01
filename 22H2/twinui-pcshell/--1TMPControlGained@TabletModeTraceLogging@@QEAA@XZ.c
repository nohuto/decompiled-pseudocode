/*
 * XREFs of ??1TMPControlGained@TabletModeTraceLogging@@QEAA@XZ @ 0x180463190
 * Callers:
 *     _TabletModePositioner::ControlGained_::_1_::dtor$0 @ 0x180464F52 (_TabletModePositioner--ControlGained_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180032684 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall TabletModeTraceLogging::TMPControlGained::~TMPControlGained(
        TabletModeTraceLogging::TMPControlGained *this)
{
  *(_QWORD *)this = &TabletModeTraceLogging::TMPControlGained::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
