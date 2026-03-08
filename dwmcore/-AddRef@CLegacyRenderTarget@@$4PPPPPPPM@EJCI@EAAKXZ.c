/*
 * XREFs of ?AddRef@CLegacyRenderTarget@@$4PPPPPPPM@EJCI@EAAKXZ @ 0x180117EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CLegacyRenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 18728));
}
