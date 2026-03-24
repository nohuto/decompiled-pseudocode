/*
 * XREFs of MiReleaseFaultState @ 0x14028FB74
 * Callers:
 *     MiUserFault @ 0x14020D730 (MiUserFault.c)
 *     MiFinishHardFault @ 0x140239200 (MiFinishHardFault.c)
 *     MiInPagePageTable @ 0x14028C440 (MiInPagePageTable.c)
 *     MiIssueHardFault @ 0x14028F030 (MiIssueHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402E2190 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x1402E29C8 (MiPrivateFixup.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MiKernelWriteToExecutableMemory @ 0x1405488F4 (MiKernelWriteToExecutableMemory.c)
 *     MiReleaseFaultSynchronization @ 0x140548E04 (MiReleaseFaultSynchronization.c)
 *     MiIdealClusterPage @ 0x140555D54 (MiIdealClusterPage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAA0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockFaultPageTable @ 0x1402927C8 (MiUnlockFaultPageTable.c)
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
