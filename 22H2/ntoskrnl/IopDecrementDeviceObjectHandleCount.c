/*
 * XREFs of IopDecrementDeviceObjectHandleCount @ 0x140394E1C
 * Callers:
 *     PiIrpQueryRemoveDevice @ 0x14073463C (PiIrpQueryRemoveDevice.c)
 *     IopRemoveDevice @ 0x14074B778 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14074C7F0 (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     IopDecrementDeviceObjectRef @ 0x1402D4340 (IopDecrementDeviceObjectRef.c)
 */

__int64 __fastcall IopDecrementDeviceObjectHandleCount(ULONG_PTR a1)
{
  return IopDecrementDeviceObjectRef(a1, 0);
}
