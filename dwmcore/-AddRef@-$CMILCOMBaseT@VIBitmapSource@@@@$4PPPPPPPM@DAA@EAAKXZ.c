/*
 * XREFs of ?AddRef@?$CMILCOMBaseT@VIBitmapSource@@@@$4PPPPPPPM@DAA@EAAKXZ @ 0x18011FE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILCOMBaseT<IBitmapSource>::AddRef(__int64 a1)
{
  return CMILCOMBaseT<IDeviceResource>::AddRef(a1 - *(int *)(a1 - 4) - 768);
}
