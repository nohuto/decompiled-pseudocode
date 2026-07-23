/*
 * XREFs of SeReportSecurityEventWithSubCategory @ 0x1402858A0
 * Callers:
 *     SeReportSecurityEvent @ 0x140596ED0 (SeReportSecurityEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140871EF8 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x140285B0C (SepAuditingForSubCategory.c)
 *     SepAdtLogAuditRecord @ 0x1403C2884 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140693BD0 (SepAdtAuditThisEventWithContext.c)
 */

NTSTATUS __stdcall SeReportSecurityEventWithSubCategory(
        ULONG Flags,
        PUNICODE_STRING SourceName,
        PSID UserSid,
        PSE_ADT_PARAMETER_ARRAY AuditParameters,
        ULONG AuditSubcategoryId)
{
  __int64 v6; // r8
  PUNICODE_STRING v8; // r14
  unsigned __int8 *v9; // rdi
  USHORT Type; // bx
  __int64 v12; // rcx
  _QWORD *v13; // r9
  ULONG AuditId; // edx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  ULONG ParameterCount; // ebx
  int Length; // eax
  _QWORD SubjectContext[6]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD Src[132]; // [rsp+58h] [rbp-B0h] BYREF

  v6 = 0LL;
  v8 = SourceName;
  v9 = 0LL;
  memset(&SubjectContext[1], 0, 32);
  if ( Flags )
    return -1073741811;
  if ( !SourceName )
    return -1073741811;
  if ( !SourceName->Buffer )
    return -1073741811;
  if ( !SourceName->Length )
    return -1073741811;
  if ( !AuditParameters )
    return -1073741811;
  if ( AuditSubcategoryId - 100 > 0x3B )
    return -1073741811;
  if ( AuditParameters->ParameterCount > 0x1C )
    return -1073741811;
  Type = AuditParameters->Type;
  if ( (Type & 0x18) == 0 )
    return -1073741811;
  LOBYTE(SubjectContext[0]) = KeGetCurrentIrql();
  if ( LOBYTE(SubjectContext[0]) < 2u )
  {
    if ( UserSid )
    {
      v9 = (unsigned __int8 *)UserSid;
    }
    else
    {
      SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
      v6 = 0LL;
      v12 = SubjectContext[3];
      Type = AuditParameters->Type;
      if ( SubjectContext[1] )
        v12 = SubjectContext[1];
      v9 = **(unsigned __int8 ***)(v12 + 152);
    }
    v13 = &SubjectContext[1];
    if ( v9 == UserSid )
      v13 = 0LL;
    LOBYTE(v6) = Type == 16;
    LOBYTE(SourceName) = Type == 8;
    if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(AuditSubcategoryId, SourceName, v6, v13) )
      goto LABEL_11;
    Type = AuditParameters->Type;
    goto LABEL_21;
  }
  LOBYTE(SourceName) = Type == 8;
  if ( (unsigned __int8)SepAuditingForSubCategory(AuditSubcategoryId, SourceName) )
  {
    v9 = (unsigned __int8 *)UserSid;
    if ( !UserSid )
      v9 = (unsigned __int8 *)SeLocalSystemSid;
LABEL_21:
    memset(Src, 0, 0x418uLL);
    AuditId = AuditParameters->AuditId;
    LODWORD(Src[0]) = AuditParameters->CategoryId;
    v15 = v9[1];
    HIDWORD(Src[0]) = AuditId;
    LOWORD(Src[2]) = AuditSubcategoryId;
    WORD1(Src[2]) = Type;
    LODWORD(Src[3]) = 4;
    HIDWORD(Src[3]) = 4 * v15 + 8;
    Src[10] = &SeSubsystemName;
    Src[6] = v9;
    Src[7] = 0x2000000001LL;
    LODWORD(Src[1]) = 2;
    if ( AuditSubcategoryId == 123 )
    {
      HIDWORD(Src[2]) |= 6u;
      Length = v8->Length;
      LODWORD(Src[11]) = 1;
      v16 = 3LL;
      HIDWORD(Src[11]) = Length + 16;
      Src[14] = v8;
      LODWORD(Src[1]) = 3;
    }
    else
    {
      v16 = 2LL;
      v17 = HIDWORD(Src[2]) | 8;
      HIDWORD(Src[2]) |= 8u;
      if ( AuditId < 0x5FF )
        HIDWORD(Src[2]) = v17 | 2;
    }
    ParameterCount = AuditParameters->ParameterCount;
    memmove(&Src[4 * v16 + 3], AuditParameters->Parameters, 32LL * ParameterCount);
    LODWORD(Src[1]) += ParameterCount;
    SepAdtLogAuditRecord(Src);
  }
LABEL_11:
  if ( LOBYTE(SubjectContext[0]) < 2u && v9 && v9 != UserSid )
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
  return 0;
}
