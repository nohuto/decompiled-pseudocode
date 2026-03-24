/*
 * XREFs of CmpSetIoPriorityThread @ 0x14032B854
 * Callers:
 *     CmpDoFileWrite @ 0x1406EA3AC (CmpDoFileWrite.c)
 * Callees:
 *     PsSetIoPriorityThread @ 0x140277970 (PsSetIoPriorityThread.c)
 */

__int64 __fastcall CmpSetIoPriorityThread(__int64 a1, int a2)
{
  return PsSetIoPriorityThread(a1, a2);
}
