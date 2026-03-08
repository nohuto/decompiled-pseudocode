/*
 * XREFs of DxgkGetDeviceState @ 0x1C0193CA0
 * Callers:
 *     ?VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037A8E0 (-VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkGetDeviceStateInternal @ 0x1C0193CE0 (DxgkGetDeviceStateInternal.c)
 */

__int64 __fastcall DxgkGetDeviceState(__int64 a1)
{
  __int64 v2; // rdx

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
    v2 = 1LL;
  else
    LOBYTE(v2) = 0;
  return DxgkGetDeviceStateInternal(a1, v2);
}
