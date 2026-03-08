/*
 * XREFs of NtQueryMultipleValueKey @ 0x1406B8CB0
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     EtwGetKernelTraceTimestamp @ 0x140250530 (EtwGetKernelTraceTimestamp.c)
 *     CmpIsRegistryLockAcquired @ 0x1402630C0 (CmpIsRegistryLockAcquired.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmPostCallbackNotificationEx @ 0x1406BD240 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x1406E0B20 (CmpCallCallBacksEx.c)
 *     CmQueryMultipleValueKey @ 0x1407A6F60 (CmQueryMultipleValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x1407A8A44 (CmpCaptureKeyValueArray.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x1407AA678 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     CmpBounceContextStart @ 0x1407AC9C0 (CmpBounceContextStart.c)
 *     CmpBounceContextCleanup @ 0x1407ACEB8 (CmpBounceContextCleanup.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407B8FB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     CmObReferenceObjectByHandle @ 0x140AF2300 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall NtQueryMultipleValueKey(
        int a1,
        void *a2,
        unsigned int a3,
        volatile void *a4,
        unsigned int *a5,
        _DWORD *a6)
{
  __int64 v6; // r14
  int v9; // r8d
  int v10; // r9d
  int MultipleValueKey; // edi
  unsigned int PreviousMode; // r15d
  int v13; // r8d
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int v18; // r9d
  int v19; // eax
  unsigned int v20; // r8d
  __int64 v21; // rdx
  PPRIVILEGE_SET v22; // rcx
  __int64 v23; // rcx
  char v25; // [rsp+40h] [rbp-1D8h]
  char v26; // [rsp+41h] [rbp-1D7h]
  unsigned int Length; // [rsp+44h] [rbp-1D4h] BYREF
  char Length_4; // [rsp+48h] [rbp-1D0h]
  unsigned int v29; // [rsp+50h] [rbp-1C8h]
  PVOID v30; // [rsp+58h] [rbp-1C0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-1B8h] BYREF
  int v32; // [rsp+68h] [rbp-1B0h] BYREF
  unsigned int v33; // [rsp+6Ch] [rbp-1ACh]
  volatile void *Address; // [rsp+70h] [rbp-1A8h]
  PVOID Object[3]; // [rsp+78h] [rbp-1A0h] BYREF
  __int64 v36; // [rsp+90h] [rbp-188h]
  PPRIVILEGE_SET v37; // [rsp+98h] [rbp-180h] BYREF
  PPRIVILEGE_SET v38; // [rsp+A0h] [rbp-178h] BYREF
  _QWORD v39[2]; // [rsp+A8h] [rbp-170h] BYREF
  int v40; // [rsp+B8h] [rbp-160h]
  __int128 v41; // [rsp+C0h] [rbp-158h] BYREF
  _QWORD v42[9]; // [rsp+D0h] [rbp-148h] BYREF
  _OWORD v43[2]; // [rsp+120h] [rbp-F8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+140h] [rbp-D8h] BYREF
  __int64 v45[12]; // [rsp+170h] [rbp-A8h] BYREF

  Address = a4;
  v6 = a3;
  Object[1] = a2;
  v29 = a3;
  Object[2] = a5;
  v41 = 0LL;
  Length = 0;
  v32 = 0;
  v40 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v45, 0, 0x58uLL);
  memset(v43, 0, sizeof(v43));
  v36 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v43, 0x20000LL);
  v25 = 0;
  v26 = 0;
  v30 = 0LL;
  memset(v42, 0, sizeof(v42));
  v39[1] = v39;
  v39[0] = v39;
  CmpInitializeThreadInfo((__int64)&v41);
  Object[0] = 0LL;
  Privileges = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  Length_4 = CmpAcquireShutdownRundown();
  if ( !Length_4 )
  {
    MultipleValueKey = -1073741431;
    goto LABEL_33;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v10) = PreviousMode;
  MultipleValueKey = CmObReferenceObjectByHandle(a1, 1, v9, v10, (__int64)&v30, 0LL);
  if ( MultipleValueKey >= 0 )
  {
    if ( CmpTraceRoutine && v30 )
      v36 = *((_QWORD *)v30 + 1);
    if ( (_BYTE)PreviousMode == 1 )
    {
      v14 = 0x7FFFFFFF0000LL;
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a5;
      Length = *(_DWORD *)v15;
      if ( (unsigned int)v6 > 0x10000 )
        RtlRaiseStatus(-1073741670);
      ProbeForWrite(a2, 24 * v6, 4u);
      if ( a6 )
      {
        if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
          v14 = (__int64)a6;
        *(_DWORD *)v14 = *(_DWORD *)v14;
      }
      ProbeForWrite(Address, Length, 4u);
    }
    else
    {
      Length = *a5;
    }
    LOBYTE(v13) = PreviousMode;
    MultipleValueKey = CmpCaptureKeyValueArray(
                         (_DWORD)a2,
                         v6,
                         v13,
                         (unsigned int)&Privileges,
                         (__int64)&v37,
                         (__int64)&v38);
    if ( MultipleValueKey >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v26 = 1;
      if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
      {
        v42[0] = v30;
        v42[1] = Privileges;
        LODWORD(v42[2]) = v6;
        v42[3] = Address;
        v42[4] = &Length;
        v42[5] = a6;
        LOBYTE(v18) = 1;
        v19 = CmpCallCallBacksEx(9, (unsigned int)v42, 0, v18, 24, (__int64)v30, (__int64)v39);
        MultipleValueKey = v19;
        if ( v19 < 0 )
        {
          if ( v19 == -1073740541 )
            MultipleValueKey = 0;
          goto LABEL_33;
        }
        v25 = 1;
      }
      LOBYTE(v16) = PreviousMode;
      MultipleValueKey = CmKeyBodyRemapToVirtualForEnum(&v30, v16, 1LL, Object);
      if ( MultipleValueKey >= 0 )
      {
        MultipleValueKey = CmpBounceContextStart(v45, Address, Length, PreviousMode, 4);
        if ( MultipleValueKey >= 0 )
        {
          CmpAttachToRegistryProcess(&ApcState);
          MultipleValueKey = CmQueryMultipleValueKey(
                               (_DWORD)v30,
                               Object[0],
                               (_DWORD)Privileges,
                               v6,
                               v45[1],
                               (__int64)&Length,
                               (__int64)&v32);
          CmpDetachFromRegistryProcess(&ApcState);
          if ( a6 )
            *a6 = v32;
          if ( (int)(MultipleValueKey + 0x80000000) < 0 || MultipleValueKey == -2147483643 )
            CmpBounceContextCopyDataToCallerBuffer(v45, Length);
        }
      }
    }
  }
LABEL_33:
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  if ( v25 )
    MultipleValueKey = CmPostCallbackNotificationEx(
                         24,
                         (_DWORD)v30,
                         MultipleValueKey,
                         (unsigned int)v42,
                         0LL,
                         (__int64)v39);
  if ( Privileges )
  {
    *a5 = Length;
    if ( ((MultipleValueKey + 0x80000000) & 0x80000000) != 0 || MultipleValueKey == -2147483643 )
    {
      v20 = 0;
      v33 = 0;
      while ( v20 < (unsigned int)v6 )
      {
        v21 = 3LL * v20;
        v22 = Privileges;
        *((_DWORD *)a2 + 2 * v21 + 2) = Privileges->Privilege[2 * v20].Luid.LowPart;
        *((_DWORD *)a2 + 2 * v21 + 3) = v22->Privilege[2 * v20].Luid.HighPart;
        *((_DWORD *)a2 + 2 * v21 + 4) = v22->Privilege[2 * v20++].Attributes;
        v33 = v20;
      }
    }
  }
  if ( v26 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v30 )
    ObfDereferenceObject(v30);
  CmpBounceContextCleanup(v45);
  if ( CmpTraceRoutine )
  {
    v23 = v36;
    LOBYTE(v23) = 19;
    CmpTraceRoutine(v23, v43, (unsigned int)MultipleValueKey, (unsigned int)v6, v36, 0LL);
  }
  if ( Length_4 )
    CmpReleaseShutdownRundown();
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v37 )
    CmSiFreeMemory(v37);
  if ( v38 )
    CmSiFreeMemory(v38);
  CmCleanupThreadInfo((__int64 *)&v41);
  return (unsigned int)MultipleValueKey;
}
