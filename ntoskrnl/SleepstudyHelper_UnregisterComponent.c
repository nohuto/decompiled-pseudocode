/*
 * XREFs of SleepstudyHelper_UnregisterComponent @ 0x1405A1240
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperDestroyBlocker @ 0x1403AFD80 (SleepstudyHelperDestroyBlocker.c)
 */

__int64 __fastcall SleepstudyHelper_UnregisterComponent(KSPIN_LOCK *a1)
{
  return SleepstudyHelperDestroyBlocker(a1);
}
