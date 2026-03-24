/*
 * XREFs of AdtpEtwBuildDashString @ 0x1406A66E0
 * Callers:
 *     AdtpPackageParameters @ 0x1403C0314 (AdtpPackageParameters.c)
 *     AdtpBuildMultiSzStringListString @ 0x1403C0860 (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildAccessReasonAuditString @ 0x1405C22BC (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     <none>
 */

const char *__fastcall AdtpEtwBuildDashString(__int64 a1)
{
  const char *result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  result = "-";
  *(_QWORD *)a1 = "-";
  *(_DWORD *)(a1 + 8) = 4;
  return result;
}
