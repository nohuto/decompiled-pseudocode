/*
 * XREFs of ?to_hstring@hstring_builder@impl@winrt@@QEAA?AUhstring@3@XZ @ 0x180221E28
 * Callers:
 *     ?concat_hstring@impl@winrt@@YA?AUhstring@2@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x1800C0E20 (-concat_hstring@impl@winrt@@YA-AUhstring@2@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@.c)
 *     ??$to_hstring@PEBDX@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x18021CF68 (--$to_hstring@PEBDX@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 * Callees:
 *     __Platform_WindowsPromoteStringBuffer @ 0x180094906 (__Platform_WindowsPromoteStringBuffer.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180221868 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

HSTRING *__fastcall winrt::impl::hstring_builder::to_hstring(__int64 a1, HSTRING *a2)
{
  HRESULT v4; // eax
  HSTRING v5; // rax
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  string = 0LL;
  v4 = _Platform_WindowsPromoteStringBuffer(*(HSTRING_BUFFER *)(a1 + 8), &string);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  v5 = string;
  *(_QWORD *)(a1 + 8) = 0LL;
  *a2 = v5;
  return a2;
}
