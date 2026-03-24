/*
 * XREFs of FsRtlInitializeWorkerThread @ 0x140A6BC0C
 * Callers:
 *     FsRtlInitSystem @ 0x140A6B9E0 (FsRtlInitSystem.c)
 * Callees:
 *     KeInitializeQueue @ 0x140310CC0 (KeInitializeQueue.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     PsCreateSystemThread @ 0x1406FDA10 (PsCreateSystemThread.c)
 */

NTSTATUS FsRtlInitializeWorkerThread()
{
  unsigned int v0; // edi
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp+8h] BYREF

  memset(&ObjectAttributes.Length + 1, 0, 44);
  ThreadHandle = 0LL;
  v0 = 0;
  ObjectAttributes.Length = 48;
  while ( 1 )
  {
    KeInitializeQueue((PRKQUEUE)&FsRtlWorkerQueues + v0, 0);
    result = PsCreateSystemThread(
               &ThreadHandle,
               0x1FFFFFu,
               &ObjectAttributes,
               0LL,
               0LL,
               (PKSTART_ROUTINE)FsRtlWorkerThread,
               (PVOID)v0);
    v2 = result;
    if ( result < 0 )
      break;
    ZwClose(ThreadHandle);
    if ( ++v0 >= 2 )
    {
      LOWORD(StackOverflowFallbackSerialEvent.Header.Lock) = 1;
      StackOverflowFallbackSerialEvent.Header.WaitListHead.Blink = &StackOverflowFallbackSerialEvent.Header.WaitListHead;
      StackOverflowFallbackSerialEvent.Header.WaitListHead.Flink = &StackOverflowFallbackSerialEvent.Header.WaitListHead;
      result = v2;
      StackOverflowFallbackSerialEvent.Header.Size = 6;
      StackOverflowFallbackSerialEvent.Header.SignalState = 1;
      return result;
    }
  }
  return result;
}
