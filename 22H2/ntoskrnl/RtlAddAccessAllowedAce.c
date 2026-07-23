/*
 * XREFs of RtlAddAccessAllowedAce @ 0x1406EF9D0
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x1403226D4 (SepAppendAceToTokenDefaultDacl.c)
 *     RtlCheckTokenMembershipEx @ 0x140348460 (RtlCheckTokenMembershipEx.c)
 *     SepInitProcessAuditSd @ 0x1403B3FE8 (SepInitProcessAuditSd.c)
 *     RtlCheckTokenCapability @ 0x140586670 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x1405A5550 (WdipAccessCheck.c)
 *     SepInitializationPhase1 @ 0x14079D7A8 (SepInitializationPhase1.c)
 *     MiCreatePagingFile @ 0x1407B6DDC (MiCreatePagingFile.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1409C6BC8 (ViInitializeLocalSystemDescriptor.c)
 *     SeMakeSystemToken @ 0x140A47F10 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140A484C0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140A4874C (SeMakeAnonymousLogonToken.c)
 *     SepInitSystemDacls @ 0x140A4A880 (SepInitSystemDacls.c)
 *     IopCreateUmdfDirectory @ 0x140A5D080 (IopCreateUmdfDirectory.c)
 *     WmipInitializeSecurity @ 0x140A69C2C (WmipInitializeSecurity.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140A6DD90 (PspInitializeSystemPartitionPhase0.c)
 *     ExpKeyedEventInitialization @ 0x140A6F2EC (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x140A6FE7C (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x140A8FEC0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1406D5220 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce(Acl, AceRevision, 0, AccessMask, (unsigned __int8 *)Sid, 0);
}
