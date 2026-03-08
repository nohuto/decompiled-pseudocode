/*
 * XREFs of MiVadRangeIsIoSpace @ 0x14062F2D4
 * Callers:
 *     MiCopyVirtualMemory @ 0x1407C5950 (MiCopyVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402C9870 (KeShouldYieldProcessor.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x1403478E0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x140347920 (MiPageTableLockIsContended.c)
 */

__int64 __fastcall MiVadRangeIsIoSpace(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r15
  __int64 v5; // rbx
  ULONG_PTR v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 *v9; // rbp
  unsigned __int8 v10; // r13
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+10h]
  __int64 v16; // [rsp+80h] [rbp+18h]

  v16 = a3;
  v15 = a2;
  v14 = a1;
  v3 = a2;
  v4 = a3;
  v5 = 0LL;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (((a2 + a3 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0LL;
  v9 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v10 = MiLockWorkingSetShared((__int64)v9);
  if ( v6 > v7 )
    goto LABEL_16;
  do
  {
    if ( v8 )
    {
      if ( (v6 & 0xFFF) != 0 )
        goto LABEL_6;
      MiUnlockPageTableInternal((__int64)v9, v8);
    }
    v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v6, 0LL, 0, v10, 0);
LABEL_6:
    v14 = MI_READ_PTE_LOCK_FREE(v6);
    v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14) >> 12) & 0xFFFFFFFFFFLL;
    if ( v11 > qword_140C65820 || ((*(_QWORD *)(48 * v11 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      break;
    v6 += 8LL;
    if ( (v6 & 0x78) == 0
      && (MiWorkingSetIsContended((__int64)v9)
       || (unsigned int)MiPageTableLockIsContended((__int64)v9, v8)
       || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal((__int64)v9, v8);
      MiUnlockWorkingSetShared((__int64)v9, v10);
      v8 = 0LL;
      MiLockWorkingSetShared((__int64)v9);
    }
  }
  while ( v6 <= v7 );
  v4 = v16;
  v3 = v15;
  if ( v8 )
    MiUnlockPageTableInternal((__int64)v9, v8);
LABEL_16:
  MiUnlockWorkingSetShared((__int64)v9, v10);
  v12 = (__int64)(v6 << 25) >> 16;
  if ( v12 >= v3 )
  {
    v5 = v12 - v3;
    if ( v12 - v3 > v4 )
      return v4;
  }
  return v5;
}
