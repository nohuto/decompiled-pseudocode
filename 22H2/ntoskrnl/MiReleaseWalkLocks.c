/*
 * XREFs of MiReleaseWalkLocks @ 0x140302EB0
 * Callers:
 *     MiGetNextPageTablePte @ 0x14020CD70 (MiGetNextPageTablePte.c)
 *     MiYieldPageTableWalk @ 0x140302E34 (MiYieldPageTableWalk.c)
 *     MiDeleteEmptyPageTableTail @ 0x1403F44C0 (MiDeleteEmptyPageTableTail.c)
 *     MiQueryEPTAccessedState @ 0x14053B940 (MiQueryEPTAccessedState.c)
 *     MiCombineWorkingSetTail @ 0x14055CD40 (MiCombineWorkingSetTail.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAA0 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiReleaseWalkLocks(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rdi

  v1 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 24), v1);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  if ( (*(_WORD *)a1 & 4) != 0 )
  {
    MiUnlockWorkingSetShared(v3, *(_BYTE *)(a1 + 6));
  }
  else
  {
    if ( (*(_WORD *)a1 & 0x400) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4E31C);
    MiUnlockWorkingSetExclusive(v3, *(_BYTE *)(a1 + 6));
  }
  *(_BYTE *)(a1 + 2) |= 1u;
}
