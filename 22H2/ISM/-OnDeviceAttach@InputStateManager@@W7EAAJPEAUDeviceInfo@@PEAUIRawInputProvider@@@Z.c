/*
 * XREFs of ?OnDeviceAttach@InputStateManager@@W7EAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x18004B510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputStateManager::OnDeviceAttach(__int64 a1, struct DeviceInfo *a2, struct IRawInputProvider *a3)
{
  return InputStateManager::OnDeviceAttach((RTL_SRWLOCK *)(a1 - 8), a2, a3);
}
