/*
 * XREFs of PsGetNextPartition @ 0x1402ABF88
 * Callers:
 *     MmSetTrimWhileAgingState @ 0x1402ABF4C (MmSetTrimWhileAgingState.c)
 *     MiFreeExcessSegments @ 0x140314D50 (MiFreeExcessSegments.c)
 *     MmFlushAllPagesEx @ 0x140384694 (MmFlushAllPagesEx.c)
 *     MiFinishResume @ 0x1403848A0 (MiFinishResume.c)
 *     MmEmptyAllWorkingSets @ 0x14053C804 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x14053C9AC (MmTrimFilePagesFromWorkingSets.c)
 *     EtwpLogMemNodeInfo @ 0x1405A8D98 (EtwpLogMemNodeInfo.c)
 *     ExpCheckForWorker @ 0x1405B6FC4 (ExpCheckForWorker.c)
 *     MmSetMinimumAgeRate @ 0x140691E00 (MmSetMinimumAgeRate.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140955D50 (ExpNodeHotAddProcessorWorker.c)
 *     MmEnablePeriodicAccessClearing @ 0x1409904F8 (MmEnablePeriodicAccessClearing.c)
 *     MiMirrorBrownPhase @ 0x14099568C (MiMirrorBrownPhase.c)
 * Callees:
 *     PsDereferencePartition @ 0x1402ABFDC (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1402AC004 (PsReferencePartitionSafe.c)
 *     PsGetNextPartitionUnsafe @ 0x1402F8D08 (PsGetNextPartitionUnsafe.c)
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
