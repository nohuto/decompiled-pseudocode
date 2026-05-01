/*
 * XREFs of WindowsDeleteStringBuffer_0 @ 0x1800948EE
 * Callers:
 *     ?concat_hstring@impl@winrt@@YA?AUhstring@2@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x1800C0E20 (-concat_hstring@impl@winrt@@YA-AUhstring@2@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@.c)
 *     ??$to_hstring@PEBDX@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x18021CF68 (--$to_hstring@PEBDX@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 *     ??1hstring_builder@impl@winrt@@QEAA@XZ @ 0x18021DBA8 (--1hstring_builder@impl@winrt@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WindowsDeleteStringBuffer_0(HSTRING_BUFFER bufferHandle)
{
  return WindowsDeleteStringBuffer(bufferHandle);
}
