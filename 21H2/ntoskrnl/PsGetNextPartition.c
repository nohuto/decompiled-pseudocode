/*
 * XREFs of PsGetNextPartition @ 0x140250E68
 * Callers:
 *     MmSetTrimWhileAgingState @ 0x140250E2C (MmSetTrimWhileAgingState.c)
 *     MiFreeExcessSegments @ 0x14031FAA0 (MiFreeExcessSegments.c)
 *     MmFlushAllPagesEx @ 0x1403847E4 (MmFlushAllPagesEx.c)
 *     MiFinishResume @ 0x1403849F0 (MiFinishResume.c)
 *     MmEmptyAllWorkingSets @ 0x14053CA44 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x14053CBEC (MmTrimFilePagesFromWorkingSets.c)
 *     EtwpLogMemNodeInfo @ 0x1405A8FC8 (EtwpLogMemNodeInfo.c)
 *     ExpCheckForWorker @ 0x1405B71F4 (ExpCheckForWorker.c)
 *     MmSetMinimumAgeRate @ 0x1406209E4 (MmSetMinimumAgeRate.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140955F20 (ExpNodeHotAddProcessorWorker.c)
 *     MmEnablePeriodicAccessClearing @ 0x1409914F8 (MmEnablePeriodicAccessClearing.c)
 *     MiMirrorBrownPhase @ 0x14099668C (MiMirrorBrownPhase.c)
 * Callees:
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1402745B0 (PsReferencePartitionSafe.c)
 *     PsGetNextPartitionUnsafe @ 0x140303A58 (PsGetNextPartitionUnsafe.c)
 */

void *__fastcall PsGetNextPartition(void *a1)
{
  void *v1; // rbx
  void *v2; // rdi
  __int64 NextPartitionUnsafe; // rax
  void *v4; // r8

  v1 = a1;
  v2 = 0LL;
  while ( 1 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(a1);
    if ( !NextPartitionUnsafe )
      break;
    if ( (unsigned __int8)PsReferencePartitionSafe(NextPartitionUnsafe) )
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
