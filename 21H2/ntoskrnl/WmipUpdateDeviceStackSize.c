/*
 * XREFs of WmipUpdateDeviceStackSize @ 0x14075540C
 * Callers:
 *     WmipForwardWmiIrp @ 0x14062E4FC (WmipForwardWmiIrp.c)
 *     WmipRegisterDevice @ 0x1407551C8 (WmipRegisterDevice.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 */

LONG __fastcall WmipUpdateDeviceStackSize(CCHAR a1)
{
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( WmipServiceDeviceObject->StackSize < a1 )
    WmipServiceDeviceObject->StackSize = a1;
  return KeReleaseMutex(&WmipSMMutex, 0);
}
