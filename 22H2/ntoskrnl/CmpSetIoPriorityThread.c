/*
 * XREFs of CmpSetIoPriorityThread @ 0x1402079F4
 * Callers:
 *     CmpDoFileWrite @ 0x1406895CC (CmpDoFileWrite.c)
 * Callees:
 *     PsSetIoPriorityThread @ 0x140207824 (PsSetIoPriorityThread.c)
 */

__int64 __fastcall CmpSetIoPriorityThread(__int64 a1, unsigned int a2)
{
  return PsSetIoPriorityThread(a1, a2);
}
