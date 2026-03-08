/*
 * XREFs of MiLockPageTableRange @ 0x14064AAA8
 * Callers:
 *     MmStoreAllocateVirtualMemory @ 0x140A42EFC (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTablePage @ 0x14026A4D0 (MiLockPageTablePage.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableRange @ 0x14064AC34 (MiUnlockPageTableRange.c)
 */

__int64 __fastcall MiLockPageTableRange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v3; // r14
  unsigned __int64 v4; // r12
  ULONG_PTR v5; // rsi
  unsigned __int64 v6; // rbp
  unsigned __int8 v7; // r15
  unsigned __int64 v8; // rax
  int v9; // ebx

  v3 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = v4;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = MiLockWorkingSetShared((__int64)v3);
  if ( v4 > v6 )
  {
LABEL_4:
    MiUnlockWorkingSetShared((__int64)v3, v7);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      MiMakeSystemAddressValid(v5, 0LL, 0, v7, 0);
      v8 = MI_READ_PTE_LOCK_FREE(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v9 = MiLockPageTablePage(48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2);
      MiUnlockPageTableInternal((__int64)v3, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( !v9 )
        break;
      v5 = (v5 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      if ( v5 > v6 )
        goto LABEL_4;
    }
    MiUnlockWorkingSetShared((__int64)v3, v7);
    if ( v5 != v4 )
      MiUnlockPageTableRange(a1, (__int64)((v5 - 8) << 25) >> 16);
    return 3221225626LL;
  }
}
