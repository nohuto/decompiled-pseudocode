/*
 * XREFs of PsGetNextPartition @ 0x1402FF5F0
 * Callers:
 *     MmSetTrimWhileAgingState @ 0x1402FF5B4 (MmSetTrimWhileAgingState.c)
 *     MiCheckControlArea @ 0x140334D00 (MiCheckControlArea.c)
 *     EtwpLogMemNodeInfo @ 0x14045F526 (EtwpLogMemNodeInfo.c)
 *     ExpCheckForWorker @ 0x14060A838 (ExpCheckForWorker.c)
 *     MiFreeExcessSegments @ 0x1406225DC (MiFreeExcessSegments.c)
 *     MmEmptyAllWorkingSets @ 0x140633230 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x14063327C (MmTrimFilePagesFromWorkingSets.c)
 *     MmFlushAllPagesEx @ 0x1406398BC (MmFlushAllPagesEx.c)
 *     MiWakeAllZeroConductors @ 0x140653030 (MiWakeAllZeroConductors.c)
 *     MmSetMinimumAgeRate @ 0x140797F7C (MmSetMinimumAgeRate.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1409FD980 (ExpNodeHotAddProcessorWorker.c)
 *     MmEnablePeriodicAccessClearing @ 0x140A85978 (MmEnablePeriodicAccessClearing.c)
 *     MiMirrorBrownPhase @ 0x140AA94BC (MiMirrorBrownPhase.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140295BC8 (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     PsGetNextPartitionUnsafe @ 0x140305364 (PsGetNextPartitionUnsafe.c)
 */

void *__fastcall PsGetNextPartition(void *a1)
{
  __int64 v1; // rbx
  void *v2; // rdi
  __int64 NextPartitionUnsafe; // rax
  void *v4; // r8

  v1 = (__int64)a1;
  v2 = 0LL;
  while ( 1 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(a1);
    if ( !NextPartitionUnsafe )
      break;
    if ( PsReferencePartitionSafe(NextPartitionUnsafe) )
    {
      v2 = v4;
      break;
    }
    a1 = v4;
  }
  if ( v1 )
    PsDereferencePartition(v1);
  return v2;
}
