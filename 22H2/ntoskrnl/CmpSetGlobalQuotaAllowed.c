/*
 * XREFs of CmpSetGlobalQuotaAllowed @ 0x1407EB550
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402F659C (CmpLoadKeyCommon.c)
 * Callees:
 *     <none>
 */

__int64 CmpSetGlobalQuotaAllowed()
{
  __int64 result; // rax

  result = CmpGlobalQuota;
  CmpGlobalQuotaAllowed = CmpGlobalQuota;
  return result;
}
