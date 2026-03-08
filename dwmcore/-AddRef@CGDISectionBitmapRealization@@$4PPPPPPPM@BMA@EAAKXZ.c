/*
 * XREFs of ?AddRef@CGDISectionBitmapRealization@@$4PPPPPPPM@BMA@EAAKXZ @ 0x18011D950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CGDISectionBitmapRealization::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 448));
}
