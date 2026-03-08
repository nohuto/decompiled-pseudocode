/*
 * XREFs of WmipUpdateDeviceStackSize @ 0x140869A6C
 * Callers:
 *     WmipForwardWmiIrp @ 0x14069CE70 (WmipForwardWmiIrp.c)
 *     WmipRegisterDevice @ 0x140869828 (WmipRegisterDevice.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

LONG __fastcall WmipUpdateDeviceStackSize(CCHAR a1)
{
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( WmipServiceDeviceObject->StackSize < a1 )
    WmipServiceDeviceObject->StackSize = a1;
  return KeReleaseMutex(&WmipSMMutex, 0);
}
