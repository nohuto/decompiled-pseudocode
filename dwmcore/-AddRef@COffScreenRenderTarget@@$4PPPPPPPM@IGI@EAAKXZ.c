/*
 * XREFs of ?AddRef@COffScreenRenderTarget@@$4PPPPPPPM@IGI@EAAKXZ @ 0x180117EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall COffScreenRenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 2152));
}
