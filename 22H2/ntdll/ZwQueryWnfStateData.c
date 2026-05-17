/*
 * XREFs of ZwQueryWnfStateData @ 0x1800A0150
 * Callers:
 *     RtlQueryWnfStateData @ 0x180044F30 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x1800840C0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     wil_details_StagingConfig_Load @ 0x18009C548 (wil_details_StagingConfig_Load.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180102130 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x18010DBE4 (RtlpFcNotifyFeatureUsageTarget.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryWnfStateData()
{
  __int64 result; // rax

  result = 356LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
