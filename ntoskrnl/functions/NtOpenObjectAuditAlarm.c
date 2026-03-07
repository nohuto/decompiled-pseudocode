NTSTATUS __stdcall NtOpenObjectAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        PUNICODE_STRING ObjectTypeName,
        PUNICODE_STRING ObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK GrantedAccess,
        PPRIVILEGE_SET Privileges,
        BOOLEAN ObjectCreation,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateOnClose)
{
  BOOLEAN PreviousMode; // r14
  int v14; // edx
  NTSTATUS v15; // edi
  PVOID v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r9
  NTSTATUS v19; // r14d
  __int64 v20; // rdi
  PBOOLEAN v21; // r12
  ULONG PrivilegeCount; // r14d
  unsigned int v23; // ecx
  char *v24; // rdx
  ULONG *Pool2; // rax
  __int64 v26; // rdx
  __int64 v27; // r9
  ULONG *v28; // r12
  PVOID v30; // r14
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // r9
  PVOID v34; // rdi
  BOOLEAN v35; // r13
  __int64 v36; // rcx
  NTSTATUS v37; // ebx
  __int16 v38; // ax
  __int64 v39; // rdx
  ACL *v40; // rdx
  __int64 v41; // rax
  ACL *v42; // rcx
  BOOLEAN v43; // [rsp+A0h] [rbp-B8h]
  BOOLEAN GenerateAudit; // [rsp+A2h] [rbp-B6h] BYREF
  BOOLEAN GenerateAlarm[5]; // [rsp+A3h] [rbp-B5h] BYREF
  int v46; // [rsp+A8h] [rbp-B0h]
  unsigned __int16 v47; // [rsp+ACh] [rbp-ACh] BYREF
  PVOID v48; // [rsp+B0h] [rbp-A8h] BYREF
  PVOID Token; // [rsp+B8h] [rbp-A0h] BYREF
  PVOID v50; // [rsp+C0h] [rbp-98h] BYREF
  PVOID P; // [rsp+C8h] [rbp-90h] BYREF
  PVOID v52; // [rsp+D0h] [rbp-88h] BYREF
  PVOID v53; // [rsp+D8h] [rbp-80h]
  __int64 v54; // [rsp+E0h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-70h] BYREF
  ULONG v56; // [rsp+108h] [rbp-50h]
  unsigned int v57; // [rsp+10Ch] [rbp-4Ch]
  size_t Size; // [rsp+110h] [rbp-48h]

  P = 0LL;
  v50 = 0LL;
  v52 = 0LL;
  v48 = 0LL;
  v53 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  GenerateAudit = 0;
  GenerateAlarm[0] = 0;
  v54 = 0LL;
  v47 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v43 = PreviousMode;
  GenerateAlarm[1] = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( !SeCheckAuditPrivilege((__int64)&SubjectContext, PreviousMode) )
  {
    v37 = -1073741727;
    goto LABEL_54;
  }
  Token = 0LL;
  v15 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  if ( v15 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v15 != -1073741816 )
    {
      v36 = (unsigned int)v15;
LABEL_51:
      SepAuditFailed(v36);
    }
    return v15;
  }
  v16 = Token;
  if ( *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 1 )
  {
    ObfDereferenceObject(Token);
    v37 = -1073741659;
LABEL_54:
    SeReleaseSubjectContext(&SubjectContext);
    return v37;
  }
  if ( !SecurityDescriptor )
  {
    ObfDereferenceObject(Token);
    v37 = -1073741703;
    goto LABEL_54;
  }
  LOBYTE(v14) = PreviousMode;
  v19 = SeCaptureSecurityDescriptor((_DWORD)SecurityDescriptor, v14, 1, 0, (__int64)&v48);
  v46 = v19;
  if ( v19 >= 0 && v48 )
  {
    if ( AccessGranted && Privileges )
    {
      if ( ((unsigned __int8)Privileges & 3) != 0 )
        goto LABEL_28;
      v20 = 0x7FFFFFFF0000LL;
      PrivilegeCount = Privileges->PrivilegeCount;
      v56 = PrivilegeCount;
      if ( PrivilegeCount >= 0x43 )
      {
        v15 = -1073741811;
        v46 = -1073741811;
        v21 = GenerateOnClose;
        goto LABEL_29;
      }
      v23 = 12 * PrivilegeCount + 8;
      v57 = v23;
      if ( 12 * PrivilegeCount != -8 )
      {
        v24 = (char *)Privileges + v23;
        if ( (unsigned __int64)v24 > 0x7FFFFFFF0000LL || v24 < (char *)Privileges )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      Size = v23;
      Pool2 = (ULONG *)ExAllocatePool2(256LL, v23, 1917871443LL);
      v28 = Pool2;
      v53 = Pool2;
      if ( !Pool2 )
      {
        LOBYTE(v26) = v43;
        SeReleaseSecurityDescriptor(v48, v26, 0LL, v27);
        ObfDereferenceObject(Token);
        SeReleaseSubjectContext(&SubjectContext);
        v46 = -1073741670;
        SepAuditFailed(3221225626LL);
        return -1073741670;
      }
      memmove(Pool2, Privileges, Size);
      *v28 = PrivilegeCount;
    }
    else
    {
      v20 = 0x7FFFFFFF0000LL;
    }
    if ( !HandleId )
    {
LABEL_13:
      v21 = GenerateOnClose;
      if ( (unsigned __int64)GenerateOnClose < 0x7FFFFFFF0000LL )
        v20 = (__int64)GenerateOnClose;
      *(_BYTE *)v20 = *(_BYTE *)v20;
      v15 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)&P);
      v46 = v15;
      if ( v15 >= 0 )
      {
        v15 = SepProbeAndCaptureString_U((unsigned __int64)ObjectTypeName, (__int64)&v50);
        v46 = v15;
        if ( v15 >= 0 )
        {
          v15 = SepProbeAndCaptureString_U((unsigned __int64)ObjectName, (__int64)&v52);
          v46 = v15;
        }
      }
LABEL_29:
      if ( v15 >= 0 )
      {
        v30 = v50;
        v31 = SepAdtAuditObjectAccessWithContext(
                0LL,
                (const UNICODE_STRING *)v50,
                AccessGranted,
                AccessGranted == 0,
                (__int64)&SubjectContext,
                0,
                &v47);
        v34 = v48;
        if ( !v31 )
          goto LABEL_31;
        v38 = *((_WORD *)v48 + 1);
        if ( (v38 & 0x10) == 0 )
          goto LABEL_69;
        if ( v38 >= 0 )
        {
          v40 = (ACL *)*((_QWORD *)v48 + 3);
          goto LABEL_71;
        }
        v39 = *((unsigned int *)v48 + 3);
        if ( (_DWORD)v39 )
          v40 = (ACL *)((char *)v48 + v39);
        else
LABEL_69:
          v40 = 0LL;
LABEL_71:
        if ( (v38 & 0x10) == 0 )
          goto LABEL_75;
        if ( v38 >= 0 )
        {
          v42 = (ACL *)*((_QWORD *)v48 + 3);
          goto LABEL_77;
        }
        v41 = *((unsigned int *)v48 + 3);
        if ( (_DWORD)v41 )
          v42 = (ACL *)((char *)v48 + v41);
        else
LABEL_75:
          v42 = 0LL;
LABEL_77:
        SeExamineSacl(v42, v40, Token, GrantedAccess | DesiredAccess, AccessGranted, &GenerateAudit, GenerateAlarm);
        if ( GenerateAudit || GenerateAlarm[0] )
        {
          v34 = v48;
          v30 = v50;
          v35 = SepAdtOpenObjectAuditAlarm(
                  v47,
                  (int)P,
                  (unsigned __int64)&v54 & -(__int64)(HandleId != 0LL),
                  (int)v50,
                  (__int64)v52,
                  v48,
                  (__int64)Token,
                  (__int64)SubjectContext.PrimaryToken,
                  DesiredAccess,
                  GrantedAccess,
                  (__int64)v53,
                  AccessGranted,
                  (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                  2,
                  0LL,
                  0,
                  0LL,
                  0LL,
                  0LL);
LABEL_32:
          if ( !GenerateAudit && !GenerateAlarm[0] && Privileges && AccessGranted )
          {
            v30 = v50;
            SepAdtPrivilegeObjectAuditAlarm(
              (const int *)P,
              (unsigned __int16 *)v50,
              (unsigned __int16 *)v52,
              v54,
              (__int64)Token,
              (__int64)SubjectContext.PrimaryToken,
              (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
              DesiredAccess,
              (int *)v53,
              AccessGranted);
            v35 = 0;
            v34 = v48;
          }
          LOBYTE(v32) = v43;
          SeReleaseSecurityDescriptor(v34, v32, 0LL, v33);
          if ( P )
            ExFreePoolWithTag(P, 0);
          if ( v30 )
            ExFreePoolWithTag(v30, 0);
          if ( v52 )
            ExFreePoolWithTag(v52, 0);
          if ( v53 )
            ExFreePoolWithTag(v53, 0);
          ObfDereferenceObject(Token);
          SeReleaseSubjectContext(&SubjectContext);
          *v21 = v35;
          return 0;
        }
LABEL_31:
        v35 = 0;
        goto LABEL_32;
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v50 )
        ExFreePoolWithTag(v50, 0);
      if ( v52 )
        ExFreePoolWithTag(v52, 0);
      if ( v53 )
        ExFreePoolWithTag(v53, 0);
      LOBYTE(v17) = v43;
      SeReleaseSecurityDescriptor(v48, v17, 0LL, v18);
      ObfDereferenceObject(Token);
      SeReleaseSubjectContext(&SubjectContext);
      if ( v15 == -1073741670 )
      {
        v36 = 3221225626LL;
        goto LABEL_51;
      }
      return v15;
    }
    if ( ((unsigned __int8)HandleId & 7) == 0 )
    {
      v54 = *(_QWORD *)HandleId;
      goto LABEL_13;
    }
LABEL_28:
    ExRaiseDatatypeMisalignment();
  }
  ObfDereferenceObject(v16);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v19 == -1073741670 )
    SepAuditFailed(3221225626LL);
  return v19;
}
