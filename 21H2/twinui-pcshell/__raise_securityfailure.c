/*
 * XREFs of __raise_securityfailure @ 0x18008FA78
 * Callers:
 *     __report_gsfailure @ 0x18008FAE0 (__report_gsfailure.c)
 *     __report_securityfailure @ 0x18008FBD4 (__report_securityfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x1800902EC (__crt_debugger_hook.c)
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_18064F590 = IsDebuggerPresent();
  _crt_debugger_hook(1LL);
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_18064F590 )
    _crt_debugger_hook(1LL);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
