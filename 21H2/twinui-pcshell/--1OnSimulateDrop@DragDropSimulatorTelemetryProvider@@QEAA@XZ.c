/*
 * XREFs of ??1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ @ 0x1804D18D0
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2 @ 0x1800E1500 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800E1500.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2_::_1_::dtor$0 @ 0x1800E37E4 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1800E37E4.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VDragDropSimulatorTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1804D16F0 (--1-$ActivityData@VDragDropSimulatorTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Act.c)
 *     ?Destroy@?$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1804D2258 (-Destroy@-$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgRefl.c)
 *     ?reset@?$shared_object@V?$ActivityData@VDragDropSimulatorTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1804D63B0 (-reset@-$shared_object@V-$ActivityData@VDragDropSimulatorTraceLogging@@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop(
        DragDropSimulatorTelemetryProvider::OnSimulateDrop *this)
{
  *(_QWORD *)this = &DragDropSimulatorTelemetryProvider::OnSimulateDrop::`vftable';
  wil::ActivityBase<DragDropSimulatorTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::details::shared_object<wil::ActivityBase<DragDropSimulatorTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<DragDropSimulatorTraceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((char *)this + 304);
  wil::ActivityBase<DragDropSimulatorTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<DragDropSimulatorTraceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<DragDropSimulatorTraceLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)((char *)this + 8));
}
