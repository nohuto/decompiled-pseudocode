/*
 * XREFs of ExpWnfCheckCallerAccess @ 0x14071A9D4
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x140719A64 (ExpWnfSubscribeWnfStateChange.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x14071A954 (ExpWnfValidatePubSubPreconditions.c)
 *     NtDeleteWnfStateName @ 0x140778FE0 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x14077DEB0 (NtQueryWnfStateNameInformation.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1407947E0 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpNtDeleteWnfStateData @ 0x14085860C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     SeAccessCheck @ 0x140265330 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ExpWnfCheckCallerAccess(PSECURITY_DESCRIPTOR SecurityDescriptor, ACCESS_MASK DesiredAccess)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  GrantedAccess = 0;
  AccessStatus = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  if ( !DesiredAccess )
    return 0LL;
  SeCaptureSubjectContext(&SubjectSecurityContext);
  SeAccessCheck(
    SecurityDescriptor,
    &SubjectSecurityContext,
    0,
    DesiredAccess,
    0,
    0LL,
    (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
    1,
    &GrantedAccess,
    &AccessStatus);
  SeReleaseSubjectContext(&SubjectSecurityContext);
  return (unsigned int)AccessStatus;
}
