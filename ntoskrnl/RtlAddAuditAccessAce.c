/*
 * XREFs of RtlAddAuditAccessAce @ 0x1409B8230
 * Callers:
 *     SepInitProcessAuditSd @ 0x140384A3C (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x140B403CC (ObInitSystem.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1406D3290 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAuditAccessAce(__int64 a1, __int64 a2, int a3)
{
  return RtlpAddKnownAce(a1, 2u, 192, a3, (unsigned __int8 *)SeWorldSid, 2);
}
