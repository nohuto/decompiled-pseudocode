/*
 * XREFs of ?NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z @ 0x1800B5D20
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180018E2C (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18001DF50 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180068B18 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFC8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x1800B67C0 (-Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B6984 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_GetViewState@ShellFeedsExperienceManagerImpl@@AEAA?AW4ExperienceViewState@CSingleViewShellExperience@@XZ @ 0x1800B85CC (-_GetViewState@ShellFeedsExperienceManagerImpl@@AEAA-AW4ExperienceViewState@CSingleViewShellExpe.c)
 *     ?_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x1800B8890 (-_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x1800BA2D4 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1802499A4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::NotifyFeedsButtonVisibilityChanged(
        ShellFeedsExperienceManagerImpl *this,
        unsigned __int8 a2)
{
  unsigned int v2; // edi
  const struct _tlgProvider_t *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r9
  unsigned int v7; // r8d
  const WCHAR *p_hstringHeader; // rax
  HSTRING_HEADER *v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // eax
  unsigned int v14; // r8d
  HSTRING_HEADER *v15; // rax
  __int64 v16; // r8
  int v17; // eax
  unsigned int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(__int64, PVOID, __int64); // rdi
  __int64 v22; // rbx
  HSTRING_HEADER *v23; // rax
  int v24; // [rsp+30h] [rbp-19h] BYREF
  __int64 v25; // [rsp+38h] [rbp-11h] BYREF
  __int64 v26; // [rsp+40h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-1h] BYREF
  unsigned __int64 v28; // [rsp+60h] [rbp+17h]
  HSTRING_HEADER v29; // [rsp+68h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v2 = a2;
  v4 = FeedsMicrosoftTelemetryProvider::Provider();
  if ( *(_DWORD *)v4 > 5u && tlgKeywordOn((__int64)v4, 0x200000000000LL) )
  {
    v25 = 0x1000000LL;
    LOBYTE(v24) = (_BYTE)v2 != 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      v5,
      byte_18057E51D,
      0LL,
      v6,
      (__int64)&v24,
      (__int64)&v25);
  }
  if ( !ShellFeedsExperienceManagerImpl::_IsViewVisible(this) )
  {
    std::wstring::wstring((__int64)&hstringHeader, L"StartMode=Feeds&TargetView=Feeds&QuerySource=TaskBarHeadlines");
    std::wstring::append(&hstringHeader);
    std::to_wstring(&v29, v2);
    std::wstring::append(&hstringHeader);
    std::wstring::_Tidy_deallocate(&v29);
    p_hstringHeader = (const WCHAR *)&hstringHeader;
    if ( v28 >= 8 )
      p_hstringHeader = (const WCHAR *)hstringHeader.Reserved.Reserved1;
    v25 = (__int64)p_hstringHeader;
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, (const WCHAR **)&v25, v7);
    v10 = ShellFeedsExperienceManagerImpl::Poke(this, (HSTRING)v9[1].Reserved.Reserved1);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x218,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
      std::wstring::_Tidy_deallocate(&hstringHeader);
      return v11;
    }
    std::wstring::_Tidy_deallocate(&hstringHeader);
  }
  if ( (unsigned int)ShellFeedsExperienceManagerImpl::_GetViewState(this) )
  {
    v25 = 0LL;
    v28 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v13 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            v28,
            &v25);
    v11 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21F,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
LABEL_19:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      return v11;
    }
    v26 = v25;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v26);
    v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, (const WCHAR **)off_180509A80, v14);
    v17 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
            (HSTRING)v15[1].Reserved.Reserved1,
            v16,
            v2);
    v11 = v17;
    if ( v17 < 0 )
    {
      v19 = 545LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      goto LABEL_19;
    }
    v20 = *((_QWORD *)this + 13);
    v21 = *(__int64 (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)v20 + 120LL);
    v22 = v25;
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, (const WCHAR **)off_180509AA8, v18);
    v17 = v21(v20, v23[1].Reserved.Reserved1, v22);
    v11 = v17;
    if ( v17 < 0 )
    {
      v19 = 547LL;
      goto LABEL_18;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  }
  return 0LL;
}
