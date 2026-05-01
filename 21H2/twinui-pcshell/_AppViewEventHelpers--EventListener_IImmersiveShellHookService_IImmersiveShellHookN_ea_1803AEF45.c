/*
 * XREFs of _AppViewEventHelpers::EventListener_IImmersiveShellHookService_IImmersiveShellHookNotification_AppViewEventHelpers::details::ShellHookRegistration_::Register_::_1_::catch$2 @ 0x1803AEF45
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801C02B8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AppViewEventHelpers::EventListener_IImmersiveShellHookService_IImmersiveShellHookNotification_AppViewEventHelpers::details::ShellHookRegistration_::Register_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0xE1,
                           (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewEventHelpers.h",
                           a4);
  return 0LL;
}
