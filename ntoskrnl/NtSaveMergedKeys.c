/*
 * XREFs of NtSaveMergedKeys @ 0x140A0C200
 * Callers:
 *     <none>
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x1402630C0 (CmpIsRegistryLockAcquired.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     CmCheckNoTxContext @ 0x1406BD098 (CmCheckNoTxContext.c)
 *     CmPostCallbackNotificationEx @ 0x1406BD240 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x1406E0B20 (CmpCallCallBacksEx.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140944030 (IoConvertFileHandleToKernelHandle.c)
 *     CmSaveMergedKeys @ 0x140A09144 (CmSaveMergedKeys.c)
 *     CmObReferenceObjectByHandle @ 0x140AF2300 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall NtSaveMergedKeys(int a1, int a2, void *a3)
{
  void *v4; // rdi
  char v7; // r13
  __int64 v8; // rdx
  __int64 v9; // r8
  signed int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  KPROCESSOR_MODE PreviousMode; // di
  int v15; // r9d
  int v16; // r9d
  struct _KTHREAD *CurrentThread; // rax
  PVOID v18; // r14
  PVOID v19; // r15
  __int64 v20; // r12
  int v21; // eax
  void *v23; // [rsp+40h] [rbp-89h] BYREF
  PVOID Object; // [rsp+48h] [rbp-81h] BYREF
  PVOID v25; // [rsp+50h] [rbp-79h] BYREF
  _QWORD v26[2]; // [rsp+58h] [rbp-71h] BYREF
  __int128 v27; // [rsp+68h] [rbp-61h] BYREF
  __int128 v28; // [rsp+78h] [rbp-51h] BYREF
  __int128 v29; // [rsp+88h] [rbp-41h]
  __int128 v30; // [rsp+98h] [rbp-31h]
  __int64 v31; // [rsp+A8h] [rbp-21h]
  struct _KAPC_STATE ApcState; // [rsp+B0h] [rbp-19h] BYREF

  v25 = 0LL;
  Object = 0LL;
  v4 = 0LL;
  v31 = 0LL;
  v23 = 0LL;
  v27 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v7 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  CmpInitializeThreadInfo((__int64)&v27);
  v26[0] = v26;
  v26[1] = v26;
  if ( !(unsigned __int8)CmpAcquireShutdownRundown(v26, v8, v9) )
  {
    v10 = -1073741431;
    goto LABEL_29;
  }
  v10 = CmCheckNoTxContext();
  if ( v10 >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      v10 = -1073741727;
LABEL_21:
      v4 = v23;
      goto LABEL_22;
    }
    LOBYTE(v15) = PreviousMode;
    v10 = CmObReferenceObjectByHandle(a1, 0, v13, v15, (__int64)&v25, 0LL);
    if ( v10 < 0 )
      goto LABEL_21;
    LOBYTE(v16) = PreviousMode;
    v10 = CmObReferenceObjectByHandle(a2, 0, v13, v16, (__int64)&Object, 0LL);
    if ( v10 < 0 )
      goto LABEL_21;
    if ( PreviousMode == 1 )
    {
      v10 = IoConvertFileHandleToKernelHandle(a3, 1, 2, 0, &v23);
      if ( v10 < 0 )
        goto LABEL_21;
    }
    else
    {
      v23 = a3;
    }
    CurrentThread = KeGetCurrentThread();
    v18 = v25;
    v19 = Object;
    v20 = (__int64)v23;
    --CurrentThread->KernelApcDisable;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v29 = v18;
      *((_QWORD *)&v29 + 1) = v19;
      *((_QWORD *)&v28 + 1) = v20;
      v21 = CmpCallCallBacksEx(0x31u, &v28, 0LL, 1, 0x32u, 0LL, (__int64)v26);
      v10 = v21;
      if ( v21 < 0 )
      {
        if ( v21 == -1073740541 )
          v10 = 0;
LABEL_20:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        goto LABEL_21;
      }
      v7 = 1;
    }
    CmpAttachToRegistryProcess(&ApcState);
    v10 = CmSaveMergedKeys((__int64)v18, (__int64)v19, v20);
    CmpDetachFromRegistryProcess(&ApcState);
    if ( v7 )
      v10 = CmPostCallbackNotificationEx(50, 0LL, v10, (__int64)&v28, 0LL, v26);
    goto LABEL_20;
  }
LABEL_22:
  CmpReleaseShutdownRundown(v12, v11, v13);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v25 )
    ObfDereferenceObject(v25);
  if ( v4 && v4 != a3 )
    ZwClose(v4);
LABEL_29:
  CmCleanupThreadInfo((__int64 *)&v27);
  return (unsigned int)v10;
}
