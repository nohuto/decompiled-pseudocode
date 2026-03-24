/*
 * XREFs of ?AddRef@CLocalAppRenderTarget@@$4PPPPPPPM@LA@EAAKXZ @ 0x1800F52A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CLocalAppRenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 176));
}
