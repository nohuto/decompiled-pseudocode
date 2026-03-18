/*
 * XREFs of ?AddRef@?$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@FI@EAAKXZ @ 0x18011EA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILCOMBaseT<IDeviceResource>::AddRef(__int64 a1)
{
  return CMILCOMBaseT<IDeviceResource>::AddRef(a1 - *(int *)(a1 - 4) - 88);
}
