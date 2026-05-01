/*
 * XREFs of ?PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@@Z @ 0x18015A920
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158300 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x18015A590 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@333AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800021D4 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005755C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18008F020 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z @ 0x180153E28 (-CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z.c)
 *     ?GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z @ 0x1801570FC (-GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z.c)
 *     ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z @ 0x1801D8124 (-CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z.c)
 *     ?Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18020E540 (-Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TaskbarPinningTelemetry::PinningActivity::PinnedListAdded(
        __int64 a1,
        unsigned __int16 *a2,
        const WCHAR *a3,
        int a4)
{
  const unsigned __int16 *v8; // rcx
  const struct _tlgProvider_t *v9; // rax
  int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // [rsp+50h] [rbp-49h] BYREF
  __int64 v13; // [rsp+58h] [rbp-41h] BYREF
  __int64 v14; // [rsp+60h] [rbp-39h] BYREF
  __int64 FileNameW; // [rsp+68h] [rbp-31h] BYREF
  __int64 v16; // [rsp+70h] [rbp-29h] BYREF
  unsigned __int16 *v17; // [rsp+78h] [rbp-21h] BYREF
  unsigned __int16 *v18[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v19; // [rsp+90h] [rbp-9h]
  unsigned __int16 *v20[2]; // [rsp+98h] [rbp-1h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+Fh]
  unsigned __int16 *v22[2]; // [rsp+B0h] [rbp+17h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+27h]

  v23 = 0LL;
  v22[0] = 0LL;
  v22[1] = 0LL;
  v21 = 0LL;
  v20[0] = 0LL;
  v20[1] = 0LL;
  v19 = 0LL;
  v18[0] = 0LL;
  v18[1] = 0LL;
  v17 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v18);
  v18[1] = (unsigned __int16 *)-1LL;
  v19 = -1LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v20);
  v20[1] = (unsigned __int16 *)-1LL;
  v21 = -1LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v22);
  v22[1] = (unsigned __int16 *)-1LL;
  v23 = -1LL;
  if ( (int)TaskbarTelemetryHelper::GetSecondaryTileLaunchArguments(a2, (unsigned __int16 *)v22, v20, v18) < 0 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v17,
      0LL);
    LoggingUtil::AppIdCensorUtility::CensorAppIdBuffer(a2, &v17);
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v17,
      0LL);
    LoggingUtil::AppIdCensorUtility::CensorUnescapedUrl(v8, v22[0], &v17);
  }
  v9 = TaskbarLogging::Provider();
  v10 = (int)v9;
  if ( *(_DWORD *)v9 > 5u && tlgKeywordOn((__int64)v9, 0x400000000000LL) )
  {
    LODWORD(v12) = a4;
    v13 = (__int64)v18[0];
    v14 = (__int64)v20[0];
    FileNameW = (__int64)PathFindFileNameW(a3);
    v16 = (__int64)v17;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v10,
      (int)&dword_1805A4BF7,
      *(_QWORD *)(a1 + 48) + 8,
      v11,
      (const WCHAR **)&v16,
      (const WCHAR **)&FileNameW,
      (const WCHAR **)&v14,
      (const WCHAR **)&v13,
      (__int64)&v12);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v17);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v18);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v20);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v22);
}
