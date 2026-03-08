/*
 * XREFs of UsbhGetDeviceHandle @ 0x1C0038178
 * Callers:
 *     UsbhCreateDevice @ 0x1C0002364 (UsbhCreateDevice.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C002AAA8 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhGetHubDeviceInformation @ 0x1C002C4A8 (UsbhGetHubDeviceInformation.c)
 *     UsbhInitializeTtHub @ 0x1C002D268 (UsbhInitializeTtHub.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C0030570 (UsbhFdoHandleGetDumpDataIoctl.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhGetDeviceHandle(__int64 a1, __int64 a2)
{
  PDEVICE_OBJECT *v4; // rdi
  PIRP v5; // rax
  __int64 v6; // rcx
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+20h] BYREF

  v11 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v5 = IoBuildDeviceIoControlRequest(0x220437u, v4[151], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( !v5 )
    return 0LL;
  v6 = (__int64)&v5->Tail.Overlay.CurrentStackLocation[-1];
  if ( v5->Tail.Overlay.CurrentStackLocation == (_IO_STACK_LOCATION *)72 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  *(_QWORD *)(v6 + 16) = a2;
  *(_QWORD *)(v6 + 8) = &v11;
  Status = IofCallDriver(v4[151], v5);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  else
  {
    IoStatusBlock.Status = Status;
  }
  Log(a1, 4, 1734633554, Status, v11);
  if ( IoStatusBlock.Status >= 0 )
    return v11;
  else
    return 0LL;
}
