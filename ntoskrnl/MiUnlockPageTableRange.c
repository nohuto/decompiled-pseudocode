/*
 * XREFs of MiUnlockPageTableRange @ 0x14064AC34
 * Callers:
 *     MiLockPageTableRange @ 0x14064AAA8 (MiLockPageTableRange.c)
 *     MmStoreFreeVirtualMemory @ 0x140A430C0 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableCharges @ 0x140345720 (MiUnlockPageTableCharges.c)
 */

__int64 __fastcall MiUnlockPageTableRange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v3; // rdi
  unsigned __int64 v4; // rsi
  unsigned __int8 v5; // bp
  unsigned __int64 i; // rbx
  unsigned __int64 v7; // rax

  v3 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v4 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v5 = MiLockWorkingSetShared((__int64)v3);
  for ( i = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL; i <= v4; i += 8LL )
  {
    MiLockPageTableInternal((__int64)v3, i, 0);
    v7 = MI_READ_PTE_LOCK_FREE(i);
    MiUnlockPageTableCharges(48 * ((v7 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2);
    MiUnlockPageTableInternal((__int64)v3, i);
  }
  return MiUnlockWorkingSetShared((__int64)v3, v5);
}
