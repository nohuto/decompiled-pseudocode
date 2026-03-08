/*
 * XREFs of ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0022AD8
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001FAC0 (DrvUpdateGraphicsDeviceList.c)
 *     DrvEnumDisplayDevices @ 0x1C0071810 (DrvEnumDisplayDevices.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00D8708 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvForceChildDeviceReenumeration(PDEVICE_OBJECT DeviceObject, struct _DEVICE_RELATIONS **a2)
{
  PIRP v4; // rax
  IRP *v5; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v4 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  v5 = v4;
  if ( !v4 )
    return 3221225626LL;
  IoStatusBlock.Status = -1073741637;
  v4->IoStatus.Status = -1073741637;
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1819;
  CurrentStackLocation[-1].Parameters.Read.Length = 4;
  Status = IofCallDriver(DeviceObject, v5);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
    *a2 = (struct _DEVICE_RELATIONS *)IoStatusBlock.Information;
  return (unsigned int)Status;
}
