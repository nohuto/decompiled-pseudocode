/*
 * XREFs of MiUnlockVa @ 0x14034A190
 * Callers:
 *     MiMakeVaRangeNoAccess @ 0x1402EF244 (MiMakeVaRangeNoAccess.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     NtLockVirtualMemory @ 0x140344C50 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1403479C0 (NtUnlockVirtualMemory.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWsle @ 0x1403443C0 (MiUnlockWsle.c)
 */

__int64 __fastcall MiUnlockVa(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax

  v4 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  return MiUnlockWsle(a1, a2, 48 * ((v4 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
}
