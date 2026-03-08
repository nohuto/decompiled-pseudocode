/*
 * XREFs of SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CB370
 * Callers:
 *     SeOpenObjectForDeleteAuditAlarm @ 0x1409CB310 (SeOpenObjectForDeleteAuditAlarm.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1406995C8 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14069976C (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepQueryNameString @ 0x140744C84 (SepQueryNameString.c)
 *     SeExamineSacl @ 0x1408A18B0 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x1408A1D6A (SeExamineGlobalSacl.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409C930C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x1409C9C0C (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepQueryTypeString @ 0x1409CA608 (SepQueryTypeString.c)
 *     SepAuditFailed @ 0x1409CEE50 (SepAuditFailed.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __stdcall SeOpenObjectForDeleteAuditAlarmWithTransaction(
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
  const UNICODE_STRING *v11; // rax
  PVOID v12; // r10
  BOOLEAN v13; // r15
  BOOLEAN v14; // r12
  PVOID v15; // r13
  UNICODE_STRING *v16; // rdi
  UNICODE_STRING *v17; // r14
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdx
  int v19; // eax
  __int16 v20; // ax
  __int16 v21; // cx
  __int64 v22; // rax
  ACL *v23; // rdx
  __int64 v24; // rax
  ACL *v25; // rcx
  PACCESS_TOKEN v26; // r15
  BOOLEAN v27; // r12
  __int16 v28; // ax
  ACL *v29; // rdx
  __int64 v30; // rax
  int *v31; // rcx
  unsigned __int16 *v32; // rdx
  char *v33; // rax
  GUID *v34; // r15
  wchar_t *Buffer; // rcx
  wchar_t *Pool2; // rax
  wchar_t *v37; // rcx
  wchar_t *v38; // rax
  int v39; // [rsp+40h] [rbp-91h]
  int v40; // [rsp+58h] [rbp-79h]
  BOOLEAN GenerateAudit; // [rsp+A8h] [rbp-29h] BYREF
  BOOLEAN GenerateAlarm[3]; // [rsp+A9h] [rbp-28h] BYREF
  unsigned __int16 v43[2]; // [rsp+ACh] [rbp-25h] BYREF
  int v44; // [rsp+B0h] [rbp-21h]
  int **AuxData; // [rsp+B8h] [rbp-19h]
  PVOID v46; // [rsp+C0h] [rbp-11h] BYREF
  PVOID P; // [rsp+C8h] [rbp-9h] BYREF
  PACCESS_TOKEN Token; // [rsp+D0h] [rbp-1h]
  ACCESS_MASK AccessModea; // [rsp+150h] [rbp+7Fh]

  v11 = ObjectTypeName;
  v12 = Object;
  v13 = 0;
  GenerateAudit = 0;
  v14 = 0;
  GenerateAlarm[0] = 0;
  v15 = 0LL;
  P = 0LL;
  v16 = 0LL;
  v46 = 0LL;
  v17 = 0LL;
  v44 = 0;
  v43[0] = 999;
  if ( AccessMode )
  {
    p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    AuxData = (int **)AccessState->AuxData;
    Token = AccessState->SubjectSecurityContext.ClientToken;
    if ( !Token )
      Token = AccessState->SubjectSecurityContext.PrimaryToken;
    if ( ObjectTypeName && ObjectTypeName->Length )
    {
      v17 = ObjectTypeName;
    }
    else if ( v12 )
    {
      v19 = SepQueryTypeString((__int64)v12, &v46);
      v15 = v46;
      v44 = v19;
      if ( v19 < 0 )
        goto LABEL_66;
      v11 = ObjectTypeName;
      p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
      v12 = Object;
      if ( v46 )
        v17 = (UNICODE_STRING *)v46;
    }
    if ( !SecurityDescriptor
      || !(unsigned __int8)SepAdtAuditObjectAccessWithContext(
                             (__int64)v12,
                             v11,
                             AccessGranted,
                             AccessGranted == 0,
                             (__int64)p_SubjectSecurityContext,
                             1,
                             v43) )
    {
      goto LABEL_34;
    }
    v20 = *((_WORD *)SecurityDescriptor + 1);
    v21 = v20 & 0x8000;
    AccessModea = AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess;
    if ( (v20 & 0x10) != 0 )
    {
      if ( v21 )
      {
        v22 = *((unsigned int *)SecurityDescriptor + 3);
        if ( (_DWORD)v22 )
          v23 = (ACL *)((char *)SecurityDescriptor + v22);
        else
          v23 = 0LL;
      }
      else
      {
        v23 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
      if ( !v21 )
      {
        v25 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
        goto LABEL_25;
      }
      v24 = *((unsigned int *)SecurityDescriptor + 3);
      if ( (_DWORD)v24 )
      {
        v25 = (ACL *)((char *)SecurityDescriptor + v24);
LABEL_25:
        v26 = Token;
        v27 = AccessGranted;
        SeExamineSacl(
          v25,
          v23,
          Token,
          AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess,
          AccessGranted,
          &GenerateAudit,
          GenerateAlarm);
        v28 = *((_WORD *)SecurityDescriptor + 1);
        if ( (v28 & 0x10) == 0 )
          goto LABEL_26;
        if ( v28 >= 0 )
        {
          v29 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
          goto LABEL_31;
        }
        v30 = *((unsigned int *)SecurityDescriptor + 3);
        if ( (_DWORD)v30 )
          v29 = (ACL *)((char *)SecurityDescriptor + v30);
        else
LABEL_26:
          v29 = 0LL;
LABEL_31:
        SeExamineGlobalSacl(ObjectTypeName, v29, v26, AccessModea, AccessGranted, &GenerateAudit, GenerateAlarm);
        v13 = GenerateAudit;
        if ( GenerateAudit )
        {
          *GenerateOnClose = 1;
LABEL_42:
          AccessState->GenerateAudit = 1;
          if ( AbsoluteObjectName && AbsoluteObjectName->Length )
          {
            v16 = AbsoluteObjectName;
            goto LABEL_49;
          }
          if ( !Object )
          {
LABEL_49:
            if ( v27 )
            {
              v34 = (GUID *)AuxData;
              SepAdtOpenObjectForDeleteAuditAlarm(
                v43[0],
                (__int64)p_SubjectSecurityContext,
                (__int64)AbsoluteObjectName,
                &v17->Length,
                &v16->Length,
                (__int64)AccessState->SubjectSecurityContext.ClientToken,
                (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
                v39,
                AccessState->PreviouslyGrantedAccess,
                *AuxData,
                v40,
                (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
                (__int128 *)TransactionId);
              if ( v16 )
              {
                Buffer = AccessState->ObjectName.Buffer;
                if ( Buffer )
                {
                  ExFreePoolWithTag(Buffer, 0);
                  AccessState->ObjectName.Length = 0;
                  AccessState->ObjectName.MaximumLength = 0;
                }
                Pool2 = (wchar_t *)ExAllocatePool2(256LL, v16->MaximumLength, 538994003LL);
                AccessState->ObjectName.Buffer = Pool2;
                if ( Pool2 )
                {
                  AccessState->ObjectName.MaximumLength = v16->MaximumLength;
                  RtlCopyUnicodeString(&AccessState->ObjectName, v16);
                }
                v34 = (GUID *)AuxData;
              }
              if ( v17 )
              {
                v37 = AccessState->ObjectTypeName.Buffer;
                if ( v37 )
                {
                  ExFreePoolWithTag(v37, 0);
                  AccessState->ObjectTypeName.Length = 0;
                  AccessState->ObjectTypeName.MaximumLength = 0;
                }
                v38 = (wchar_t *)ExAllocatePool2(256LL, v17->MaximumLength, 538994003LL);
                AccessState->ObjectTypeName.Buffer = v38;
                if ( v38 )
                {
                  AccessState->ObjectTypeName.MaximumLength = v17->MaximumLength;
                  RtlCopyUnicodeString(&AccessState->ObjectTypeName, v17);
                }
              }
              if ( TransactionId )
                v34[2] = *TransactionId;
            }
            else
            {
              v33 = (char *)TransactionId;
              if ( !TransactionId )
                v33 = (char *)(AuxData + 4);
              SepAdtOpenObjectAuditAlarm(
                v43[0],
                &SeSubsystemName,
                0LL,
                &v17->Length,
                &v16->Length,
                (__int16 *)SecurityDescriptor,
                (_QWORD *)AccessState->SubjectSecurityContext.ClientToken,
                (_QWORD *)AccessState->SubjectSecurityContext.PrimaryToken,
                AccessState->OriginalDesiredAccess,
                AccessState->PreviouslyGrantedAccess,
                *AuxData,
                0,
                (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
                2,
                0LL,
                0,
                0LL,
                v33,
                (__int64)AccessState);
            }
            goto LABEL_66;
          }
          v44 = SepQueryNameString((char *)Object, &P);
          if ( v44 >= 0 )
          {
            if ( P )
              v16 = (UNICODE_STRING *)P;
            goto LABEL_49;
          }
LABEL_66:
          if ( P )
            ExFreePoolWithTag(P, 0);
          if ( v15 )
            ExFreePoolWithTag(v15, 0);
LABEL_70:
          if ( v44 < 0 )
            SepAuditFailed((unsigned int)v44);
          return;
        }
        v14 = GenerateAlarm[0];
LABEL_34:
        if ( AccessGranted )
        {
          v31 = *AuxData;
          if ( *AuxData )
          {
            if ( *v31 )
            {
              v32 = v43;
              LOBYTE(v32) = AccessGranted;
              if ( SepAdtAuditPrivilegeUseWithContext(
                     (unsigned int *)v31,
                     (__int64)v32,
                     0LL,
                     (__int64)&AccessState->SubjectSecurityContext,
                     v43) )
              {
                v13 = 1;
                AccessState->AuditPrivileges = 1;
              }
            }
          }
        }
        if ( !v13 && !v14 )
          goto LABEL_70;
        v27 = AccessGranted;
        goto LABEL_42;
      }
    }
    else
    {
      v23 = 0LL;
    }
    v25 = 0LL;
    goto LABEL_25;
  }
}
