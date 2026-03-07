__int64 __fastcall DpiGetDeviceInstanceId(PDEVICE_OBJECT DeviceObject, ULONG_PTR *a2)
{
  PIRP v4; // rax
  IRP *v5; // rdx
  NTSTATUS Status; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( DeviceObject && a2 )
  {
    *a2 = 0LL;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v4 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    v5 = v4;
    if ( !v4 )
    {
      Status = -1073741670;
      WdLogSingleEntry1(6LL, -1073741670LL);
      return (unsigned int)Status;
    }
    v4->IoStatus.Status = -1073741637;
    CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MinorFunction = 19;
    CurrentStackLocation[-1].Parameters.Read.Length = 3;
    Status = IofCallDriver(DeviceObject, v5);
    if ( Status == 259 )
    {
      v9 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v9;
      if ( v9 )
      {
        v10 = v9;
LABEL_9:
        WdLogSingleEntry1(2LL, v10);
        return (unsigned int)Status;
      }
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      *a2 = IoStatusBlock.Information;
      return (unsigned int)Status;
    }
    v10 = Status;
    goto LABEL_9;
  }
  return 3221225485LL;
}
