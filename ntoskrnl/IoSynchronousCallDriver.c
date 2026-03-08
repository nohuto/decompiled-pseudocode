/*
 * XREFs of IoSynchronousCallDriver @ 0x1402E9470
 * Callers:
 *     FsRtlGetFileExtents @ 0x14053A498 (FsRtlGetFileExtents.c)
 *     WmipGetFilePDO @ 0x14077437C (WmipGetFilePDO.c)
 *     IoForwardIrpSynchronously @ 0x140774470 (IoForwardIrpSynchronously.c)
 *     FsRtlPrepareMdlWriteEx @ 0x14079A910 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x14079AA30 (FsRtlMdlReadEx.c)
 *     PopAcquireCoolingInterface @ 0x14084BC94 (PopAcquireCoolingInterface.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14093D500 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14093D5A0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     PopBatteryInitialize @ 0x140992318 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x1409924A8 (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x140992530 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x1409926B4 (PopBatteryReadTag.c)
 * Callees:
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
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
