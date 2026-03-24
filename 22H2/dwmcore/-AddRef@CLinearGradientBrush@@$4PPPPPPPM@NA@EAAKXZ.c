/*
 * XREFs of ?AddRef@CLinearGradientBrush@@$4PPPPPPPM@NA@EAAKXZ @ 0x1800F5FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CLinearGradientBrush::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 208));
}
