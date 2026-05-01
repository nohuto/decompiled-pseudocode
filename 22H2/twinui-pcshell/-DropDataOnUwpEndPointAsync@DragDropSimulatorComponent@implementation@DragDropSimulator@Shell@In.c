/*
 * XREFs of ?DropDataOnUwpEndPointAsync@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@I@Foundation@67@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@Z @ 0x1800DF8E0
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2 @ 0x1800E1390 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800E1390.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_InitCoro$1 @ 0x1800DCD94 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulatorComponent--.c)
 */

__int64 winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        ...)
{
  void *v9; // rax
  unsigned int v11; // [rsp+468h] [rbp+10h] BYREF
  va_list va; // [rsp+488h] [rbp+30h] BYREF

  va_start(va, a5);
  v9 = operator new(0x3F8uLL);
  v11 = 0;
  winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync__InitCoro_1(
    &v11,
    (__int64)v9 + 96,
    a2,
    a3,
    a4,
    a5,
    va,
    a1);
  return a2;
}
