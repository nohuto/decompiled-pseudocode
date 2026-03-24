/*
 * XREFs of PspIsContextAdmin @ 0x140715EE0
 * Callers:
 *     NtSetInformationJobObject @ 0x140614200 (NtSetInformationJobObject.c)
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140678DF4 (PopPowerInformationInternal.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x140716C84 (PspSetEnergyTrackingStateJobTree.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x140655B30 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406568F0 (SeReleaseSubjectContext.c)
 *     SeLockSubjectContext @ 0x1406F5E30 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1406F5E90 (SeUnlockSubjectContext.c)
 *     SeTokenIsAdmin @ 0x140717530 (SeTokenIsAdmin.c)
 */

BOOLEAN PspIsContextAdmin()
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
