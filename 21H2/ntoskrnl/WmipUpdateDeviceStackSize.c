/*
 * XREFs of WmipUpdateDeviceStackSize @ 0x14075524C
 * Callers:
 *     WmipForwardWmiIrp @ 0x1406396EC (WmipForwardWmiIrp.c)
 *     WmipRegisterDevice @ 0x140755008 (WmipRegisterDevice.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402EE5A0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 */

LONG __fastcall WmipUpdateDeviceStackSize(CCHAR a1)
{
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( WmipServiceDeviceObject->StackSize < a1 )
    WmipServiceDeviceObject->StackSize = a1;
  return KeReleaseMutex(&WmipSMMutex, 0);
}
