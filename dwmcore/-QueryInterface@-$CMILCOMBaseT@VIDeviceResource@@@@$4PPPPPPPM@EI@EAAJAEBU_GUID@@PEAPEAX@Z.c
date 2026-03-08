/*
 * XREFs of ?QueryInterface@?$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@EI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011A930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILCOMBaseT<IDeviceResource>::QueryInterface(__int64 a1)
{
  return CMILCOMBaseT<IDDASwapChain>::QueryInterface(a1 - *(int *)(a1 - 4) - 72);
}
