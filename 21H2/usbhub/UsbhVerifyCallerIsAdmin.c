/*
 * XREFs of UsbhVerifyCallerIsAdmin @ 0x1C0040D50
 * Callers:
 *     UsbhIoctlCyclePort @ 0x1C003DB64 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlResetStuckHub @ 0x1C00404C8 (UsbhIoctlResetStuckHub.c)
 * Callees:
 *     <none>
 */

BOOLEAN UsbhVerifyCallerIsAdmin()
{
  void *PrimaryToken; // rcx
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
