/*
 * XREFs of PoNotifyMediaBuffering @ 0x1403AA200
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPriorityThread @ 0x140240EA0 (KeQueryPriorityThread.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void __fastcall PoNotifyMediaBuffering(char a1)
{
  char v2; // di
  KPRIORITY PriorityThread; // eax

  v2 = 0;
  KxAcquireSpinLock(&PpmMediaBufferingWork);
  if ( !byte_140C3E628 )
  {
    v2 = 1;
    byte_140C3E628 = 1;
  }
  byte_140C3E629 = a1;
  KxReleaseSpinLock((volatile signed __int64 *)&PpmMediaBufferingWork);
  if ( v2 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    if ( PriorityThread < 31 )
      ++PriorityThread;
    if ( !a1 && PriorityThread <= 16 )
      PriorityThread = 16;
    ExQueueWorkItem(&stru_140C3E630, (WORK_QUEUE_TYPE)(PriorityThread + 32));
  }
}
