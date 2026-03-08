/*
 * XREFs of MiCommitEnclavePages @ 0x140644C84
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1407C5270 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402C9870 (KeShouldYieldProcessor.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x1403478E0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x140347920 (MiPageTableLockIsContended.c)
 *     MiAddPagesToEnclave @ 0x14064445C (MiAddPagesToEnclave.c)
 */

__int64 __fastcall MiCommitEnclavePages(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6)
{
  unsigned int v7; // r15d
  ULONG_PTR v8; // r12
  ULONG_PTR v9; // r13
  unsigned int v10; // ebx
  ULONG_PTR v11; // rbp
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdi
  unsigned __int64 *v14; // rsi
  unsigned __int8 v15; // al
  unsigned __int8 v16; // r15
  bool v17; // zf
  unsigned __int64 v18; // rax
  unsigned __int8 v20[8]; // [rsp+80h] [rbp+28h]

  if ( a5 != 4096 )
    return 3221225715LL;
  v7 = a6;
  if ( (a6 & 7) == 0 || a6 > 7 || (a6 & 5) == 5 )
    return 3221225714LL;
  v8 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 0;
  v11 = v8;
  v12 = 0LL;
  v13 = 0LL;
  v14 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v15 = MiLockWorkingSetShared((__int64)v14);
  v20[0] = v15;
  if ( v8 > v9 )
    goto LABEL_28;
  v16 = v15;
  do
  {
    if ( (v11 & 0x78) != 0 || v11 == v8 )
    {
      if ( !v13 )
        goto LABEL_21;
LABEL_19:
      if ( (v11 & 0xFFF) != 0 )
        goto LABEL_22;
      MiUnlockPageTableInternal((__int64)v14, v13);
      goto LABEL_21;
    }
    if ( MiWorkingSetIsContended((__int64)v14) || KeShouldYieldProcessor() )
    {
      if ( v13 )
LABEL_16:
        MiUnlockPageTableInternal((__int64)v14, v13);
      MiUnlockWorkingSetShared((__int64)v14, v16);
      MiLockWorkingSetShared((__int64)v14);
      goto LABEL_21;
    }
    if ( v13 )
    {
      if ( (unsigned int)MiPageTableLockIsContended((__int64)v14, v13) )
        goto LABEL_16;
      goto LABEL_19;
    }
LABEL_21:
    v13 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v11, 0LL, (*(_DWORD *)(a2 + 48) >> 12) & 0x7F, v16, 0);
LABEL_22:
    v17 = (MI_READ_PTE_LOCK_FREE(v11) & 1) == 0;
    v18 = v12 + 1;
    if ( !v17 )
      v18 = v12;
    v11 += 8LL;
    v12 = v18;
  }
  while ( v11 <= v9 );
  v7 = a6;
  if ( v13 )
    MiUnlockPageTableInternal((__int64)v14, v13);
  v15 = v20[0];
LABEL_28:
  MiUnlockWorkingSetShared((__int64)v14, v15);
  if ( v12 )
    return (unsigned int)MiAddPagesToEnclave(a2, v12, v8, v9, v7);
  return v10;
}
