/*
 * XREFs of NtSetInformationKey @ 0x1407590A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140250530 (EtwGetKernelTraceTimestamp.c)
 *     CmpIsRegistryLockAcquired @ 0x1402630C0 (CmpIsRegistryLockAcquired.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     CmDoVirtualTest @ 0x1402DD11C (CmDoVirtualTest.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     CmpCallCallBacksEx @ 0x1406E0B20 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     CmSetKeyFlags @ 0x140A12D14 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A13248 (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140A15240 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A15598 (CmKeyBodyReplicateToVirtual.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall NtSetInformationKey(void *a1, unsigned int a2, const void *a3, int a4)
{
  char v6; // r13
  _QWORD *v7; // rdi
  char v8; // r12
  char v9; // r15
  __int64 v10; // rcx
  KPROCESSOR_MODE PreviousMode; // di
  unsigned __int64 v12; // rdx
  ACCESS_MASK v13; // edx
  int v14; // esi
  PVOID v15; // rax
  struct _KTHREAD *CurrentThread; // rax
  char v17; // r14
  __int64 v18; // r12
  KPROCESSOR_MODE v20; // r9
  KPROCESSOR_MODE v21; // r9
  int v22; // eax
  char v23; // [rsp+40h] [rbp-158h]
  unsigned __int8 v24; // [rsp+41h] [rbp-157h]
  PVOID Object; // [rsp+48h] [rbp-150h] BYREF
  char v26; // [rsp+53h] [rbp-145h]
  __int64 v27; // [rsp+58h] [rbp-140h]
  HANDLE Handle; // [rsp+60h] [rbp-138h] BYREF
  __int64 v29; // [rsp+68h] [rbp-130h] BYREF
  int v30; // [rsp+70h] [rbp-128h]
  int v31; // [rsp+74h] [rbp-124h] BYREF
  _QWORD v32[2]; // [rsp+78h] [rbp-120h] BYREF
  int v33; // [rsp+88h] [rbp-110h]
  __int128 v34; // [rsp+98h] [rbp-100h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A8h] [rbp-F0h] BYREF
  __int128 v36; // [rsp+C8h] [rbp-D0h] BYREF
  __int128 v37; // [rsp+D8h] [rbp-C0h]
  __int128 v38; // [rsp+E8h] [rbp-B0h]
  __int64 v39; // [rsp+F8h] [rbp-A0h]
  __int128 v40; // [rsp+100h] [rbp-98h] BYREF
  __int128 *v41; // [rsp+110h] [rbp-88h]
  int v42; // [rsp+118h] [rbp-80h]
  __int128 v43; // [rsp+11Ch] [rbp-7Ch]
  __int64 v44; // [rsp+12Ch] [rbp-6Ch]
  int v45; // [rsp+134h] [rbp-64h]
  _OWORD v46[2]; // [rsp+138h] [rbp-60h] BYREF

  v30 = a4;
  Handle = a1;
  v34 = 0LL;
  v33 = 0;
  v29 = 0LL;
  memset(v46, 0, sizeof(v46));
  v27 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v46, 0x20000LL);
  v6 = 0;
  v7 = 0LL;
  Object = 0LL;
  v8 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v32[1] = v32;
  v32[0] = v32;
  CmpInitializeThreadInfo((__int64)&v34);
  v31 = 0;
  v9 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v26 = CmpAcquireShutdownRundown();
  if ( !v26 )
  {
    v14 = -1073741431;
    goto LABEL_48;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v24 = PreviousMode;
  if ( a2 == 5 )
    goto LABEL_5;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      if ( a2 == 2 || (v10 = a2 - 3, a2 == 3) )
      {
LABEL_5:
        v23 = 0;
LABEL_6:
        v10 = 4LL;
        goto LABEL_7;
      }
      if ( a2 != 4 )
      {
        if ( CmpTraceRoutine
          && (v10 = (__int64)Handle) != 0
          && (v20 = KeGetCurrentThread()->PreviousMode,
              Handle = 0LL,
              ObReferenceObjectByHandle((HANDLE)v10, 0, (POBJECT_TYPE)CmKeyObjectType, v20, &Handle, 0LL) >= 0) )
        {
          v18 = *((_QWORD *)Handle + 1);
          ObfDereferenceObject(Handle);
        }
        else
        {
          v18 = 0LL;
        }
        v14 = -1073741821;
        v7 = Object;
        v17 = 0;
        goto LABEL_27;
      }
    }
    v23 = 1;
    goto LABEL_6;
  }
  v10 = 8LL;
  v23 = 1;
LABEL_7:
  if ( v30 != (_DWORD)v10 )
  {
    if ( CmpTraceRoutine
      && (v10 = (__int64)Handle) != 0
      && (v21 = KeGetCurrentThread()->PreviousMode,
          Handle = 0LL,
          ObReferenceObjectByHandle((HANDLE)v10, 0, (POBJECT_TYPE)CmKeyObjectType, v21, &Handle, 0LL) >= 0) )
    {
      v18 = *((_QWORD *)Handle + 1);
      ObfDereferenceObject(Handle);
    }
    else
    {
      v18 = 0LL;
    }
    v14 = -1073741820;
    v7 = Object;
    v17 = 0;
    goto LABEL_27;
  }
  if ( PreviousMode )
  {
    v12 = (unsigned __int64)a3 + (unsigned int)v10;
    if ( v12 > 0x7FFFFFFF0000LL || v12 < (unsigned __int64)a3 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(&v29, a3, (unsigned int)v10);
  if ( a2 == 5 )
    v13 = 0;
  else
    v13 = 2;
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(Handle, v13, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL);
  v7 = Object;
  v15 = Object;
  if ( v14 != -1073741790 )
  {
LABEL_15:
    v9 = v8;
    if ( v14 >= 0 )
    {
      if ( CmpTraceRoutine && v15 )
        v27 = v7[1];
      if ( a2 != 5 )
      {
        v10 = v7[1];
        if ( (*(_DWORD *)(v10 + 8) & 0x80u) != 0 )
        {
          v14 = -1073741790;
          v17 = 0;
          goto LABEL_26;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(v10 + 32) + 160LL) & 0x100000) != 0 )
        {
          v14 = -1073741790;
          v17 = 0;
          goto LABEL_26;
        }
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
      {
        v7 = Object;
      }
      else
      {
        v7 = Object;
        *(_QWORD *)&v36 = Object;
        DWORD2(v36) = a2;
        *(_QWORD *)&v37 = &v29;
        DWORD2(v37) = v30;
        v14 = CmpCallCallBacksEx(3u, &v36, 0LL, 1, 0x12u, (__int64)Object, (__int64)v32);
        if ( v14 < 0 )
        {
          if ( v14 == -1073740541 )
            v14 = 0;
          goto LABEL_25;
        }
        v6 = 1;
      }
      if ( !v8 || (v14 = CmKeyBodyReplicateToVirtual(&Object, v24, 2LL, &SubjectContext, &v31), v7 = Object, v14 >= 0) )
      {
        v9 = v8;
        if ( a2 == 5 )
        {
          *((_WORD *)v7 + 25) = v29;
          v14 = 0;
        }
        else
        {
          if ( a2 )
          {
            if ( a2 != 1 && a2 != 2 )
            {
              v10 = a2 - 3;
              if ( (unsigned int)v10 > 1 )
                goto LABEL_25;
            }
            v22 = CmSetKeyFlags(v7, a2, (unsigned int)v29);
          }
          else
          {
            v22 = CmSetLastWriteTimeKey(v7, &v29);
          }
          v14 = v22;
        }
      }
LABEL_25:
      v17 = 1;
LABEL_26:
      v18 = v27;
      goto LABEL_27;
    }
    goto LABEL_48;
  }
  if ( !v23 )
  {
    v14 = -1073741790;
    v17 = 0;
    v18 = 0LL;
    goto LABEL_27;
  }
  SeCaptureSubjectContext(&SubjectContext);
  v9 = 1;
  if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v31) )
  {
    v14 = -1073741790;
    v17 = 0;
    v18 = 0LL;
    goto LABEL_27;
  }
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(Handle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, v24, &Object, 0LL);
  v7 = Object;
  if ( v14 < 0 )
  {
LABEL_48:
    v17 = 0;
    v18 = 0LL;
    goto LABEL_27;
  }
  if ( (unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
  {
    v14 = 0;
    v8 = 1;
    v15 = v7;
    goto LABEL_15;
  }
  v14 = -1073741790;
  v17 = 0;
  v18 = 0LL;
LABEL_27:
  if ( v9 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v6 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v32[0] != v32 )
  {
    v43 = 0LL;
    v44 = 0LL;
    v45 = 0;
    *(_QWORD *)&v40 = v7;
    *((_QWORD *)&v40 + 1) = (unsigned int)v14;
    v42 = v14;
    v41 = &v36;
    CmpCallCallBacksEx(0x12u, &v40, 0LL, 0, 0x12u, (__int64)v7, (__int64)v32);
    v14 = v42;
  }
  if ( v17 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v7 = Object;
  }
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v10) = 20;
    CmpTraceRoutine(v10, v46, (unsigned int)v14, 0LL, v18, 0LL);
  }
  if ( v26 )
    CmpReleaseShutdownRundown();
  CmCleanupThreadInfo((__int64 *)&v34);
  return (unsigned int)v14;
}
