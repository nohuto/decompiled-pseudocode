/*
 * XREFs of KiEpfDrainCompletionQueue @ 0x140576B0C
 * Callers:
 *     KeWaitPhysicalFaultCompletion @ 0x140576908 (KeWaitPhysicalFaultCompletion.c)
 *     KiEpfCompletionDpcRoutine @ 0x140576AF0 (KiEpfCompletionDpcRoutine.c)
 *     KiEpfHandleNotification @ 0x140576B90 (KiEpfHandleNotification.c)
 *     KeInitSystem @ 0x140B42FB8 (KeInitSystem.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KiEpfComplete @ 0x140576A00 (KiEpfComplete.c)
 */

void KiEpfDrainCompletionQueue()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rax
  char v2; // di

  v0 = 0LL;
  if ( KiEpfCompletionQueue )
  {
    while ( 1 )
    {
      KxAcquireSpinLock(&KiEpfCompletionQueueSpinLock);
      v1 = *(_QWORD *)KiEpfCompletionQueue;
      if ( *(_QWORD *)KiEpfCompletionQueue == *(_QWORD *)(KiEpfCompletionQueue + 8) )
      {
        v2 = 0;
      }
      else
      {
        v0 = *(_QWORD *)(KiEpfCompletionQueue + 8 * v1 + 16);
        v2 = 1;
        *(_QWORD *)KiEpfCompletionQueue = (v1 + 1) % (unsigned __int64)(unsigned int)KiEpfCompletionQueueSize;
      }
      KxReleaseSpinLock((volatile signed __int64 *)&KiEpfCompletionQueueSpinLock);
      if ( !v2 )
        break;
      KiEpfComplete(v0);
    }
  }
}
