/*
 * XREFs of SeIsAppContainerOrIdentifyLevelContext @ 0x1407EF848
 * Callers:
 *     PfpPrivSourceEnum @ 0x140711614 (PfpPrivSourceEnum.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     PopPowerRequestActionInfo @ 0x1407EF750 (PopPowerRequestActionInfo.c)
 * Callees:
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall SeIsAppContainerOrIdentifyLevelContext(PSECURITY_SUBJECT_CONTEXT SubjectContext, _BYTE *a2)
{
  char v2; // si
  PSECURITY_SUBJECT_CONTEXT p_SubjectContexta; // rdi
  unsigned int v5; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+10h] BYREF

  AccessStatus = 0;
  GrantedAccess = 0;
  v2 = 0;
  *a2 = 1;
  p_SubjectContexta = SubjectContext;
  memset(&SubjectContexta, 0, sizeof(SubjectContexta));
  if ( !SubjectContext )
  {
    SeCaptureSubjectContext(&SubjectContexta);
    p_SubjectContexta = &SubjectContexta;
    v2 = 1;
  }
  if ( SeAccessCheck(
         SeNullDaclSd,
         p_SubjectContexta,
         0,
         1u,
         0,
         0LL,
         (PGENERIC_MAPPING)&SystemContextGenericMapping,
         1,
         &GrantedAccess,
         &AccessStatus) )
  {
    *a2 = 0;
  }
  v5 = 0;
  if ( AccessStatus != -1073741790 )
    v5 = AccessStatus;
  if ( v2 )
    SeReleaseSubjectContext(p_SubjectContexta);
  return v5;
}
