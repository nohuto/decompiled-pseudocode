/*
 * XREFs of MmPerformMemoryListCommand @ 0x140A849F4
 * Callers:
 *     PfpLogScenarioEvent @ 0x14073A758 (PfpLogScenarioEvent.c)
 *     MmIssueMemoryListCommand @ 0x14085E358 (MmIssueMemoryListCommand.c)
 *     PfPowerActionNotify @ 0x140A9CD7C (PfPowerActionNotify.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140A9CFDC (PfpPowerActionStartScenarioTracing.c)
 *     PopVerifierFlushMemoryBeforeSleep @ 0x140AA46C4 (PopVerifierFlushMemoryBeforeSleep.c)
 * Callees:
 *     MiCaptureAllWorkingSetAccessBits @ 0x1402B8A14 (MiCaptureAllWorkingSetAccessBits.c)
 *     MiGetProcessPartition @ 0x14031F9D4 (MiGetProcessPartition.c)
 *     MiEmptyAllWorkingSets @ 0x1406322B8 (MiEmptyAllWorkingSets.c)
 *     MiFlushAllPages @ 0x1406377FC (MiFlushAllPages.c)
 *     MiPurgePartitionStandby @ 0x14064EF50 (MiPurgePartitionStandby.c)
 */

__int64 MmPerformMemoryListCommand()
{
  __int64 ProcessPartition; // rax
  int v1; // r8d
  int v2; // r8d
  int v3; // edx
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  unsigned int v8; // edx

  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( !v1 )
  {
    v3 = 0;
    goto LABEL_4;
  }
  v2 = v1 - 1;
  if ( !v2 )
  {
    v3 = 1;
LABEL_4:
    MiCaptureAllWorkingSetAccessBits(ProcessPartition, v3);
    return 0LL;
  }
  v5 = v2 - 1;
  if ( !v5 )
  {
    MiEmptyAllWorkingSets(ProcessPartition);
    return 0LL;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    MiFlushAllPages(ProcessPartition, 0);
    return 0LL;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v8 = 8;
    goto LABEL_14;
  }
  if ( v7 == 1 )
  {
    v8 = 1;
LABEL_14:
    MiPurgePartitionStandby(ProcessPartition, v8);
    return 0LL;
  }
  return 3221225659LL;
}
