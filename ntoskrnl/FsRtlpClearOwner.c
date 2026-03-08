/*
 * XREFs of FsRtlpClearOwner @ 0x14023AB1C
 * Callers:
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x14023AB60 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlCheckOplockEx2 @ 0x14023AE40 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x14023BD20 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x14023E404 (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestShareableOplock @ 0x14023EEF0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlUninitializeOplock @ 0x1402E06C0 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakToII @ 0x1402F3B90 (FsRtlpOplockBreakToII.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1403ACFD0 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403B9C94 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403CD730 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14053BB78 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOplockBreakToNone @ 0x14053C500 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1406B3240 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14093B3DC (FsRtlpOpBatchBreakClosePending.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall FsRtlpClearOwner(__int64 a1, __int64 a2)
{
  void *v3; // rcx

  if ( a2 )
  {
    v3 = *(void **)(a2 + 40);
    *(_QWORD *)(a2 + 40) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  else
  {
    v3 = *(void **)(a1 + 24);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( v3 )
    ObDereferenceObjectDeferDeleteWithTag(v3, 0x746C6644u);
}
