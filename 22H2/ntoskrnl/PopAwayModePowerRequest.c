/*
 * XREFs of PopAwayModePowerRequest @ 0x1408E1820
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAwaymodeLock @ 0x140990D14 (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x140990D54 (PopReleaseAwaymodeLock.c)
 */

__int64 __fastcall PopAwayModePowerRequest(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAwaymodeLock();
  byte_140C23350 = a3 != 0;
  PopReleaseAwaymodeLock();
  return 0LL;
}
