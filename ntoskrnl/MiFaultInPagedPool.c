/*
 * XREFs of MiFaultInPagedPool @ 0x14062E748
 * Callers:
 *     MiQueryAddressState @ 0x14031B4F0 (MiQueryAddressState.c)
 *     MiProtectPrivateMemory @ 0x140344540 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 */

char __fastcall MiFaultInPagedPool(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rsi
  char *AnyMultiplexedVm; // rbx
  unsigned __int8 v5; // r14
  __int16 v6; // ax

  v2 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v5 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiLockPageTableInternal((__int64)AnyMultiplexedVm, v3, 0);
  v6 = MI_READ_PTE_LOCK_FREE(v2);
  if ( (v6 & 1) != 0 && (v6 & 0x200) != 0 )
    MiCopyOnWrite(BugCheckParameter2, v2, 0xFFFFFFFFFFFFFFFFuLL, 4);
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v5);
  return *(_BYTE *)BugCheckParameter2;
}
