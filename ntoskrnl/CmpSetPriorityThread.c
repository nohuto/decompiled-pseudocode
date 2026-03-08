/*
 * XREFs of CmpSetPriorityThread @ 0x140357508
 * Callers:
 *     CmpDoFileWrite @ 0x1406BC078 (CmpDoFileWrite.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140357730 (KeSetActualBasePriorityThread.c)
 */

__int64 __fastcall CmpSetPriorityThread(ULONG_PTR a1)
{
  return KeSetActualBasePriorityThread(a1);
}
