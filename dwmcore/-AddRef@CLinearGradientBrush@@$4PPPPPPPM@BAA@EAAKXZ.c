/*
 * XREFs of ?AddRef@CLinearGradientBrush@@$4PPPPPPPM@BAA@EAAKXZ @ 0x180119E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CLinearGradientBrush::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 256));
}
