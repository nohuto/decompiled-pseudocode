/*
 * XREFs of PiSwDeviceDereference @ 0x14081CB44
 * Callers:
 *     PiSwDispatch @ 0x14079CB30 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x14081B5CC (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationRemove @ 0x1409670B8 (PiSwBusRelationRemove.c)
 *     PiSwCloseDevice @ 0x140967170 (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x140967780 (PiSwProcessRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x140967CA4 (PiSwUnassociateDeviceObject.c)
 * Callees:
 *     PiSwDeviceFree @ 0x140967290 (PiSwDeviceFree.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwDeviceDereference(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree();
    ExFreePoolWithTag(P, 0x57706E50u);
  }
}
