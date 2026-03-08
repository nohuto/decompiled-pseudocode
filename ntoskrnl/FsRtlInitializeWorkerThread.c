/*
 * XREFs of FsRtlInitializeWorkerThread @ 0x140B65C4C
 * Callers:
 *     FsRtlInitSystem @ 0x140B65B14 (FsRtlInitSystem.c)
 * Callees:
 *     KeInitializeQueue @ 0x1402A8580 (KeInitializeQueue.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     PsCreateSystemThread @ 0x1407DE2E0 (PsCreateSystemThread.c)
 */

NTSTATUS FsRtlInitializeWorkerThread()
{
  unsigned int v0; // edi
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp+10h] BYREF

  ThreadHandle = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 40);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v0 = 0;
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
