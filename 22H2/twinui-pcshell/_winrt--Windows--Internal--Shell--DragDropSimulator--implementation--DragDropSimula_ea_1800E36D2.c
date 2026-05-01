/*
 * XREFs of _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2_::_1_::dtor$2 @ 0x1800E36D2
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop__ResumeCoro_2_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 2392) = *(_QWORD *)(a2 + 2464) + 344LL;
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(*(__int64 **)(a2 + 2392));
}
