/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x18035BAC0
 * Callers:
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$1 @ 0x18035BC9F (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$5 @ 0x18035BD94 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$5.c)
 * Callees:
 *     WINRT_WindowsGetStringRawBuffer @ 0x180090D3A (WINRT_WindowsGetStringRawBuffer.c)
 *     WindowsDeleteString_0 @ 0x180091436 (WindowsDeleteString_0.c)
 *     ?GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z @ 0x18035B92C (-GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z.c)
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x18035BE60 (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z @ 0x18035C168 (-__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::MaybeGetExceptionString(__int64 a1, wchar_t *a2, unsigned __int64 a3)
{
  HSTRING PlatformExceptionMessage; // rbx
  HSTRING v6; // rdi
  PCWSTR StringRawBuffer; // rax

  if ( a2 )
  {
    PlatformExceptionMessage = (HSTRING)wil::details::GetPlatformExceptionMessage(a1);
    v6 = (HSTRING)__abi_winrt_ptrto_string_ctor(PlatformExceptionMessage);
    WindowsDeleteString_0(PlatformExceptionMessage);
    if ( v6 )
      StringRawBuffer = WINRT_WindowsGetStringRawBuffer(v6, 0LL);
    else
      StringRawBuffer = L"(null Message)";
    StringCchPrintfW(a2, a3, L"Platform::Exception^: %ws", StringRawBuffer);
    WindowsDeleteString_0(v6);
  }
}
