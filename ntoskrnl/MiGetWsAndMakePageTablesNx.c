/*
 * XREFs of MiGetWsAndMakePageTablesNx @ 0x1403AC164
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x14085D06C (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     KeFlushTb @ 0x140323CB0 (KeFlushTb.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiPerformSafePdeWrite @ 0x1403C0578 (MiPerformSafePdeWrite.c)
 */

__int64 MiGetWsAndMakePageTablesNx()
{
  unsigned __int64 *v0; // rsi
  unsigned __int8 v1; // bl
  __int64 v2; // rax
  __int64 v3; // rcx

  v0 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v1 = MiLockWorkingSetShared((__int64)v0);
  MiLockPageTableInternal((__int64)v0, 0xFFFFF6FB7DBEDF68uLL, 0);
  v2 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
  MiPerformSafePdeWrite(v3, 0xFFFFF6FB7DBEDF68uLL, v2, 2LL);
  MiUnlockPageTableInternal((__int64)v0, 0xFFFFF6FB7DBEDF68uLL);
  MiUnlockWorkingSetShared((__int64)v0, v1);
  return KeFlushTb(1LL, 0);
}
