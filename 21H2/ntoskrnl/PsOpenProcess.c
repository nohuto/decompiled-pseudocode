/*
 * XREFs of PsOpenProcess @ 0x14064F550
 * Callers:
 *     NtOpenProcess @ 0x1406BE6F0 (NtOpenProcess.c)
 *     NtAlpcOpenSenderProcess @ 0x1406CF700 (NtAlpcOpenSenderProcess.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsGetProcessId @ 0x140269640 (PsGetProcessId.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14026A7A0 (SepCreateAccessStateFromSubjectContext.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     SePrivilegeCheck @ 0x140649D60 (SePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x14064CA80 (SeCaptureSubjectContextEx.c)
 *     PsLookupProcessByProcessId @ 0x14068F4F0 (PsLookupProcessByProcessId.c)
 *     PsLookupProcessThreadByCid @ 0x14068F940 (PsLookupProcessThreadByCid.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14069382C (SePrivilegedServiceAuditAlarm.c)
 *     SeDeleteAccessState @ 0x1406CC080 (SeDeleteAccessState.c)
 *     ObOpenObjectByPointer @ 0x14071DC60 (ObOpenObjectByPointer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsOpenProcess(
        unsigned __int64 a1,
        ACCESS_MASK a2,
        __int64 a3,
        _OWORD *a4,
        char a5,
        KPROCESSOR_MODE a6)
{
  int v10; // r12d
  __int64 v11; // rcx
  bool v12; // dl
  char v13; // al
  KPROCESSOR_MODE AccessMode; // r13
  int v15; // ecx
  int v16; // ebx
  int v17; // r14d
  GENERIC_MAPPING *v18; // rbx
  struct _KPROCESS *v19; // rdx
  KPROCESSOR_MODE v20; // di
  LUID v21; // rbx
  BOOLEAN v22; // al
  BOOLEAN v23; // bl
  NTSTATUS v24; // eax
  GENERIC_MAPPING *v25; // rbx
  ACCESS_MASK v26; // eax
  char v28; // [rsp+42h] [rbp-346h] BYREF
  KPROCESSOR_MODE v29; // [rsp+43h] [rbp-345h] BYREF
  ACCESS_MASK v30; // [rsp+44h] [rbp-344h]
  ULONG HandleAttributes; // [rsp+48h] [rbp-340h]
  int v32; // [rsp+4Ch] [rbp-33Ch]
  PEPROCESS Process; // [rsp+50h] [rbp-338h] BYREF
  ACCESS_MASK v34; // [rsp+58h] [rbp-330h]
  int Flink; // [rsp+60h] [rbp-328h]
  unsigned int v36; // [rsp+64h] [rbp-324h] BYREF
  ACCESS_MASK v37; // [rsp+68h] [rbp-320h] BYREF
  ULONG v38; // [rsp+6Ch] [rbp-31Ch] BYREF
  int v39; // [rsp+70h] [rbp-318h] BYREF
  ACCESS_MASK v40; // [rsp+78h] [rbp-310h] BYREF
  int v41; // [rsp+80h] [rbp-308h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+88h] [rbp-300h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-2F8h] BYREF
  HANDLE ProcessId[2]; // [rsp+98h] [rbp-2F0h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-2E0h] BYREF
  _QWORD *v46; // [rsp+B0h] [rbp-2D8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-2D0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+D8h] [rbp-2B0h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+F8h] [rbp-290h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+110h] [rbp-278h] BYREF
  _QWORD v51[28]; // [rsp+1B0h] [rbp-1D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+290h] [rbp-F8h] BYREF
  ACCESS_MASK *v53; // [rsp+2A0h] [rbp-E8h]
  __int64 v54; // [rsp+2A8h] [rbp-E0h]
  int *v55; // [rsp+2B0h] [rbp-D8h]
  __int64 v56; // [rsp+2B8h] [rbp-D0h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+2C0h] [rbp-C8h] BYREF
  unsigned int *v58; // [rsp+2E0h] [rbp-A8h]
  __int64 v59; // [rsp+2E8h] [rbp-A0h]
  ACCESS_MASK *v60; // [rsp+2F0h] [rbp-98h]
  __int64 v61; // [rsp+2F8h] [rbp-90h]
  ULONG *v62; // [rsp+300h] [rbp-88h]
  __int64 v63; // [rsp+308h] [rbp-80h]
  char *v64; // [rsp+310h] [rbp-78h]
  __int64 v65; // [rsp+318h] [rbp-70h]
  KPROCESSOR_MODE *v66; // [rsp+320h] [rbp-68h]
  __int64 v67; // [rsp+328h] [rbp-60h]
  __int64 *v68; // [rsp+330h] [rbp-58h]
  __int64 v69; // [rsp+338h] [rbp-50h]

  v30 = a2;
  v46 = (_QWORD *)a1;
  v34 = a2;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v51, 0, sizeof(v51));
  *(_OWORD *)ProcessId = 0LL;
  Handle = 0LL;
  DmaAdapter = 0LL;
  v10 = 0;
  v32 = 0;
  Process = 0LL;
  Flink = -1;
  if ( a5 )
  {
    v11 = a1;
    if ( a1 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = *(_QWORD *)(a3 + 16) != 0LL;
    HandleAttributes = *(_DWORD *)(a3 + 24) & 0x1DF2;
    if ( a4 )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)ProcessId = *a4;
      v13 = 1;
    }
    else
    {
      v13 = 0;
    }
    AccessMode = a6;
  }
  else
  {
    v12 = *(_QWORD *)(a3 + 16) != 0LL;
    v15 = 73714;
    AccessMode = a6;
    if ( a6 )
      v15 = 7666;
    HandleAttributes = *(_DWORD *)(a3 + 24) & v15;
    if ( a4 )
    {
      *(_OWORD *)ProcessId = *a4;
      v13 = 1;
    }
    else
    {
      v13 = 0;
    }
  }
  if ( v12 || !v13 )
  {
    v16 = -1073741776;
    goto LABEL_45;
  }
  if ( ProcessId[1] )
  {
    v16 = PsLookupProcessThreadByCid(ProcessId, &Process, &DmaAdapter);
    if ( v16 >= 0 )
    {
      HalPutDmaAdapter(DmaAdapter);
      goto LABEL_21;
    }
LABEL_45:
    v26 = v30;
    goto LABEL_46;
  }
  v16 = PsLookupProcessByProcessId(ProcessId[0], &Process);
  if ( v16 < 0 )
    goto LABEL_45;
LABEL_21:
  Flink = (int)Process[1].Header.WaitListHead.Flink;
  v17 = 0;
  v18 = (GENERIC_MAPPING *)((char *)PsProcessType + 76);
  v19 = KeGetCurrentThread()->ApcState.Process;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContextEx(KeGetCurrentThread(), v19, &SubjectContext);
  v16 = SepCreateAccessStateFromSubjectContext(&SubjectContext, &PassedAccessState, v51, a2, v18);
  if ( v16 < 0 )
  {
LABEL_38:
    v10 = 0;
    goto LABEL_45;
  }
  v10 = 1;
  v32 = 1;
  while ( 1 )
  {
    if ( (HandleAttributes & 0x400) == 0 || (v20 = 1, v17) )
      v20 = AccessMode;
    v21 = SeDebugPrivilege;
    memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
    SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectSecurityContext);
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Luid = v21;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    v22 = SePrivilegeCheck(&RequiredPrivileges, &SubjectSecurityContext, v20);
    v23 = v22;
    if ( v20 )
      SePrivilegedServiceAuditAlarm(0LL, &SubjectSecurityContext, &RequiredPrivileges, v22);
    SeReleaseSubjectContext(&SubjectSecurityContext);
    if ( v23 )
    {
      if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
        PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
      else
        PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
      PassedAccessState.RemainingDesiredAccess = 0;
    }
    v24 = ObOpenObjectByPointer(
            Process,
            HandleAttributes,
            &PassedAccessState,
            0,
            (POBJECT_TYPE)PsProcessType,
            AccessMode,
            &Handle);
    v16 = v24;
    if ( v24 >= 0 )
      break;
    if ( (HandleAttributes & 0x400) == 0 || v24 != -1073741790 || v17 )
      goto LABEL_45;
    v17 = 1;
    SeDeleteAccessState(&PassedAccessState);
    v25 = (GENERIC_MAPPING *)((char *)PsProcessType + 76);
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
    v16 = SepCreateAccessStateFromSubjectContext(&SubjectContext, &PassedAccessState, v51, v30, v25);
    if ( v16 < 0 )
      goto LABEL_38;
  }
  if ( v17 && (unsigned int)dword_140C01AB0 > 5 && tlgKeywordOn((__int64)&dword_140C01AB0, 0x400000000000LL) )
  {
    v36 = (unsigned int)PsGetProcessId(Process);
    v58 = &v36;
    v59 = 4LL;
    v37 = v30;
    v60 = &v37;
    v61 = 4LL;
    v38 = HandleAttributes;
    v62 = &v38;
    v63 = 4LL;
    v28 = a5;
    v64 = &v28;
    v65 = 1LL;
    v29 = AccessMode;
    v66 = &v29;
    v67 = 1LL;
    v45 = 0x1000000LL;
    v68 = &v45;
    v69 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C01AB0, (unsigned __int8 *)word_14002C312, 0LL, 0LL, 8u, &v57);
  }
  *v46 = Handle;
  v26 = v30;
LABEL_46:
  v41 = v16;
  v40 = v26;
  v39 = Flink;
  UserData.Ptr = (ULONGLONG)&v39;
  *(_QWORD *)&UserData.Size = 4LL;
  v53 = &v40;
  v54 = 4LL;
  v55 = &v41;
  v56 = 4LL;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENPROCESS, 0LL, 3u, &UserData);
  if ( v10 )
    SeDeleteAccessState(&PassedAccessState);
  if ( Process )
    HalPutDmaAdapter((PADAPTER_OBJECT)Process);
  return (unsigned int)v16;
}
