/*
 * XREFs of ??0GaussianBlurEffect@Effects@Composition@UI@Microsoft@@QEAA@XZ @ 0x1800436DC
 * Callers:
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@2@@Z @ 0x180043638 (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@V12345@$$V@Details@WR.c)
 * Callees:
 *     ??0?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@Effects@Composition@UI@Microsoft@@QEAA@XZ @ 0x180043748 (--0-$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@Effects@Composition@UI@M.c)
 */

Microsoft::UI::Composition::Effects::GaussianBlurEffect *__fastcall Microsoft::UI::Composition::Effects::GaussianBlurEffect::GaussianBlurEffect(
        Microsoft::UI::Composition::Effects::GaussianBlurEffect *this)
{
  Microsoft::UI::Composition::Effects::GaussianBlurEffect *result; // rax

  Microsoft::UI::Composition::Effects::EffectBase<Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::EffectBase<Microsoft::UI::Composition::Effects::IGaussianBlurEffect>();
  *((_DWORD *)this + 18) = 1077936128;
  *(_QWORD *)this = &Microsoft::UI::Composition::Effects::GaussianBlurEffect::`vftable';
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 1) = &Microsoft::UI::Composition::Effects::GaussianBlurEffect::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Microsoft::UI::Composition::Effects::GaussianBlurEffect::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>'};
  *((_QWORD *)this + 3) = &Microsoft::UI::Composition::Effects::GaussianBlurEffect::`vftable'{for `Windows::Graphics::Effects::IGraphicsEffectD2D1Interop'};
  *((_QWORD *)this + 4) = &Microsoft::UI::Composition::Effects::GaussianBlurEffect::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>'};
  result = this;
  *((_DWORD *)this + 19) = 1;
  return result;
}
