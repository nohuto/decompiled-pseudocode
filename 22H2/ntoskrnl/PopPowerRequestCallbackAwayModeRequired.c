/*
 * XREFs of PopPowerRequestCallbackAwayModeRequired @ 0x1409815E0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAwaymodeLock @ 0x140AA9098 (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x140AA90D8 (PopReleaseAwaymodeLock.c)
 */

__int64 __fastcall PopPowerRequestCallbackAwayModeRequired(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAwaymodeLock();
  byte_140C3D910 = a3;
  return PopReleaseAwaymodeLock();
}
