/*
 * XREFs of SeTokenDefaultDaclChangedAuditAlarm @ 0x14061B478
 * Callers:
 *     NtSetInformationToken @ 0x140694530 (NtSetInformationToken.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SeCaptureSecurityDescriptor @ 0x140650980 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x140651570 (SeReleaseSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140655320 (RtlSetDaclSecurityDescriptor.c)
 *     SepAdtAuditThisEventWithContext @ 0x140693BD0 (SepAdtAuditThisEventWithContext.c)
 *     RtlCreateSecurityDescriptor @ 0x1406F2C90 (RtlCreateSecurityDescriptor.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409200BC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepQueryTypeString @ 0x140920864 (SepQueryTypeString.c)
 *     SepIsAclEqual @ 0x140924E34 (SepIsAclEqual.c)
 *     SepAuditFailed @ 0x140925A60 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall SeTokenDefaultDaclChangedAuditAlarm(__int64 a1, __int64 a2, __int64 a3, ACL *a4, PACL Dacl)
{
  PVOID v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r14
  int v10; // r15d
  __int64 v11; // rdx
  _QWORD **PrimaryToken; // r13
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  NTSTATUS v16; // ebx
  int v17; // eax
  PVOID P; // [rsp+58h] [rbp-61h] BYREF
  __int64 v19; // [rsp+60h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-51h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp-31h] BYREF
  __int64 v22; // [rsp+A8h] [rbp-11h]
  _OWORD v23[2]; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v24; // [rsp+D0h] [rbp+17h]
  __int64 v25; // [rsp+118h] [rbp+5Fh] BYREF
  __int64 v26; // [rsp+128h] [rbp+6Fh]

  v26 = a3;
  v5 = 0LL;
  v22 = 0LL;
  v6 = 0LL;
  P = 0LL;
  v7 = 0LL;
  v24 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v25 = 0LL;
  v19 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v10 = 0;
  memset(v23, 0, sizeof(v23));
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  if ( PrimaryToken )
  {
    LOBYTE(v11) = 1;
    if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(142LL, v11, 0LL, &SubjectContext)
      || (unsigned __int8)SepIsAclEqual(a4, Dacl) )
    {
LABEL_5:
      SeReleaseSubjectContext(&SubjectContext);
      return;
    }
    if ( a2 )
    {
      v13 = SepQueryTypeString(a2, &P);
      v5 = P;
      v16 = v13;
      if ( v13 < 0 )
      {
LABEL_20:
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        if ( v6 )
        {
          LOBYTE(v14) = 1;
          SeReleaseSecurityDescriptor(v6, 0LL, v14, v15);
        }
        if ( v7 )
        {
          LOBYTE(v14) = 1;
          SeReleaseSecurityDescriptor(v7, 0LL, v14, v15);
        }
        if ( v16 < 0 )
          SepAuditFailed((unsigned int)v16);
        goto LABEL_5;
      }
      if ( P )
        v10 = (int)P;
    }
    v16 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( v16 >= 0 )
    {
      v16 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, a4, 0);
      if ( v16 >= 0 )
      {
        LOBYTE(v15) = 1;
        v16 = SeCaptureSecurityDescriptor((unsigned int)SecurityDescriptor, 0, 1, v15, (__int64)&v25);
        if ( v16 < 0
          || (v16 = RtlCreateSecurityDescriptor(v23, 1u), v16 < 0)
          || (v16 = RtlSetDaclSecurityDescriptor(v23, 1u, Dacl, 0), v16 < 0) )
        {
          v6 = v25;
        }
        else
        {
          LOBYTE(v15) = 1;
          v17 = SeCaptureSecurityDescriptor((unsigned int)v23, 0, 1, v15, (__int64)&v19);
          v7 = v19;
          v16 = v17;
          v6 = v25;
          if ( v17 >= 0 )
            SepAdtSecurityDescriptorChangedAuditAlarm(
              (unsigned int)&SubjectContext,
              (unsigned int)&SeSubsystemName,
              v10,
              0,
              v26,
              *PrimaryToken[19],
              v25,
              4,
              v19);
        }
      }
    }
    goto LABEL_20;
  }
  SepAuditFailed(3221225596LL);
}
