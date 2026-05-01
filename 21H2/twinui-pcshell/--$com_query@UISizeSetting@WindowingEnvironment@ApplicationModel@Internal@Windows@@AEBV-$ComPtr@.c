/*
 * XREFs of ??$com_query@UISizeSetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEBV?$ComPtr@UISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$com_ptr_t@UISizeSetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@0@AEBV?$ComPtr@UISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1800CA760
 * Callers:
 *     ?AddWindowingEnvironmentSettings@WindowingEnvironmentSettings@@UEAAXPEAU?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@AEBV?$function@$$A6A?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@I@Z@std@@@Z @ 0x1803222B0 (-AddWindowingEnvironmentSettings@WindowingEnvironmentSettings@@UEAAXPEAU-$IVectorView@PEAUISetti.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_query<Windows::Internal::ApplicationModel::WindowingEnvironment::ISizeSetting,Microsoft::WRL::ComPtr<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting> const &>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a2)(*a2, &GUID_43d15448_261e_4891_b89b_847e918b739b, a1);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5495LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  return a1;
}
