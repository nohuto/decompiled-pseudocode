/*
 * XREFs of ?AddRef@CDDisplayRenderTarget@@$4PPPPPPPM@EIPI@EAAKXZ @ 0x180117DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDDisplayRenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 18680));
}
