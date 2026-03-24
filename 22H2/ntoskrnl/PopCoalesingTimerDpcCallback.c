/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x14056EC10
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckForWork @ 0x14034A290 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14034AB20 (PopGetPolicyWorker.c)
 */

__int64 PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  return PopCheckForWork();
}
