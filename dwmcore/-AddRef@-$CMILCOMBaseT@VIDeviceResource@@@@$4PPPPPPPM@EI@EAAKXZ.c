/*
 * XREFs of ?AddRef@?$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@EI@EAAKXZ @ 0x18011A910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILCOMBaseT<IDeviceResource>::AddRef(__int64 a1)
{
  return CMILCOMBaseT<IDeviceResource>::AddRef(a1 - *(int *)(a1 - 4) - 72);
}
