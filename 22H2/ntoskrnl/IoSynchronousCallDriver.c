/*
 * XREFs of IoSynchronousCallDriver @ 0x140318390
 * Callers:
 *     FsRtlGetFileExtents @ 0x1404EEC80 (FsRtlGetFileExtents.c)
 *     IoForwardIrpSynchronously @ 0x140689B00 (IoForwardIrpSynchronously.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406A2E40 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1406A2F60 (FsRtlMdlReadEx.c)
 *     WmipGetFilePDO @ 0x14078D304 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x14079AE50 (PopAcquireCoolingInterface.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088D990 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088DA30 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     PopBatteryInitialize @ 0x1408ED230 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x1408ED3C0 (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x1408ED448 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x1408ED5CC (PopBatteryReadTag.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1402D2170 (IofCallDriver.c)
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
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)SmKmGenericCompletion;
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
