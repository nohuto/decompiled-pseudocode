/*
 * XREFs of RtlAddAccessAllowedAce @ 0x14078ED30
 * Callers:
 *     RtlCheckTokenCapability @ 0x140201400 (RtlCheckTokenCapability.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140257C7C (SepAppendAceToTokenDefaultDacl.c)
 *     RtlCheckTokenMembershipEx @ 0x1402E0CA0 (RtlCheckTokenMembershipEx.c)
 *     SepInitProcessAuditSd @ 0x1403CE4A4 (SepInitProcessAuditSd.c)
 *     WdipAccessCheck @ 0x14062C598 (WdipAccessCheck.c)
 *     ExpPlRunOnceInit @ 0x14063BB90 (ExpPlRunOnceInit.c)
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140A820BC (ViInitializeLocalSystemDescriptor.c)
 *     SeMakeSystemToken @ 0x140B1E75C (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140B1ED10 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140B1EFA0 (SeMakeAnonymousLogonToken.c)
 *     SepInitSystemDacls @ 0x140B2114C (SepInitSystemDacls.c)
 *     WmipInitializeSecurity @ 0x140B22DD4 (WmipInitializeSecurity.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140B28514 (PspInitializeSystemPartitionPhase0.c)
 *     IopCreateUmdfDirectory @ 0x140B2940C (IopCreateUmdfDirectory.c)
 *     SshpAlpcInitialize @ 0x140B2984C (SshpAlpcInitialize.c)
 *     ExpKeyedEventInitialization @ 0x140B2A324 (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x140B2B9FC (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x140B4F514 (IopApplySystemPartitionProt.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1407B4900 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce((int)Acl, AceRevision, 0, AccessMask, Sid, 0);
}
