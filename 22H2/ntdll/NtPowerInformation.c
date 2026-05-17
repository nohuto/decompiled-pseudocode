/*
 * XREFs of NtPowerInformation @ 0x18009E0B0
 * Callers:
 *     RtlpSystemBootStatusRequest @ 0x180085DB4 (RtlpSystemBootStatusRequest.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x1800EDCE0 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x1800EE170 (RtlRestoreSystemBootStatusDefaults.c)
 *     RtlUnlockBootStatusData @ 0x1800EE1D0 (RtlUnlockBootStatusData.c)
 *     RtlpRecordBootStatusData @ 0x1800EE504 (RtlpRecordBootStatusData.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x18010AFD4 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x18010B0D4 (RtlpDestroyExecutionRequiredRequest.c)
 * Callees:
 *     <none>
 */

__int64 NtPowerInformation()
{
  __int64 result; // rax

  result = 95LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
