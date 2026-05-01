/*
 * XREFs of ??0_parameters_@?4??InsertAsync@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@78@AEBUIInspectable@Foundation@78@AEBW4DragDropSimulatorDropPoint@45678@@Z@QEAA@QEAU2345678@01Ususpend_never@experimental@std@@@Z @ 0x1804D0F7C
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync$_InitCoro$1 @ 0x1800DF97C (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800DF97C.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync$_InitCoro$1 @ 0x1800E05A4 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800E05A4.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall `winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync'::`5'::_parameters_::_parameters_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *result; // rax

  *a1 = a2;
  result = a1;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
