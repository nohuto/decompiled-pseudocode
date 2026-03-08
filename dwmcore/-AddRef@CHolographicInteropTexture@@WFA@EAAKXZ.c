/*
 * XREFs of ?AddRef@CHolographicInteropTexture@@WFA@EAAKXZ @ 0x180117F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicInteropTexture::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 80));
}
