/*
 * XREFs of ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x1800FE638
 * Callers:
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1800F4EDC (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x1800F64A0 (-OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180061A7C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008EFF8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x180090D1A (WINRT_WindowsGetStringRawBuffer.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x18009BA0C (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ??$_Traits_rfind@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x1800F3C6C (--$_Traits_rfind@U-$char_traits@G@std@@@std@@YA_KQEBG_K101@Z.c)
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1802568F4 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TileId(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this,
        HSTRING *a2)
{
  WCHAR *StringRawBuffer; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  char *v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rax
  char v9; // di
  __int64 v10; // rcx
  HSTRING *v11; // rsi
  HSTRING *v12; // rax
  HSTRING v13; // rbx
  HSTRING v14; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v16[4]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v17[4]; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v18[4]; // [rsp+90h] [rbp+17h] BYREF

  StringRawBuffer = (WCHAR *)WINRT_WindowsGetStringRawBuffer(*a2, 0LL);
  std::wstring::wstring((__int64)v16, StringRawBuffer);
  v6 = (char *)v16;
  if ( v16[3] >= 8uLL )
    v6 = (char *)v16[0];
  v7 = std::_Traits_rfind<std::char_traits<unsigned short>>(v6, v16[2], v4, v5, 1uLL);
  if ( v7 == -1 )
  {
    v8 = (_QWORD *)std::wstring::wstring((__int64)v18);
    v9 = 1;
  }
  else
  {
    v8 = (_QWORD *)std::wstring::substr(v16, (__int64)v17, v7 + 1, 0xFFFFFFFFFFFFFFFFuLL);
    v9 = 2;
  }
  v10 = v8[2];
  if ( v8[3] >= 8uLL )
    v8 = (_QWORD *)*v8;
  v15[0] = v8;
  v15[1] = v10;
  v11 = (HSTRING *)((char *)this + 64);
  v12 = (HSTRING *)winrt::hstring::hstring(&v14, v15);
  if ( v11 != v12 )
  {
    v13 = *v12;
    *v12 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close(v11);
    *v11 = v13;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v14);
  if ( (v9 & 2) != 0 )
  {
    v9 &= ~2u;
    std::wstring::_Tidy_deallocate(v17);
  }
  if ( (v9 & 1) != 0 )
    std::wstring::_Tidy_deallocate(v18);
  std::wstring::_Tidy_deallocate(v16);
}
