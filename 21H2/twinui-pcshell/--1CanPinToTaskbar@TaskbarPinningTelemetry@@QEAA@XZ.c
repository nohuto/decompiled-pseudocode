/*
 * XREFs of ??1CanPinToTaskbar@TaskbarPinningTelemetry@@QEAA@XZ @ 0x1801360DC
 * Callers:
 *     ?CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z @ 0x1801378BC (-CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18020C648 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 */

void __fastcall TaskbarPinningTelemetry::CanPinToTaskbar::~CanPinToTaskbar(
        TaskbarPinningTelemetry::CanPinToTaskbar *this)
{
  *(_QWORD *)this = &TaskbarPinningTelemetry::CanPinToTaskbar::`vftable';
  wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
