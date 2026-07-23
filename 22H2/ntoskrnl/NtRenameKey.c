/*
 * XREFs of NtRenameKey @ 0x140868C80
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402D0610 (ExIsResourceAcquiredSharedLite.c)
 *     CmDoVirtualTest @ 0x14032A994 (CmDoVirtualTest.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140347F68 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpCallCallBacksEx @ 0x140640B60 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x140645BA0 (CmPostCallbackNotificationEx.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406852C0 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406A5B3C (CmKeyBodyNeedsVirtualImage.c)
 *     SeCaptureSubjectContext @ 0x1406CE8F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     CmpDoesBufferRequireCapturing @ 0x1406DD3DC (CmpDoesBufferRequireCapturing.c)
 *     CmObReferenceObjectByHandle @ 0x1406DD40C (CmObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     CmRenameKey @ 0x14086CA54 (CmRenameKey.c)
 */

NTSTATUS __cdecl NtRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  char v3; // r13
  int PreviousMode; // r12d
  char v5; // r15
  char v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ebx
  char v9; // si
  int v10; // eax
  wchar_t *Buffer; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int16 v13; // bx
  PPRIVILEGE_SET v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // eax
  void *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  __int64 v22; // r8
  struct _KTHREAD *v23; // rax
  int v24; // eax
  __int64 v25; // r8
  NTSTATUS v27; // [rsp+44h] [rbp-134h]
  BOOLEAN v28; // [rsp+4Ah] [rbp-12Eh]
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+50h] [rbp-128h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-118h] BYREF
  int v31; // [rsp+70h] [rbp-108h]
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-100h]
  _QWORD v33[2]; // [rsp+80h] [rbp-F8h] BYREF
  HANDLE v34; // [rsp+90h] [rbp-E8h]
  __int128 v35; // [rsp+A0h] [rbp-D8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B0h] [rbp-C8h] BYREF
  _OWORD v37[2]; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+F0h] [rbp-88h]
  __int128 v39; // [rsp+100h] [rbp-78h] BYREF
  _BYTE v40[48]; // [rsp+110h] [rbp-68h] BYREF

  v34 = KeyHandle;
  *(_OWORD *)Src = 0LL;
  memset(v40, 0, sizeof(v40));
  v3 = 0;
  DmaAdapter[0] = 0LL;
  Privileges = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = 0;
  memset(v37, 0, sizeof(v37));
  v38 = 0LL;
  v33[1] = v33;
  v33[0] = v33;
  v31 = 0;
  v6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v28 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v28 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v8 = -1073741431;
    v27 = -1073741431;
    v9 = 0;
    goto LABEL_43;
  }
  if ( (_BYTE)PreviousMode == 1 )
  {
    v35 = 0LL;
    if ( (unsigned __int64)NewName >= 0x7FFFFFFF0000LL )
      NewName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)&NewName->Length;
    LODWORD(v35) = v10;
    Buffer = NewName->Buffer;
    *((_QWORD *)&v35 + 1) = Buffer;
    *(_OWORD *)Src = v35;
    if ( (_WORD)v10 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (unsigned __int64)Buffer + (unsigned __int16)v10;
      if ( v12 > 0x7FFFFFFF0000LL || v12 < (unsigned __int64)Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(UNICODE_STRING *)Src = *NewName;
  }
  v13 = (unsigned __int16)Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0x1FFu
    || ((__int64)Src[0] & 1) != 0
    || (v14 = (PPRIVILEGE_SET)Src[1], !*(_WORD *)Src[1]) )
  {
    v8 = -1073741811;
    v27 = -1073741811;
    v9 = 0;
    goto LABEL_43;
  }
  if ( CmpDoesBufferRequireCapturing(PreviousMode, (unsigned __int64)Src[1]) )
  {
    Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v15, LOWORD(Src[0]), 0x426E4D43u);
    if ( !Privileges )
    {
      v8 = -1073741670;
      v27 = -1073741670;
      v9 = 0;
      goto LABEL_43;
    }
    v14 = Privileges;
    memmove(Privileges, Src[1], LOWORD(Src[0]));
    Src[1] = Privileges;
    v13 = (unsigned __int16)Src[0];
    WORD1(Src[0]) = Src[0];
  }
  v17 = 0;
  if ( v13 >> 1 )
  {
    while ( LOWORD(v14->PrivilegeCount) != 92 )
    {
      ++v17;
      v14 = (PPRIVILEGE_SET)((char *)v14 + 2);
      if ( v17 >= v13 >> 1 )
        goto LABEL_22;
    }
    v8 = -1073741811;
    goto LABEL_26;
  }
LABEL_22:
  v18 = v34;
  v8 = CmObReferenceObjectByHandle(v34, 0x20006u, v16, PreviousMode, DmaAdapter, 0LL);
  v27 = v8;
  if ( v8 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v6 = 1;
    if ( !CmDoVirtualTest((__int64)&SubjectContext) )
      goto LABEL_24;
    v8 = CmObReferenceObjectByHandle(v18, 0x20019u, v22, PreviousMode, DmaAdapter, 0LL);
    v27 = v8;
    if ( v8 < 0 )
      goto LABEL_27;
    if ( !CmKeyBodyNeedsVirtualImage((__int64)DmaAdapter[0]) )
    {
LABEL_24:
      v8 = -1073741790;
LABEL_26:
      v27 = v8;
LABEL_27:
      v9 = 0;
      goto LABEL_43;
    }
    v5 = 1;
  }
  v6 = v5;
  if ( v8 < 0 )
    goto LABEL_27;
  v23 = KeGetCurrentThread();
  --v23->KernelApcDisable;
  v9 = 1;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    *(PADAPTER_OBJECT *)&v37[0] = DmaAdapter[0];
    *((_QWORD *)&v37[0] + 1) = Src;
    v24 = CmpCallCallBacksEx(4u, (__int64)v37, 0LL, 1, 0x13u, (__int64)DmaAdapter[0], (__int64)v33);
    v8 = v24;
    if ( v24 < 0 )
    {
      if ( v24 == -1073740541 )
        v8 = 0;
      v27 = v8;
      goto LABEL_43;
    }
    v3 = 1;
  }
  if ( !v5
    || (v8 = CmKeyBodyReplicateToVirtual(DmaAdapter, PreviousMode, 0x20006u, (__int64)&SubjectContext), v27 = v8, v8 >= 0) )
  {
    CmpAttachToRegistryProcess((__int64)v40, v19, v20, v21);
    v39 = *(_OWORD *)Src;
    LOBYTE(v25) = PreviousMode;
    v8 = CmRenameKey(DmaAdapter[0], &v39, v25);
    v27 = v8;
    KiUnstackDetachProcess((__int64)v40, 0);
    v6 = v5;
  }
LABEL_43:
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v3 )
  {
    v8 = CmPostCallbackNotificationEx(0x13u, (__int64)DmaAdapter[0], v8, (__int64)v37, 0LL, v33);
    v27 = v8;
  }
  if ( v9 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v8 = v27;
  }
  if ( DmaAdapter[0] )
    HalPutDmaAdapter(DmaAdapter[0]);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v28 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v27;
  }
  return v8;
}
