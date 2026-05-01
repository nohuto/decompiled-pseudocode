/*
 * XREFs of ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z @ 0x1804E02F8
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x1804DDD4C (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1803EF8EC (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 *     ??R_lambda_f514b7d7a4bf1295c9808fb12a890baa_@@QEBAJPEBGPEAPEAG@Z @ 0x1804DC84C (--R_lambda_f514b7d7a4bf1295c9808fb12a890baa_@@QEBAJPEBGPEAPEAG@Z.c)
 *     ?HasMsAppXUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x1804DF0A4 (-HasMsAppXUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z.c)
 *     ?_EnsureCount@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1804E076C (-_EnsureCount@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1804E079C (-_Free@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall ShellMRTHelper::Common::TryFallbackToFilePath(
        ShellMRTHelper::Common *this,
        HSTRING a2,
        ShellMRTHelper::Common *a3,
        HSTRING *a4)
{
  const WCHAR *StringRawBuffer; // rbx
  HSTRING v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  PCWSTR v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 i; // rcx
  int v19; // eax
  __int64 v20; // rdx
  HSTRING string; // [rsp+20h] [rbp-39h] BYREF
  PCNZWCH sourceString; // [rsp+28h] [rbp-31h] BYREF
  UINT32 v24[2]; // [rsp+30h] [rbp-29h]
  __int64 v25; // [rsp+38h] [rbp-21h]
  __int64 v26; // [rsp+40h] [rbp-19h] BYREF
  __int64 v27; // [rsp+48h] [rbp-11h] BYREF
  UINT32 length; // [rsp+50h] [rbp-9h] BYREF
  HSTRING v29[2]; // [rsp+58h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v31; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *a4 = 0LL;
  if ( a3 )
  {
    sourceString = 0LL;
    *(_QWORD *)v24 = 0LL;
    v25 = 0LL;
    StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)a3, 0LL);
    if ( PathIsRelativeW(StringRawBuffer) && *StringRawBuffer != 64 )
    {
      v29[0] = 0LL;
      v29[1] = a2;
      if ( PathIsURLW(StringRawBuffer) )
      {
        if ( ShellMRTHelper::Common::HasMsAppXUriScheme(a3, v8) )
        {
          v27 = 0LL;
          v31 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(
            &hstringHeader,
            L"Windows.Foundation.Uri",
            0x17u,
            0x16u);
          v9 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
                 v31,
                 &v27);
          v10 = v9;
          if ( v9 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x130,
              (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
              (const char *)(unsigned int)v9);
LABEL_17:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
LABEL_32:
            Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free(&sourceString);
            return v10;
          }
          v11 = v27;
          v26 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
          v12 = (*(__int64 (__fastcall **)(__int64, ShellMRTHelper::Common *, __int64 *))(*(_QWORD *)v11 + 48LL))(
                  v11,
                  a3,
                  &v26);
          v10 = v12;
          if ( v12 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x133,
              (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
              (const char *)(unsigned int)v12);
LABEL_16:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
            goto LABEL_17;
          }
          v13 = v26;
          WindowsDeleteString(0LL);
          string = 0LL;
          v14 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v13 + 104LL))(v13, &string);
          v10 = v14;
          if ( v14 < 0 )
          {
            v15 = 311LL;
LABEL_15:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v15,
              (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
              (const char *)(unsigned int)v14);
            WindowsDeleteString(string);
            string = 0LL;
            goto LABEL_16;
          }
          v16 = WindowsGetStringRawBuffer(string, &length);
          if ( length > 1 )
          {
            Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free(&sourceString);
            *(_QWORD *)v24 = -1LL;
            v25 = -1LL;
            v14 = _lambda_f514b7d7a4bf1295c9808fb12a890baa_::operator()(v29, v16 + 1, (PWSTR *)&sourceString);
            v10 = v14;
            if ( v14 < 0 )
            {
              v15 = 318LL;
              goto LABEL_15;
            }
          }
          WindowsDeleteString(string);
          string = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
        }
      }
      else
      {
        Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free(&sourceString);
        *(_QWORD *)v24 = -1LL;
        v25 = -1LL;
        v19 = _lambda_f514b7d7a4bf1295c9808fb12a890baa_::operator()(v29, StringRawBuffer, (PWSTR *)&sourceString);
        v10 = v19;
        if ( v19 < 0 )
        {
          v20 = 325LL;
          goto LABEL_31;
        }
      }
    }
    if ( sourceString && *sourceString )
    {
      Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
      v17 = *(_QWORD *)v24;
      for ( i = 0LL; i < v17; ++i )
      {
        if ( sourceString[i] == 47 )
        {
          sourceString[i] = 92;
          v17 = *(_QWORD *)v24;
        }
      }
      Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
      v19 = WindowsCreateString(sourceString, v24[0], a4);
      v10 = v19;
      if ( v19 < 0 )
      {
        v20 = 336LL;
LABEL_31:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
          (const char *)(unsigned int)v19);
        goto LABEL_32;
      }
    }
    else
    {
      v19 = WindowsDuplicateString((HSTRING)a3, a4);
      v10 = v19;
      if ( v19 < 0 )
      {
        v20 = 341LL;
        goto LABEL_31;
      }
    }
    Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free(&sourceString);
  }
  return 0LL;
}
