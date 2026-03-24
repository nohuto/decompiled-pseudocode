/*
 * XREFs of MiMapLockedPagesInUserSpaceHelper @ 0x1402EB224
 * Callers:
 *     MmRotatePhysicalView @ 0x14065FD60 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076ACC0 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x140288AE0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14028BE50 (MiWorkingSetIsContended.c)
 *     MiMakeSystemAddressValid @ 0x14028EA10 (MiMakeSystemAddressValid.c)
 *     MiInsertVad @ 0x1402969B0 (MiInsertVad.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiInsertPhysicalPteMapping @ 0x1402EB468 (MiInsertPhysicalPteMapping.c)
 *     KeShouldYieldProcessor @ 0x1402F1320 (KeShouldYieldProcessor.c)
 */

__int64 __fastcall MiMapLockedPagesInUserSpaceHelper(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  _QWORD *v7; // r13
  _KPROCESS *Process; // rdx
  ULONG_PTR v10; // r15
  unsigned int v11; // esi
  unsigned int v12; // ebx
  __int64 v13; // rbp
  unsigned __int64 v14; // rdi
  unsigned __int8 v15; // r12
  unsigned int v16; // r14d
  char v17; // al
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  __int64 v23; // [rsp+68h] [rbp+10h]

  v7 = (_QWORD *)a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((a7 >> 31) & 0xFFFFFFFD) + 4;
  if ( (_DWORD)a4 )
  {
    if ( (_DWORD)a4 == 2 )
      v11 |= 0x18u;
  }
  else
  {
    v11 |= 8u;
  }
  v12 = a6;
  v13 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  if ( a6 )
  {
    MiInsertVad(a6, (__int64)Process, 1LL, a4);
    v12 = (*(_DWORD *)(a6 + 48) >> 12) & 0x3F;
  }
  v14 = 0LL;
  v15 = MiLockWorkingSetShared(v13, (__int64)Process, a3, a4);
  v23 = a2 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    v16 = v11;
    if ( v7 )
    {
      v16 = (*(_DWORD *)(48LL * *v7 - 0x58000000000LL + 16) >> 5) & 7;
      v17 = *(_BYTE *)(48LL * *v7 - 0x58000000000LL + 34) >> 6;
      if ( v17 == 2 )
      {
        v16 |= 0x18u;
      }
      else if ( !v17 )
      {
        v16 |= 8u;
      }
      ++v7;
    }
    if ( !v14 )
      goto LABEL_23;
    if ( (v10 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(v13, v14);
LABEL_23:
      v14 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v10, 0LL, v12, v15, 0);
    }
    MiInsertPhysicalPteMapping(v10, *(_QWORD *)(v23 + v10), v16);
    v10 += 8LL;
    if ( (v10 & 0x78) == 0
      && (MiWorkingSetIsContended(v13) || (unsigned int)MiPageTableLockIsContended(v13, v14) || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(v13, v14);
      MiUnlockWorkingSetShared(v13, v15);
      v14 = 0LL;
      MiLockWorkingSetShared(v13, v19, v20, v21);
    }
    --a5;
  }
  while ( a5 );
  if ( v14 )
    MiUnlockPageTableInternal(v13, v14);
  return MiUnlockWorkingSetShared(v13, v15);
}
