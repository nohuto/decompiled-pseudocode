/*
 * XREFs of IoSetIoPriorityHintIntoThread @ 0x140357980
 * Callers:
 *     <none>
 * Callees:
 *     PsSetIoPriorityThread @ 0x1403579A4 (PsSetIoPriorityThread.c)
 */

__int64 __fastcall IoSetIoPriorityHintIntoThread(__int64 a1, __int64 a2)
{
  if ( (unsigned int)a2 >= 5 )
    return 3221225485LL;
  PsSetIoPriorityThread(a1, a2);
  return 0LL;
}
