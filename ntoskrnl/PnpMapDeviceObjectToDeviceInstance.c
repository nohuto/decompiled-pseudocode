/*
 * XREFs of PnpMapDeviceObjectToDeviceInstance @ 0x140792BF0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x14081CE14 (IopInitializeDeviceInstanceKey.c)
 *     PiInitializeDevice @ 0x14096AB74 (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1402451A0 (RtlInsertElementGenericTableAvl.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 */

__int64 __fastcall PnpMapDeviceObjectToDeviceInstance(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = a1;
  Buffer[1] = a2;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  v2 = RtlInsertElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer, 0x10u, 0LL) == 0LL ? 0xC0000001 : 0;
  ExReleaseFastMutex(&PnpDeviceReferenceTableLock);
  return v2;
}
