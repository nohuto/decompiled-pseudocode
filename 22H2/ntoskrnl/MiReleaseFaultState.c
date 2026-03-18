/*
 * XREFs of MiReleaseFaultState @ 0x1402EF2A0
 * Callers:
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 *     MiUserFault @ 0x140235870 (MiUserFault.c)
 *     MiFinishHardFault @ 0x1402D9300 (MiFinishHardFault.c)
 *     MiInPagePageTable @ 0x1402E4D70 (MiInPagePageTable.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MiUnlockSystemVa @ 0x1402EED60 (MiUnlockSystemVa.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF008 (MiWaitForCollidedFaultComplete.c)
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 *     MiFaultGetFileExtents @ 0x140645EF4 (MiFaultGetFileExtents.c)
 *     MiKernelWriteToExecutableMemory @ 0x1406463DC (MiKernelWriteToExecutableMemory.c)
 *     MiIdealClusterPage @ 0x14066A500 (MiIdealClusterPage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A1D0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockFaultPageTable @ 0x1402A1628 (MiUnlockFaultPageTable.c)
 */

__int64 __fastcall MiReleaseFaultState(__int64 a1, unsigned __int8 a2, _BYTE *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  __int64 v8; // r8
  __int64 v9; // r9

  v3 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 16);
  MiUnlockFaultPageTable((__int64 *)a1);
  if ( a3 )
    *a3 = *(_BYTE *)(a1 + 12);
  else
    a2 = *(_BYTE *)(a1 + 12);
  if ( (*(_BYTE *)(a1 + 13) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v3, a2, v8, v9);
  else
    MiUnlockWorkingSetShared(v3, a2);
  return v5;
}
