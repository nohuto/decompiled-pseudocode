/*
 * XREFs of EtwpAccessCheck @ 0x140692ED0
 * Callers:
 *     NtTraceEvent @ 0x140230D30 (NtTraceEvent.c)
 *     EtwpNotifyGuid @ 0x14068EA84 (EtwpNotifyGuid.c)
 *     EtwpCheckGuidAccess @ 0x1406910EC (EtwpCheckGuidAccess.c)
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     EtwpCheckLoggerControlAccess @ 0x140692E00 (EtwpCheckLoggerControlAccess.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1409E94C0 (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x140265330 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall EtwpAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ACCESS_MASK DesiredAccess,
        struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rdx
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+90h] [rbp+18h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+98h] [rbp+20h] BYREF

  AccessStatus = 0;
  GrantedAccess = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  if ( a3 )
  {
    p_SubjectSecurityContext = a3;
  }
  else
  {
    SeCaptureSubjectContext(&SubjectSecurityContext);
    p_SubjectSecurityContext = &SubjectSecurityContext;
  }
  SeAccessCheck(
    SecurityDescriptor,
    p_SubjectSecurityContext,
    0,
    DesiredAccess,
    0,
    0LL,
    (PGENERIC_MAPPING)&EtwpGenericMapping,
    1,
    &GrantedAccess,
    &AccessStatus);
  if ( !a3 )
    SeReleaseSubjectContext(&SubjectSecurityContext);
  return (unsigned int)AccessStatus;
}
