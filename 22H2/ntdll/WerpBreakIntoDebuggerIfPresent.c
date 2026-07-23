/*
 * XREFs of WerpBreakIntoDebuggerIfPresent @ 0x1800DD85C
 * Callers:
 *     RtlReportException @ 0x1800DC930 (RtlReportException.c)
 *     RtlReportExceptionEx @ 0x1800DCA00 (RtlReportExceptionEx.c)
 * Callees:
 *     ZwTerminateProcess @ 0x18009DA60 (ZwTerminateProcess.c)
 *     ZwRaiseException @ 0x1800A01D0 (ZwRaiseException.c)
 *     WerpIsDebugPortPresent @ 0x1800DDAC0 (WerpIsDebugPortPresent.c)
 */

void __fastcall WerpBreakIntoDebuggerIfPresent(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, char a3)
{
  if ( (a3 & 4) == 0 && (unsigned int)WerpIsDebugPortPresent() )
  {
    do
      ZwRaiseException(ExceptionRecord, ContextRecord, 0);
    while ( (unsigned int)WerpIsDebugPortPresent() );
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
  }
}
