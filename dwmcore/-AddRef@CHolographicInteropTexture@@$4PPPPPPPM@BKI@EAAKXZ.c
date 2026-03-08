/*
 * XREFs of ?AddRef@CHolographicInteropTexture@@$4PPPPPPPM@BKI@EAAKXZ @ 0x18011D6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicInteropTexture::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 424));
}
