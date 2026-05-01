/*
 * XREFs of _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2_::_1_::dtor$3 @ 0x1800E3871
 * Callers:
 *     <none>
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x180016918 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop__ResumeCoro_2_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 2400) = *(_QWORD *)(a2 + 2464) + 352LL;
  wil::ActivityThreadWatcher::~ActivityThreadWatcher(*(wil::ActivityThreadWatcher **)(a2 + 2400));
}
