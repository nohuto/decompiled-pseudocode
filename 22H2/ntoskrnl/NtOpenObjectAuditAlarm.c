/*
 * XREFs of NtOpenObjectAuditAlarm @ 0x14068BC10
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     SepProbeAndCaptureString_U @ 0x140627808 (SepProbeAndCaptureString_U.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140627934 (SepAdtAuditObjectAccessWithContext.c)
 *     SeCheckAuditPrivilege @ 0x1406279BC (SeCheckAuditPrivilege.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140627D4C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x1406CE8F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     SeCaptureSecurityDescriptor @ 0x1406D4920 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1406D5510 (SeReleaseSecurityDescriptor.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091F4E8 (SepAdtOpenObjectAuditAlarm.c)
 *     SeExamineSacl @ 0x140921470 (SeExamineSacl.c)
 *     SepAuditFailed @ 0x140925950 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

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
  PUNICODE_STRING v12; // r14
  char PreviousMode; // r12
  int v15; // edx
  NTSTATUS v16; // edi
  struct _DMA_ADAPTER *v17; // rdi
  __int64 v18; // rdx
  NTSTATUS v19; // esi
  __int64 v20; // r9
  __int64 v21; // rdi
  ULONG PrivilegeCount; // r14d
  unsigned int v23; // ecx
  char *v24; // rdx
  ULONG *PoolWithTag; // rax
  __int64 v26; // rdx
  __int64 v27; // r9
  ULONG *v28; // r12
  PVOID v30; // r14
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // r9
  PVOID v34; // rdi
  BOOLEAN v35; // r13
  NTSTATUS v36; // ebx
  __int64 v37; // rcx
  __int16 v38; // ax
  __int64 v39; // rdx
  ACL *v40; // rdx
  __int64 v41; // rax
  ACL *v42; // rcx
  BOOLEAN GenerateAudit; // [rsp+A1h] [rbp-B7h] BYREF
  BOOLEAN GenerateAlarm; // [rsp+A2h] [rbp-B6h] BYREF
  char v45; // [rsp+A3h] [rbp-B5h]
  char v46; // [rsp+A4h] [rbp-B4h]
  int v47; // [rsp+A8h] [rbp-B0h]
  unsigned __int16 v48; // [rsp+ACh] [rbp-ACh] BYREF
  PVOID v49; // [rsp+B0h] [rbp-A8h] BYREF
  PVOID Token; // [rsp+B8h] [rbp-A0h] BYREF
  PVOID v51; // [rsp+C0h] [rbp-98h] BYREF
  PVOID P; // [rsp+C8h] [rbp-90h] BYREF
  PVOID v53; // [rsp+D0h] [rbp-88h] BYREF
  PVOID v54; // [rsp+D8h] [rbp-80h]
  unsigned __int64 v55; // [rsp+E0h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-70h] BYREF
  ULONG v57; // [rsp+108h] [rbp-50h]
  unsigned int v58; // [rsp+10Ch] [rbp-4Ch]
  size_t Size; // [rsp+110h] [rbp-48h]

  v12 = ObjectTypeName;
  P = 0LL;
  v51 = 0LL;
  v53 = 0LL;
  v49 = 0LL;
  v54 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  GenerateAudit = 0;
  GenerateAlarm = 0;
  v55 = 0LL;
  v48 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v45 = PreviousMode;
  v46 = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( !SeCheckAuditPrivilege((__int64)&SubjectContext, PreviousMode) )
  {
    v36 = -1073741727;
LABEL_54:
    SeReleaseSubjectContext(&SubjectContext);
    return v36;
  }
  Token = 0LL;
  v16 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  if ( v16 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v16 != -1073741816 )
    {
      v37 = (unsigned int)v16;
LABEL_50:
      SepAuditFailed(v37);
    }
    return v16;
  }
  v17 = (struct _DMA_ADAPTER *)Token;
  if ( *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 1 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)Token);
    v36 = -1073741659;
    goto LABEL_54;
  }
  if ( !SecurityDescriptor )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)Token);
    v36 = -1073741703;
    goto LABEL_54;
  }
  LOBYTE(v15) = PreviousMode;
  v19 = SeCaptureSecurityDescriptor((_DWORD)SecurityDescriptor, v15, 1, 0, (__int64)&v49);
  v47 = v19;
  if ( v19 >= 0 && v49 )
  {
    if ( AccessGranted && Privileges )
    {
      if ( ((unsigned __int8)Privileges & 3) != 0 )
        goto LABEL_29;
      v21 = 0x7FFFFFFF0000LL;
      PrivilegeCount = Privileges->PrivilegeCount;
      v57 = PrivilegeCount;
      if ( PrivilegeCount >= 0x43 )
      {
        v16 = -1073741811;
        v47 = -1073741811;
        goto LABEL_30;
      }
      v23 = 12 * PrivilegeCount + 8;
      v58 = v23;
      if ( 12 * PrivilegeCount != -8 )
      {
        v24 = (char *)Privileges + v23;
        if ( (unsigned __int64)v24 > 0x7FFFFFFF0000LL || v24 < (char *)Privileges )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      Size = v23;
      PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, v23, 0x72506553u);
      v28 = PoolWithTag;
      v54 = PoolWithTag;
      if ( !PoolWithTag )
      {
        LOBYTE(v26) = v45;
        SeReleaseSecurityDescriptor(v49, v26, 0LL, v27);
        HalPutDmaAdapter((PADAPTER_OBJECT)Token);
        SeReleaseSubjectContext(&SubjectContext);
        v47 = -1073741670;
        SepAuditFailed(3221225626LL);
        return -1073741670;
      }
      memmove(PoolWithTag, Privileges, Size);
      *v28 = PrivilegeCount;
      PreviousMode = v45;
      v12 = ObjectTypeName;
    }
    else
    {
      v21 = 0x7FFFFFFF0000LL;
    }
    if ( !HandleId )
    {
LABEL_20:
      if ( (unsigned __int64)GenerateOnClose < 0x7FFFFFFF0000LL )
        v21 = (__int64)GenerateOnClose;
      *(_BYTE *)v21 = *(_BYTE *)v21;
      v16 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)&P);
      v47 = v16;
      if ( v16 >= 0 )
      {
        v16 = SepProbeAndCaptureString_U((unsigned __int64)v12, (__int64)&v51);
        v47 = v16;
        if ( v16 >= 0 )
        {
          v16 = SepProbeAndCaptureString_U((unsigned __int64)ObjectName, (__int64)&v53);
          v47 = v16;
        }
      }
LABEL_30:
      if ( v16 >= 0 )
      {
        v30 = v51;
        v31 = SepAdtAuditObjectAccessWithContext(
                0LL,
                (const UNICODE_STRING *)v51,
                AccessGranted,
                AccessGranted == 0,
                (__int64)&SubjectContext,
                0,
                &v48);
        v34 = v49;
        if ( !v31 )
          goto LABEL_32;
        v38 = *((_WORD *)v49 + 1);
        if ( (v38 & 0x10) == 0 )
          goto LABEL_69;
        if ( v38 >= 0 )
        {
          v40 = (ACL *)*((_QWORD *)v49 + 3);
          goto LABEL_71;
        }
        v39 = *((unsigned int *)v49 + 3);
        if ( (_DWORD)v39 )
          v40 = (ACL *)((char *)v49 + v39);
        else
LABEL_69:
          v40 = 0LL;
LABEL_71:
        if ( (v38 & 0x10) == 0 )
          goto LABEL_75;
        if ( v38 >= 0 )
        {
          v42 = (ACL *)*((_QWORD *)v49 + 3);
          goto LABEL_77;
        }
        v41 = *((unsigned int *)v49 + 3);
        if ( (_DWORD)v41 )
          v42 = (ACL *)((char *)v49 + v41);
        else
LABEL_75:
          v42 = 0LL;
LABEL_77:
        SeExamineSacl(v42, v40, Token, GrantedAccess | DesiredAccess, AccessGranted, &GenerateAudit, &GenerateAlarm);
        if ( GenerateAudit || GenerateAlarm )
        {
          v34 = v49;
          v30 = v51;
          v35 = SepAdtOpenObjectAuditAlarm(
                  v48,
                  (int)P,
                  (unsigned __int64)&v55 & -(__int64)(HandleId != 0LL),
                  (int)v51,
                  (__int64)v53,
                  v49,
                  (__int64)Token,
                  (__int64)SubjectContext.PrimaryToken,
                  DesiredAccess,
                  GrantedAccess,
                  (__int64)v54,
                  AccessGranted,
                  (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                  2,
                  0LL,
                  0,
                  0LL,
                  0LL,
                  0LL);
LABEL_33:
          if ( !GenerateAudit && !GenerateAlarm && Privileges && AccessGranted )
          {
            v30 = v51;
            SepAdtPrivilegeObjectAuditAlarm(
              (const int *)P,
              (unsigned __int16 *)v51,
              (unsigned __int16 *)v53,
              v55,
              (__int64)Token,
              (__int64)SubjectContext.PrimaryToken,
              (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
              DesiredAccess,
              (int *)v54,
              AccessGranted);
            v35 = 0;
            v34 = v49;
          }
          LOBYTE(v32) = PreviousMode;
          SeReleaseSecurityDescriptor(v34, v32, 0LL, v33);
          if ( P )
            ExFreePoolWithTag(P, 0);
          if ( v30 )
            ExFreePoolWithTag(v30, 0);
          if ( v53 )
            ExFreePoolWithTag(v53, 0);
          if ( v54 )
            ExFreePoolWithTag(v54, 0);
          HalPutDmaAdapter((PADAPTER_OBJECT)Token);
          SeReleaseSubjectContext(&SubjectContext);
          *GenerateOnClose = v35;
          return 0;
        }
LABEL_32:
        v35 = 0;
        goto LABEL_33;
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v51 )
        ExFreePoolWithTag(v51, 0);
      if ( v53 )
        ExFreePoolWithTag(v53, 0);
      if ( v54 )
        ExFreePoolWithTag(v54, 0);
      LOBYTE(v18) = PreviousMode;
      SeReleaseSecurityDescriptor(v49, v18, 0LL, v20);
      HalPutDmaAdapter((PADAPTER_OBJECT)Token);
      SeReleaseSubjectContext(&SubjectContext);
      if ( v16 == -1073741670 )
      {
        v37 = 3221225626LL;
        goto LABEL_50;
      }
      return v16;
    }
    if ( ((unsigned __int8)HandleId & 7) == 0 )
    {
      v55 = *(_QWORD *)HandleId;
      goto LABEL_20;
    }
LABEL_29:
    ExRaiseDatatypeMisalignment();
  }
  HalPutDmaAdapter(v17);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v19 == -1073741670 )
    SepAuditFailed(3221225626LL);
  return v19;
}
