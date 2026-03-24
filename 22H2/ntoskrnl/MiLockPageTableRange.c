/*
 * XREFs of MiLockPageTableRange @ 0x1403220FC
 * Callers:
 *     MmStoreAllocateVirtualMemory @ 0x1406991AC (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiLockPageTablePage @ 0x140209DB0 (MiLockPageTablePage.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x14028EA10 (MiMakeSystemAddressValid.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiUnlockPageTableRange @ 0x14032A12C (MiUnlockPageTableRange.c)
 */

__int64 __fastcall MiLockPageTableRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 *v5; // rsi
  unsigned __int64 v6; // r12
  ULONG_PTR v7; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int8 v9; // r14
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbx
  int v12; // ebx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx

  v5 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = v6;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = MiLockWorkingSetShared((__int64)v5, a2, a3, a4);
  if ( v6 > v8 )
  {
LABEL_5:
    MiUnlockWorkingSetShared((__int64)v5, v9);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      v10 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v7, 0LL, 0, v9, 0);
      v11 = *(_QWORD *)v10;
      if ( MiPteInShadowRange(v10)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v11 & 1) != 0
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v15 = *((_QWORD *)&Flink->Flink + ((v10 >> 3) & 0x1FF));
          v16 = v11 | 0x20;
          if ( (v15 & 0x20) == 0 )
            v16 = v11;
          v11 = v16;
          if ( (v15 & 0x42) != 0 )
            v11 = v16 | 0x42;
        }
      }
      v12 = MiLockPageTablePage(48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 2);
      MiUnlockPageTableInternal((__int64)v5, v10);
      if ( !v12 )
        break;
      v7 = (v7 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      if ( v7 > v8 )
        goto LABEL_5;
    }
    MiUnlockWorkingSetShared((__int64)v5, v9);
    if ( v7 != v6 )
      MiUnlockPageTableRange(a1, (__int64)((v7 - 8) << 25) >> 16);
    return 3221225626LL;
  }
}
