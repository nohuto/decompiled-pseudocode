/*
 * XREFs of PopPowerRequestCallbackAwayModeRequired @ 0x14097E530
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAwaymodeLock @ 0x140AA5E68 (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x140AA5EA8 (PopReleaseAwaymodeLock.c)
 */

__int64 __fastcall PopPowerRequestCallbackAwayModeRequired(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAwaymodeLock();
  byte_140C3D490 = a3;
  return PopReleaseAwaymodeLock();
}
