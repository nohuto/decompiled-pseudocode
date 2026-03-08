/*
 * XREFs of DpiSetDeviceUsageType @ 0x1C0396374
 * Callers:
 *     DpiAddDevice @ 0x1C01F38A0 (DpiAddDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiSetDeviceUsageType(PDEVICE_OBJECT DeviceObject, ULONG a2)
{
  PIRP v4; // rax
  IRP *v5; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v4 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  v5 = v4;
  if ( v4 )
  {
    v4->IoStatus.Status = -1073741637;
    CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MinorFunction = 22;
    CurrentStackLocation[-1].Parameters.SetLock.Lock = 1;
    CurrentStackLocation[-1].Parameters.Create.Options = a2;
    LODWORD(DeviceObject) = IofCallDriver(DeviceObject, v5);
    if ( (_DWORD)DeviceObject == 259 )
    {
      v7 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      DeviceObject = (PDEVICE_OBJECT)v7;
      if ( v7 )
      {
        v8 = 2LL;
      }
      else
      {
        DeviceObject = (PDEVICE_OBJECT)IoStatusBlock.Status;
        if ( IoStatusBlock.Status >= 0 )
          return (unsigned int)DeviceObject;
        v8 = 3LL;
      }
      WdLogSingleEntry1(v8, DeviceObject);
    }
  }
  else
  {
    LODWORD(DeviceObject) = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
  }
  return (unsigned int)DeviceObject;
}
