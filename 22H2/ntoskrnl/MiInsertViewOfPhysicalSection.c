/*
 * XREFs of MiInsertViewOfPhysicalSection @ 0x1403C6798
 * Callers:
 *     MiMapViewOfPhysicalSection @ 0x1407C33C8 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x140288AE0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14028BE50 (MiWorkingSetIsContended.c)
 *     MiMakeSystemAddressValid @ 0x14028EA10 (MiMakeSystemAddressValid.c)
 *     MiUnlockVad @ 0x140294CD8 (MiUnlockVad.c)
 *     MiInsertVad @ 0x1402969B0 (MiInsertVad.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiInsertPhysicalPteMapping @ 0x1402EB468 (MiInsertPhysicalPteMapping.c)
 *     KeShouldYieldProcessor @ 0x1402F1320 (KeShouldYieldProcessor.c)
 */

char __fastcall MiInsertViewOfPhysicalSection(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  unsigned int v6; // r13d
  ULONG_PTR v7; // rbp
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  _DWORD *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *v14; // r9
  unsigned __int8 v15; // bl
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  unsigned __int64 v20; // [rsp+70h] [rbp+8h]

  v6 = (*(_DWORD *)(a2 + 48) >> 7) & 0x1F;
  v7 = 8 * ((*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v20 = 8 * ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v10 = a1 + 1664;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  MiInsertVad(a2, a1, 1LL, v11);
  v15 = MiLockWorkingSetShared(v10, v12, v13, v14);
  if ( v7 > v20 )
    goto LABEL_8;
  do
  {
    if ( !v9 )
      goto LABEL_9;
    if ( (v7 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(v10, v9);
LABEL_9:
      MiMakeSystemAddressValid(v7, 0LL, (*(_DWORD *)(a2 + 48) >> 12) & 0x3F, v15, 0);
      v9 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    MiInsertPhysicalPteMapping(v7, a3, v6);
    v7 += 8LL;
    if ( (v7 & 0x78) == 0
      && (MiWorkingSetIsContended(v10) || (unsigned int)MiPageTableLockIsContended(v10, v9) || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(v10, v9);
      MiUnlockWorkingSetShared(v10, v15);
      v9 = 0LL;
      MiLockWorkingSetShared(v10, v17, v18, v19);
    }
    ++a3;
  }
  while ( v7 <= v20 );
  if ( v9 )
    MiUnlockPageTableInternal(v10, v9);
LABEL_8:
  MiUnlockWorkingSetShared(v10, v15);
  return MiUnlockVad((__int64)CurrentThread, a2);
}
