/*
 * XREFs of ?InternalRelease@?$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x1800416C8
 * Callers:
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x18004331C (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@2@@Z @ 0x1800436E8 (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@V12345@$$V@Details@WR.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003E150 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@E.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Microsoft::UI::Composition::Effects::GaussianBlurEffect>::InternalRelease(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::Release(v1);
  }
  return result;
}
