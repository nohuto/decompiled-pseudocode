/*
 * XREFs of PopDirectedDripsReleaseTransitionLock @ 0x140983C44
 * Callers:
 *     PopDirectedDripsResumeDevices @ 0x140983C74 (PopDirectedDripsResumeDevices.c)
 *     PopDirectedDripsSuspendDevices @ 0x140983EC4 (PopDirectedDripsSuspendDevices.c)
 * Callees:
 *     PopReleaseTransitionLock @ 0x140802F44 (PopReleaseTransitionLock.c)
 */

LONG __fastcall PopDirectedDripsReleaseTransitionLock(void *a1)
{
  LONG result; // eax

  _m_prefetchw(a1);
  result = _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFBF);
  if ( (result & 0x40) != 0 )
    return PopReleaseTransitionLock(7);
  return result;
}
