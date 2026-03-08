/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x14058B540
 * Callers:
 *     <none>
 * Callees:
 *     PopGetPolicyWorker @ 0x1402BCB34 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x1402BCB88 (PopCheckForWork.c)
 */

__int64 PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  return PopCheckForWork();
}
