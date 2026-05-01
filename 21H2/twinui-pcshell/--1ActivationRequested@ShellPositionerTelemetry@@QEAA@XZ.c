/*
 * XREFs of ??1ActivationRequested@ShellPositionerTelemetry@@QEAA@XZ @ 0x180442FAC
 * Callers:
 *     _ShellPositionerManager::ActivationRequested_::_1_::dtor$0 @ 0x1801742E2 (_ShellPositionerManager--ActivationRequested_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180032684 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall ShellPositionerTelemetry::ActivationRequested::~ActivationRequested(
        ShellPositionerTelemetry::ActivationRequested *this)
{
  *(_QWORD *)this = &ShellPositionerTelemetry::ActivationRequested::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
