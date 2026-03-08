/*
 * XREFs of MiUnlockFaultPageTable @ 0x140343598
 * Callers:
 *     MiResolvePageTablePage @ 0x1402689F0 (MiResolvePageTablePage.c)
 *     MiReleaseFaultState @ 0x1402A2FD4 (MiReleaseFaultState.c)
 *     MiIssueHardFault @ 0x140342F00 (MiIssueHardFault.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402CFF20 (MiEmptyDeferredWorkingSetEntries.c)
 */

void __fastcall MiUnlockFaultPageTable(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( *(_WORD *)(a1 + 10) )
      MiEmptyDeferredWorkingSetEntries(a1);
    MiUnlockPageTableInternal(v1, *(_QWORD *)(a1 + 16));
    *(_BYTE *)(a1 + 13) |= 2u;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
