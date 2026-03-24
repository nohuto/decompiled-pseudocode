/*
 * XREFs of SePrivilegeCheck @ 0x140654F40
 * Callers:
 *     NtSetInformationJobObject @ 0x140614200 (NtSetInformationJobObject.c)
 *     SeSinglePrivilegeCheckEx @ 0x140627698 (SeSinglePrivilegeCheckEx.c)
 *     PsOpenProcess @ 0x14065A730 (PsOpenProcess.c)
 *     ObpAdjustCreatorAccessState @ 0x140662D98 (ObpAdjustCreatorAccessState.c)
 *     PspSinglePrivCheck @ 0x1406A63AC (PspSinglePrivCheck.c)
 *     ObpCreateHandle @ 0x1406F6550 (ObpCreateHandle.c)
 *     RtlpNewSecurityObject @ 0x1406FF5F0 (RtlpNewSecurityObject.c)
 *     IopCheckBackupRestorePrivilege @ 0x140702EF0 (IopCheckBackupRestorePrivilege.c)
 *     PiAuDoesClientHavePrivilege @ 0x14072F34C (PiAuDoesClientHavePrivilege.c)
 *     SeCheckPrivilegedObject @ 0x14078DE60 (SeCheckPrivilegedObject.c)
 *     CMFCheckAccess @ 0x140958274 (CMFCheckAccess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x14027C450 (SepPrivilegeCheck.c)
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
