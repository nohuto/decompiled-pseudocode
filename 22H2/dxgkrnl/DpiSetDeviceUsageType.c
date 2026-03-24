/*
 * XREFs of DpiSetDeviceUsageType @ 0x1C02C8904
 * Callers:
 *     DpiAddDevice @ 0x1C018BAE0 (DpiAddDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiSetDeviceUsageType(PDEVICE_OBJECT DeviceObject, ULONG a2)
{
  PIRP v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  IRP *v8; // rdx
  __int64 v9; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v4 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  v8 = v4;
  if ( v4 )
  {
    v4->IoStatus.Status = -1073741637;
    CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MinorFunction = 22;
    CurrentStackLocation[-1].Parameters.SetLock.Lock = 1;
    CurrentStackLocation[-1].Parameters.Create.Options = a2;
    LODWORD(DeviceObject) = IofCallDriver(DeviceObject, v8);
    if ( (_DWORD)DeviceObject == 259 )
    {
      v11 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      DeviceObject = (PDEVICE_OBJECT)v11;
      if ( v11 )
      {
        v15 = WdLogNewEntry5_WdError(v13, v12);
        *(_QWORD *)(v15 + 24) = DeviceObject;
        WdLogEvent5_WdError(v15);
      }
      else
      {
        DeviceObject = (PDEVICE_OBJECT)IoStatusBlock.Status;
        if ( IoStatusBlock.Status < 0 )
        {
          v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
          *(_QWORD *)(v16 + 24) = DeviceObject;
          WdLogEvent5_WdWarning(v16);
        }
      }
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdLowResource(v5, 0LL, v6, v7);
    LODWORD(DeviceObject) = -1073741670;
    *(_QWORD *)(v9 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v9);
  }
  return (unsigned int)DeviceObject;
}
