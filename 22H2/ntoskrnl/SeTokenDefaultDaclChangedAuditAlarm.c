/*
 * XREFs of SeTokenDefaultDaclChangedAuditAlarm @ 0x14069F338
 * Callers:
 *     NtSetInformationToken @ 0x1406ED790 (NtSetInformationToken.c)
 * Callees:
 *     RtlCreateSecurityDescriptor @ 0x140603560 (RtlCreateSecurityDescriptor.c)
 *     SepAdtAuditThisEventWithContext @ 0x140627EE0 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x1406CE8F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     SeCaptureSecurityDescriptor @ 0x1406D4920 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1406D5510 (SeReleaseSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D92C0 (RtlSetDaclSecurityDescriptor.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091FFAC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepQueryTypeString @ 0x140920754 (SepQueryTypeString.c)
 *     SepIsAclEqual @ 0x140924D24 (SepIsAclEqual.c)
 *     SepAuditFailed @ 0x140925950 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall SeTokenDefaultDaclChangedAuditAlarm(__int64 a1, __int64 a2, __int64 a3, ACL *a4, PACL Dacl)
{
  PVOID v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r14
  int v10; // r15d
  _QWORD **PrimaryToken; // r13
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  NTSTATUS v15; // ebx
  int v16; // eax
  PVOID P; // [rsp+58h] [rbp-61h] BYREF
  __int64 v18; // [rsp+60h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-51h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp-31h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-11h]
  _OWORD v22[2]; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v23; // [rsp+D0h] [rbp+17h]
  __int64 v24; // [rsp+118h] [rbp+5Fh] BYREF
  __int64 v25; // [rsp+128h] [rbp+6Fh]

  v25 = a3;
  v5 = 0LL;
  v21 = 0LL;
  v6 = 0LL;
  P = 0LL;
  v7 = 0LL;
  v23 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v24 = 0LL;
  v18 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v10 = 0;
  memset(v22, 0, sizeof(v22));
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  if ( PrimaryToken )
  {
    if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(142LL, 1u, 0, &SubjectContext)
      || (unsigned __int8)SepIsAclEqual(a4, Dacl) )
    {
LABEL_5:
      SeReleaseSubjectContext(&SubjectContext);
      return;
    }
    if ( a2 )
    {
      v12 = SepQueryTypeString(a2, &P);
      v5 = P;
      v15 = v12;
      if ( v12 < 0 )
      {
LABEL_20:
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        if ( v6 )
        {
          LOBYTE(v13) = 1;
          SeReleaseSecurityDescriptor(v6, 0LL, v13, v14);
        }
        if ( v7 )
        {
          LOBYTE(v13) = 1;
          SeReleaseSecurityDescriptor(v7, 0LL, v13, v14);
        }
        if ( v15 < 0 )
          SepAuditFailed((unsigned int)v15);
        goto LABEL_5;
      }
      if ( P )
        v10 = (int)P;
    }
    v15 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( v15 >= 0 )
    {
      v15 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, a4, 0);
      if ( v15 >= 0 )
      {
        LOBYTE(v14) = 1;
        v15 = SeCaptureSecurityDescriptor((unsigned int)SecurityDescriptor, 0, 1, v14, (__int64)&v24);
        if ( v15 < 0
          || (v15 = RtlCreateSecurityDescriptor(v22, 1u), v15 < 0)
          || (v15 = RtlSetDaclSecurityDescriptor(v22, 1u, Dacl, 0), v15 < 0) )
        {
          v6 = v24;
        }
        else
        {
          LOBYTE(v14) = 1;
          v16 = SeCaptureSecurityDescriptor((unsigned int)v22, 0, 1, v14, (__int64)&v18);
          v7 = v18;
          v15 = v16;
          v6 = v24;
          if ( v16 >= 0 )
            SepAdtSecurityDescriptorChangedAuditAlarm(
              (unsigned int)&SubjectContext,
              (unsigned int)&SeSubsystemName,
              v10,
              0,
              v25,
              *PrimaryToken[19],
              v24,
              4,
              v18);
        }
      }
    }
    goto LABEL_20;
  }
  SepAuditFailed(3221225596LL);
}
