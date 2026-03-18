/*
 * XREFs of RtlAddAuditAccessAce @ 0x1409BB150
 * Callers:
 *     SepInitProcessAuditSd @ 0x140387AB0 (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x140B4E9F8 (ObInitSystem.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x140735770 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAuditAccessAce(__int64 a1, __int64 a2, int a3)
{
  return RtlpAddKnownAce(a1, 2u, 192, a3, (unsigned __int8 *)SeWorldSid, 2);
}
