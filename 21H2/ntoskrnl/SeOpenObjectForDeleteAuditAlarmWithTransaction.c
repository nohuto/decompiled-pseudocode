/*
 * XREFs of SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140921970
 * Callers:
 *     SeOpenObjectForDeleteAuditAlarm @ 0x140921910 (SeOpenObjectForDeleteAuditAlarm.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140693624 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140693B00 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepQueryNameString @ 0x1406C6CEC (SepQueryNameString.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091F5F8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x14091FE80 (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepQueryTypeString @ 0x140920864 (SepQueryTypeString.c)
 *     SeExamineSacl @ 0x140921580 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x140924B78 (SeExamineGlobalSacl.c)
 *     SepAuditFailed @ 0x140925A60 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  BOOLEAN v14; // r13
  PVOID v15; // r12
  UNICODE_STRING *v16; // rsi
  UNICODE_STRING *v17; // r14
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdx
  int v19; // eax
  ACCESS_MASK v20; // r15d
  __int16 v21; // ax
  ACL *v22; // rdx
  ACL *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  BOOLEAN v26; // r13
  __int16 v27; // ax
  ACL *v28; // rdx
  __int64 v29; // rax
  int *v30; // rcx
  __int128 *v31; // rax
  GUID *v32; // r15
  wchar_t *Buffer; // rcx
  wchar_t *PoolWithTag; // rax
  wchar_t *v35; // rcx
  wchar_t *v36; // rax
  int v37; // [rsp+40h] [rbp-91h]
  int v38; // [rsp+58h] [rbp-79h]
  BOOLEAN GenerateAudit; // [rsp+A8h] [rbp-29h] BYREF
  BOOLEAN GenerateAlarm[3]; // [rsp+A9h] [rbp-28h] BYREF
  unsigned __int16 v41[2]; // [rsp+ACh] [rbp-25h] BYREF
  int v42; // [rsp+B0h] [rbp-21h]
  int **AuxData; // [rsp+B8h] [rbp-19h]
  PVOID v44; // [rsp+C0h] [rbp-11h] BYREF
  PACCESS_TOKEN Token; // [rsp+C8h] [rbp-9h]
  PVOID P; // [rsp+D0h] [rbp-1h] BYREF

  v11 = ObjectTypeName;
  v12 = Object;
  v13 = 0;
  GenerateAudit = 0;
  v14 = 0;
  GenerateAlarm[0] = 0;
  v15 = 0LL;
  P = 0LL;
  v16 = 0LL;
  v44 = 0LL;
  v17 = 0LL;
  v42 = 0;
  v41[0] = 999;
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
      v19 = SepQueryTypeString((__int64)v12, &v44);
      v15 = v44;
      v42 = v19;
      if ( v19 < 0 )
        goto LABEL_66;
      v11 = ObjectTypeName;
      p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
      v12 = Object;
      if ( v44 )
        v17 = (UNICODE_STRING *)v44;
    }
    if ( !SecurityDescriptor
      || !(unsigned __int8)SepAdtAuditObjectAccessWithContext(
                             (__int64)v12,
                             v11,
                             AccessGranted,
                             AccessGranted == 0,
                             (__int64)p_SubjectSecurityContext,
                             1,
                             v41) )
    {
      goto LABEL_34;
    }
    v20 = AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess;
    v21 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v21 & 0x10) != 0 )
    {
      if ( v21 >= 0 )
      {
        v22 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
      else
      {
        v24 = *((unsigned int *)SecurityDescriptor + 3);
        if ( (_DWORD)v24 )
          v22 = (ACL *)((char *)SecurityDescriptor + v24);
        else
          v22 = 0LL;
      }
      if ( v21 >= 0 )
      {
        v23 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
        goto LABEL_25;
      }
      v25 = *((unsigned int *)SecurityDescriptor + 3);
      if ( (_DWORD)v25 )
      {
        v23 = (ACL *)((char *)SecurityDescriptor + v25);
        goto LABEL_25;
      }
    }
    else
    {
      v22 = 0LL;
    }
    v23 = 0LL;
LABEL_25:
    v26 = AccessGranted;
    SeExamineSacl(v23, v22, Token, v20, AccessGranted, &GenerateAudit, GenerateAlarm);
    v27 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v27 & 0x10) == 0 )
      goto LABEL_26;
    if ( v27 >= 0 )
    {
      v28 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      goto LABEL_31;
    }
    v29 = *((unsigned int *)SecurityDescriptor + 3);
    if ( (_DWORD)v29 )
      v28 = (ACL *)((char *)SecurityDescriptor + v29);
    else
LABEL_26:
      v28 = 0LL;
LABEL_31:
    SeExamineGlobalSacl(ObjectTypeName, v28, Token, v20, AccessGranted, &GenerateAudit, GenerateAlarm);
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
        if ( v26 )
        {
          v32 = (GUID *)AuxData;
          SepAdtOpenObjectForDeleteAuditAlarm(
            v41[0],
            (__int64)p_SubjectSecurityContext,
            (__int64)AbsoluteObjectName,
            &v17->Length,
            &v16->Length,
            (__int64)AccessState->SubjectSecurityContext.ClientToken,
            (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
            v37,
            AccessState->PreviouslyGrantedAccess,
            *AuxData,
            v38,
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
            PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v16->MaximumLength, 0x20206553u);
            AccessState->ObjectName.Buffer = PoolWithTag;
            if ( PoolWithTag )
            {
              AccessState->ObjectName.MaximumLength = v16->MaximumLength;
              RtlCopyUnicodeString(&AccessState->ObjectName, v16);
            }
            v32 = (GUID *)AuxData;
          }
          if ( v17 )
          {
            v35 = AccessState->ObjectTypeName.Buffer;
            if ( v35 )
            {
              ExFreePoolWithTag(v35, 0);
              AccessState->ObjectTypeName.Length = 0;
              AccessState->ObjectTypeName.MaximumLength = 0;
            }
            v36 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v17->MaximumLength, 0x20206553u);
            AccessState->ObjectTypeName.Buffer = v36;
            if ( v36 )
            {
              AccessState->ObjectTypeName.MaximumLength = v17->MaximumLength;
              RtlCopyUnicodeString(&AccessState->ObjectTypeName, v17);
            }
          }
          if ( TransactionId )
            v32[2] = *TransactionId;
        }
        else
        {
          v31 = (__int128 *)TransactionId;
          if ( !TransactionId )
            v31 = (__int128 *)(AuxData + 4);
          SepAdtOpenObjectAuditAlarm(
            v41[0],
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
            v31,
            (__int64)AccessState);
        }
        goto LABEL_66;
      }
      v42 = SepQueryNameString((__int64)Object, &P);
      if ( v42 >= 0 )
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
      if ( v42 < 0 )
        SepAuditFailed((unsigned int)v42);
      return;
    }
    v14 = GenerateAlarm[0];
LABEL_34:
    if ( AccessGranted )
    {
      v30 = *AuxData;
      if ( *AuxData )
      {
        if ( *v30
          && SepAdtAuditPrivilegeUseWithContext(
               (unsigned int *)v30,
               AccessGranted,
               0,
               &AccessState->SubjectSecurityContext,
               v41) )
        {
          v13 = 1;
          AccessState->AuditPrivileges = 1;
        }
      }
    }
    if ( !v13 && !v14 )
      goto LABEL_70;
    v26 = AccessGranted;
    goto LABEL_42;
  }
}
