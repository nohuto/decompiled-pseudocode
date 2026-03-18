/*
 * XREFs of ?AddRef@CBitmapRealization@@$4PPPPPPPM@BFI@EAAKXZ @ 0x180121AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmapRealization::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 344));
}
