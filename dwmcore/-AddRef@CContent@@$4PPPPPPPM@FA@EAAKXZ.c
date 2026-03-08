/*
 * XREFs of ?AddRef@CContent@@$4PPPPPPPM@FA@EAAKXZ @ 0x1801178F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CContent::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 80));
}
