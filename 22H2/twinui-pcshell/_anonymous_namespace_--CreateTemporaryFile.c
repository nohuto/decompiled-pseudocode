/*
 * XREFs of _anonymous_namespace_::CreateTemporaryFile @ 0x180148B44
 * Callers:
 *     _anonymous_namespace_::CreateTemporaryLogoFile @ 0x180148E7C (_anonymous_namespace_--CreateTemporaryLogoFile.c)
 * Callees:
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800571D4 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180075210 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18008F020 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x1800AF8A4 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1800AF8A4.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@X@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180116BA4 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@X@-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ??Kfilesystem@std@@YA?AVpath@01@AEBV201@0@Z @ 0x18011B8D0 (--Kfilesystem@std@@YA-AVpath@01@AEBV201@0@Z.c)
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18013DAEC (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18020AEC8 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall anonymous_namespace_::CreateTemporaryFile(__int64 a1, const void **a2)
{
  DWORD TempPathW; // ebx
  const char *v5; // r9
  wil::details::in1diag3 *v6; // rcx
  DWORD v7; // eax
  const char *v8; // r9
  wil::details::in1diag3 *v9; // rcx
  HRESULT v10; // eax
  void *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  const WCHAR *v14; // rcx
  char *FileW; // rbx
  const char *v16; // r9
  LPCWSTR *v17; // rsi
  const struct _tlgProvider_t *v18; // rax
  __int64 v19; // r9
  __int128 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v22; // [rsp+50h] [rbp-B0h]
  _QWORD v23[4]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v24[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v25[4]; // [rsp+A0h] [rbp-60h] BYREF
  LPWSTR lpBuffer[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v27[2]; // [rsp+D0h] [rbp-30h] BYREF
  LPCWSTR lpFileName[2]; // [rsp+E0h] [rbp-20h] BYREF
  __m128i si128; // [rsp+F0h] [rbp-10h]
  GUID pguid; // [rsp+100h] [rbp+0h] BYREF
  OLECHAR sz[40]; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v27[0] = a1;
  TempPathW = GetTempPathW(0, 0LL);
  v6 = retaddr;
  if ( !TempPathW )
    goto LABEL_16;
  lpBuffer[0] = 0LL;
  wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    lpBuffer,
    0LL,
    TempPathW);
  v7 = GetTempPathW(TempPathW, lpBuffer[0]);
  v9 = retaddr;
  if ( !v7 )
    goto LABEL_17;
  v10 = CoCreateGuid(&pguid);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      46LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  if ( !StringFromGUID2(&pguid, sz, 39) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      48LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  v11 = (void *)std::wstring::wstring((__int64)v25, a2);
  v12 = std::operator+<unsigned short>((__int64)v24, (__int64)sz, v11);
  v22 = 0LL;
  v21 = *(_OWORD *)v12;
  v22 = *(_OWORD *)(v12 + 16);
  *(_QWORD *)(v12 + 16) = 0LL;
  *(_QWORD *)(v12 + 24) = 7LL;
  *(_WORD *)v12 = 0;
  v27[0] = (__int64)lpBuffer[0];
  v13 = -1LL;
  do
    ++v13;
  while ( lpBuffer[0][v13] );
  v27[1] = v13;
  std::wstring::wstring((__int64)v23, (const void **)v27);
  std::filesystem::operator/((__int64)lpFileName);
  std::wstring::_Tidy_deallocate(v23);
  std::wstring::_Tidy_deallocate(&v21);
  std::wstring::_Tidy_deallocate(v24);
  std::wstring::_Tidy_deallocate(v25);
  v14 = (const WCHAR *)lpFileName;
  if ( si128.m128i_i64[1] >= 8uLL )
    v14 = lpFileName[0];
  FileW = (char *)CreateFileW(v14, 0, 7u, 0LL, 1u, 0x100u, 0LL);
  v27[0] = (__int64)FileW;
  if ( (unsigned __int64)(FileW - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x36,
      (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      v16);
LABEL_16:
    wil::details::in1diag3::_Throw_GetLastError(
      v6,
      (void *)0x26,
      (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      v5);
LABEL_17:
    wil::details::in1diag3::_Throw_GetLastError(
      v9,
      (void *)0x29,
      (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      v8);
    __debugbreak();
  }
  v17 = lpFileName;
  if ( si128.m128i_i64[1] >= 8uLL )
    v17 = (LPCWSTR *)lpFileName[0];
  v18 = PinManagerTelemetry::Provider((__int64)retaddr);
  if ( *(_DWORD *)v18 > 5u )
  {
    v27[0] = (__int64)v17;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      (__int64)v18,
      (unsigned __int8 *)dword_1805A1D27,
      0LL,
      v19,
      (const WCHAR **)v27);
  }
  *(_QWORD *)a1 = FileW;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)lpFileName;
  *(__m128i *)(a1 + 24) = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(lpFileName[0]) = 0;
  std::wstring::_Tidy_deallocate(lpFileName);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)lpBuffer);
  return a1;
}
