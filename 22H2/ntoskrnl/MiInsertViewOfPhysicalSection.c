/*
 * XREFs of MiInsertViewOfPhysicalSection @ 0x140630CA0
 * Callers:
 *     MiMapViewOfPhysicalSection @ 0x140A30D50 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140277310 (MiMakeSystemAddressValid.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
 *     MiInsertVad @ 0x140287B70 (MiInsertVad.c)
 *     MiUnlockVad @ 0x140289B80 (MiUnlockVad.c)
 *     MiLockVad @ 0x14029C6B0 (MiLockVad.c)
 *     MiWorkingSetIsContended @ 0x1402E69F0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402E6A30 (MiPageTableLockIsContended.c)
 *     MiInsertPhysicalPteMapping @ 0x1402F1714 (MiInsertPhysicalPteMapping.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140333AD0 (KeShouldYieldProcessor.c)
 */

int __fastcall MiInsertViewOfPhysicalSection(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  unsigned int v6; // r12d
  ULONG_PTR v7; // rbp
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int8 v11; // bl
  unsigned __int64 v13; // [rsp+70h] [rbp+8h]

  v6 = (*(_DWORD *)(a2 + 48) >> 7) & 0x1F;
  v7 = 8 * ((*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 8 * ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v9 = 0LL;
  v10 = a1 + 1664;
  MiLockVad((__int64)CurrentThread, a2);
  MiInsertVad(a2, a1, 0);
  v11 = MiLockWorkingSetShared(a1 + 1664);
  if ( v7 > v13 )
    goto LABEL_14;
  do
  {
    if ( !v9 )
      goto LABEL_5;
    if ( (v7 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(v10, v9);
LABEL_5:
      MiMakeSystemAddressValid(v7, 0LL, (*(_DWORD *)(a2 + 48) >> 12) & 0x7F, v11, 0);
      v9 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    MiInsertPhysicalPteMapping(v7, a3, v6);
    v7 += 8LL;
    if ( (v7 & 0x78) == 0
      && (MiWorkingSetIsContended(v10) || (unsigned int)MiPageTableLockIsContended(v10, v9) || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(v10, v9);
      MiUnlockWorkingSetShared(v10, v11);
      v9 = 0LL;
      MiLockWorkingSetShared(v10);
    }
    ++a3;
  }
  while ( v7 <= v13 );
  if ( v9 )
    MiUnlockPageTableInternal(v10, v9);
LABEL_14:
  MiUnlockWorkingSetShared(v10, v11);
  return MiUnlockVad((__int64)CurrentThread, a2);
}
