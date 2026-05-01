/*
 * XREFs of ?CopyShortcut@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$pair@V?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEFBU_ITEMIDLIST@@@Z @ 0x180138020
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_ResumeCoro$2 @ 0x18013C8D0 (winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimAsync$_ResumeCo.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180075210 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18013DC5C (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_GetAttributesFromFolderAndIDList@@YAJPEAUIShellFolder@@PEFBU_ITEMIDLIST@@PEAUIBindCtx@@KPEAK@Z @ 0x180144C44 (-_GetAttributesFromFolderAndIDList@@YAJPEAUIShellFolder@@PEFBU_ITEMIDLIST@@PEAUIBindCtx@@KPEAK@Z.c)
 *     ?s_TryCopyLocalizedName@PinManager@implementation@Shell@Internal@Windows@winrt@@SAXPEBG0@Z @ 0x180146280 (-s_TryCopyLocalizedName@PinManager@implementation@Shell@Internal@Windows@winrt@@SAXPEBG0@Z.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x18015F290 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18020B078 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x1802BBE74 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802D9D90 (--1-$out_param_t@V-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::CopyShortcut(
        __int64 a1,
        __int64 a2,
        ITEMIDLIST *a3)
{
  BOOL v5; // eax
  wil::details::in1diag3 *v6; // rcx
  const char *v7; // r9
  HRESULT v8; // eax
  HRESULT v9; // eax
  HRESULT v10; // eax
  const char *v11; // r9
  const WCHAR *FileNameW; // rax
  HRESULT v13; // eax
  wil::details::in1diag3 *v14; // rcx
  char v15; // al
  const struct _tlgProvider_t *v16; // rax
  __int64 v17; // r9
  HRESULT v18; // eax
  __int64 v19; // rax
  unsigned int v21[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v22; // [rsp+38h] [rbp-C8h] BYREF
  LPITEMIDLIST ppidl; // [rsp+40h] [rbp-C0h] BYREF
  char v24; // [rsp+48h] [rbp-B8h]
  struct _SHFILEOPSTRUCTW FileOp; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+88h] [rbp-78h] BYREF
  GUID pguid; // [rsp+90h] [rbp-70h] BYREF
  __int128 v28; // [rsp+A0h] [rbp-60h] BYREF
  __m128i si128; // [rsp+B0h] [rbp-50h]
  OLECHAR sz[40]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR Buffer[264]; // [rsp+110h] [rbp+10h] BYREF
  WCHAR pszPath[264]; // [rsp+320h] [rbp+220h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+558h] [rbp+458h]

  v26 = a2;
  v21[0] = 0;
  _GetAttributesFromFolderAndIDList(0LL, a3, (struct IBindCtx *)a3, 0x10000u, v21);
  if ( (v21[0] & 0x10000) != 0 )
  {
    memset_0(pszPath, 0, 0x20AuLL);
    v5 = SHGetPathFromIDListW(a3, pszPath);
    v6 = retaddr;
    if ( !v5 )
      goto LABEL_21;
    memset_0(Buffer, 0, 0x20AuLL);
    if ( !GetTempPathW(0x105u, Buffer) )
    {
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x338,
        (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        v7);
      __debugbreak();
    }
    v8 = PathCchAppend(Buffer, 0x105uLL, L"PinnableShortcuts");
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        825LL,
        (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    CreateDirectoryW(Buffer, 0LL);
    pguid = 0LL;
    v9 = CoCreateGuid(&pguid);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        831LL,
        (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    if ( !StringFromGUID2(&pguid, sz, 39) )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        834LL,
        (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)0x80004005LL);
      __debugbreak();
    }
    v10 = PathCchAppend(Buffer, 0x105uLL, sz);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        835LL,
        (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    if ( CreateDirectoryW(Buffer, 0LL) )
    {
      std::wstring::wstring(&v28, Buffer, 261LL);
      FileNameW = PathFindFileNameW(pszPath);
      v13 = PathCchAppend(Buffer, 0x105uLL, FileNameW);
      v14 = retaddr;
      if ( v13 >= 0 )
      {
        *(_OWORD *)&FileOp.hwnd = 0LL;
        memset(&FileOp.fFlags, 0, 24);
        FileOp.wFunc = 2;
        FileOp.pFrom = pszPath;
        FileOp.pTo = Buffer;
        FileOp.fFlags = 1556;
        if ( SHFileOperationW(&FileOp) || (v15 = 0, FileOp.fAnyOperationsAborted) )
          v15 = 1;
        if ( v15 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            846LL,
            (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
            (const char *)0x80004005LL);
          __debugbreak();
        }
        v16 = PinManagerTelemetry::Provider();
        if ( *(_DWORD *)v16 > 5u )
        {
          *(_QWORD *)v21 = Buffer;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
            (__int64)v16,
            (unsigned __int8 *)dword_1805A0A53,
            0LL,
            v17,
            (const WCHAR **)v21);
        }
        winrt::Windows::Internal::Shell::implementation::PinManager::s_TryCopyLocalizedName(pszPath, Buffer);
        v26 = 0LL;
        v22 = &v26;
        ppidl = 0LL;
        v24 = 1;
        v18 = SHParseDisplayName(Buffer, 0LL, &ppidl, 0, 0LL);
        if ( v18 >= 0 )
        {
          wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v22);
          v19 = v26;
          v26 = 0LL;
          *(_QWORD *)a2 = v19;
          *(_OWORD *)(a2 + 8) = v28;
          *(__m128i *)(a2 + 24) = si128;
          si128 = _mm_load_si128((const __m128i *)&_xmm);
          LOWORD(v28) = 0;
          wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            &v26,
            0LL);
          std::wstring::_Tidy_deallocate(&v28);
          return a2;
        }
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          853LL,
          (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
          (const char *)(unsigned int)v18);
LABEL_21:
        wil::details::in1diag3::Throw_Hr(
          v6,
          821LL,
          (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
          (const char *)0x80004005LL);
        __debugbreak();
      }
    }
    else
    {
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x344,
        (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        v11);
    }
    wil::details::in1diag3::Throw_Hr(
      v14,
      839LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 7LL;
  *(_WORD *)(a2 + 8) = 0;
  return a2;
}
