/*
 * XREFs of ?AddRef@CProjectedShadow@@$4PPPPPPPM@BJI@EAAKXZ @ 0x180117F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CProjectedShadow::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 408));
}
