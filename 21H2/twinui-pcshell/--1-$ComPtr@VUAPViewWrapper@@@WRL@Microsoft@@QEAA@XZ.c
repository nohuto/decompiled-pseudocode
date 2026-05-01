/*
 * XREFs of ??1?$ComPtr@VUAPViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1803102A0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_unsigned_int_IUnknown___unsigned_short_const___unsigned_short_const_(&)[53]_ViewEventDispatcher____::_1_::dtor$1 @ 0x18030DDDA (_Microsoft--WRL--Details--MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_uns_ea_18030DDDA.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_unsigned_int_IUnknown___unsigned_short_const___unsigned_short_const___ViewEventDispatcher____::_1_::dtor$1 @ 0x18030DF25 (_Microsoft--WRL--Details--MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_uns_ea_18030DF25.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180315830 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VView_ea_180315830.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<UAPViewWrapper>::~ComPtr<UAPViewWrapper>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release(result);
  }
  return result;
}
