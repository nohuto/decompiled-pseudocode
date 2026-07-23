/*
 * XREFs of SePrivilegeCheck @ 0x140649D60
 * Callers:
 *     PspSinglePrivCheck @ 0x140603FDC (PspSinglePrivCheck.c)
 *     PsOpenProcess @ 0x14064F550 (PsOpenProcess.c)
 *     ObpAdjustCreatorAccessState @ 0x140657BB8 (ObpAdjustCreatorAccessState.c)
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 *     SeSinglePrivilegeCheckEx @ 0x1406937A8 (SeSinglePrivilegeCheckEx.c)
 *     ObpCreateHandle @ 0x14070D930 (ObpCreateHandle.c)
 *     RtlpNewSecurityObject @ 0x1407169D0 (RtlpNewSecurityObject.c)
 *     IopCheckBackupRestorePrivilege @ 0x14071A2D0 (IopCheckBackupRestorePrivilege.c)
 *     PiAuDoesClientHavePrivilege @ 0x14072F518 (PiAuDoesClientHavePrivilege.c)
 *     SeCheckPrivilegedObject @ 0x14078E020 (SeCheckPrivilegedObject.c)
 *     CMFCheckAccess @ 0x140958444 (CMFCheckAccess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x14026A3F0 (SepPrivilegeCheck.c)
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
