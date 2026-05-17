/*
 * XREFs of RtlCallEnclave @ 0x1800A14E0
 * Callers:
 *     LdrInitializeEnclave @ 0x1800CCCB0 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800CD740 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     ZwCallEnclave @ 0x18009E6F0 (ZwCallEnclave.c)
 */

__int64 RtlCallEnclave()
{
  return ZwCallEnclave();
}
