/*
 * XREFs of ?AddRef@CColorBrush@@$4PPPPPPPM@HA@EAAKXZ @ 0x1801178D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CColorBrush::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 112));
}
