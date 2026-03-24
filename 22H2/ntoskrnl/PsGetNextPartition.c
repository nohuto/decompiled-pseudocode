/*
 * XREFs of PsGetNextPartition @ 0x140303EF8
 * Callers:
 *     MiFreeExcessSegments @ 0x1402953D0 (MiFreeExcessSegments.c)
 *     MmSetTrimWhileAgingState @ 0x140303EBC (MmSetTrimWhileAgingState.c)
 *     MmFlushAllPagesEx @ 0x140382724 (MmFlushAllPagesEx.c)
 *     MiFinishResume @ 0x1403841B0 (MiFinishResume.c)
 *     MmEmptyAllWorkingSets @ 0x14053C744 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x14053C8EC (MmTrimFilePagesFromWorkingSets.c)
 *     EtwpLogMemNodeInfo @ 0x1405A8CD8 (EtwpLogMemNodeInfo.c)
 *     ExpCheckForWorker @ 0x1405B6F04 (ExpCheckForWorker.c)
 *     MmSetMinimumAgeRate @ 0x140676240 (MmSetMinimumAgeRate.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140955DA0 (ExpNodeHotAddProcessorWorker.c)
 *     MmEnablePeriodicAccessClearing @ 0x1409904F8 (MmEnablePeriodicAccessClearing.c)
 *     MiMirrorBrownPhase @ 0x140990BDC (MiMirrorBrownPhase.c)
 * Callees:
 *     PsGetNextPartitionUnsafe @ 0x140279388 (PsGetNextPartitionUnsafe.c)
 *     PsDereferencePartition @ 0x140303F4C (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x140303F74 (PsReferencePartitionSafe.c)
 */

_QWORD *__fastcall PsGetNextPartition(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  _UNKNOWN **NextPartitionUnsafe; // rax
  _QWORD *v4; // r8

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
