/*
 * XREFs of ??0hstring_builder@impl@winrt@@QEAA@I@Z @ 0x18021D80C
 * Callers:
 *     ?concat_hstring@impl@winrt@@YA?AUhstring@2@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x1800C0E40 (-concat_hstring@impl@winrt@@YA-AUhstring@2@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@.c)
 *     ??$to_hstring@PEBDX@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x18021D118 (--$to_hstring@PEBDX@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 * Callees:
 *     WindowsPreallocateStringBuffer_0 @ 0x18009491A (WindowsPreallocateStringBuffer_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180221A18 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

WCHAR **__fastcall winrt::impl::hstring_builder::hstring_builder(WCHAR **charBuffer, UINT32 length)
{
  HRESULT v3; // eax

  *charBuffer = 0LL;
  charBuffer[1] = 0LL;
  v3 = WindowsPreallocateStringBuffer_0(length, charBuffer, (HSTRING_BUFFER *)charBuffer + 1);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  return charBuffer;
}
