/*
 * XREFs of ___raise_securityfailure @ 0x10004893
 * Callers:
 *     ___report_gsfailure @ 0x100048E1 (___report_gsfailure.c)
 * Callees:
 *     __crt_debugger_hook @ 0x1000477E (__crt_debugger_hook.c)
 */

BOOL __cdecl __raise_securityfailure(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // eax

  dword_100053E4 = IsDebuggerPresent();
  _crt_debugger_hook();
  SetUnhandledExceptionFilter(0);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_100053E4 )
    _crt_debugger_hook();
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
