/*
 * XREFs of IoEnqueueIrp @ 0x1409443E0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueThreadIrp @ 0x140312720 (IopQueueThreadIrp.c)
 */

__int64 __fastcall IoEnqueueIrp(__int64 a1)
{
  return IopQueueThreadIrp(a1);
}
