/*
 * XREFs of wil::details::ScopeExitFn__lambda_ed17f40ea53b7d735a78e21ded7e7afa___::_ScopeExitFn__lambda_ed17f40ea53b7d735a78e21ded7e7afa___ @ 0x1800CEAEC
 * Callers:
 *     __lambda_536d29ca497f1a4a88268fb5f9ff4d76_::operator()_::_1_::dtor$2 @ 0x1800CF6B1 (__lambda_536d29ca497f1a4a88268fb5f9ff4d76_--operator()_--_1_--dtor$2.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1803C5C78 (-ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_ed17f40ea53b7d735a78e21ded7e7afa___::_ScopeExitFn__lambda_ed17f40ea53b7d735a78e21ded7e7afa___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)a1 + 392LL))(**(_QWORD **)a1, 0LL);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB92,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v1);
    TouchKeyboardExperienceTelemetryLogger::ViewCreationTaskFailed();
  }
}
