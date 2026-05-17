/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x1800A0170
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x180063980 (RtlWaitForWnfMetaNotification.c)
 *     RtlQueryWnfMetaNotification @ 0x180083460 (RtlQueryWnfMetaNotification.c)
 *     SignalStartWerSvc @ 0x1800DD558 (SignalStartWerSvc.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180102130 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryWnfStateNameInformation()
{
  __int64 result; // rax

  result = 357LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
