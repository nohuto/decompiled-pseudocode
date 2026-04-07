/*
 * XREFs of ?GetSource@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJIPEAPEAUIGraphicsEffectSource@2Graphics@Windows@@@Z @ 0x180041900
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x1800416F0 (-InternalAddRef@-$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@IEBAXX.c)
 */

__int64 __fastcall Microsoft::UI::Composition::Effects::GaussianBlurEffect::GetSource(
        Microsoft::UI::Composition::Effects::GaussianBlurEffect *this,
        int a2,
        struct Windows::Graphics::Effects::IGraphicsEffectSource **a3)
{
  unsigned int v3; // edi
  struct Windows::Graphics::Effects::IGraphicsEffectSource **v5; // rbx

  v3 = 0;
  if ( a2 )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v5 = (struct Windows::Graphics::Effects::IGraphicsEffectSource **)((char *)this + 40);
    Microsoft::WRL::ComPtr<Windows::Graphics::Effects::IGraphicsEffectSource>::InternalAddRef((__int64 *)this + 5);
    *a3 = *v5;
  }
  return v3;
}
