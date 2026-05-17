/*
 * XREFs of ZwRaiseException @ 0x1800A01D0
 * Callers:
 *     RtlUnwindEx @ 0x180030600 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x1800520D0 (RtlRaiseException.c)
 *     KiUserExceptionDispatcher @ 0x1800A13A0 (KiUserExceptionDispatcher.c)
 *     RtlRaiseNoncontinuableException @ 0x1800A1E10 (RtlRaiseNoncontinuableException.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CF3C0 (LdrpLogFatalUserCallbackException.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800DD85C (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlEnterUmsSchedulingMode @ 0x1800F7110 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     <none>
 */

__int64 ZwRaiseException()
{
  __int64 result; // rax

  result = 360LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
