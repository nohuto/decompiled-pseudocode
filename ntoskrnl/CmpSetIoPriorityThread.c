/*
 * XREFs of CmpSetIoPriorityThread @ 0x140357520
 * Callers:
 *     CmpDoFileWrite @ 0x1406BC078 (CmpDoFileWrite.c)
 * Callees:
 *     PsSetIoPriorityThread @ 0x1403579A4 (PsSetIoPriorityThread.c)
 */

__int64 __fastcall CmpSetIoPriorityThread(__int64 a1, __int64 a2)
{
  return PsSetIoPriorityThread(a1, a2);
}
