/*
 * XREFs of ?DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z @ 0x18035B630
 * Callers:
 *     ?__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z @ 0x18035BE98 (-__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z.c)
 *     ?__abi_winrt_ptrto_string_assign@@YAPEAXPEAPEAXPE$ADVString@Platform@@@Z @ 0x18036355C (-__abi_winrt_ptrto_string_assign@@YAPEAXPEAPEAXPE$ADVString@Platform@@@Z.c)
 *     ??0String@Platform@@QE$AAA@PEAUHSTRING__@@@Z @ 0x180387828 (--0String@Platform@@QE$AAA@PEAUHSTRING__@@@Z.c)
 * Callees:
 *     WindowsDuplicateString_0 @ 0x1800915DA (WindowsDuplicateString_0.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18035BCB0 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

void __fastcall Platform::Details::DuplicateString(Platform::Details *this, HSTRING *a2, HSTRING *a3)
{
  HRESULT v3; // eax

  if ( this )
  {
    v3 = WindowsDuplicateString_0((HSTRING)this, a2);
    if ( v3 < 0 )
    {
      __abi_WinRTraiseException(v3);
      JUMPOUT(0x18035B652LL);
    }
  }
  else
  {
    *a2 = 0LL;
  }
}
