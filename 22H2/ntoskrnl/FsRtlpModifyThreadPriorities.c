/*
 * XREFs of FsRtlpModifyThreadPriorities @ 0x1403798E4
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1402D55B0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x140304D20 (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x140306650 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakToII @ 0x14031DE1C (FsRtlpOplockBreakToII.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14036C590 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpOplockBreakToNone @ 0x14036CD18 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403929CC (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F0208 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404F0144 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14088BEAC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14088BFE8 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1402CDF90 (PsBoostThreadIoEx.c)
 *     FsRtlpDoBoost @ 0x140323D50 (FsRtlpDoBoost.c)
 */

void __fastcall FsRtlpModifyThreadPriorities(__int64 a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rcx
  _BYTE *v7; // r9
  __int64 *i; // rdi

  if ( a3 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 )
    {
      v7 = (_BYTE *)(a1 + 144);
    }
    else
    {
      if ( !a2 )
      {
LABEL_13:
        for ( i = *(__int64 **)(a1 + 72); i != (__int64 *)(a1 + 72); i = (__int64 *)*i )
          FsRtlpDoBoost(i[5], (__int64)CurrentThread, (_BYTE *)(a1 + 32), (_BYTE *)i + 48, (void *)a1);
        return;
      }
      v6 = *(_QWORD *)(a2 + 40);
      v7 = (_BYTE *)(a2 + 48);
    }
    if ( v6 )
    {
      FsRtlpDoBoost(v6, (__int64)CurrentThread, (_BYTE *)(a1 + 32), v7, (void *)a1);
      return;
    }
    goto LABEL_13;
  }
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 48) & 0x20) != 0 )
    {
      PsBoostThreadIoEx(*(_QWORD *)(a2 + 40), 1, 1, (void *)a1);
      *(_DWORD *)(a2 + 48) &= ~0x20u;
    }
  }
  else if ( (*(_DWORD *)(a1 + 144) & 0x20) != 0 )
  {
    PsBoostThreadIoEx(*(_QWORD *)(a1 + 24), 1, 1, (void *)a1);
    *(_DWORD *)(a1 + 144) &= ~0x20u;
  }
}
