/*
 * XREFs of ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@PEFBU_ITEMIDLIST@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x18013858C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012AC30 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E2A0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E2A0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800618B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??$make_shared@VPinOperationContext@@$$V@std@@YA?AV?$shared_ptr@VPinOperationContext@@@0@XZ @ 0x1801342E8 (--$make_shared@VPinOperationContext@@$$V@std@@YA-AV-$shared_ptr@VPinOperationContext@@@0@XZ.c)
 *     ??4?$shared_ptr@VPinRequestContext@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180136464 (--4-$shared_ptr@VPinRequestContext@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18013DAEC (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x18013FE60 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x18013FEAC (-RequestorImagePath@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@X.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x18015F120 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3@Z @ 0x180256590 (--$Write@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 **__fastcall PinOperationContext::Create(__int64 **a1, _QWORD *a2, const ITEMIDLIST *a3, const void **a4)
{
  __int64 *v8; // rbx
  LPITEMIDLIST v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  const struct _tlgProvider_t *v12; // rax
  std::_Ref_count_base *v13; // rcx
  __int64 v15; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v16[16]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v17[16]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v18; // [rsp+60h] [rbp-38h] BYREF

  v15 = (__int64)a1;
  v18 = (__int64)a2;
  *(_OWORD *)a1 = 0LL;
  std::make_shared<PinOperationContext,>((__int64)a1);
  std::shared_ptr<PinRequestContext>::operator=(*a1, a2);
  *((_DWORD *)*a1 + 4) = 2;
  v8 = *a1;
  v9 = ILClone(a3);
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(v8 + 11, v9);
  std::wstring::assign((char *)*a1 + 24, *a4, _mm_srli_si128(*(__m128i *)a4, 8).m128i_u64[0]);
  v10 = *(_QWORD *)PinRequestContext::RequestorBestAvailableAppId(*a2, v16);
  v11 = *(_QWORD *)PinRequestContext::RequestorImagePath(*a2, v17);
  v12 = PinManagerTelemetry::Provider();
  if ( *(_DWORD *)v12 > 5u )
  {
    v18 = v10;
    v15 = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      (int)v12,
      (int)&dword_1805A0D55,
      0,
      (__int64)&v15,
      (__int64)&v18);
  }
  v13 = (std::_Ref_count_base *)a2[1];
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  return a1;
}
