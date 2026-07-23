/*
 * XREFs of VfPendingInitPhase1 @ 0x1409D679C
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1409C7D40 (VfInitSystemNoRebootNeeded.c)
 *     ViInitSystemPhase1 @ 0x140A70D8C (ViInitSystemPhase1.c)
 * Callees:
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     PsCreateSystemThread @ 0x1406A7420 (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS VfPendingInitPhase1()
{
  PVOID *v0; // rsi
  __int64 v1; // rdi
  NTSTATUS result; // eax
  HANDLE v3; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+90h] [rbp+20h] BYREF
  PVOID Object; // [rsp+98h] [rbp+28h] BYREF

  ThreadHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v0 = (PVOID *)&ViPendingWorkers;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v1 = 0LL;
  do
  {
    KeInitializeEvent((PRKEVENT)((char *)&ViPendingWorkers + 48 * v1 + 16), SynchronizationEvent, 0);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = PsCreateSystemThread(
               &ThreadHandle,
               0,
               &ObjectAttributes,
               0LL,
               0LL,
               ViPendingWorkerThread,
               (char *)&ViPendingWorkers + 48 * v1);
    if ( result < 0 )
      break;
    Object = 0LL;
    ObReferenceObjectByHandle(ThreadHandle, 0, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v3 = ThreadHandle;
    *v0 = Object;
    result = ZwClose(v3);
    v1 = (unsigned int)(v1 + 1);
    v0 += 6;
  }
  while ( (unsigned int)v1 < 8 );
  _InterlockedExchange(&ViPendingWorkersCount, v1);
  return result;
}
