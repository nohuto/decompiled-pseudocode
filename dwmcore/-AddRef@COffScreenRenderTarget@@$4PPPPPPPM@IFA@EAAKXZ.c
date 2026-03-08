/*
 * XREFs of ?AddRef@COffScreenRenderTarget@@$4PPPPPPPM@IFA@EAAKXZ @ 0x180119650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall COffScreenRenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 2128));
}
