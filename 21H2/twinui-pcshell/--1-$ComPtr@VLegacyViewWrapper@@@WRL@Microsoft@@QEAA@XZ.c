/*
 * XREFs of ??1?$ComPtr@VLegacyViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x18031027C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_LegacyViewWrapper_IViewWrapperInternal_unsigned_int_IUnknown___unsigned_short_const___unsigned_short_const___enum_LegacyViewWrapper::ViewLifetimePolicy_ViewEventDispatcher____::_1_::dtor$1 @ 0x18030DB35 (_Microsoft--WRL--Details--MakeAndInitialize_LegacyViewWrapper_IViewWrapperInternal__ea_18030DB35.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_LegacyViewWrapper_IViewWrapperInternal_unsigned_int_std::nullptr_t_unsigned_short_const___unsigned_short_const_(&)[53]_enum_LegacyViewWrapper::ViewLifetimePolicy_ViewEventDispatcher____::_1_::dtor$1 @ 0x18030DC92 (_Microsoft--WRL--Details--MakeAndInitialize_LegacyViewWrapper_IViewWrapperInternal__ea_18030DC92.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803157A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VView_ea_1803157A0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<LegacyViewWrapper>::~ComPtr<LegacyViewWrapper>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,ILegacyViewWrapper>::Release(result);
  }
  return result;
}
