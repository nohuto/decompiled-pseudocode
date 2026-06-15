/*
 * XREFs of __raise_securityfailure @ 0x14001D02C
 * Callers:
 *     __report_gsfailure @ 0x14001D090 (__report_gsfailure.c)
 *     __report_securityfailure @ 0x14001D184 (__report_securityfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x14001D8A0 (__crt_debugger_hook.c)
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_14008FCD0 = IsDebuggerPresent();
  _crt_debugger_hook(1LL);
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_14008FCD0 )
    _crt_debugger_hook(1LL);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
