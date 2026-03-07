void __stdcall SeOpenObjectAuditAlarmWithTransaction(
        PUNICODE_STRING ObjectTypeName,
        PVOID Object,
        PUNICODE_STRING AbsoluteObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PACCESS_STATE AccessState,
        BOOLEAN ObjectCreated,
        BOOLEAN AccessGranted,
        KPROCESSOR_MODE AccessMode,
        GUID *TransactionId,
        PBOOLEAN GenerateOnClose)
{
  BOOLEAN v10; // di
  unsigned __int16 v11; // r14
  PSECURITY_DESCRIPTOR v12; // rbx
  PUNICODE_STRING v13; // r10
  PVOID v14; // r8
  const UNICODE_STRING *v15; // r9
  _BYTE *ClientToken; // rdx
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rax
  char *AuxData; // r12
  PACCESS_TOKEN PrimaryToken; // rsi
  unsigned __int8 v20; // r11
  int v21; // ebx
  SECURITY_SUBJECT_CONTEXT *v22; // rbx
  BOOLEAN v23; // r10
  unsigned __int8 v24; // al
  char v25; // al
  __int64 *v26; // rsi
  unsigned int *v27; // rcx
  char v28; // al
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r14
  unsigned int v30; // r9d
  __int16 v31; // r10
  __int16 v32; // r11
  int v33; // r8d
  char v34; // al
  __int16 v35; // ax
  ACCESS_MASK v36; // edi
  __int16 v37; // cx
  ACL *v38; // rdx
  ACL *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int16 v42; // ax
  ACL *v43; // rdx
  __int64 v44; // rax
  __int16 v45; // ax
  char *v46; // rcx
  __int64 v47; // rax
  const UNICODE_STRING *v48; // rdi
  PVOID v49; // rcx
  int v50; // eax
  GUID *v51; // rax
  __int64 v52; // rdx
  wchar_t *Buffer; // rcx
  wchar_t *Pool2; // rax
  wchar_t *v55; // rcx
  wchar_t *v56; // rax
  const UNICODE_STRING *v57; // rdx
  int v58; // [rsp+50h] [rbp-D8h]
  BOOLEAN GenerateAudit; // [rsp+A8h] [rbp-80h] BYREF
  BOOLEAN GenerateAlarm[7]; // [rsp+A9h] [rbp-7Fh] BYREF
  PVOID v61; // [rsp+B0h] [rbp-78h] BYREF
  PCUNICODE_STRING v62; // [rsp+B8h] [rbp-70h]
  __int16 v63[2]; // [rsp+C0h] [rbp-68h] BYREF
  int v64; // [rsp+C4h] [rbp-64h]
  int v65; // [rsp+C8h] [rbp-60h]
  const UNICODE_STRING *v66; // [rsp+D0h] [rbp-58h]
  PVOID P; // [rsp+D8h] [rbp-50h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E0h] [rbp-48h] BYREF

  v10 = 0;
  v11 = 999;
  v12 = SecurityDescriptor;
  v13 = ObjectTypeName;
  GenerateAudit = 0;
  v14 = 0LL;
  GenerateAlarm[0] = 0;
  v15 = 0LL;
  P = 0LL;
  v61 = 0LL;
  v66 = 0LL;
  v62 = 0LL;
  v64 = 0;
  v63[0] = 999;
  if ( !AccessMode )
    return;
  ClientToken = AccessState->SubjectSecurityContext.ClientToken;
  p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
  AuxData = (char *)AccessState->AuxData;
  if ( ClientToken )
    PrimaryToken = AccessState->SubjectSecurityContext.ClientToken;
  else
    PrimaryToken = AccessState->SubjectSecurityContext.PrimaryToken;
  if ( !v12 )
    goto LABEL_24;
  v11 = 118;
  v65 = 118;
  v63[0] = 118;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v20 = AccessGranted == 0;
  v21 = (AccessGranted != 0 ? 3 : 0) | 0x30;
  if ( AccessGranted )
    v21 = AccessGranted != 0 ? 3 : 0;
  if ( !dword_140C370A8 )
    goto LABEL_13;
  if ( (v21 & dword_140C370A8) != 0 )
  {
    v10 = 1;
    goto LABEL_10;
  }
  if ( !dword_140C371E8 )
  {
LABEL_10:
    v22 = &AccessState->SubjectSecurityContext;
    goto LABEL_11;
  }
  if ( AccessState == (PACCESS_STATE)-32LL )
  {
    p_SubjectContext = &SubjectContext;
    SeCaptureSubjectContext(&SubjectContext);
    ClientToken = SubjectContext.ClientToken;
    v14 = v61;
    v20 = AccessGranted == 0;
    v15 = v62;
    v13 = ObjectTypeName;
  }
  else
  {
    p_SubjectContext = &AccessState->SubjectSecurityContext;
  }
  if ( !ClientToken )
  {
    ClientToken = p_SubjectContext->PrimaryToken;
    if ( !ClientToken )
    {
      SepAuditFailed(3221225596LL);
LABEL_56:
      v13 = ObjectTypeName;
      v15 = v62;
      v20 = AccessGranted == 0;
      v14 = v61;
      goto LABEL_57;
    }
  }
  if ( ClientToken[118] == 2 )
  {
    v30 = 16;
    v31 = 0;
    v32 = 0;
    do
    {
      v33 = (unsigned __int8)ClientToken[((unsigned __int64)v30 >> 1) + 88] >> (4 * (v30 & 1));
      if ( (v33 & 1) != 0 )
      {
        if ( (v21 & 2) != 0 )
          goto LABEL_55;
        ++v31;
      }
      if ( (v33 & 4) != 0 )
      {
        if ( (v21 & 0x20) != 0 )
          goto LABEL_55;
        ++v32;
      }
      ++v30;
    }
    while ( v30 < 0x1E );
    if ( (v21 & 1) != 0 && v31 == 14 || (v21 & 0x10) != 0 && v32 == 14 )
    {
LABEL_55:
      v10 = 1;
      goto LABEL_56;
    }
    goto LABEL_56;
  }
LABEL_57:
  v22 = &AccessState->SubjectSecurityContext;
  if ( AccessState == (PACCESS_STATE)-32LL )
  {
    SeReleaseSubjectContext(p_SubjectContext);
    v14 = v61;
    v20 = AccessGranted == 0;
    v15 = v62;
    v13 = ObjectTypeName;
  }
  v11 = v65;
LABEL_11:
  if ( !v10 )
  {
    v10 = GenerateAudit;
LABEL_13:
    v12 = SecurityDescriptor;
    goto LABEL_14;
  }
  v11 = SepAdtClassifyObjectIntoSubCategory(Object, v13, AccessGranted, v20);
  v63[0] = v11;
  v34 = SepAdtAuditThisEventWithContext(v11, AccessGranted, AccessGranted == 0, v22);
  v12 = SecurityDescriptor;
  if ( v34 )
  {
    v35 = *((_WORD *)SecurityDescriptor + 1);
    v36 = AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess;
    v37 = v35 & 0x8000;
    if ( (v35 & 0x10) != 0 )
    {
      if ( v37 )
      {
        v40 = *((unsigned int *)SecurityDescriptor + 3);
        v38 = (_DWORD)v40 ? (ACL *)((char *)SecurityDescriptor + v40) : 0LL;
      }
      else
      {
        v38 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
      if ( v37 )
      {
        v41 = *((unsigned int *)SecurityDescriptor + 3);
        v39 = (_DWORD)v41 ? (ACL *)((char *)SecurityDescriptor + v41) : 0LL;
      }
      else
      {
        v39 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
    }
    else
    {
      v38 = 0LL;
      v39 = 0LL;
    }
    SeExamineSacl(v39, v38, PrimaryToken, v36, AccessGranted, &GenerateAudit, GenerateAlarm);
    v42 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v42 & 0x10) != 0 )
    {
      if ( v42 >= 0 )
      {
        v43 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
      else
      {
        v44 = *((unsigned int *)SecurityDescriptor + 3);
        v43 = (_DWORD)v44 ? (ACL *)((char *)SecurityDescriptor + v44) : 0LL;
      }
    }
    else
    {
      v43 = 0LL;
    }
    SeExamineGlobalSacl(ObjectTypeName, v43, PrimaryToken, v36, AccessGranted, &GenerateAudit, GenerateAlarm);
    if ( GenerateAudit )
    {
      *GenerateOnClose = 1;
      if ( AccessGranted )
      {
        v45 = *((_WORD *)SecurityDescriptor + 1);
        if ( (v45 & 0x10) != 0 )
        {
          if ( v45 >= 0 )
          {
            v46 = (char *)*((_QWORD *)SecurityDescriptor + 3);
          }
          else
          {
            v47 = *((unsigned int *)SecurityDescriptor + 3);
            if ( (_DWORD)v47 )
              v46 = (char *)SecurityDescriptor + v47;
            else
              v46 = 0LL;
          }
        }
        else
        {
          v46 = 0LL;
        }
        SeMaximumAuditMask((__int64)v46, v36, (__int64)PrimaryToken, (_DWORD *)AuxData + 7);
        SeMaximumAuditMaskFromGlobalSacl(ObjectTypeName, v36, PrimaryToken, (PACCESS_MASK)AuxData + 7);
        v14 = v61;
        v20 = AccessGranted == 0;
        v15 = v62;
        v10 = GenerateAudit;
        goto LABEL_13;
      }
    }
  }
  v10 = GenerateAudit;
  v14 = v61;
  v20 = AccessGranted == 0;
  v15 = v62;
LABEL_14:
  if ( (AccessState->OriginalDesiredAccess & 0x2000000) != 0 )
    v20 = 1;
  v23 = 0;
  if ( (AccessState->OriginalDesiredAccess & 0x2000000) == 0 )
    v23 = AccessGranted;
  v24 = 0;
  while ( *((int *)AccessState->AuxData + v24 + 22) >= 0 )
  {
    if ( ++v24 >= 0x20u )
    {
      v25 = 0;
      v26 = (__int64 *)&AccessState->SubjectSecurityContext;
      goto LABEL_22;
    }
  }
  v26 = (__int64 *)&AccessState->SubjectSecurityContext;
  v25 = SepAdtAuditThisEventWithContext(129LL, v23, v20, &AccessState->SubjectSecurityContext);
  v14 = v61;
  v15 = v62;
LABEL_22:
  AuxData[216] = v25;
  if ( v10 )
    goto LABEL_93;
  p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
LABEL_24:
  if ( AccessGranted )
  {
    v27 = *(unsigned int **)AuxData;
    if ( *(_QWORD *)AuxData )
    {
      if ( *v27 )
      {
        v28 = SepAdtAuditPrivilegeUseWithContext(v27, AccessGranted, 0LL, (__int64)p_SubjectSecurityContext, v63);
        v11 = v63[0];
        v14 = v61;
        v15 = v62;
        if ( v28 )
        {
          AccessState->AuditPrivileges = 1;
          goto LABEL_34;
        }
      }
    }
  }
  if ( GenerateAlarm[0] )
  {
LABEL_34:
    v26 = (__int64 *)&AccessState->SubjectSecurityContext;
LABEL_93:
    AccessState->GenerateAudit = 1;
    goto LABEL_94;
  }
  AccessState->GenerateAudit = 0;
  if ( !AuxData[216] )
    return;
  v26 = (__int64 *)&AccessState->SubjectSecurityContext;
LABEL_94:
  v48 = AbsoluteObjectName;
  if ( AbsoluteObjectName && AbsoluteObjectName->Length )
  {
    v49 = Object;
  }
  else
  {
    v49 = Object;
    if ( Object )
    {
      v50 = SepQueryNameString(Object, &P, v14, v15);
      v14 = v61;
      v64 = v50;
      if ( v50 < 0 )
        goto LABEL_132;
      v15 = v62;
      if ( P )
      {
        v48 = v66;
        if ( *((_WORD *)P + 1) != (_WORD)v66 )
          v48 = (const UNICODE_STRING *)P;
        v49 = Object;
      }
      else
      {
        v49 = Object;
        v48 = v62;
      }
    }
    else
    {
      v48 = v66;
    }
  }
  if ( ObjectTypeName && ObjectTypeName->Length )
  {
    v15 = ObjectTypeName;
    v62 = ObjectTypeName;
LABEL_113:
    if ( AccessGranted )
    {
      if ( v48 )
      {
        Buffer = AccessState->ObjectName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          *(_DWORD *)&AccessState->ObjectName.Length = 0;
        }
        Pool2 = (wchar_t *)ExAllocatePool2(256LL, v48->MaximumLength, 538994003LL);
        AccessState->ObjectName.Buffer = Pool2;
        if ( Pool2 )
        {
          AccessState->ObjectName.MaximumLength = v48->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectName, v48);
        }
        v15 = v62;
        v14 = v61;
      }
      if ( v15 )
      {
        v55 = AccessState->ObjectTypeName.Buffer;
        if ( v55 )
        {
          ExFreePoolWithTag(v55, 0);
          v15 = v62;
          *(_DWORD *)&AccessState->ObjectTypeName.Length = 0;
        }
        v56 = (wchar_t *)ExAllocatePool2(256LL, v15->MaximumLength, 538994003LL);
        AccessState->ObjectTypeName.Buffer = v56;
        if ( v56 )
        {
          v57 = v62;
          AccessState->ObjectTypeName.MaximumLength = v62->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectTypeName, v57);
        }
        v14 = v61;
      }
      if ( TransactionId )
        *((GUID *)AuxData + 2) = *TransactionId;
    }
    else
    {
      v51 = TransactionId;
      if ( !TransactionId )
        v51 = (GUID *)(AuxData + 32);
      SepAdtOpenObjectAuditAlarm(
        v11,
        (int)&SeSubsystemName,
        0,
        (int)v15,
        (__int64)v48,
        v12,
        *v26,
        (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
        AccessState->OriginalDesiredAccess,
        AccessState->PreviouslyGrantedAccess,
        *(_QWORD *)AuxData,
        0,
        (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
        2,
        0LL,
        0,
        0LL,
        (__int64)v51,
        (__int64)AccessState);
      LOBYTE(v58) = 0;
      SepAdtStagingEvent(
        v11,
        v52,
        0LL,
        v62,
        v48,
        *v26,
        AccessState->SubjectSecurityContext.PrimaryToken,
        AccessState->OriginalDesiredAccess,
        AccessState->PreviouslyGrantedAccess,
        v58,
        0LL,
        AccessState);
      v14 = v61;
    }
    v50 = v64;
    goto LABEL_132;
  }
  if ( !v49 )
    goto LABEL_113;
  v50 = SepQueryTypeString(v49, &v61, v14, v15);
  v14 = v61;
  v64 = v50;
  if ( v50 >= 0 )
  {
    v15 = v62;
    if ( v61 )
      v15 = (const UNICODE_STRING *)v61;
    v62 = v15;
    goto LABEL_113;
  }
LABEL_132:
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    v14 = v61;
    v50 = v64;
  }
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    v50 = v64;
  }
  if ( v50 < 0 )
    SepAuditFailed((unsigned int)v50);
}
