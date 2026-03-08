/*
 * XREFs of ?AddRef@CRadialGradientBrush@@$4PPPPPPPM@BBA@EAAKXZ @ 0x180117F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRadialGradientBrush::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 272));
}
