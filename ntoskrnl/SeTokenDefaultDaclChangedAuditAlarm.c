/*
 * XREFs of SeTokenDefaultDaclChangedAuditAlarm @ 0x140743F0C
 * Callers:
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 * Callees:
 *     SepAdtAuditThisEventWithContext @ 0x140699810 (SepAdtAuditThisEventWithContext.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1407C8A50 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1407C92D0 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409C9E48 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepQueryTypeString @ 0x1409CA608 (SepQueryTypeString.c)
 *     SepIsAclEqual @ 0x1409CE3E8 (SepIsAclEqual.c)
 *     SepAuditFailed @ 0x1409CEE50 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SeTokenDefaultDaclChangedAuditAlarm(__int64 a1, __int64 a2, __int64 a3, ACL *a4, PACL Dacl)
{
  PVOID v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r14
  int v10; // r15d
  _QWORD **PrimaryToken; // r13
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  NTSTATUS v17; // ebx
  int v18; // eax
  PVOID P; // [rsp+58h] [rbp-61h] BYREF
  __int64 v20; // [rsp+60h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-51h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp-31h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-11h]
  _OWORD v24[2]; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v25; // [rsp+D0h] [rbp+17h]
  __int64 v26; // [rsp+118h] [rbp+5Fh] BYREF
  __int64 v27; // [rsp+128h] [rbp+6Fh]

  v27 = a3;
  v5 = 0LL;
  v23 = 0LL;
  v6 = 0LL;
  P = 0LL;
  v7 = 0LL;
  v25 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v26 = 0LL;
  v20 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v10 = 0;
  memset(v24, 0, sizeof(v24));
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  if ( PrimaryToken )
  {
    if ( !SepAdtAuditThisEventWithContext(141LL, 1u, 0, &SubjectContext) || (unsigned __int8)SepIsAclEqual(a4, Dacl) )
    {
LABEL_5:
      SeReleaseSubjectContext(&SubjectContext);
      return;
    }
    if ( a2 )
    {
      v14 = SepQueryTypeString(a2, &P, v12, v13);
      v5 = P;
      v17 = v14;
      if ( v14 < 0 )
      {
LABEL_20:
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        if ( v6 )
        {
          LOBYTE(v15) = 1;
          SeReleaseSecurityDescriptor(v6, 0LL, v15, v16);
        }
        if ( v7 )
        {
          LOBYTE(v15) = 1;
          SeReleaseSecurityDescriptor(v7, 0LL, v15, v16);
        }
        if ( v17 < 0 )
          SepAuditFailed((unsigned int)v17);
        goto LABEL_5;
      }
      if ( P )
        v10 = (int)P;
    }
    v17 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( v17 >= 0 )
    {
      v17 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, a4, 0);
      if ( v17 >= 0 )
      {
        LOBYTE(v16) = 1;
        v17 = SeCaptureSecurityDescriptor((unsigned int)SecurityDescriptor, 0, 1, v16, (__int64)&v26);
        if ( v17 < 0
          || (v17 = RtlCreateSecurityDescriptor(v24, 1u), v17 < 0)
          || (v17 = RtlSetDaclSecurityDescriptor(v24, 1u, Dacl, 0), v17 < 0) )
        {
          v6 = v26;
        }
        else
        {
          LOBYTE(v16) = 1;
          v18 = SeCaptureSecurityDescriptor((unsigned int)v24, 0, 1, v16, (__int64)&v20);
          v7 = v20;
          v17 = v18;
          v6 = v26;
          if ( v18 >= 0 )
            SepAdtSecurityDescriptorChangedAuditAlarm(
              (unsigned int)&SubjectContext,
              (unsigned int)&SeSubsystemName,
              v10,
              0,
              v27,
              *PrimaryToken[19],
              v26,
              4,
              v20);
        }
      }
    }
    goto LABEL_20;
  }
  SepAuditFailed(3221225596LL);
}
