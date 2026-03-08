/*
 * XREFs of ?AddRef@CNineGridBrush@@$4PPPPPPPM@KI@EAAKXZ @ 0x180119F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CNineGridBrush::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 168));
}
