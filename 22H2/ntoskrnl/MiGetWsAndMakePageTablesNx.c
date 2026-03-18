/*
 * XREFs of MiGetWsAndMakePageTablesNx @ 0x1403B0EB4
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x140860EDC (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402376E0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     KeFlushTb @ 0x140279850 (KeFlushTb.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
 *     MiPerformSafePdeWrite @ 0x1403C5E38 (MiPerformSafePdeWrite.c)
 */

__int64 MiGetWsAndMakePageTablesNx()
{
  unsigned __int64 *v0; // rsi
  unsigned __int8 v1; // bl
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx

  v0 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v1 = MiLockWorkingSetShared((__int64)v0);
  MiLockPageTableInternal((__int64)v0, 0xFFFFF6FB7DBEDF68uLL, 0, v2);
  v3 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
  MiPerformSafePdeWrite(v4, 0xFFFFF6FB7DBEDF68uLL, v3, 2LL);
  MiUnlockPageTableInternal((__int64)v0, 0xFFFFF6FB7DBEDF68uLL);
  MiUnlockWorkingSetShared((__int64)v0, v1);
  return KeFlushTb(1u, 0);
}
