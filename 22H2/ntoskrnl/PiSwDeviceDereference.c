/*
 * XREFs of PiSwDeviceDereference @ 0x140773A00
 * Callers:
 *     PiSwProcessRemove @ 0x140732F28 (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x140732FE4 (PiSwBusRelationRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x14073307C (PiSwUnassociateDeviceObject.c)
 *     PiSwCloseDevice @ 0x140734D40 (PiSwCloseDevice.c)
 *     PiSwIrpStartCreateWorker @ 0x14074CF08 (PiSwIrpStartCreateWorker.c)
 *     PiSwDispatch @ 0x14074DB30 (PiSwDispatch.c)
 * Callees:
 *     PiSwDeviceFree @ 0x1407342E0 (PiSwDeviceFree.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwDeviceDereference(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree((__int64)P);
    ExFreePoolWithTag(P, 0x57706E50u);
  }
}
