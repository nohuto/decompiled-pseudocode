/*
 * XREFs of FsRtlpCancelReadOnlyOplockIrp @ 0x14053BDB0
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x14023EEF0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14053BB78 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpReadOnlyOplockIrpCancelRoutine @ 0x14053C850 (FsRtlpReadOnlyOplockIrpCancelRoutine.c)
 * Callees:
 *     FsRtlpComputeShareableOplockState @ 0x14023F940 (FsRtlpComputeShareableOplockState.c)
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x14053C86C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 */

void __fastcall FsRtlpCancelReadOnlyOplockIrp(__int64 a1, char a2)
{
  __int64 v3; // rdi
  char v4; // r14
  _QWORD *i; // rbx

  v3 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  v4 = 0;
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v3 + 152));
  for ( i = *(_QWORD **)(v3 + 40); i != (_QWORD *)(v3 + 40); i = (_QWORD *)*i )
  {
    if ( *((_BYTE *)i - 100) )
    {
      i = (_QWORD *)i[1];
      FsRtlpRemoveAndCompleteReadOnlyIrp(*i, 3221225760LL, 0LL, v3);
      v4 = 1;
    }
  }
  if ( v4 )
    FsRtlpComputeShareableOplockState((_QWORD *)v3);
  if ( !a2 )
    ExReleaseFastMutex(*(PFAST_MUTEX *)(v3 + 152));
}
