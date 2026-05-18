/*
 * XREFs of sub_18011F3BC @ 0x18011F3BC
 * Callers:
 *     __report_gsfailure @ 0x18011F420 (__report_gsfailure.c)
 * Callees:
 *     sub_18011F268 @ 0x18011F268 (sub_18011F268.c)
 */

BOOL __fastcall sub_18011F3BC(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // rax

  dword_18021B2D0 = IsDebuggerPresent();
  sub_18011F268();
  SetUnhandledExceptionFilter(0LL);
  UnhandledExceptionFilter(ExceptionInfo);
  if ( !dword_18021B2D0 )
    sub_18011F268();
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}
