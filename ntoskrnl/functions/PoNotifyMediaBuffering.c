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
