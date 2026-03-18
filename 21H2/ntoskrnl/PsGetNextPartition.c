/*
 * XREFs of PsGetNextPartition @ 0x140236710
 * Callers:
 *     MmSetTrimWhileAgingState @ 0x1402366D4 (MmSetTrimWhileAgingState.c)
 *     MiFreeExcessSegments @ 0x1402878F0 (MiFreeExcessSegments.c)
 *     MmFlushAllPagesEx @ 0x14038A830 (MmFlushAllPagesEx.c)
 *     MiFinishResume @ 0x14038DF70 (MiFinishResume.c)
 *     MmEmptyAllWorkingSets @ 0x140597560 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x14059770C (MmTrimFilePagesFromWorkingSets.c)
 *     EtwpLogMemNodeInfo @ 0x14062F0B8 (EtwpLogMemNodeInfo.c)
 *     ExpCheckForWorker @ 0x14063F394 (ExpCheckForWorker.c)
 *     MmSetMinimumAgeRate @ 0x1406AFBF0 (MmSetMinimumAgeRate.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140A01E60 (ExpNodeHotAddProcessorWorker.c)
 *     MmEnablePeriodicAccessClearing @ 0x140A485A0 (MmEnablePeriodicAccessClearing.c)
 *     MiMirrorBrownPhase @ 0x140A48B0C (MiMirrorBrownPhase.c)
 * Callees:
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1403606EC (PsReferencePartitionSafe.c)
 *     PsGetNextPartitionUnsafe @ 0x140363D98 (PsGetNextPartitionUnsafe.c)
 */

void *__fastcall PsGetNextPartition(void *a1)
{
  void *v1; // rbx
  void *v2; // rdi
  __int64 NextPartitionUnsafe; // rax
  __int64 v4; // rdx
  void *v5; // r8

  v1 = a1;
  v2 = 0LL;
  while ( 1 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(a1);
    v5 = (void *)NextPartitionUnsafe;
    if ( !NextPartitionUnsafe )
      break;
    if ( (unsigned __int8)PsReferencePartitionSafe(NextPartitionUnsafe, v4, NextPartitionUnsafe) )
    {
      v2 = v5;
      break;
    }
    a1 = v5;
  }
  if ( v1 )
    PsDereferencePartition(v1, v4, v5);
  return v2;
}
