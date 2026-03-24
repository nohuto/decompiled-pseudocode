/*
 * XREFs of IoEnqueueIrp @ 0x140893BB0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueThreadIrp @ 0x1402CB9A0 (IopQueueThreadIrp.c)
 */

__int64 __fastcall IoEnqueueIrp(__int64 a1)
{
  return IopQueueThreadIrp(a1);
}
