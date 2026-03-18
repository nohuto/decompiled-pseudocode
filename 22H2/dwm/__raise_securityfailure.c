/*
 * XREFs of __raise_securityfailure @ 0x1400031C4
 * Callers:
 *     __report_gsfailure @ 0x140003230 (__report_gsfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x140003AF0 (__crt_debugger_hook.c)
 */

BOOL __fastcall _raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_140015890 = IsDebuggerPresent();
  _crt_debugger_hook(1LL);
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_140015890 )
    _crt_debugger_hook(1LL);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
