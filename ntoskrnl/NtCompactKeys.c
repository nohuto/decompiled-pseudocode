/*
 * XREFs of NtCompactKeys @ 0x140A0A710
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140243978 (CmpAllocateTransientPoolWithQuota.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     CmpLockRegistryExclusive @ 0x1406B6454 (CmpLockRegistryExclusive.c)
 *     CmCheckNoTxContext @ 0x1406BD098 (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     CmpLogUnsupportedOperation @ 0x140A1D140 (CmpLogUnsupportedOperation.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmObReferenceObjectByHandle @ 0x140AF2300 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF24F0 (CmpPerformKeyBodyDeletionCheck.c)
 */

__int64 __fastcall NtCompactKeys(unsigned int a1, char *a2)
{
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rsi
  unsigned int v5; // r12d
  char v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // al
  __int64 v13; // r13
  struct _PRIVILEGE_SET *v14; // r15
  unsigned int v15; // r15d
  struct _PRIVILEGE_SET *v16; // r13
  __int64 v17; // rax
  PVOID *v18; // rdi
  __int64 v19; // r14
  KPROCESSOR_MODE PreviousMode; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  __int64 v23; // [rsp+40h] [rbp-48h]
  __int128 v24; // [rsp+50h] [rbp-38h] BYREF
  char v25; // [rsp+A8h] [rbp+20h]

  v24 = 0LL;
  TransientPoolWithQuota = 0LL;
  v5 = 0;
  v6 = 0;
  CmpInitializeThreadInfo((__int64)&v24);
  v9 = CmCheckNoTxContext();
  if ( v9 < 0 )
    goto LABEL_4;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
  {
    v9 = -1073741727;
LABEL_4:
    v12 = 0;
    goto LABEL_41;
  }
  if ( !a1 )
  {
    v9 = 0;
    goto LABEL_7;
  }
  if ( a1 >= 0x1FFFFFFF )
  {
    v9 = -1073741811;
    goto LABEL_4;
  }
  v13 = 8 * a1;
  TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota(v8, v13, 1633832259LL);
  if ( !TransientPoolWithQuota )
  {
    v9 = -1073741670;
    v12 = 0;
    v6 = 0;
    goto LABEL_41;
  }
  if ( PreviousMode == 1 && (_DWORD)v13 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a2[v13] > 0x7FFFFFFF0000LL || &a2[v13] < a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(TransientPoolWithQuota, a2, (unsigned int)v13);
  v14 = TransientPoolWithQuota;
  do
  {
    LOBYTE(v11) = PreviousMode;
    v9 = CmObReferenceObjectByHandle(
           *(_QWORD *)&v14->PrivilegeCount,
           131078,
           v10,
           v11,
           (__int64)TransientPoolWithQuota + 8 * v5,
           0LL);
    if ( v9 < 0 )
    {
      v12 = 0;
      v6 = 0;
      goto LABEL_41;
    }
    ++v5;
    v14 = (struct _PRIVILEGE_SET *)((char *)v14 + 8);
  }
  while ( v5 < a1 );
  v6 = CmpAcquireShutdownRundown(v8, v7, v10);
  v25 = v6;
  if ( !v6 )
  {
    v9 = -1073741431;
    v12 = 0;
    goto LABEL_41;
  }
  CmpLockRegistryExclusive();
  v23 = 0LL;
  v15 = 0;
  v16 = TransientPoolWithQuota;
  do
  {
    v22 = *(_QWORD *)&v16->PrivilegeCount;
    v9 = CmpPerformKeyBodyDeletionCheck(*(_QWORD *)&v16->PrivilegeCount, 0LL);
    if ( v9 < 0 )
      goto LABEL_39;
    if ( !v15 )
      v23 = *(_QWORD *)(*(_QWORD *)(v22 + 8) + 32LL);
    v17 = *(_QWORD *)(v22 + 8);
    v8 = v23;
    if ( v23 != *(_QWORD *)(v17 + 32) || (v8 = *(unsigned __int16 *)(v17 + 186), (v8 & 4) != 0) || (v8 & 0x10) != 0 )
    {
      v9 = -1073741811;
      goto LABEL_39;
    }
    if ( *(_WORD *)(v17 + 66) )
    {
      v9 = -1073741822;
LABEL_39:
      v12 = 1;
      v6 = v25;
      goto LABEL_41;
    }
    ++v15;
    v16 = (struct _PRIVILEGE_SET *)((char *)v16 + 8);
  }
  while ( v15 < a1 );
  v6 = v25;
  v9 = 0;
  CmpUnlockRegistry(v8, v7, v10, v11);
  CmpLogUnsupportedOperation(7LL);
LABEL_7:
  v12 = 0;
LABEL_41:
  if ( v12 )
    CmpUnlockRegistry(v8, v7, v10, v11);
  if ( v6 )
    CmpReleaseShutdownRundown(v8, v7, v10);
  if ( TransientPoolWithQuota )
  {
    if ( v5 )
    {
      v18 = (PVOID *)TransientPoolWithQuota;
      v19 = v5;
      do
      {
        ObfDereferenceObject(*v18++);
        --v19;
      }
      while ( v19 );
    }
    CmSiFreeMemory(TransientPoolWithQuota);
  }
  CmCleanupThreadInfo((__int64 *)&v24);
  return (unsigned int)v9;
}
