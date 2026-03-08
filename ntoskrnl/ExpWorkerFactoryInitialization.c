/*
 * XREFs of ExpWorkerFactoryInitialization @ 0x140B6F290
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140B3F0B8 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeRegisterObjectNotification @ 0x14024F260 (KeRegisterObjectNotification.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     KeInitializeQueue @ 0x1402A8580 (KeInitializeQueue.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PsCreateSystemThread @ 0x1407DE2E0 (PsCreateSystemThread.c)
 *     ObCreateObjectType @ 0x14080CB00 (ObCreateObjectType.c)
 */

__int64 ExpWorkerFactoryInitialization()
{
  int v0; // eax
  int ObjectType; // ebx
  _QWORD v3[16]; // [rsp+40h] [rbp-29h] BYREF
  HANDLE ThreadHandle; // [rsp+D0h] [rbp+67h] BYREF

  v0 = ExpWorkerFactoryThreadCreationTimeoutInSeconds;
  ThreadHandle = 0LL;
  if ( ExpWorkerFactoryThreadCreationTimeoutInSeconds )
  {
    if ( (unsigned int)ExpWorkerFactoryThreadCreationTimeoutInSeconds > 0x258 )
    {
      v0 = 600;
      ExpWorkerFactoryThreadCreationTimeoutInSeconds = 600;
    }
  }
  else
  {
    v0 = 1;
    ExpWorkerFactoryThreadCreationTimeoutInSeconds = 1;
  }
  if ( ExpWorkerFactoryThreadIdleTimeoutInSeconds )
  {
    if ( (unsigned int)ExpWorkerFactoryThreadIdleTimeoutInSeconds > 0x258 )
      ExpWorkerFactoryThreadIdleTimeoutInSeconds = 600;
  }
  else
  {
    ExpWorkerFactoryThreadIdleTimeoutInSeconds = 1;
  }
  ExpWorkerFactoryDeferredMediumTimeout = -1200000LL;
  ExpWorkerFactoryDeferredLongTimeout = -10000000LL * v0;
  ExpWorkerFactoryDeferredShortTimeout.QuadPart = -300000LL;
  if ( ((unsigned __int8)&ExpWorkerFactoryThreadCreationList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  ExpWorkerFactoryThreadCreationList = 0LL;
  KeInitializeQueue(&ExpWorkerFactoryManagerQueue, 0);
  *(_QWORD *)&ExpWorkerFactoryThreadCreationTimer.Header.Lock = 9LL;
  ExpWorkerFactoryThreadCreationTimer.Header.WaitListHead.Blink = &ExpWorkerFactoryThreadCreationTimer.Header.WaitListHead;
  ExpWorkerFactoryThreadCreationTimer.Header.WaitListHead.Flink = &ExpWorkerFactoryThreadCreationTimer.Header.WaitListHead;
  ExpWorkerFactoryThreadCreationTimer.DueTime.QuadPart = 0LL;
  ExpWorkerFactoryThreadCreationTimer.Period = 0;
  ExpWorkerFactoryThreadCreationTimer.Processor = 0;
  KeRegisterObjectNotification(
    (__int64)&ExpWorkerFactoryThreadCreationTimer,
    (__int64)&ExpWorkerFactoryManagerQueue,
    (__int64)&ExpWorkerFactoryThreadCreationBlock);
  ExpWorkerFactoryThreadCreationState = 0;
  memset(v3, 0, 0x78uLL);
  LOWORD(v3[0]) = 120;
  v3[8] = ExpCloseWorkerFactory;
  LODWORD(v3[1]) = 256;
  v3[9] = ExpDeleteWorkerFactory;
  HIDWORD(v3[4]) = 512;
  HIDWORD(v3[5]) = 672;
  *(_OWORD *)((char *)&v3[1] + 4) = ExpWorkerFactoryMapping;
  HIDWORD(v3[3]) = 983295;
  ObjectType = ObCreateObjectType(
                 (const UNICODE_STRING *)&qword_140B9AEA0,
                 (__int64)v3,
                 0LL,
                 (__int64)&ExpWorkerFactoryObjectType);
  if ( ObjectType >= 0 )
  {
    ObjectType = PsCreateSystemThread(
                   &ThreadHandle,
                   0x1FFFFFu,
                   0LL,
                   0LL,
                   0LL,
                   (PKSTART_ROUTINE)ExpWorkerFactoryManagerThread,
                   0LL);
    if ( ObjectType >= 0 )
      ZwClose(ThreadHandle);
  }
  return (unsigned int)ObjectType;
}
