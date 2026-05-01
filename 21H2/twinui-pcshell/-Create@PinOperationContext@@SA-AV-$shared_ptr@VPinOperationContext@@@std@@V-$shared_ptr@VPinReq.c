/*
 * XREFs of ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@AEBUhstring@winrt@@1@Z @ 0x180138490
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012ADA0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E410 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E410.c)
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x18013B3A8 (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800618B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x180087854 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x180090D3A (WINRT_WindowsGetStringRawBuffer.c)
 *     ??$OperationContextCreatedStandard@PEBGPEBGPEBGPEBGAEAW4PinOperationType@@@PinManagerTelemetry@@SAX$$QEAPEBG000AEAW4PinOperationType@@@Z @ 0x180131F6C (--$OperationContextCreatedStandard@PEBGPEBGPEBGPEBGAEAW4PinOperationType@@@PinManagerTelemetry@@.c)
 *     ??$make_shared@VPinOperationContext@@$$V@std@@YA?AV?$shared_ptr@VPinOperationContext@@@0@XZ @ 0x180134458 (--$make_shared@VPinOperationContext@@$$V@std@@YA-AV-$shared_ptr@VPinOperationContext@@@0@XZ.c)
 *     ??4?$shared_ptr@VPinRequestContext@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801365D4 (--4-$shared_ptr@VPinRequestContext@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetPinnablePidl@@YA?AV?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x18013A050 (-GetPinnablePidl@@YA-AV-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x18013FFD0 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x18014001C (-RequestorImagePath@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@X.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x18015F290 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 */

// Hidden C++ exception states: #wind=2
__int64 **__fastcall PinOperationContext::Create(__int64 **a1, _QWORD *a2, HSTRING *a3, HSTRING *a4)
{
  unsigned __int64 v8; // rbx
  const void **v9; // rax
  PCWSTR StringRawBuffer; // rcx
  __int64 v11; // rax
  PCWSTR v12; // rax
  unsigned __int16 **v13; // rax
  _QWORD *v14; // rcx
  unsigned __int8 v15; // al
  __int64 v16; // r11
  __int64 *v17; // rcx
  __int128 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 *PinnablePidl; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  int *v24; // rbx
  std::_Ref_count_base *v25; // rcx
  __int128 v27; // [rsp+30h] [rbp-39h] BYREF
  int v28; // [rsp+40h] [rbp-29h]
  PCWSTR v29; // [rsp+48h] [rbp-21h] BYREF
  __int64 **v30; // [rsp+50h] [rbp-19h] BYREF
  __int128 v31; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v32[16]; // [rsp+70h] [rbp+7h] BYREF
  _QWORD *v33; // [rsp+80h] [rbp+17h] BYREF

  v30 = a1;
  v33 = a2;
  *(_OWORD *)a1 = 0LL;
  std::make_shared<PinOperationContext,>((__int64)a1);
  v28 = 1;
  std::shared_ptr<PinRequestContext>::operator=(*a1, a2);
  v8 = -1LL;
  if ( *a3 )
  {
    StringRawBuffer = WINRT_WindowsGetStringRawBuffer(*a3, 0LL);
    *(_QWORD *)&v27 = StringRawBuffer;
    v11 = -1LL;
    do
      ++v11;
    while ( StringRawBuffer[v11] );
    *((_QWORD *)&v27 + 1) = v11;
    v9 = (const void **)&v27;
  }
  else
  {
    v9 = (const void **)PinRequestContext::RequestorBestAvailableAppId(*a2, &v31);
  }
  std::wstring::assign((char *)*a1 + 24, *v9, _mm_srli_si128(*(__m128i *)v9, 8).m128i_u64[0]);
  v12 = WINRT_WindowsGetStringRawBuffer(*a4, 0LL);
  do
    ++v8;
  while ( v12[v8] );
  std::wstring::assign((char *)*a1 + 56, v12, v8);
  v13 = (unsigned __int16 **)PinRequestContext::RequestorBestAvailableAppId(*a2, &v31);
  v14 = *a1 + 3;
  if ( (unsigned __int64)(*a1)[6] >= 8 )
    v14 = (_QWORD *)*v14;
  v15 = std::_Traits_equal<std::char_traits<unsigned short>>(
          (__int64)v14,
          (*a1)[5],
          *v13,
          _mm_srli_si128(*(__m128i *)v13, 8).m128i_i64[0]);
  *(_DWORD *)(v16 + 16) = v15 ^ 1;
  v17 = *a1;
  *(_QWORD *)&v18 = *a1 + 7;
  *((_QWORD *)&v18 + 1) = (*a1)[9];
  if ( (unsigned __int64)(*a1)[10] >= 8 )
    *(_QWORD *)&v18 = *(_QWORD *)v18;
  v27 = v18;
  v31 = v18;
  v19 = v17 + 3;
  v20 = v17[5];
  if ( v19[3] >= 8uLL )
    v19 = (_QWORD *)*v19;
  *(_QWORD *)&v27 = v19;
  *((_QWORD *)&v27 + 1) = v20;
  PinnablePidl = (__int64 *)GetPinnablePidl(&v29, &v27, &v31);
  v22 = (__int64)(*a1 + 11);
  v23 = *PinnablePidl;
  *PinnablePidl = 0LL;
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(v22, v23);
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(&v29, 0LL);
  v24 = (int *)(*a1 + 2);
  v29 = WINRT_WindowsGetStringRawBuffer(*a4, 0LL);
  *(_QWORD *)&v27 = WINRT_WindowsGetStringRawBuffer(*a3, 0LL);
  v33 = *(_QWORD **)PinRequestContext::RequestorBestAvailableAppId(*a2, &v31);
  v30 = *(__int64 ***)PinRequestContext::RequestorImagePath(*a2, v32);
  PinManagerTelemetry::OperationContextCreatedStandard<unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,enum PinOperationType &>(
    (__int64 *)&v30,
    (__int64 *)&v33,
    (__int64 *)&v27,
    (__int64 *)&v29,
    v24);
  v25 = (std::_Ref_count_base *)a2[1];
  if ( v25 )
    std::_Ref_count_base::_Decref(v25);
  return a1;
}
