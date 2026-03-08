/*
 * XREFs of CmpSetGlobalQuotaAllowed @ 0x14079C7E0
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402B2DEC (CmpLoadKeyCommon.c)
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
