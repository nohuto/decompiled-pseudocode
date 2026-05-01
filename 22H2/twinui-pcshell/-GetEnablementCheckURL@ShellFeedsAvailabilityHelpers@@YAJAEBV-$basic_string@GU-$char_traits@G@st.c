/*
 * XREFs of ?GetEnablementCheckURL@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV23@@Z @ 0x180109BC4
 * Callers:
 *     ?CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z @ 0x180108D88 (-CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800618B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008EFF8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x180090D1A (WINRT_WindowsGetStringRawBuffer.c)
 *     ?GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z @ 0x1800B55E8 (-GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z.c)
 *     ??$?0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z @ 0x180108590 (--$-0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x180108984 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 *     ??$call@AEAV_lambda_dbc7052402afa226f98685aad6dda557_@@@?$factory_cache_entry@UGlobalizationPreferences@UserProfile@System@Windows@winrt@@UIGlobalizationPreferencesStatics@2345@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_dbc7052402afa226f98685aad6dda557_@@@Z @ 0x180108B3C (--$call@AEAV_lambda_dbc7052402afa226f98685aad6dda557_@@@-$factory_cache_entry@UGlobalizationPref.c)
 *     ?CreateGUID@ShellFeedsAvailabilityHelpers@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180108FAC (-CreateGUID@ShellFeedsAvailabilityHelpers@@YAJAEAV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?CreateMUID@ShellFeedsAvailabilityHelpers@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801090B4 (-CreateMUID@ShellFeedsAvailabilityHelpers@@YAJAEAV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds_RemoveUserQueryParam@@@details@wil@@QEAA_NXZ @ 0x180116684 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds_RemoveUserQueryPa.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1802497F4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$?0PEAGX@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x180267880 (--$-0PEAGX@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$allocato.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18028EC80 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1803EF8EC (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 */

