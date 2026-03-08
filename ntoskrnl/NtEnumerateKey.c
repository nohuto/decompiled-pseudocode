/*
 * XREFs of NtEnumerateKey @ 0x1407AC4B0
 * Callers:
 *     AdtpObjsInitialize @ 0x140841808 (AdtpObjsInitialize.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F57C0 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140B64AFC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140250530 (EtwGetKernelTraceTimestamp.c)
 *     CmpIsRegistryLockAcquired @ 0x1402630C0 (CmpIsRegistryLockAcquired.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpCallCallBacksEx @ 0x1406E0B20 (CmpCallCallBacksEx.c)
 *     CmpBounceContextStart @ 0x1407AC9C0 (CmpBounceContextStart.c)
 *     CmEnumerateKey @ 0x1407ACAE0 (CmEnumerateKey.c)
 *     CmpBounceContextCleanup @ 0x1407ACEB8 (CmpBounceContextCleanup.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407B8FB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     CmObReferenceObjectByHandle @ 0x140AF2300 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall NtEnumerateKey(
        HANDLE Handle,
        unsigned int a2,
        unsigned int a3,
        volatile void *a4,
        SIZE_T Length,
        _DWORD *a6)
{
  unsigned int v7; // esi
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // di
  int v14; // r8d
  unsigned int v15; // esi
  int v16; // ebx
  unsigned int v17; // edi
  __int64 v18; // r12
  volatile void *v19; // rbx
  __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v22; // eax
  unsigned int v23; // eax
  struct _KTHREAD *v24; // rcx
  __int64 v26; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  char v29; // [rsp+40h] [rbp-1A8h]
  char v30; // [rsp+41h] [rbp-1A7h]
  char v31; // [rsp+42h] [rbp-1A6h]
  PVOID Object; // [rsp+48h] [rbp-1A0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-198h]
  volatile void *Address; // [rsp+58h] [rbp-190h] BYREF
  _DWORD v36[4]; // [rsp+60h] [rbp-188h] BYREF
  __int64 v37; // [rsp+70h] [rbp-178h]
  PVOID v38; // [rsp+78h] [rbp-170h] BYREF
  _QWORD v39[2]; // [rsp+80h] [rbp-168h] BYREF
  int v40; // [rsp+90h] [rbp-158h]
  __int128 v41; // [rsp+98h] [rbp-150h] BYREF
  __int128 v42; // [rsp+A8h] [rbp-140h] BYREF
  __int128 *v43; // [rsp+B8h] [rbp-130h]
  int v44; // [rsp+C0h] [rbp-128h]
  __int128 v45; // [rsp+C4h] [rbp-124h]
  __int64 v46; // [rsp+D4h] [rbp-114h]
  int v47; // [rsp+DCh] [rbp-10Ch]
  __int128 v48[4]; // [rsp+E0h] [rbp-108h] BYREF
  _OWORD v49[2]; // [rsp+120h] [rbp-C8h] BYREF
  void *Src[2]; // [rsp+140h] [rbp-A8h] BYREF
  char v51; // [rsp+150h] [rbp-98h]
  _BYTE v52[71]; // [rsp+151h] [rbp-97h] BYREF

  Address = a4;
  v7 = a2;
  v36[2] = a2;
  v41 = 0LL;
  v40 = 0;
  memset(v52, 0, sizeof(v52));
  memset(v49, 0, sizeof(v49));
  v9 = 0LL;
  v34 = 0LL;
  v37 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v49, 0x20000LL);
  v30 = 0;
  v31 = 0;
  memset(v48, 0, sizeof(v48));
  Object = 0LL;
  v36[0] = 0;
  *(_OWORD *)Src = 0LL;
  v51 = 0;
  v39[1] = v39;
  v39[0] = v39;
  CmpInitializeThreadInfo((__int64)&v41);
  v38 = 0LL;
  v13 = CmpAcquireShutdownRundown(v11, v10, v12);
  v29 = v13;
  if ( !v13 )
  {
    v16 = -1073741431;
    goto LABEL_24;
  }
  if ( a3 > 2 )
  {
    if ( CmpTraceRoutine )
    {
      if ( Handle )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        Address = 0LL;
        if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, (PVOID *)&Address, 0LL) >= 0 )
        {
          v9 = *((_QWORD *)Address + 1);
          ObfDereferenceObject((PVOID)Address);
        }
      }
    }
    v16 = -1073741811;
  }
  else
  {
    v15 = KeGetCurrentThread()->PreviousMode;
    v16 = CmObReferenceObjectByHandle((_DWORD)Handle, 8, v14, (unsigned __int8)v15, (__int64)&Object, 0LL);
    if ( v16 < 0 )
    {
      v7 = a2;
      goto LABEL_24;
    }
    if ( CmpTraceRoutine && Object )
    {
      v34 = *((_QWORD *)Object + 1);
      v37 = v34;
    }
    if ( (_BYTE)v15 == 1 )
    {
      v17 = Length;
      v18 = (unsigned int)Length;
      v19 = Address;
      ProbeForWrite(Address, (unsigned int)Length, 4u);
      v20 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v20 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v20 = *(_DWORD *)v20;
    }
    else
    {
      v17 = Length;
      v18 = (unsigned int)Length;
      v19 = Address;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v31 = 1;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v48[0] = Object;
      *((_QWORD *)&v48[0] + 1) = __PAIR64__(a3, a2);
      *(_QWORD *)&v48[1] = v19;
      DWORD2(v48[1]) = v17;
      *(_QWORD *)&v48[2] = a6;
      v22 = CmpCallCallBacksEx(5u, v48, 0LL, 1, 0x14u, (__int64)Object, (__int64)v39);
      v16 = v22;
      if ( v22 < 0 )
      {
        v13 = v29;
        v7 = a2;
        v9 = v34;
        if ( v22 == -1073740541 )
          v16 = 0;
        goto LABEL_24;
      }
      v30 = 1;
    }
    v16 = CmKeyBodyRemapToVirtualForEnum(&Object, (unsigned __int8)v15, 8LL, &v38);
    if ( v16 < 0 || (v16 = CmpBounceContextStart(Src, Address, v18, v15, 0), v16 < 0) )
    {
      v7 = a2;
LABEL_42:
      v9 = v34;
      v13 = v29;
      goto LABEL_24;
    }
    v7 = a2;
    v16 = CmEnumerateKey((_DWORD)Object, (_DWORD)v38, a2, a3, (__int64)Src[1], v17, (__int64)v36);
    if ( v16 < 0 && v16 != -2147483643 && v16 != -1073741789 )
      goto LABEL_42;
    v23 = v36[0];
    *a6 = v36[0];
    if ( v16 != -1073741789 )
    {
      if ( v17 >= v23 )
        v17 = v23;
      if ( Src[0] != Src[1] )
        memmove(Src[0], Src[1], v17);
    }
    v13 = v29;
    v9 = v34;
  }
LABEL_24:
  if ( v38 )
    ObfDereferenceObject(v38);
  if ( v30 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v39[0] != v39 )
  {
    v45 = 0LL;
    v46 = 0LL;
    v47 = 0;
    *(_QWORD *)&v42 = Object;
    *((_QWORD *)&v42 + 1) = (unsigned int)v16;
    v44 = v16;
    v43 = v48;
    CmpCallCallBacksEx(0x14u, &v42, 0LL, 0, 0x14u, (__int64)Object, (__int64)v39);
    v16 = v44;
  }
  if ( v31 )
  {
    v24 = KeGetCurrentThread();
    if ( v24->KernelApcDisable++ == -1
      && ($C71981A45BEB2B45F82C232A7085991E *)v24->ApcState.ApcListHead[0].Flink != &v24->152
      && !v24->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  CmpBounceContextCleanup(Src);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v26) = 17;
    CmpTraceRoutine(v26, v49, (unsigned int)v16, v7, v9, 0LL);
  }
  if ( v13 )
    CmpReleaseShutdownRundown();
  CmCleanupThreadInfo((__int64 *)&v41);
  return (unsigned int)v16;
}
