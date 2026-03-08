/*
 * XREFs of NtEnumerateValueKey @ 0x1407AB260
 * Callers:
 *     AdtpObjsInitialize @ 0x140841808 (AdtpObjsInitialize.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140250530 (EtwGetKernelTraceTimestamp.c)
 *     CmpIsRegistryLockAcquired @ 0x1402630C0 (CmpIsRegistryLockAcquired.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpCallCallBacksEx @ 0x1406E0B20 (CmpCallCallBacksEx.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x1407AA678 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     CmEnumerateValueKey @ 0x1407AB770 (CmEnumerateValueKey.c)
 *     CmpBounceContextStart @ 0x1407AC9C0 (CmpBounceContextStart.c)
 *     CmpBounceContextCleanup @ 0x1407ACEB8 (CmpBounceContextCleanup.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407B8FB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A14D34 (CmEnumerateValueKeyFromMergedView.c)
 *     CmObReferenceObjectByHandle @ 0x140AF2300 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall NtEnumerateValueKey(
        HANDLE Handle,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v8; // r14d
  char v10; // di
  int v11; // r8d
  unsigned int v12; // r14d
  int v13; // ebx
  unsigned int v14; // edi
  __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  char v23; // [rsp+50h] [rbp-1D8h]
  char v24; // [rsp+51h] [rbp-1D7h]
  char v25; // [rsp+52h] [rbp-1D6h]
  PVOID Object; // [rsp+58h] [rbp-1D0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-1C0h]
  unsigned int v30; // [rsp+70h] [rbp-1B8h]
  PVOID v31; // [rsp+78h] [rbp-1B0h] BYREF
  PVOID v32; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v33; // [rsp+88h] [rbp-1A0h]
  _QWORD v34[2]; // [rsp+90h] [rbp-198h] BYREF
  __int128 v35; // [rsp+A0h] [rbp-188h] BYREF
  __int128 v36; // [rsp+B0h] [rbp-178h] BYREF
  __int128 *v37; // [rsp+C0h] [rbp-168h]
  int v38; // [rsp+C8h] [rbp-160h]
  __int128 v39; // [rsp+CCh] [rbp-15Ch]
  __int64 v40; // [rsp+DCh] [rbp-14Ch]
  int v41; // [rsp+E4h] [rbp-144h]
  __int128 v42[4]; // [rsp+F0h] [rbp-138h] BYREF
  _OWORD v43[2]; // [rsp+130h] [rbp-F8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+150h] [rbp-D8h] BYREF
  size_t v45[2]; // [rsp+180h] [rbp-A8h] BYREF
  char v46; // [rsp+190h] [rbp-98h]
  _BYTE v47[71]; // [rsp+191h] [rbp-97h] BYREF

  v8 = a2;
  v30 = a2;
  v35 = 0LL;
  LODWORD(v32) = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v47, 0, sizeof(v47));
  memset(v43, 0, sizeof(v43));
  v29 = 0LL;
  v33 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v43, 0x20000LL);
  v24 = 0;
  v25 = 0;
  memset(v42, 0, sizeof(v42));
  Object = 0LL;
  LODWORD(v28) = 0;
  *(_OWORD *)v45 = 0LL;
  v46 = 0;
  v34[1] = v34;
  v34[0] = v34;
  CmpInitializeThreadInfo((__int64)&v35);
  v31 = 0LL;
  v10 = CmpAcquireShutdownRundown();
  v23 = v10;
  if ( !v10 )
  {
    v13 = -1073741431;
    v19 = 0LL;
    goto LABEL_32;
  }
  if ( a3 > 2 )
  {
    if ( CmpTraceRoutine
      && Handle
      && (PreviousMode = KeGetCurrentThread()->PreviousMode,
          v32 = 0LL,
          ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v32, 0LL) >= 0) )
    {
      v19 = *((_QWORD *)v32 + 1);
      ObfDereferenceObject(v32);
    }
    else
    {
      v19 = 0LL;
    }
    v13 = -1073741811;
    goto LABEL_32;
  }
  v12 = KeGetCurrentThread()->PreviousMode;
  v13 = CmObReferenceObjectByHandle((_DWORD)Handle, 1, v11, (unsigned __int8)v12, (__int64)&Object, 0LL);
  if ( v13 < 0 )
  {
    v8 = a2;
    v19 = 0LL;
    goto LABEL_32;
  }
  if ( CmpTraceRoutine && Object )
  {
    v29 = *((_QWORD *)Object + 1);
    v33 = v29;
  }
  if ( (_BYTE)v12 == 1 )
  {
    v14 = a5;
    if ( a5 )
    {
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + a5 > 0x7FFFFFFF0000LL || a4 + a5 < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v15 = (__int64)a6;
    if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
  }
  else
  {
    v14 = a5;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v25 = 1;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    *(_QWORD *)&v42[0] = Object;
    *((_QWORD *)&v42[0] + 1) = __PAIR64__(a3, a2);
    *(_QWORD *)&v42[1] = a4;
    DWORD2(v42[1]) = v14;
    *(_QWORD *)&v42[2] = a6;
    v17 = CmpCallCallBacksEx(6u, v42, 0LL, 1, 0x15u, (__int64)Object, (__int64)v34);
    v13 = v17;
    if ( v17 < 0 )
    {
      v10 = v23;
      v8 = a2;
      v19 = v29;
      if ( v17 == -1073740541 )
        v13 = 0;
      goto LABEL_32;
    }
    v24 = 1;
  }
  v13 = CmKeyBodyRemapToVirtualForEnum(&Object, (unsigned __int8)v12, 1LL, &v31);
  if ( v13 < 0 || (v13 = CmpBounceContextStart(v45, a4, v14, v12, 1), v13 < 0) )
  {
    v8 = a2;
LABEL_50:
    v19 = v29;
    v10 = v23;
    goto LABEL_32;
  }
  if ( v31 )
  {
    CmpAttachToRegistryProcess(&ApcState);
    v8 = a2;
    v13 = CmEnumerateValueKeyFromMergedView((int)Object, (int)v31, 0, a2, a3, v45[1], v14, (__int64)&v28, 0LL);
    CmpDetachFromRegistryProcess(&ApcState);
  }
  else
  {
    v8 = a2;
    v13 = CmEnumerateValueKey(Object, a2, a3, v45[1], v14, &v28);
  }
  if ( v13 < 0 && v13 != -2147483643 && v13 != -1073741789 )
    goto LABEL_50;
  v18 = v28;
  *a6 = v28;
  if ( v13 != -1073741789 )
  {
    if ( v14 >= v18 )
      v14 = v18;
    CmpBounceContextCopyDataToCallerBuffer((__int64)v45, v14);
  }
  v10 = v23;
  v19 = v29;
LABEL_32:
  if ( v31 )
    ObfDereferenceObject(v31);
  if ( v24 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v34[0] != v34 )
  {
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0;
    *(_QWORD *)&v36 = Object;
    *((_QWORD *)&v36 + 1) = (unsigned int)v13;
    v38 = v13;
    v37 = v42;
    CmpCallCallBacksEx(0x15u, &v36, 0LL, 0, 0x15u, (__int64)Object, (__int64)v34);
    v13 = v38;
  }
  if ( v25 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( Object )
    ObfDereferenceObject(Object);
  CmpBounceContextCleanup(v45);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v20) = 18;
    CmpTraceRoutine(v20, v43, (unsigned int)v13, v8, v19, 0LL);
  }
  if ( v10 )
    CmpReleaseShutdownRundown();
  CmCleanupThreadInfo((__int64 *)&v35);
  return (unsigned int)v13;
}
