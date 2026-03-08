/*
 * XREFs of PopActiveLockScreenPowerRequest @ 0x1409986F0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAdaptiveLock @ 0x14073CCB4 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x14073CD60 (PopReleaseAdaptiveLock.c)
 */

void __fastcall PopActiveLockScreenPowerRequest(__int64 a1, __int64 a2, char a3)
{
  PopAcquireAdaptiveLock(0, a2);
  byte_140C398C2 = a3 != 0;
  PopReleaseAdaptiveLock();
}
