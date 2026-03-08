/*
 * XREFs of ACPIInitializeWorker @ 0x1C00AA920
 * Callers:
 *     DriverEntry @ 0x1C00A7300 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS ACPIInitializeWorker()
{
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *ThreadHandle; // [rsp+80h] [rbp+10h] BYREF
  PVOID Object; // [rsp+88h] [rbp+18h] BYREF

  memset(&ObjectAttributes.Length + 1, 0, 44);
  ThreadHandle = 0LL;
  KeInitializeSpinLock(&ACPIWorkerQueueSpinLock);
  ACPIWorkItem.Parameter = 0LL;
  ACPIWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ACPIDeviceWorkerThread;
  ACPIWorkItem.List.Flink = 0LL;
  qword_1C006E948 = (__int64)&ACPIDeviceWorkQueue;
  ACPIDeviceWorkQueue = (__int64)&ACPIDeviceWorkQueue;
  KeInitializeEvent(&ACPIProcessWorkQueueEvent, NotificationEvent, 0);
  KeInitializeEvent(&ACPITerminateEvent, NotificationEvent, 0);
  qword_1C006E938 = (__int64)&ACPIWorkQueue;
  ACPIWorkQueue = (__int64)&ACPIWorkQueue;
  ObjectAttributes.Length = 48;
  if ( PsCreateSystemThread(
         &ThreadHandle,
         0x1FFFFFu,
         &ObjectAttributes,
         0LL,
         0LL,
         (PKSTART_ROUTINE)ACPIWorkerThread,
         0LL) )
  {
    KeBugCheckEx(0xA3u, 1uLL, 0xE0062uLL, 0LL, 0LL);
  }
  Object = 0LL;
  if ( ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL) )
    KeBugCheckEx(0xA3u, 1uLL, 0xE006EuLL, 0LL, 0LL);
  return ZwClose(ThreadHandle);
}
