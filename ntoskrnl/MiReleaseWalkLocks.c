/*
 * XREFs of MiReleaseWalkLocks @ 0x1402D45CC
 * Callers:
 *     MiGetNextPageTablePte @ 0x140224090 (MiGetNextPageTablePte.c)
 *     MiDeleteEmptyPageTableTail @ 0x1402D3FC0 (MiDeleteEmptyPageTableTail.c)
 *     MiYieldPageTableWalk @ 0x1402D4558 (MiYieldPageTableWalk.c)
 *     MiQueryEPTAccessedState @ 0x140463B2C (MiQueryEPTAccessedState.c)
 *     MiProtectDriverSectionPte @ 0x140618060 (MiProtectDriverSectionPte.c)
 *     MiUnlockPhysicalPageByVa @ 0x14061A990 (MiUnlockPhysicalPageByVa.c)
 *     MiCombineWorkingSetTail @ 0x140651030 (MiCombineWorkingSetTail.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
  if ( (*(_DWORD *)a1 & 4) != 0 )
  {
    MiUnlockWorkingSetShared(v3, *(_BYTE *)(a1 + 7));
  }
  else
  {
    if ( (*(_DWORD *)a1 & 0x400) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66CA4);
    MiUnlockWorkingSetExclusive(v3, *(_BYTE *)(a1 + 7));
  }
  *(_BYTE *)(a1 + 4) |= 1u;
}
