/*
 * XREFs of PopPowerButtonTimerCallback @ 0x140578A20
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     PopQueueWorkItem @ 0x140251CA4 (PopQueueWorkItem.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 */

void __fastcall PopPowerButtonTimerCallback(__int64 a1, int a2)
{
  KxAcquireSpinLock(&PopPowerButtonHold);
  if ( (qword_140C208B8 & 1) != 0 && HIDWORD(qword_140C208B8) == a2 )
  {
    LODWORD(qword_140C208B8) = qword_140C208B8 & 1 | ((qword_140C208B8 & 0xFFFFFFFE) + 2000);
    PopQueueWorkItem((__int64)&unk_140C20890, CriticalWorkQueue);
  }
  KxReleaseSpinLock(&PopPowerButtonHold);
}
