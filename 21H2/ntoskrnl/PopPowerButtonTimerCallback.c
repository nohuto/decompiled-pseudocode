/*
 * XREFs of PopPowerButtonTimerCallback @ 0x1405787E0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x1402295B0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     PopQueueWorkItem @ 0x1402D3A34 (PopQueueWorkItem.c)
 */

void __fastcall PopPowerButtonTimerCallback(__int64 a1, int a2)
{
  KxAcquireSpinLock(&PopPowerButtonHold);
  if ( (qword_140C20938 & 1) != 0 && HIDWORD(qword_140C20938) == a2 )
  {
    LODWORD(qword_140C20938) = qword_140C20938 & 1 | ((qword_140C20938 & 0xFFFFFFFE) + 2000);
    PopQueueWorkItem((__int64)&unk_140C20910, CriticalWorkQueue);
  }
  KxReleaseSpinLock(&PopPowerButtonHold);
}
