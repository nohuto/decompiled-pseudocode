/*
 * XREFs of ExIsRestrictedCaller @ 0x14078A078
 * Callers:
 *     ExpGetProcessInformation @ 0x1406A9140 (ExpGetProcessInformation.c)
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 *     PspQueryWorkingSetWatch @ 0x1409AC5BC (PspQueryWorkingSetWatch.c)
 *     ExProcessCounterSetCallback @ 0x1409F2FF0 (ExProcessCounterSetCallback.c)
 *     ExpProfileCreate @ 0x140A01038 (ExpProfileCreate.c)
 * Callees:
 *     SeAccessCheck @ 0x140265330 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ExIsRestrictedCaller(char a1)
{
  unsigned int v1; // edi
  BOOLEAN v3; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+10h] BYREF

  v1 = 0;
  AccessStatus = 0;
  GrantedAccess = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !a1 )
    return 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  v3 = SeAccessCheck(
         SeMediumDaclSd,
         &SubjectContext,
         0,
         0x20000u,
         0,
         0LL,
         (PGENERIC_MAPPING)&ExpRestrictedGenericMapping,
         1,
         &GrantedAccess,
         &AccessStatus);
  SeReleaseSubjectContext(&SubjectContext);
  if ( !v3 )
    return 1LL;
  LOBYTE(v1) = AccessStatus < 0;
  return v1;
}
