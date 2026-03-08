/*
 * XREFs of ?Release@?$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@MI@EAAKXZ @ 0x18011FF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILCOMBaseT<IDeviceResource>::Release(__int64 a1)
{
  return CMILCOMBaseT<IDeviceResource>::Release(a1 - *(int *)(a1 - 4) - 200);
}
