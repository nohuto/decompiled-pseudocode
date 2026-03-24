/*
 * XREFs of SePrivilegeCheck @ 0x1406CDD00
 * Callers:
 *     NtSetInformationJobObject @ 0x140614660 (NtSetInformationJobObject.c)
 *     SeSinglePrivilegeCheckEx @ 0x140627AB8 (SeSinglePrivilegeCheckEx.c)
 *     ObpCreateHandle @ 0x140643C70 (ObpCreateHandle.c)
 *     RtlpNewSecurityObject @ 0x14064CD10 (RtlpNewSecurityObject.c)
 *     IopCheckBackupRestorePrivilege @ 0x140650630 (IopCheckBackupRestorePrivilege.c)
 *     PspSinglePrivCheck @ 0x140688E8C (PspSinglePrivCheck.c)
 *     PsOpenProcess @ 0x1406D34F0 (PsOpenProcess.c)
 *     ObpAdjustCreatorAccessState @ 0x1406DBB88 (ObpAdjustCreatorAccessState.c)
 *     PiAuDoesClientHavePrivilege @ 0x14072F800 (PiAuDoesClientHavePrivilege.c)
 *     SeCheckPrivilegedObject @ 0x14078DD60 (SeCheckPrivilegedObject.c)
 *     CMFCheckAccess @ 0x1409582C4 (CMFCheckAccess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x140345460 (SepPrivilegeCheck.c)
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
