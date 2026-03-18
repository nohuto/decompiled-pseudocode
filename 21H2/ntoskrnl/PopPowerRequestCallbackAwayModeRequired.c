/*
 * XREFs of PopPowerRequestCallbackAwayModeRequired @ 0x140989CC0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAwaymodeLock @ 0x140A48C1C (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x140A48C5C (PopReleaseAwaymodeLock.c)
 */

__int64 __fastcall PopPowerRequestCallbackAwayModeRequired(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAwaymodeLock();
  byte_140C232D0 = a3;
  return PopReleaseAwaymodeLock();
}
