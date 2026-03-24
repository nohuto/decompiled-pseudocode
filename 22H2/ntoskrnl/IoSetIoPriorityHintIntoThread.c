/*
 * XREFs of IoSetIoPriorityHintIntoThread @ 0x140278A90
 * Callers:
 *     <none>
 * Callees:
 *     PsSetIoPriorityThread @ 0x140277970 (PsSetIoPriorityThread.c)
 */

__int64 __fastcall IoSetIoPriorityHintIntoThread(__int64 a1, unsigned int a2)
{
  if ( a2 >= 5 )
    return 3221225485LL;
  PsSetIoPriorityThread(a1, a2);
  return 0LL;
}
