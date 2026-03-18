/*
 * XREFs of IopLoadFileSystemDriver @ 0x140875D00
 * Callers:
 *     IopMountVolume @ 0x140701598 (IopMountVolume.c)
 * Callees:
 *     IofCallDriver @ 0x14022EF10 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x140251430 (IoBuildDeviceIoControlRequest.c)
 *     KeInitializeEvent @ 0x1402AF840 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x1402AFD80 (IopDecrementDeviceObjectRef.c)
 */

__int64 __fastcall IopLoadFileSystemDriver(struct _DEVICE_OBJECT *BugCheckParameter2)
{
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  struct _DEVICE_OBJECT *v3; // rbx
  PIRP v4; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  AttachedDevice = BugCheckParameter2->AttachedDevice;
  v3 = BugCheckParameter2;
  while ( AttachedDevice )
  {
    v3 = AttachedDevice;
    AttachedDevice = AttachedDevice->AttachedDevice;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v4 = IoBuildDeviceIoControlRequest(0xEu, v3, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  if ( v4 )
  {
    *(_WORD *)&v4->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 781;
    if ( IofCallDriver(v3, v4) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  return IopDecrementDeviceObjectRef((ULONG_PTR)BugCheckParameter2, 1);
}
