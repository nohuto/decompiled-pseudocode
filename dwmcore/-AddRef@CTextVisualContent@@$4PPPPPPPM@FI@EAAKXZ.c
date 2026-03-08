/*
 * XREFs of ?AddRef@CTextVisualContent@@$4PPPPPPPM@FI@EAAKXZ @ 0x180117D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CTextVisualContent::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 88));
}
