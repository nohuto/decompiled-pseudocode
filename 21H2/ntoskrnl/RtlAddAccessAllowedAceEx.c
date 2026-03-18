/*
 * XREFs of RtlAddAccessAllowedAceEx @ 0x140811740
 * Callers:
 *     PiAuCreateLocalSystemSecurityObject @ 0x140B22228 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B225D8 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140B2888C (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1407B4900 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAceEx(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PSID Sid)
{
  return RtlpAddKnownAce((__int64)Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 0);
}
