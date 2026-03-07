__int64 __fastcall NtRenameKey(__int64 a1, _OWORD *a2)
{
  char v3; // r13
  int PreviousMode; // r12d
  char v5; // r15
  char v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  signed int v12; // ebx
  char v13; // si
  __int64 v14; // rcx
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // bx
  PPRIVILEGE_SET v17; // rsi
  __int64 v18; // rcx
  int v19; // r9d
  unsigned int v20; // eax
  int v21; // esi
  int v22; // r9d
  struct _KTHREAD *CurrentThread; // rax
  int v24; // eax
  __int64 v25; // r8
  PVOID v26; // rcx
  int v28; // [rsp+44h] [rbp-144h]
  char v29; // [rsp+4Ah] [rbp-13Eh]
  PVOID Object[2]; // [rsp+50h] [rbp-138h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-128h] BYREF
  int v32; // [rsp+70h] [rbp-118h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-110h]
  _QWORD v34[2]; // [rsp+80h] [rbp-108h] BYREF
  int v35; // [rsp+90h] [rbp-F8h]
  __int64 v36; // [rsp+98h] [rbp-F0h]
  __m128i v37; // [rsp+A0h] [rbp-E8h]
  __int128 v38; // [rsp+B0h] [rbp-D8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v40[2]; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+100h] [rbp-88h]
  __int128 v42; // [rsp+110h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+120h] [rbp-68h] BYREF

  v36 = a1;
  v38 = 0LL;
  *(_OWORD *)Src = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((__int64)&v38);
  v3 = 0;
  Object[0] = 0LL;
  Privileges = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = 0;
  memset(v40, 0, sizeof(v40));
  v41 = 0LL;
  v35 = -1;
  v34[1] = v34;
  v34[0] = v34;
  v32 = 0;
  v6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v29 = CmpAcquireShutdownRundown(v8, v7, v9);
  if ( !v29 )
  {
    v12 = -1073741431;
    v28 = -1073741431;
    v13 = 0;
    goto LABEL_43;
  }
  if ( (_BYTE)PreviousMode == 1 )
  {
    v37 = 0LL;
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v14 = (__int64)a2;
    v37.m128i_i32[0] = *(_DWORD *)v14;
    v10 = *(_QWORD *)(v14 + 8);
    v37.m128i_i64[1] = v10;
    *(__m128i *)Src = v37;
    v15 = _mm_cvtsi128_si32(v37);
    if ( v15 )
    {
      if ( (v10 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = v15 + v10;
      if ( v11 > 0x7FFFFFFF0000LL || v11 < v10 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(_OWORD *)Src = *a2;
  }
  v16 = (unsigned __int16)Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0x1FFu
    || ((__int64)Src[0] & 1) != 0
    || (v17 = (PPRIVILEGE_SET)Src[1], !*(_WORD *)Src[1]) )
  {
    v12 = -1073741811;
    v28 = -1073741811;
    v13 = 0;
    goto LABEL_43;
  }
  if ( CmpDoesBufferRequireCapturing(PreviousMode, (unsigned __int64)Src[1]) )
  {
    Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuota(v18, LOWORD(Src[0]), 1114524995LL);
    if ( !Privileges )
    {
      v12 = -1073741670;
      v28 = -1073741670;
      v13 = 0;
      goto LABEL_43;
    }
    v17 = Privileges;
    memmove(Privileges, Src[1], LOWORD(Src[0]));
    Src[1] = Privileges;
    v16 = (unsigned __int16)Src[0];
    WORD1(Src[0]) = Src[0];
  }
  v20 = 0;
  if ( v16 >> 1 )
  {
    while ( LOWORD(v17->PrivilegeCount) != 92 )
    {
      ++v20;
      v17 = (PPRIVILEGE_SET)((char *)v17 + 2);
      if ( v20 >= v16 >> 1 )
        goto LABEL_22;
    }
    v12 = -1073741811;
    goto LABEL_26;
  }
LABEL_22:
  LOBYTE(v19) = PreviousMode;
  v21 = v36;
  v12 = CmObReferenceObjectByHandle(v36, 131078, v11, v19, (__int64)Object, 0LL);
  v28 = v12;
  if ( v12 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v6 = 1;
    if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v32) )
      goto LABEL_24;
    LOBYTE(v22) = PreviousMode;
    v12 = CmObReferenceObjectByHandle(v21, 131097, v11, v22, (__int64)Object, 0LL);
    v28 = v12;
    if ( v12 < 0 )
      goto LABEL_27;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object[0]) )
    {
LABEL_24:
      v12 = -1073741790;
LABEL_26:
      v28 = v12;
LABEL_27:
      v13 = 0;
      goto LABEL_43;
    }
    v5 = 1;
  }
  v6 = v5;
  if ( v12 < 0 )
    goto LABEL_27;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = 1;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    *(PVOID *)&v40[0] = Object[0];
    *((_QWORD *)&v40[0] + 1) = Src;
    v24 = CmpCallCallBacksEx(4u, v40, 0LL, 1, 0x13u, (__int64)Object[0], (__int64)v34);
    v12 = v24;
    if ( v24 < 0 )
    {
      if ( v24 == -1073740541 )
        v12 = 0;
      v28 = v12;
      goto LABEL_43;
    }
    v3 = 1;
  }
  if ( !v5
    || (LOBYTE(v10) = PreviousMode,
        v12 = CmKeyBodyReplicateToVirtual(Object, v10, 131078LL, &SubjectContext, &v32),
        v28 = v12,
        v12 >= 0) )
  {
    CmpAttachToRegistryProcess(&ApcState);
    v42 = *(_OWORD *)Src;
    LOBYTE(v25) = PreviousMode;
    v12 = CmRenameKey(Object[0], &v42, v25);
    v28 = v12;
    CmpDetachFromRegistryProcess(&ApcState);
    v6 = v5;
  }
LABEL_43:
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v3 )
  {
    v12 = CmPostCallbackNotificationEx(19, (__int64)Object[0], v12, (__int64)v40, 0LL, v34);
    v28 = v12;
  }
  if ( v13 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v12 = v28;
  }
  v26 = Object[0];
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v29 )
    CmpReleaseShutdownRundown(v26, v10, v11);
  CmCleanupThreadInfo((__int64 *)&v38);
  return (unsigned int)v12;
}