// Hidden C++ exception states: #wind=65
__int64 __fastcall ShellFeedsAvailabilityHelpers::GetEnablementCheckURL(_QWORD *a1, __int64 a2)
{
  _WORD *v4; // rax
  unsigned int v5; // esi
  LSTATUS ValueW; // eax
  __int64 v7; // rcx
  bool v8; // sf
  int v9; // eax
  __int64 v10; // r14
  HSTRING v11; // rbx
  __int64 (__fastcall *v12)(HSTRING, PVOID, __int64 *); // rdi
  unsigned int v13; // r8d
  HSTRING_HEADER *v14; // rax
  int v15; // eax
  __int64 v16; // rbx
  int (__fastcall *v17)(__int64, HSTRING *); // rdi
  const WCHAR *v18; // rax
  const WCHAR *StringRawBuffer; // rax
  unsigned int *v20; // r8
  _WORD *v21; // rax
  HSTRING string; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING v24; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v25[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD Src[4]; // [rsp+68h] [rbp-98h] BYREF
  char v29[16]; // [rsp+88h] [rbp-78h] BYREF
  __m128i v30; // [rsp+98h] [rbp-68h]
  char v31[16]; // [rsp+A8h] [rbp-58h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-48h]
  _QWORD v33[4]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD hstringHeader[2]; // [rsp+E8h] [rbp-18h] BYREF
  __m128i hstringHeader_16; // [rsp+F8h] [rbp-8h]
  _WORD v36[7]; // [rsp+112h] [rbp+12h] BYREF
  WCHAR sourceString[1024]; // [rsp+120h] [rbp+20h] BYREF

  v4 = (_WORD *)a2;
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    v4 = *(_WORD **)a2;
  v5 = 0;
  *(_QWORD *)(a2 + 16) = 0LL;
  *v4 = 0;
  std::wstring::wstring((__int64)Src, L"https://api.msn.com/v1/News/Feed/Windows?");
  pcbData = 2048;
  std::wstring::wstring((__int64)v33, &szAgent);
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Feeds\\FeedRepositoryState",
             L"FeedsNextRefreshFeedUrl",
             2u,
             0LL,
             sourceString,
             &pcbData);
  v8 = ValueW < 0;
  if ( ValueW > 0 )
    v8 = 1;
  if ( v8 )
  {
    winrt::impl::factory_cache_entry<winrt::Windows::System::UserProfile::GlobalizationPreferences,winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::call<_lambda_dbc7052402afa226f98685aad6dda557_ &>(
      v7,
      &v24);
    StringRawBuffer = WINRT_WindowsGetStringRawBuffer(v24, 0LL);
    v10 = -1LL;
    if ( CompareStringOrdinal(StringRawBuffer, -1, L"CN", -1, 1) == 2 )
      std::wstring::assign((char *)Src, L"https://api.msn.cn/v1/News/Feed/Windows?", 0x28uLL);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v24);
  }
  else
  {
    v24 = 0LL;
    hstringHeader_16.m128i_i64[1] = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      (HSTRING_HEADER *)hstringHeader,
      L"Windows.Foundation.Uri",
      0x17u,
      0x16u);
    v9 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
           hstringHeader_16.m128i_i64[1],
           &v24);
    hstringHeader_16.m128i_i64[1] = 0LL;
    v10 = -1LL;
    if ( v9 >= 0 )
    {
      v26 = 0LL;
      v11 = v24;
      v12 = *(__int64 (__fastcall **)(HSTRING, PVOID, __int64 *))(*(_QWORD *)v24 + 48LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              (HSTRING_HEADER *)hstringHeader,
              sourceString,
              v13);
      v15 = v12(v11, v14[1].Reserved.Reserved1, &v26);
      hstringHeader_16.m128i_i64[1] = 0LL;
      if ( v15 >= 0 )
      {
        string = 0LL;
        v16 = v26;
        v17 = *(int (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v26 + 64LL);
        WindowsDeleteString(0LL);
        string = 0LL;
        if ( v17(v16, &string) >= 0 )
        {
          v18 = WindowsGetStringRawBuffer(string, 0LL);
          if ( CompareStringOrdinal(v18, -1, L"msn.cn", -1, 1) == 2 )
            std::wstring::assign((char *)Src, L"https://api.msn.cn/v1/News/Feed/Windows?", 0x28uLL);
        }
        WindowsDeleteString(string);
        string = 0LL;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
  }
  std::wstring::append(Src);
  std::wstring::append(Src);
  std::wstring::append(Src);
  std::wstring::append(Src);
  if ( a1[3] >= 8uLL )
    a1 = (_QWORD *)*a1;
  do
    ++v10;
  while ( *((_WORD *)a1 + v10) );
  std::wstring::append(Src);
  std::wstring::append(Src);
  std::wstring::append(Src);
  std::wstring::append(Src);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(_WORD *)v31 = 0;
  ShellFeedsAvailabilityHelpers::CreateGUID(v31);
  if ( !si128.m128i_i64[0] )
    goto LABEL_27;
  std::wstring::append(Src);
  std::wstring::append(Src);
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Feeds_RemoveUserQueryParam>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_Feeds_RemoveUserQueryParam>::GetImpl'::`2'::impl) )
  {
    hstringHeader_16 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(hstringHeader[0]) = 0;
    v30 = hstringHeader_16;
    *(_WORD *)v29 = 0;
    ShellFeedsAvailabilityHelpers::CreateMUID(v29);
    if ( !v30.m128i_i64[0] )
    {
      std::wstring::_Tidy_deallocate(v29);
      std::wstring::_Tidy_deallocate(hstringHeader);
      goto LABEL_27;
    }
    std::wstring::append(Src);
    std::wstring::append(Src);
    std::wstring::append(Src);
    std::wstring::_Tidy_deallocate(v29);
    std::wstring::_Tidy_deallocate(hstringHeader);
  }
  *(_DWORD *)v25 = 0;
  if ( (int)ShellFeedsExperienceHelpers::GetShellFeedsRegKey(
              (ShellFeedsExperienceHelpers *)L"ShellFeedsTaskbarViewMode",
              (unsigned int *)v25,
              v20) < 0 )
  {
LABEL_27:
    v5 = 1;
    goto LABEL_28;
  }
  std::wstring::append(Src);
  v21 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v36, *(unsigned int *)v25);
  std::wstring::wstring(v29, v21, v36);
  std::wstring::append(Src);
  std::wstring::_Tidy_deallocate(v29);
  std::wstring::operator=(a2, Src);
LABEL_28:
  std::wstring::_Tidy_deallocate(v31);
  std::wstring::_Tidy_deallocate(v33);
  std::wstring::_Tidy_deallocate(Src);
  return v5;
}
