/*
 * XREFs of PopPowerButtonTimerCallback @ 0x140578720
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140229570 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     PopQueueWorkItem @ 0x14032CC74 (PopQueueWorkItem.c)
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
