/*
 * XREFs of MiReleaseFaultState @ 0x1402A2FD4
 * Callers:
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiUserFault @ 0x140268260 (MiUserFault.c)
 *     MiFinishHardFault @ 0x140284200 (MiFinishHardFault.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MiUnlockSystemVa @ 0x1402A2820 (MiUnlockSystemVa.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402A2D3C (MiWaitForCollidedFaultComplete.c)
 *     MiInPagePageTable @ 0x140345FA0 (MiInPagePageTable.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiFaultGetFileExtents @ 0x1406438D0 (MiFaultGetFileExtents.c)
 *     MiKernelWriteToExecutableMemory @ 0x140643DB8 (MiKernelWriteToExecutableMemory.c)
 *     MiIdealClusterPage @ 0x140667EB0 (MiIdealClusterPage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockFaultPageTable @ 0x140343598 (MiUnlockFaultPageTable.c)
 */

__int64 __fastcall MiReleaseFaultState(__int64 a1, unsigned __int8 a2, _BYTE *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbp

  v3 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 16);
  MiUnlockFaultPageTable(a1);
  if ( a3 )
    *a3 = *(_BYTE *)(a1 + 12);
  else
    a2 = *(_BYTE *)(a1 + 12);
  if ( (*(_BYTE *)(a1 + 13) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v3, a2);
  else
    MiUnlockWorkingSetShared(v3, a2);
  return v5;
}
