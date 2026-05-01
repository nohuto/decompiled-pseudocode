/*
 * XREFs of ?LoadPinnedAppsFromRegistry@VirtualPinnedAppsHandler@@AEAAXXZ @ 0x1804B5758
 * Callers:
 *     ?RuntimeClassInitialize@VirtualPinnedAppsHandler@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x1804B631C (-RuntimeClassInitialize@VirtualPinnedAppsHandler@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIV.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x18025AC98 (--$emplace_back@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V-$basic.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall VirtualPinnedAppsHandler::LoadPinnedAppsFromRegistry(VirtualPinnedAppsHandler *this, __int64 a2)
{
  unsigned __int64 v3; // rbx
  int v4; // eax
  char *v5; // rdi
  char *v6; // rsi
  __int64 v7; // rdi
  LPVOID pv; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-48h]
  __int64 v10; // [rsp+40h] [rbp-40h]
  __int64 v11; // [rsp+48h] [rbp-38h]
  _QWORD v12[4]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v3 = 0LL;
  pv = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  LOBYTE(a2) = 1;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, LPVOID *))(**((_QWORD **)this + 7) + 48LL))(
         *((_QWORD *)this + 7),
         a2,
         L"PinnedApps",
         &pv);
  if ( (unsigned int)(v4 + 2147024894) > 1 )
  {
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        337LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    v5 = (char *)pv;
    v6 = (char *)pv + 24 * v9;
    while ( v5 != v6 )
    {
      std::wstring::wstring((__int64)v12, *(_WORD **)v5);
      std::vector<std::wstring>::emplace_back<std::wstring>((__int64 *)this + 12, (__int64)v12);
      std::wstring::_Tidy_deallocate(v12);
      v5 += 24;
    }
  }
  if ( pv )
  {
    if ( v9 )
    {
      v7 = 0LL;
      do
      {
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)pv + v7);
        ++v3;
        v7 += 24LL;
      }
      while ( v3 < v9 );
    }
    CoTaskMemFree(pv);
  }
}
