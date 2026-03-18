/*
 * XREFs of EtwpCoverageUserIsAdmin @ 0x1409E89E8
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x140874338 (EtwSetProcessTelemetryCoverage.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x1409E8148 (EtwQueryProcessTelemetryCoverage.c)
 * Callees:
 *     SeUnlockSubjectContext @ 0x1406C31E0 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1406C3220 (SeLockSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x1407380C0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     SeTokenIsAdmin @ 0x1407D0A20 (SeTokenIsAdmin.c)
 */

BOOLEAN EtwpCoverageUserIsAdmin()
{
  PACCESS_TOKEN PrimaryToken; // rcx
  BOOLEAN IsAdmin; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  IsAdmin = SeTokenIsAdmin(PrimaryToken);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return IsAdmin;
}
