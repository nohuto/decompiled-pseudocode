/*
 * XREFs of PsOpenProcess @ 0x1406ABCC0
 * Callers:
 *     NtOpenProcess @ 0x1406AC1B0 (NtOpenProcess.c)
 *     NtAlpcOpenSenderProcess @ 0x140714820 (NtAlpcOpenSenderProcess.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     PsGetProcessId @ 0x140236D10 (PsGetProcessId.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     SepDeleteAccessState @ 0x140265F50 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140266820 (SepCreateAccessStateFromSubjectContext.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PsLookupProcessByProcessId @ 0x1406AC100 (PsLookupProcessByProcessId.c)
 *     PsLookupProcessThreadByCid @ 0x14076A3D0 (PsLookupProcessThreadByCid.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContextEx @ 0x1407C9AF0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsOpenProcess(unsigned __int64 a1, int a2, __int64 a3, _OWORD *a4, char a5, KPROCESSOR_MODE a6)
{
  int v9; // r14d
  bool v10; // cl
  int v11; // edx
  KPROCESSOR_MODE AccessMode; // r13
  char v13; // al
  int v14; // ebx
  int v15; // r12d
  _DWORD *v16; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPROCESS *v18; // rdx
  KPROCESSOR_MODE v19; // dl
  NTSTATUS v20; // eax
  __int64 v22; // rcx
  char v23; // [rsp+42h] [rbp-306h] BYREF
  KPROCESSOR_MODE v24; // [rsp+43h] [rbp-305h] BYREF
  ULONG HandleAttributes; // [rsp+44h] [rbp-304h]
  int v26; // [rsp+48h] [rbp-300h]
  unsigned int v27; // [rsp+50h] [rbp-2F8h] BYREF
  int v28; // [rsp+58h] [rbp-2F0h] BYREF
  ULONG v29; // [rsp+60h] [rbp-2E8h] BYREF
  PEPROCESS Process; // [rsp+68h] [rbp-2E0h] BYREF
  int Flink; // [rsp+70h] [rbp-2D8h]
  PVOID Object; // [rsp+78h] [rbp-2D0h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-2C8h] BYREF
  HANDLE ProcessId[2]; // [rsp+88h] [rbp-2C0h] BYREF
  __int64 v35; // [rsp+98h] [rbp-2B0h] BYREF
  _QWORD *v36; // [rsp+A0h] [rbp-2A8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A8h] [rbp-2A0h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+D0h] [rbp-278h] BYREF
  _QWORD v39[28]; // [rsp+170h] [rbp-1D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+250h] [rbp-F8h] BYREF
  int *v41; // [rsp+260h] [rbp-E8h]
  __int64 v42; // [rsp+268h] [rbp-E0h]
  unsigned int *v43; // [rsp+270h] [rbp-D8h]
  __int64 v44; // [rsp+278h] [rbp-D0h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+280h] [rbp-C8h] BYREF
  unsigned int *v46; // [rsp+2A0h] [rbp-A8h]
  __int64 v47; // [rsp+2A8h] [rbp-A0h]
  int *v48; // [rsp+2B0h] [rbp-98h]
  __int64 v49; // [rsp+2B8h] [rbp-90h]
  ULONG *v50; // [rsp+2C0h] [rbp-88h]
  __int64 v51; // [rsp+2C8h] [rbp-80h]
  char *v52; // [rsp+2D0h] [rbp-78h]
  __int64 v53; // [rsp+2D8h] [rbp-70h]
  KPROCESSOR_MODE *v54; // [rsp+2E0h] [rbp-68h]
  __int64 v55; // [rsp+2E8h] [rbp-60h]
  __int64 *v56; // [rsp+2F0h] [rbp-58h]
  __int64 v57; // [rsp+2F8h] [rbp-50h]

  v36 = (_QWORD *)a1;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v39, 0, sizeof(v39));
  *(_OWORD *)ProcessId = 0LL;
  Handle = 0LL;
  Object = 0LL;
  v9 = 0;
  v26 = 0;
  Process = 0LL;
  Flink = -1;
  if ( a5 )
  {
    v22 = a1;
    if ( a1 >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v22 = *(_QWORD *)v22;
    if ( (a3 & 3) == 0 )
    {
      v10 = *(_QWORD *)(a3 + 16) != 0LL;
      HandleAttributes = *(_DWORD *)(a3 + 24) & 0x1DF2;
      if ( !a4 )
      {
        v13 = 0;
        goto LABEL_32;
      }
      if ( ((unsigned __int8)a4 & 3) == 0 )
      {
        *(_OWORD *)ProcessId = *a4;
        v13 = 1;
LABEL_32:
        AccessMode = a6;
        goto LABEL_6;
      }
    }
    ExRaiseDatatypeMisalignment();
  }
  v10 = *(_QWORD *)(a3 + 16) != 0LL;
  v11 = 73714;
  AccessMode = a6;
  if ( a6 )
    v11 = 7666;
  HandleAttributes = *(_DWORD *)(a3 + 24) & v11;
  if ( a4 )
  {
    *(_OWORD *)ProcessId = *a4;
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
LABEL_6:
  if ( v10 || !v13 )
  {
    v14 = -1073741776;
  }
  else
  {
    if ( ProcessId[1] )
    {
      v14 = PsLookupProcessThreadByCid(ProcessId, &Process, &Object);
      if ( v14 < 0 )
        goto LABEL_21;
      ObfDereferenceObject(Object);
    }
    else
    {
      v14 = PsLookupProcessByProcessId(ProcessId[0], &Process);
      if ( v14 < 0 )
        goto LABEL_21;
    }
    Flink = (int)Process[1].Header.WaitListHead.Flink;
    v15 = 0;
    v9 = 1;
    while ( 1 )
    {
      v16 = (_DWORD *)PsProcessType + 19;
      CurrentThread = KeGetCurrentThread();
      v18 = CurrentThread->ApcState.Process;
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      SeCaptureSubjectContextEx(CurrentThread, v18, &SubjectContext);
      v14 = SepCreateAccessStateFromSubjectContext(&SubjectContext, &PassedAccessState, v39, a2, v16);
      if ( v14 < 0 )
      {
        v9 = 0;
        goto LABEL_21;
      }
      v26 = 1;
      if ( (HandleAttributes & 0x400) == 0 || (v19 = 1, v15) )
        v19 = AccessMode;
      if ( SeSinglePrivilegeCheck(SeDebugPrivilege, v19) )
      {
        if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
          PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
        else
          PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
        PassedAccessState.RemainingDesiredAccess = 0;
      }
      v20 = ObOpenObjectByPointer(
              Process,
              HandleAttributes,
              &PassedAccessState,
              0,
              (POBJECT_TYPE)PsProcessType,
              AccessMode,
              &Handle);
      v14 = v20;
      if ( v20 >= 0 )
        break;
      if ( (HandleAttributes & 0x400) == 0 || v20 != -1073741790 || v15 )
        goto LABEL_21;
      v15 = 1;
      SepDeleteAccessState((__int64)&PassedAccessState);
      SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
    }
    if ( v15 && (unsigned int)dword_140C03010 > 5 && tlgKeywordOn((__int64)&dword_140C03010, 0x400000000000LL) )
    {
      v27 = (unsigned int)PsGetProcessId(Process);
      v46 = &v27;
      v47 = 4LL;
      v28 = a2;
      v48 = &v28;
      v49 = 4LL;
      v29 = HandleAttributes;
      v50 = &v29;
      v51 = 4LL;
      v23 = a5;
      v52 = &v23;
      v53 = 1LL;
      v24 = AccessMode;
      v54 = &v24;
      v55 = 1LL;
      v35 = 0x1000000LL;
      v56 = &v35;
      v57 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03010,
        (unsigned __int8 *)byte_140033E25,
        0LL,
        0LL,
        8u,
        &v45);
    }
    *v36 = Handle;
  }
LABEL_21:
  v27 = v14;
  v28 = a2;
  v29 = Flink;
  UserData.Ptr = (ULONGLONG)&v29;
  *(_QWORD *)&UserData.Size = 4LL;
  v41 = &v28;
  v42 = 4LL;
  v43 = &v27;
  v44 = 4LL;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENPROCESS, 0LL, 3u, &UserData);
  if ( v9 )
  {
    SepDeleteAccessState((__int64)&PassedAccessState);
    SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
  }
  if ( Process )
    ObfDereferenceObject(Process);
  return (unsigned int)v14;
}
