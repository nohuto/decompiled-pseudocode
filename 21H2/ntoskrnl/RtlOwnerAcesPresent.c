/*
 * XREFs of RtlOwnerAcesPresent @ 0x140214610
 * Callers:
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406922C0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     RtlpOwnerAcesPresent @ 0x140214630 (RtlpOwnerAcesPresent.c)
 */

BOOLEAN __cdecl RtlOwnerAcesPresent(PACL pAcl)
{
  return RtlpOwnerAcesPresent(0LL, pAcl);
}
