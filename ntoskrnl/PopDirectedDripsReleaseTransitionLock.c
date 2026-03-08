/*
 * XREFs of PopDirectedDripsReleaseTransitionLock @ 0x140980B94
 * Callers:
 *     PopDirectedDripsResumeDevices @ 0x140980BC4 (PopDirectedDripsResumeDevices.c)
 *     PopDirectedDripsSuspendDevices @ 0x140980E14 (PopDirectedDripsSuspendDevices.c)
 * Callees:
 *     PopReleaseTransitionLock @ 0x14082AD60 (PopReleaseTransitionLock.c)
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
