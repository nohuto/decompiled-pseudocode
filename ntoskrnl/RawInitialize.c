/*
 * XREFs of RawInitialize @ 0x140B53CA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     IoDeleteDevice @ 0x140368010 (IoDeleteDevice.c)
 *     IoCreateDevice @ 0x1407F0460 (IoCreateDevice.c)
 *     IoRegisterShutdownNotification @ 0x1408198A0 (IoRegisterShutdownNotification.c)
 *     IoRegisterFileSystem @ 0x14086F860 (IoRegisterFileSystem.c)
 */

NTSTATUS __fastcall RawInitialize(PDRIVER_OBJECT DriverObject)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\RawDisk");
  result = IoCreateDevice(DriverObject, 0, &DestinationString, 8u, 0, 0, &RawDeviceDiskObject);
  if ( result >= 0 )
  {
    DriverObject->DriverUnload = (PDRIVER_UNLOAD)RawUnload;
    RtlInitUnicodeString(&DestinationString, L"\\Device\\RawCdRom");
    v3 = IoCreateDevice(DriverObject, 0, &DestinationString, 3u, 0, 0, &RawDeviceCdRomObject);
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Device\\RawTape");
      v3 = IoCreateDevice(DriverObject, 0, &DestinationString, 0x20u, 0, 0, &RawDeviceTapeObject);
      if ( v3 >= 0 )
      {
        v3 = IoRegisterShutdownNotification(RawDeviceTapeObject);
        if ( v3 >= 0 )
        {
          RawDeviceDiskObject->Flags |= 0x10u;
          RawDeviceCdRomObject->Flags |= 0x10u;
          RawDeviceTapeObject->Flags |= 0x10u;
          DriverObject->MajorFunction[9] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[27] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[13] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[10] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[6] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[5] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[4] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[3] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[16] = (PDRIVER_DISPATCH)RawShutdown;
          IoRegisterFileSystem(RawDeviceDiskObject);
          IoRegisterFileSystem(RawDeviceCdRomObject);
          IoRegisterFileSystem(RawDeviceTapeObject);
          ObfReferenceObjectWithTag(RawDeviceDiskObject, 0x746C6644u);
          ObfReferenceObjectWithTag(RawDeviceCdRomObject, 0x746C6644u);
          ObfReferenceObjectWithTag(RawDeviceTapeObject, 0x746C6644u);
          RawGlobalLock.Owner = 0LL;
          RawGlobalLock.Contention = 0;
          RawGlobalLock.Event.Header.SignalState = 0;
          qword_140C37C48 = (__int64)&RawMountedQueue;
          RawMountedQueue = (__int64)&RawMountedQueue;
          qword_140C37BF8 = (__int64)&RawDismountedQueue;
          RawDismountedQueue = (__int64)&RawDismountedQueue;
          RawGlobalLock.Event.Header.WaitListHead.Blink = &RawGlobalLock.Event.Header.WaitListHead;
          RawGlobalLock.Event.Header.WaitListHead.Flink = &RawGlobalLock.Event.Header.WaitListHead;
          result = 0;
          RawGlobalLock.Count = 1;
          LOWORD(RawGlobalLock.Event.Header.Lock) = 1;
          RawGlobalLock.Event.Header.Size = 6;
          return result;
        }
        IoDeleteDevice(RawDeviceTapeObject);
      }
      IoDeleteDevice(RawDeviceCdRomObject);
    }
    IoDeleteDevice(RawDeviceDiskObject);
    return v3;
  }
  return result;
}
