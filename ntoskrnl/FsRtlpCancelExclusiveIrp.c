/*
 * XREFs of FsRtlpCancelExclusiveIrp @ 0x1403ACFD0
 * Callers:
 *     FsRtlpExclusiveIrpCancelRoutine @ 0x1403ACFB0 (FsRtlpExclusiveIrpCancelRoutine.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403B9C94 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403CD730 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x14053C1D0 (FsRtlpGrantAnyOplockFromExclusive.c)
 * Callees:
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140201B90 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpClearOwner @ 0x14023AB1C (FsRtlpClearOwner.c)
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     FsRtlpModifyThreadPriorities @ 0x1402ECCB4 (FsRtlpModifyThreadPriorities.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall FsRtlpCancelExclusiveIrp(__int64 a1, char a2, char a3)
{
  __int64 v5; // rbx
  _QWORD *v6; // rcx

  v5 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  if ( !a2 )
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v5 + 152));
  if ( *(_QWORD *)v5 && *(_BYTE *)(*(_QWORD *)v5 + 68LL) )
  {
    FsRtlpModifyThreadPriorities(v5, 0LL, 0);
    FsRtlpClearOwner(v5, 0LL);
    *(_BYTE *)(v5 + 32) = 0;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 56LL) == v5 )
      *(_QWORD *)(*(_QWORD *)v5 + 56LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)v5 + 48LL) = -1073741536;
    IofCompleteRequest(*(PIRP *)v5, 1);
    *(_QWORD *)v5 = 0LL;
    ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 8), 0x746C6644u);
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_DWORD *)(v5 + 144) = *(_DWORD *)(v5 + 144) & 0x20 | 1;
    if ( a3 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD **)(v5 + 88);
        if ( v6 == (_QWORD *)(v5 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v6);
      }
    }
  }
  if ( !a2 )
    ExReleaseFastMutex(*(PFAST_MUTEX *)(v5 + 152));
}
