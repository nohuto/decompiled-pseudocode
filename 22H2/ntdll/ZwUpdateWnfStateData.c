/*
 * XREFs of ZwUpdateWnfStateData @ 0x1800A0ED0
 * Callers:
 *     RtlPublishWnfStateData @ 0x18007D520 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x1800850A0 (RtlTestAndPublishWnfStateData.c)
 *     SignalStartWerSvc @ 0x1800DD558 (SignalStartWerSvc.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180102130 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x18010DBE4 (RtlpFcNotifyFeatureUsageTarget.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUpdateWnfStateData(
        PCWNF_STATE_NAME StateName,
        const void *Buffer,
        ULONG Length,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp,
        LOGICAL CheckStamp)
{
  NTSTATUS result; // eax

  result = 464;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
