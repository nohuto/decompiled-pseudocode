/*
 * XREFs of ?Stop@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAAXJ@Z @ 0x1804D4B7C
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2 @ 0x1800E1500 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800E1500.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DragDropSimulatorTelemetryProvider::OnSimulateDrop::Stop(__int64 this, int a2)
{
  wil::ActivityBase<DragDropSimulatorTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(
    this,
    a2);
}
