/*
 * XREFs of ??_EGaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAPEAXI@Z @ 0x180040770
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F244 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@Effects@Composition@UI@Microsoft@@UEAA@XZ @ 0x1800407C4 (--1-$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@Effects@Composition@UI@M.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

Microsoft::UI::Composition::Effects::GaussianBlurEffect *__fastcall Microsoft::UI::Composition::Effects::GaussianBlurEffect::`vector deleting destructor'(
        Microsoft::UI::Composition::Effects::GaussianBlurEffect *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 8);
  Microsoft::UI::Composition::Effects::EffectBase<Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::~EffectBase<Microsoft::UI::Composition::Effects::IGaussianBlurEffect>(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, Microsoft::UI::Composition::Effects::GaussianBlurEffect *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
