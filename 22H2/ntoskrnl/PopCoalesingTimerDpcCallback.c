/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x14058DA70
 * Callers:
 *     <none>
 * Callees:
 *     PopGetPolicyWorker @ 0x14032C984 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x14032C9D8 (PopCheckForWork.c)
 */

__int64 PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  return PopCheckForWork();
}
