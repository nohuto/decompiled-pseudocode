/*
 * XREFs of SePrivilegeCheck @ 0x1407B9710
 * Callers:
 *     ObpAdjustCreatorAccessState @ 0x140698E40 (ObpAdjustCreatorAccessState.c)
 *     SeSinglePrivilegeCheckEx @ 0x1406BA46C (SeSinglePrivilegeCheckEx.c)
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 *     SeCheckPrivilegedObject @ 0x1407913D4 (SeCheckPrivilegedObject.c)
 *     PspSinglePrivCheck @ 0x140794DB4 (PspSinglePrivCheck.c)
 *     RtlpNewSecurityObject @ 0x1407BD790 (RtlpNewSecurityObject.c)
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     PiAuDoesClientHavePrivilege @ 0x140958948 (PiAuDoesClientHavePrivilege.c)
 *     CMFCheckAccess @ 0x1409FECA4 (CMFCheckAccess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x14030F080 (SepPrivilegeCheck.c)
 */

BOOLEAN __stdcall SePrivilegeCheck(
        PPRIVILEGE_SET RequiredPrivileges,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        KPROCESSOR_MODE AccessMode)
{
  PACCESS_TOKEN ClientToken; // rcx

  if ( !AccessMode )
    return 1;
  ClientToken = SubjectSecurityContext->ClientToken;
  if ( !SubjectSecurityContext->ClientToken )
  {
    ClientToken = SubjectSecurityContext->PrimaryToken;
    return SepPrivilegeCheck(
             (__int64)ClientToken,
             (__int64)RequiredPrivileges->Privilege,
             RequiredPrivileges->PrivilegeCount,
             RequiredPrivileges->Control,
             AccessMode);
  }
  if ( SubjectSecurityContext->ImpersonationLevel >= SecurityImpersonation )
    return SepPrivilegeCheck(
             (__int64)ClientToken,
             (__int64)RequiredPrivileges->Privilege,
             RequiredPrivileges->PrivilegeCount,
             RequiredPrivileges->Control,
             AccessMode);
  return 0;
}
