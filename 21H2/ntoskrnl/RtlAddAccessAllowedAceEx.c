/*
 * XREFs of RtlAddAccessAllowedAceEx @ 0x140781B30
 * Callers:
 *     PiAuCreateLocalSystemSecurityObject @ 0x140A527DC (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140A52B9C (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140A6F0A8 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x140651280 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAceEx(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PSID Sid)
{
  return RtlpAddKnownAce(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 0);
}
