/*
 * XREFs of ?GetTrustLevel@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800585F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::UI::Composition::Effects::GaussianBlurEffect::GetTrustLevel(__int64 a1, float *a2)
{
  return CThumbnailAnimatedVisual::GetBeginDepth((CThumbnailAnimatedVisual *)(a1 - 16), a2);
}
