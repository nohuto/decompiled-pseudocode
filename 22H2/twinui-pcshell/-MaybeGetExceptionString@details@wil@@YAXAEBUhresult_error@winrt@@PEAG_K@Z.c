/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x180267C04
 * Callers:
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$1 @ 0x180267D13 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$7 @ 0x180267E96 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$7.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180039C90 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008EFF8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x180090D1A (WINRT_WindowsGetStringRawBuffer.c)
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x180267FE0 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 */

void __fastcall wil::details::MaybeGetExceptionString(wil::details *this, wchar_t *a2, unsigned __int16 *a3)
{
  HSTRING *v5; // rax
  PCWSTR StringRawBuffer; // rax
  HSTRING v7; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = (HSTRING *)winrt::hresult_error::message(this, &v7);
    StringRawBuffer = WINRT_WindowsGetStringRawBuffer(*v5, 0LL);
    StringCchPrintfW(a2, (__int64)a3, L"winrt::hresult_error: %ls", StringRawBuffer);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
  }
}
