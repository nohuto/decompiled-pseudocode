/*
 * XREFs of AdtpEtwBuildDashString @ 0x1407EA8B8
 * Callers:
 *     AdtpPackageParameters @ 0x140399314 (AdtpPackageParameters.c)
 *     AdtpBuildMultiSzStringListString @ 0x1403998B0 (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildAccessReasonAuditString @ 0x14066FDD0 (AdtpBuildAccessReasonAuditString.c)
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
