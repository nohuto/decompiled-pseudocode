/*
 * XREFs of ?AddRef@COffScreenRenderTarget@@$4PPPPPPPM@HII@EAAKXZ @ 0x18011A350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall COffScreenRenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 1928));
}
