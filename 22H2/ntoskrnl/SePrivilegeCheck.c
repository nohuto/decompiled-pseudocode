/*
 * XREFs of SePrivilegeCheck @ 0x14072F320
 * Callers:
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     ObpAdjustCreatorAccessState @ 0x1406C2BB0 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x1406E45C0 (ObpCreateHandle.c)
 *     SeSinglePrivilegeCheckEx @ 0x14070FCDC (SeSinglePrivilegeCheckEx.c)
 *     RtlpNewSecurityObject @ 0x14072A470 (RtlpNewSecurityObject.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1407D08DC (MiIsUserQueryVmCallerTrusted.c)
 *     SeCheckPrivilegedObject @ 0x1407E05E4 (SeCheckPrivilegedObject.c)
 *     PspSinglePrivCheck @ 0x1407E4308 (PspSinglePrivCheck.c)
 *     PiAuDoesClientHavePrivilege @ 0x14095B968 (PiAuDoesClientHavePrivilege.c)
 *     CMFCheckAccess @ 0x140A01994 (CMFCheckAccess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x1402AF660 (SepPrivilegeCheck.c)
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
