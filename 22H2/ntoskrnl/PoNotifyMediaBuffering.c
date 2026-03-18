/*
 * XREFs of PoNotifyMediaBuffering @ 0x1403AEF50
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251490 (KxAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     KeQueryPriorityThread @ 0x140304B70 (KeQueryPriorityThread.c)
 */

void __fastcall PoNotifyMediaBuffering(char a1)
{
  char v2; // di
  KPRIORITY PriorityThread; // eax

  v2 = 0;
  KxAcquireSpinLock(&PpmMediaBufferingWork);
  if ( !byte_140C3EA88 )
  {
    v2 = 1;
    byte_140C3EA88 = 1;
  }
  byte_140C3EA89 = a1;
  KxReleaseSpinLock((volatile signed __int64 *)&PpmMediaBufferingWork);
  if ( v2 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    if ( PriorityThread < 31 )
      ++PriorityThread;
    if ( !a1 && PriorityThread <= 16 )
      PriorityThread = 16;
    ExQueueWorkItem(&stru_140C3EA90, (WORK_QUEUE_TYPE)(PriorityThread + 32));
  }
}
