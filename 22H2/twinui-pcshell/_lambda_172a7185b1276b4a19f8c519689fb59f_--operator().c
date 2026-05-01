/*
 * XREFs of _lambda_172a7185b1276b4a19f8c519689fb59f_::operator() @ 0x18009C2F0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_172a7185b1276b4a19f8c519689fb59f___::Run @ 0x18009CAA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_172a7185b1276b4a19f8c519689fb59f___--Run.c)
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180018E2C (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180068B18 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x180077F9C (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008EFF8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x180090D1A (WINRT_WindowsGetStringRawBuffer.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x180262754 (-GetStoreCortanaAumId@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_172a7185b1276b4a19f8c519689fb59f_::operator()(__int64 a1)
{
  int v2; // eax
  const WCHAR *v3; // rsi
  unsigned __int64 v4; // rbx
  __int64 v5; // r8
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rsi
  const WCHAR *v9; // rbx
  const unsigned __int16 *StringRawBuffer; // rax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  const WCHAR *v14; // rbx
  const unsigned __int16 *v15; // rax
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h] BYREF
  HSTRING v20; // [rsp+40h] [rbp-38h] BYREF
  HSTRING string; // [rsp+48h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  CortanaExperienceHelpers::GetStoreCortanaAumId(&v20);
  if ( *(_BYTE *)a1 )
  {
    v18 = 0LL;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      (HSTRING_HEADER *)&string,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           *(__int64 *)&hstringHeader.Reserved.Reserved2[16],
           &v18);
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        587LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
    }
    else
    {
      v19 = v18;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
      v3 = CortanaStoreAppExperienceManager::s_PreLaunchActivationKey;
      v4 = -1LL;
      do
        ++v4;
      while ( CortanaStoreAppExperienceManager::s_PreLaunchActivationKey[v4] );
      if ( v4 > 0xFFFFFFFF )
      {
        LODWORD(v4) = -1;
        RaiseException(0xC000000D, 1u, 0, 0LL);
      }
      WindowsCreateStringReference(v3, v4, &hstringHeader, &string);
      v6 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v19,
             string,
             v5,
             1);
      v7 = retaddr;
      if ( v6 >= 0 )
      {
        v8 = v18;
        v9 = (const WCHAR *)(a1 + 8);
        if ( *(_QWORD *)(a1 + 32) >= 8uLL )
          v9 = *(const WCHAR **)v9;
        StringRawBuffer = WINRT_WindowsGetStringRawBuffer(v20, 0LL);
        v11 = ActivateApplicationForExperienceWithPropertySet(StringRawBuffer, v9, 0LL, v8, 1u, 0LL);
        v12 = retaddr;
        if ( v11 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
          goto LABEL_12;
        }
        goto LABEL_19;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v7,
      591LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v12,
      599LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_20;
  }
  v14 = (const WCHAR *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 32) >= 8uLL )
    v14 = *(const WCHAR **)v14;
  v15 = WINRT_WindowsGetStringRawBuffer(v20, 0LL);
  v16 = ActivateApplicationForExperienceWithPropertySet(v15, v14, 0LL, 0LL, 1u, 0LL);
  v17 = retaddr;
  if ( v16 < 0 )
  {
LABEL_20:
    wil::details::in1diag3::Throw_Hr(
      v17,
      608LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
    JUMPOUT(0x18009C525LL);
  }
LABEL_12:
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v20);
  return 0LL;
}
