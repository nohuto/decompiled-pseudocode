/*
 * XREFs of AdtpEtwBuildDashString @ 0x14079BA9C
 * Callers:
 *     AdtpPackageParameters @ 0x1403958B4 (AdtpPackageParameters.c)
 *     AdtpBuildMultiSzStringListString @ 0x140395E50 (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildAccessReasonAuditString @ 0x14066D780 (AdtpBuildAccessReasonAuditString.c)
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
