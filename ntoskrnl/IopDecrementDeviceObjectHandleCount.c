/*
 * XREFs of IopDecrementDeviceObjectHandleCount @ 0x1403D162C
 * Callers:
 *     IopRemoveDevice @ 0x140866E38 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14087E214 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiIrpQueryRemoveDevice @ 0x14096A1AC (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     IopDecrementDeviceObjectRef @ 0x14030F5C0 (IopDecrementDeviceObjectRef.c)
 */

__int64 __fastcall IopDecrementDeviceObjectHandleCount(ULONG_PTR a1)
{
  return IopDecrementDeviceObjectRef(a1, 0, 0);
}
