/*
 * XREFs of NtDeleteKey @ 0x1406B72F0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     EtwGetKernelTraceTimestamp @ 0x140250530 (EtwGetKernelTraceTimestamp.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmpIsRegistryLockAcquired @ 0x1402630C0 (CmpIsRegistryLockAcquired.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     CmDoVirtualTest @ 0x1402DD11C (CmDoVirtualTest.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406B5A64 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmPostCallbackNotificationEx @ 0x1406BD240 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x1406E0B20 (CmpCallCallBacksEx.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1409CB2A0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140A15240 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A152D4 (CmKeyBodyRemapToVirtual.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmObReferenceObjectByHandle @ 0x140AF2300 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall NtDeleteKey(HANDLE Handle)
{
  __int64 v2; // rsi
  char v3; // r13
  char v4; // r12
  char PreviousMode; // r15
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // r9d
  char v9; // bl
  int v10; // eax
  int v11; // edi
  char v12; // si
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v14; // rbx
  int v15; // r9d
  int v16; // eax
  __int64 v17; // rbx
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v24; // r8d
  int v25; // r9d
  GUID *p_TransactionId; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // [rsp+28h] [rbp-E0h]
  __int64 v32; // [rsp+30h] [rbp-D8h]
  __int64 v33; // [rsp+38h] [rbp-D0h]
  char v34; // [rsp+48h] [rbp-C0h]
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+68h] [rbp-A0h]
  __int64 v39; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v40[2]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v41; // [rsp+90h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A0h] [rbp-68h] BYREF
  GUID v43[2]; // [rsp+C0h] [rbp-48h] BYREF
  GUID TransactionId; // [rsp+E0h] [rbp-28h] BYREF
  _OWORD v45[2]; // [rsp+F0h] [rbp-18h] BYREF

  v37 = 0LL;
  v41 = 0LL;
  LODWORD(v36) = 0;
  v2 = 0LL;
  memset(v43, 0, sizeof(v43));
  v39 = 0LL;
  v38 = 0LL;
  memset(v45, 0, sizeof(v45));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v45, 0x20000LL);
  CmpInitializeThreadInfo((__int64)&v41);
  Object = 0LL;
  v3 = 0;
  v40[1] = v40;
  v4 = 0;
  v40[0] = v40;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v34 = CmpAcquireShutdownRundown();
  v9 = v34;
  if ( !v34 )
  {
    v11 = -1073741431;
    goto LABEL_37;
  }
  LOBYTE(v8) = PreviousMode;
  v10 = CmObReferenceObjectByHandle((_DWORD)Handle, 0x10000, v7, v8, (__int64)&Object, (__int64)&v37);
  v11 = v10;
  if ( v10 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    if ( CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v36) )
    {
      LOBYTE(v25) = PreviousMode;
      v11 = CmObReferenceObjectByHandle((_DWORD)Handle, 131097, v24, v25, (__int64)&Object, (__int64)&v37);
      if ( v11 < 0 )
        goto LABEL_61;
      v14 = Object;
      v11 = 0;
      if ( (unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
      {
        v12 = 1;
        goto LABEL_7;
      }
    }
    else
    {
      v14 = Object;
    }
    v11 = -1073741790;
    goto LABEL_46;
  }
  v12 = 0;
  if ( v10 < 0 )
    goto LABEL_33;
  v11 = 0;
LABEL_7:
  CurrentThread = KeGetCurrentThread();
  v4 = 1;
  v14 = Object;
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    *(_QWORD *)&v43[0].Data1 = v14;
    LOBYTE(v15) = 1;
    v16 = CmpCallCallBacksEx(0, (unsigned int)v43, 0, v15, 15, (__int64)v14, (__int64)v40);
    v11 = v16;
    if ( v16 < 0 )
    {
      if ( v16 == -1073740541 )
        v11 = 0;
      goto LABEL_28;
    }
    v3 = 1;
    v11 = 0;
  }
  if ( CmpTraceRoutine && v14 )
    v38 = v14[1];
  v17 = KeAbPreAcquire((__int64)&ExpKeyManipLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&ExpKeyManipLock, 0, v17, (__int64)&ExpKeyManipLock);
  if ( v17 )
    *(_BYTE *)(v17 + 18) = 1;
  if ( (!ExpControlKey || *((_QWORD *)Object + 1) != *((_QWORD *)ExpControlKey + 1))
    && (!qword_140C31458 || *((_QWORD *)Object + 1) != *((_QWORD *)qword_140C31458 + 1)) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
    KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
    v14 = Object;
    v6 = *((_QWORD *)Object + 1);
    if ( (*(_DWORD *)(v6 + 8) & 0x80u) != 0 || (v19 = *(_QWORD *)(v6 + 72)) != 0 && (*(_DWORD *)(v19 + 8) & 0x80u) != 0 )
    {
      v11 = -1073741790;
      goto LABEL_28;
    }
    if ( !v12 )
      goto LABEL_26;
    LOBYTE(v18) = PreviousMode;
    v11 = CmKeyBodyRemapToVirtual((unsigned int)&Object, v18, 0x10000, (unsigned int)&SubjectContext, (__int64)&v36);
    if ( v11 >= 0 )
    {
      v14 = Object;
      if ( !CmpVEEnabled || (*(_DWORD *)(*((_QWORD *)Object + 1) + 184LL) & 0x1000000) == 0 )
      {
        v11 = -1073741790;
        goto LABEL_46;
      }
LABEL_26:
      v11 = CmDeleteKey(v14);
      if ( v11 >= 0 && (v37 & 4) != 0 )
      {
        if ( v14[7] || v14[8] )
        {
          TransactionId = 0LL;
          CmpLockRegistry(v6, v20, v21, v22, v31, v32, v33);
          CmpTransSearchAddTransFromKeyBody(v14, &v39);
          TransactionId = *(GUID *)(v39 + 88);
          CmpUnlockRegistry(v28, v27, v29, v30);
          p_TransactionId = &TransactionId;
        }
        else
        {
          p_TransactionId = 0LL;
        }
        SeDeleteObjectAuditAlarmWithTransaction(v14, Handle, p_TransactionId);
      }
      goto LABEL_28;
    }
LABEL_61:
    v14 = Object;
    goto LABEL_46;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
  KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
  v14 = Object;
LABEL_28:
  if ( v12 )
LABEL_46:
    SeReleaseSubjectContext(&SubjectContext);
  if ( v3 )
    v11 = CmPostCallbackNotificationEx(15, (_DWORD)v14, v11, (unsigned int)v43, 0LL, (__int64)v40);
  if ( !v4 )
    goto LABEL_34;
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_33:
  v14 = Object;
LABEL_34:
  if ( v14 )
    ObfDereferenceObject(v14);
  v2 = v38;
  v9 = v34;
LABEL_37:
  if ( CmpTraceRoutine )
  {
    LOBYTE(v6) = 12;
    CmpTraceRoutine(v6, v45, (unsigned int)v11, 0LL, v2, 0LL);
  }
  if ( v9 )
    CmpReleaseShutdownRundown();
  CmCleanupThreadInfo((__int64 *)&v41);
  return (unsigned int)v11;
}
