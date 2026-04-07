/*
 * XREFs of ?Release@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAKXZ @ 0x18003E090
 * Callers:
 *     ?Release@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@W7EAAKXZ @ 0x1800583B0 (-Release@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@W7EAAKXZ.c)
 *     ?Release@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WBA@EAAKXZ @ 0x1800583C0 (-Release@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WBA@EAAKXZ.c)
 *     ?Release@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WBI@EAAKXZ @ 0x1800583D0 (-Release@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WBI@EAAKXZ.c)
 *     ?Release@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WCA@EAAKXZ @ 0x1800583E0 (-Release@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Microsoft::UI::Composition::Effects::GaussianBlurEffect::Release(
        Microsoft::UI::Composition::Effects::GaussianBlurEffect *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::Release(this);
}
