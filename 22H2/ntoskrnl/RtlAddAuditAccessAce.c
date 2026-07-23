/*
 * XREFs of RtlAddAuditAccessAce @ 0x1409124A0
 * Callers:
 *     SepInitProcessAuditSd @ 0x1403B3FE8 (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x140A3D968 (ObInitSystem.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1406D5220 (RtlpAddKnownAce.c)
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
