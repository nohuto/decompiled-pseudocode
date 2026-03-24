/*
 * XREFs of MiUnlockPageTableRange @ 0x14032A12C
 * Callers:
 *     MiLockPageTableRange @ 0x1403220FC (MiLockPageTableRange.c)
 *     MmStoreFreeVirtualMemory @ 0x1406A1BF0 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiUnlockPageTableCharges @ 0x140338DA8 (MiUnlockPageTableCharges.c)
 */

__int64 __fastcall MiUnlockPageTableRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 *v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  unsigned __int8 v7; // r15
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx

  v4 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v5 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v6 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v7 = MiLockWorkingSetShared((__int64)v4, 0xFFFFF6FB40000000uLL, 1073741816LL, a4);
  if ( v5 <= v6 )
  {
    v8 = v5;
    do
    {
      MiLockPageTableInternal((__int64)v4, v5, 0LL);
      v9 = *(_QWORD *)v5;
      if ( MiPteInShadowRange(v8)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v9 & 1) != 0
        && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v12 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
          v13 = v9 | 0x20;
          if ( (v12 & 0x20) == 0 )
            v13 = v9;
          v9 = v13;
          if ( (v12 & 0x42) != 0 )
            v9 = v13 | 0x42;
        }
      }
      MiUnlockPageTableCharges(48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
      MiUnlockPageTableInternal((__int64)v4, v5);
      v5 += 8LL;
      v8 = v5;
    }
    while ( v5 <= v6 );
  }
  return MiUnlockWorkingSetShared((__int64)v4, v7);
}
