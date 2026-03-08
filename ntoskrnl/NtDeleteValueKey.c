/*
 * XREFs of NtDeleteValueKey @ 0x1406B9280
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1407586E0 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140243978 (CmpAllocateTransientPoolWithQuota.c)
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
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmPostCallbackNotificationEx @ 0x1406BD240 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x1406E0B20 (CmpCallCallBacksEx.c)
 *     CmpDoesBufferRequireCapturing @ 0x1407A97FC (CmpDoesBufferRequireCapturing.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140A15240 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A152D4 (CmKeyBodyRemapToVirtual.c)
 *     CmObReferenceObjectByHandle @ 0x140AF2300 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall NtDeleteValueKey(__int64 a1, _OWORD *a2)
{
  int v3; // edi
  char v4; // r14
  char v5; // r13
  unsigned int PreviousMode; // r15d
  char v7; // si
  int v8; // r8d
  int v9; // r9d
  unsigned __int64 v10; // rdx
  int v11; // edi
  __int64 v12; // rcx
  unsigned __int16 v13; // ax
  unsigned int v14; // edi
  char *v15; // rsi
  __int64 v16; // rcx
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rax
  char v18; // r12
  char *i; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v21; // r9d
  __int64 v22; // r9
  int v24; // r8d
  int v25; // r9d
  int v26; // eax
  __int64 v27; // rcx
  int v28; // [rsp+44h] [rbp-144h]
  char v29; // [rsp+4Ah] [rbp-13Eh]
  PVOID Object[2]; // [rsp+50h] [rbp-138h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-128h] BYREF
  int v32; // [rsp+70h] [rbp-118h] BYREF
  __int64 v33; // [rsp+78h] [rbp-110h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-108h]
  __int64 v35; // [rsp+88h] [rbp-100h]
  __int64 v36; // [rsp+90h] [rbp-F8h]
  _QWORD v37[2]; // [rsp+98h] [rbp-F0h] BYREF
  int v38; // [rsp+A8h] [rbp-E0h]
  __m128i v39; // [rsp+B0h] [rbp-D8h]
  __int128 v40; // [rsp+C0h] [rbp-C8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-B8h] BYREF
  _OWORD v42[2]; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v43; // [rsp+110h] [rbp-78h]
  __int128 v44; // [rsp+120h] [rbp-68h] BYREF
  _BYTE v45[32]; // [rsp+130h] [rbp-58h] BYREF

  v3 = a1;
  v35 = a1;
  v40 = 0LL;
  memset(v42, 0, sizeof(v42));
  v43 = 0LL;
  v33 = 0LL;
  *(_OWORD *)Src = 0LL;
  Privileges = 0LL;
  v4 = 0;
  v32 = 0;
  v38 = 0;
  memset(v45, 0, sizeof(v45));
  v36 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v45, 0x20000LL);
  v5 = 0;
  Object[0] = 0LL;
  v37[1] = v37;
  v37[0] = v37;
  CmpInitializeThreadInfo((__int64)&v40);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v29 = CmpAcquireShutdownRundown();
  if ( !v29 )
  {
    v11 = -1073741431;
    goto LABEL_52;
  }
  LOBYTE(v9) = PreviousMode;
  v11 = CmObReferenceObjectByHandle(v3, 2, v8, v9, (__int64)Object, (__int64)&v33);
  v28 = v11;
  if ( v11 != -1073741790 )
    goto LABEL_5;
  SeCaptureSubjectContext(&SubjectContext);
  v7 = 1;
  if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v32) )
    goto LABEL_51;
  LOBYTE(v25) = PreviousMode;
  v11 = CmObReferenceObjectByHandle(v35, 131097, v24, v25, (__int64)Object, (__int64)&v33);
  v28 = v11;
  if ( v11 < 0 )
    goto LABEL_53;
  if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object[0]) )
  {
LABEL_51:
    v11 = -1073741790;
LABEL_52:
    v28 = v11;
    goto LABEL_53;
  }
  v4 = 1;
LABEL_5:
  v7 = v4;
  if ( v11 < 0 )
  {
LABEL_53:
    v18 = 0;
    goto LABEL_34;
  }
  if ( CmpTraceRoutine && Object[0] )
    v36 = *((_QWORD *)Object[0] + 1);
  if ( (_BYTE)PreviousMode == 1 )
  {
    v39 = 0LL;
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a2;
    v39.m128i_i32[0] = *(_DWORD *)v12;
    v10 = *(_QWORD *)(v12 + 8);
    v39.m128i_i64[1] = v10;
    *(__m128i *)Src = v39;
    v13 = _mm_cvtsi128_si32(v39);
    if ( v13 )
    {
      if ( (v10 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v13 + v10 > 0x7FFFFFFF0000LL || v13 + v10 < v10 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(_OWORD *)Src = *a2;
  }
  v14 = LOWORD(Src[0]);
  v15 = (char *)((unsigned __int64)Src[1] & -(__int64)(LOWORD(Src[0]) != 0));
  Src[1] = v15;
  WORD1(Src[0]) = Src[0];
  if ( LOWORD(Src[0]) && (unsigned __int8)CmpDoesBufferRequireCapturing(PreviousMode, v15) )
  {
    TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota(v16, v14, 1650675011LL);
    Privileges = TransientPoolWithQuota;
    if ( !TransientPoolWithQuota )
    {
      v11 = -1073741670;
      v28 = -1073741670;
      v7 = v4;
      v18 = 0;
      goto LABEL_34;
    }
    v15 = (char *)TransientPoolWithQuota;
    memmove(TransientPoolWithQuota, Src[1], LOWORD(Src[0]));
    Src[1] = v15;
    LOWORD(v14) = Src[0];
  }
  if ( ((__int64)Src[0] & 1) != 0 )
  {
    LOWORD(Src[0]) = 0;
    v11 = -1073741811;
LABEL_63:
    v28 = v11;
    v7 = v4;
    v18 = 0;
    goto LABEL_34;
  }
  if ( (*(_DWORD *)(*((_QWORD *)Object[0] + 1) + 8LL) & 0x80u) != 0 )
  {
    v11 = -1073741790;
    goto LABEL_63;
  }
  for ( i = &v15[2 * ((unsigned __int64)(unsigned __int16)v14 >> 1) - 2]; (_WORD)v14 && !*(_WORD *)i; i -= 2 )
  {
    LOWORD(v14) = v14 - 2;
    LOWORD(Src[0]) = v14;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = 1;
  if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
  {
    v18 = 0;
    goto LABEL_31;
  }
  *(PVOID *)&v42[0] = Object[0];
  *((_QWORD *)&v42[0] + 1) = Src;
  LOBYTE(v21) = 1;
  v11 = CmpCallCallBacksEx(2, (unsigned int)v42, 0, v21, 17, (__int64)Object[0], (__int64)v37);
  if ( v11 < 0 )
  {
    if ( v11 == -1073740541 )
      v11 = 0;
    goto LABEL_63;
  }
  v18 = 1;
LABEL_31:
  if ( !v4 )
    goto LABEL_32;
  LOBYTE(v10) = PreviousMode;
  v11 = CmKeyBodyRemapToVirtual((unsigned int)Object, v10, 2, (unsigned int)&SubjectContext, (__int64)&v32);
  v28 = v11;
  v7 = v4;
  if ( v11 >= 0 )
  {
    if ( !CmpVEEnabled || (v26 = 1, (*(_DWORD *)(*((_QWORD *)Object[0] + 1) + 184LL) & 0x1000000) == 0) )
      v26 = 0;
    if ( !v26 )
    {
      v11 = -1073741790;
      v28 = -1073741790;
      goto LABEL_33;
    }
LABEL_32:
    v44 = *(_OWORD *)Src;
    v22 = (unsigned int)v33 >> 2;
    LOBYTE(v22) = (v33 & 4) != 0;
    v11 = CmDeleteValueKey(Object[0], &v44, v35, v22);
    v28 = v11;
LABEL_33:
    v7 = v4;
  }
LABEL_34:
  if ( v7 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v18 )
  {
    v11 = CmPostCallbackNotificationEx(17, Object[0], v11, (unsigned int)v42, 0LL, (__int64)v37);
    v28 = v11;
  }
  if ( v5 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v11 = v28;
  }
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  if ( CmpTraceRoutine )
  {
    v27 = v36;
    LOBYTE(v27) = 15;
    CmpTraceRoutine(v27, v45, (unsigned int)v11, 0LL, v36, Src);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v29 )
    CmpReleaseShutdownRundown();
  CmCleanupThreadInfo((__int64 *)&v40);
  return (unsigned int)v11;
}
