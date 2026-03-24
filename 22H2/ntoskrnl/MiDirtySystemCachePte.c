/*
 * XREFs of MiDirtySystemCachePte @ 0x1403159C8
 * Callers:
 *     MmCopyToCachedPage @ 0x1402B1B90 (MmCopyToCachedPage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x140290080 (MiWriteValidPteNewProtection.c)
 *     MiLockWorkingSetOptimal @ 0x140290314 (MiLockWorkingSetOptimal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiDirtySystemCachePte(__int64 a1, unsigned __int64 a2, __int16 a3, _DWORD *a4)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int8 v8; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0x42) == 0 )
  {
    v8 = 0;
    if ( (a3 & 0x800) != 0 )
    {
      v6 = MiLockWorkingSetOptimal(a1, a2, &v8, a4);
      v7 = MI_READ_PTE_LOCK_FREE(a2);
      if ( (v7 & 1) != 0 && (v7 & 0x42) == 0 && (v7 & 0x800) != 0 )
        MiWriteValidPteNewProtection(a2, v7 | 0x62);
      MiUnlockPageTableInternal(a1, v6);
      MiUnlockWorkingSetShared(a1, v8);
    }
  }
}
