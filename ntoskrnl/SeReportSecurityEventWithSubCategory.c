/*
 * XREFs of SeReportSecurityEventWithSubCategory @ 0x140299040
 * Callers:
 *     SeReportSecurityEvent @ 0x1405B6810 (SeReportSecurityEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140A18D84 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x1402992A4 (SepAuditingForSubCategory.c)
 *     SepAdtLogAuditRecord @ 0x140397890 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SepAdtAuditThisEventWithContext @ 0x140699810 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 */

NTSTATUS __stdcall SeReportSecurityEventWithSubCategory(
        ULONG Flags,
        PUNICODE_STRING SourceName,
        PSID UserSid,
        PSE_ADT_PARAMETER_ARRAY AuditParameters,
        ULONG AuditSubcategoryId)
{
  __int64 v6; // r8
  PUNICODE_STRING v8; // rbx
  USHORT Type; // ax
  unsigned __int8 CurrentIrql; // r13
  __int64 v12; // rcx
  unsigned __int8 *v13; // rdi
  _QWORD *v14; // r9
  ULONG AuditId; // edx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  ULONG ParameterCount; // ebx
  int Length; // eax
  _QWORD SubjectContext[5]; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD Src[132]; // [rsp+48h] [rbp-C0h] BYREF

  v6 = 0LL;
  v8 = SourceName;
  memset(&SubjectContext[1], 0, 32);
  if ( !Flags )
  {
    if ( SourceName )
    {
      if ( SourceName->Buffer )
      {
        if ( SourceName->Length )
        {
          if ( AuditParameters )
          {
            if ( AuditSubcategoryId - 100 <= 0x3A && AuditParameters->ParameterCount <= 0x1C )
            {
              Type = AuditParameters->Type;
              if ( (Type & 0x18) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql < 2u )
                {
                  if ( UserSid )
                  {
                    v13 = (unsigned __int8 *)UserSid;
                  }
                  else
                  {
                    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
                    v6 = 0LL;
                    v12 = SubjectContext[3];
                    if ( SubjectContext[1] )
                      v12 = SubjectContext[1];
                    v13 = **(unsigned __int8 ***)(v12 + 152);
                    Type = AuditParameters->Type;
                  }
                  v14 = &SubjectContext[1];
                  if ( v13 == UserSid )
                    v14 = 0LL;
                  LOBYTE(v6) = Type == 16;
                  LOBYTE(SourceName) = Type == 8;
                  if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(AuditSubcategoryId, SourceName, v6, v14) )
                  {
LABEL_19:
                    if ( v13 )
                    {
                      if ( v13 != UserSid )
                        SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext[1]);
                    }
                    return 0;
                  }
                }
                else
                {
                  LOBYTE(SourceName) = Type == 8;
                  if ( !(unsigned __int8)SepAuditingForSubCategory(AuditSubcategoryId, SourceName) )
                    return 0;
                  v13 = (unsigned __int8 *)SeLocalSystemSid;
                  if ( UserSid )
                    v13 = (unsigned __int8 *)UserSid;
                }
                memset(Src, 0, 0x418uLL);
                AuditId = AuditParameters->AuditId;
                LODWORD(Src[0]) = AuditParameters->CategoryId;
                WORD1(Src[2]) = AuditParameters->Type;
                v16 = v13[1];
                HIDWORD(Src[0]) = AuditId;
                LOWORD(Src[2]) = AuditSubcategoryId;
                LODWORD(Src[3]) = 4;
                Src[6] = v13;
                HIDWORD(Src[3]) = 4 * v16 + 8;
                Src[10] = &SeSubsystemName;
                Src[7] = 0x2000000001LL;
                LODWORD(Src[1]) = 2;
                if ( AuditSubcategoryId == 122 )
                {
                  HIDWORD(Src[2]) |= 6u;
                  Length = v8->Length;
                  LODWORD(Src[11]) = 1;
                  v17 = 3LL;
                  HIDWORD(Src[11]) = Length + 16;
                  Src[14] = v8;
                  LODWORD(Src[1]) = 3;
                }
                else
                {
                  v17 = 2LL;
                  v18 = HIDWORD(Src[2]) | 8;
                  HIDWORD(Src[2]) |= 8u;
                  if ( AuditId < 0x5FF )
                    HIDWORD(Src[2]) = v18 | 2;
                }
                ParameterCount = AuditParameters->ParameterCount;
                memmove(&Src[4 * v17 + 3], AuditParameters->Parameters, 32LL * ParameterCount);
                LODWORD(Src[1]) += ParameterCount;
                SepAdtLogAuditRecord(Src);
                if ( CurrentIrql >= 2u )
                  return 0;
                goto LABEL_19;
              }
            }
          }
        }
      }
    }
  }
  return -1073741811;
}
