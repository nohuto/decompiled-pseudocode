/*
 * XREFs of NtCompressKey @ 0x140A0A9E0
 * Callers:
 *     <none>
 * Callees:
 *     CmpIsWriteQueueActive @ 0x140244040 (CmpIsWriteQueueActive.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmpLockRegistryExclusive @ 0x1406B6454 (CmpLockRegistryExclusive.c)
 *     CmCheckNoTxContext @ 0x1406BD098 (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14085C738 (CmpWaitOnHiveWriteQueue.c)
 *     CmCompressKey @ 0x140A10E64 (CmCompressKey.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF2098 (HvLockHiveFlusherExclusive.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmObReferenceObjectByHandle @ 0x140AF2300 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF24F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall NtCompressKey(int a1)
{
  int v2; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // ebp
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rbx
  ULONG_PTR v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  __int128 v23; // [rsp+38h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  Object = 0LL;
  v23 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((__int64)&v23);
  v2 = CmCheckNoTxContext();
  if ( v2 >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      LOBYTE(v5) = PreviousMode;
      v6 = a1 & 3;
      v7 = CmObReferenceObjectByHandle(a1, 131078, v4, v5, (__int64)&Object, 0LL);
      v11 = Object;
      v2 = v7;
      if ( v7 >= 0 )
      {
        if ( (unsigned __int8)CmpAcquireShutdownRundown(v9, v8, v10) )
        {
          while ( 1 )
          {
            CmpLockRegistryExclusive();
            v2 = CmpPerformKeyBodyDeletionCheck(v11, 0LL);
            if ( v2 < 0 )
              break;
            v14 = v11[1];
            v16 = *(_QWORD **)(v14 + 32);
            v12 = *(unsigned int *)(v16[8] + 36LL);
            if ( *(_DWORD *)(v14 + 40) != (_DWORD)v12 )
            {
              v2 = -1073741811;
              break;
            }
            v17 = (ULONG_PTR)(v16 + 526);
            if ( !CmpIsWriteQueueActive(v16 + 526) )
            {
              v17 = (ULONG_PTR)(v16 + 524);
              if ( !CmpIsWriteQueueActive(v16 + 524) )
              {
                CmpAttachToRegistryProcess(&ApcState);
                v2 = CmCompressKey(*(_QWORD *)(v11[1] + 32LL), v6);
                CmpDetachFromRegistryProcess(&ApcState);
                break;
              }
            }
            HvLockHiveFlusherExclusive(v16);
            CmpWaitOnHiveWriteQueue((__int64)v16, v17);
          }
          CmpUnlockRegistry(v13, v12, v14, v15);
          CmpReleaseShutdownRundown(v19, v18, v20);
        }
        else
        {
          v2 = -1073741431;
        }
      }
      if ( v11 )
        ObfDereferenceObject(v11);
    }
    else
    {
      v2 = -1073741727;
    }
  }
  CmCleanupThreadInfo((__int64 *)&v23);
  return (unsigned int)v2;
}
