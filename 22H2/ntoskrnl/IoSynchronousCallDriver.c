/*
 * XREFs of IoSynchronousCallDriver @ 0x140354C60
 * Callers:
 *     FsRtlGetFileExtents @ 0x14053C938 (FsRtlGetFileExtents.c)
 *     WmipGetFilePDO @ 0x1407C3F1C (WmipGetFilePDO.c)
 *     IoForwardIrpSynchronously @ 0x1407C4010 (IoForwardIrpSynchronously.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1407E9990 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1407E9AB0 (FsRtlMdlReadEx.c)
 *     PopAcquireCoolingInterface @ 0x14084F044 (PopAcquireCoolingInterface.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140940520 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1409405C0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     PopBatteryInitialize @ 0x1409953C8 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x140995558 (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x1409955E0 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x140995764 (PopBatteryReadTag.c)
 * Callees:
 *     IofCallDriver @ 0x14022EF10 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall IoSynchronousCallDriver(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  _DWORD Object[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v6[4]; // [rsp+38h] [rbp-20h] BYREF

  Object[1] = 0;
  Object[0] = 393216;
  v6[1] = v6;
  v6[0] = v6;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&CmpCompleteFlushAndPurgeIrp;
  CurrentStackLocation[-1].Context = Object;
  CurrentStackLocation[-1].Control = -32;
  result = IofCallDriver(a1, a2);
  if ( result == 259 )
  {
    KeWaitForSingleObject(Object, Suspended, 0, 0, 0LL);
    return a2->IoStatus.Status;
  }
  return result;
}
