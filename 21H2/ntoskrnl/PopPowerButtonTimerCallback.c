/*
 * XREFs of PopPowerButtonTimerCallback @ 0x1405D8980
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     PopQueueWorkItem @ 0x14036AAC4 (PopQueueWorkItem.c)
 */

void __fastcall PopPowerButtonTimerCallback(__int64 a1, int a2)
{
  KxAcquireSpinLock(&PopPowerButtonHold);
  if ( (xmmword_140C1F6F8 & 1) != 0 && DWORD1(xmmword_140C1F6F8) == a2 )
  {
    LODWORD(xmmword_140C1F6F8) = xmmword_140C1F6F8 & 1 | ((xmmword_140C1F6F8 & 0xFFFFFFFE) + 2000);
    PopQueueWorkItem((__int64)&unk_140C1F6D0, CriticalWorkQueue);
  }
  KxReleaseSpinLock(&PopPowerButtonHold);
}
