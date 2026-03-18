/*
 * XREFs of FsRtlpModifyThreadPriorities @ 0x140358684
 * Callers:
 *     FsRtlpOplockBreakToII @ 0x1402FBB38 (FsRtlpOplockBreakToII.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1402FD670 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1402FE830 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x140300F14 (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x14034C030 (FsRtlUninitializeOplock.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1403B1D20 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403D2CD0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14053E018 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOplockBreakToNone @ 0x14053E9A0 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14093E3FC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14093E538 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14022FF50 (PsBoostThreadIoEx.c)
 *     FsRtlpDoBoost @ 0x140358738 (FsRtlpDoBoost.c)
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
