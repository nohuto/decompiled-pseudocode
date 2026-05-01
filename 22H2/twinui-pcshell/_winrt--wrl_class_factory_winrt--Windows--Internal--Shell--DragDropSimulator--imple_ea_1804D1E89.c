/*
 * XREFs of _winrt::wrl_class_factory_winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent_::CreateInstance_::_1_::catch$4 @ 0x1804D1E89
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801C0108 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::wrl_class_factory_winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent_::CreateInstance_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x3F,
                           (__int64)"internal\\shellcommonshell\\inc\\winrt\\wrl_class_factory.h",
                           a4);
  return 0LL;
}
