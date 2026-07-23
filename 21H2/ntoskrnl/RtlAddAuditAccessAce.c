/*
 * XREFs of RtlAddAuditAccessAce @ 0x1409125B0
 * Callers:
 *     SepInitProcessAuditSd @ 0x1403B47B8 (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x140A3F538 (ObInitSystem.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x140651280 (RtlpAddKnownAce.c)
 */

NTSTATUS __cdecl RtlAddAuditAccessAce(
        PACL Acl,
        ULONG AceRevision,
        ACCESS_MASK AccessMask,
        PSID Sid,
        BOOLEAN AuditSuccess,
        BOOLEAN AuditFailure)
{
  return RtlpAddKnownAce(Acl, 2u, 192, AccessMask, (unsigned __int8 *)SeWorldSid, 2u);
}
