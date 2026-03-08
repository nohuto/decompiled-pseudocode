/*
 * XREFs of FsRtlpModifyThreadPriorities @ 0x1402ECCB4
 * Callers:
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x14023AB60 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x14023BD20 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x14023E404 (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x1402E06C0 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakToII @ 0x1402F3B90 (FsRtlpOplockBreakToII.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1403ACFD0 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403CD730 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14053BB78 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOplockBreakToNone @ 0x14053C500 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14093B3DC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14093B518 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1402634D0 (PsBoostThreadIoEx.c)
 *     FsRtlpDoBoost @ 0x1402ECD68 (FsRtlpDoBoost.c)
 */

void __fastcall FsRtlpModifyThreadPriorities(__int64 a1, __int64 a2, char a3)
{
  unsigned int CurrentThread; // ebp
  __int64 v6; // rcx
  int v7; // r9d
  _QWORD *i; // rdi

  if ( a3 )
  {
    CurrentThread = (unsigned int)KeGetCurrentThread();
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 )
    {
      v7 = a1 + 144;
    }
    else if ( !a2 || (v6 = *(_QWORD *)(a2 + 40), v7 = a2 + 48, !v6) )
    {
      for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); i = (_QWORD *)*i )
        FsRtlpDoBoost(i[5], CurrentThread, a1 + 32, (_DWORD)i + 48, a1);
      return;
    }
    FsRtlpDoBoost(v6, CurrentThread, a1 + 32, v7, a1);
    return;
  }
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 48) & 0x20) != 0 )
    {
      PsBoostThreadIoEx(*(_QWORD *)(a2 + 40), 1, 1, a1);
      *(_DWORD *)(a2 + 48) &= ~0x20u;
    }
  }
  else if ( (*(_DWORD *)(a1 + 144) & 0x20) != 0 )
  {
    PsBoostThreadIoEx(*(_QWORD *)(a1 + 24), 1, 1, a1);
    *(_DWORD *)(a1 + 144) &= ~0x20u;
  }
}
