/*
 * XREFs of PnpMapDeviceObjectToDeviceInstance @ 0x1407E22C8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140795C58 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140814744 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x14096DB94 (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     RtlInsertElementGenericTableAvl @ 0x14031EA50 (RtlInsertElementGenericTableAvl.c)
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
