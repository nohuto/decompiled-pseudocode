/*
 * XREFs of PiSwDeviceDereference @ 0x140807FA4
 * Callers:
 *     PiSwDispatch @ 0x140785720 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x140806A2C (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationRemove @ 0x140964098 (PiSwBusRelationRemove.c)
 *     PiSwCloseDevice @ 0x140964150 (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x140964760 (PiSwProcessRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x140964C84 (PiSwUnassociateDeviceObject.c)
 * Callees:
 *     PiSwDeviceFree @ 0x140964270 (PiSwDeviceFree.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwDeviceDereference(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree();
    ExFreePoolWithTag(P, 0x57706E50u);
  }
}
