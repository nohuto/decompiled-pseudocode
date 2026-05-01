/*
 * XREFs of ?concat_hstring@impl@winrt@@YA?AUhstring@2@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x1800C0E20
 * Callers:
 *     ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x1800BF24C (--Hwinrt@@YA-AUhstring@0@PEBGAEBU10@@Z.c)
 * Callees:
 *     WindowsDeleteStringBuffer_0 @ 0x1800948EE (WindowsDeleteStringBuffer_0.c)
 *     memcpy_s_1 @ 0x1800AF714 (memcpy_s_1.c)
 *     ??0hstring_builder@impl@winrt@@QEAA@I@Z @ 0x18021D65C (--0hstring_builder@impl@winrt@@QEAA@I@Z.c)
 *     ?to_hstring@hstring_builder@impl@winrt@@QEAA?AUhstring@3@XZ @ 0x180221E28 (-to_hstring@hstring_builder@impl@winrt@@QEAA-AUhstring@3@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::concat_hstring(__int64 a1, __int64 a2, __int64 a3)
{
  void *Destination; // [rsp+20h] [rbp-18h] BYREF
  HSTRING_BUFFER bufferHandle; // [rsp+28h] [rbp-10h]

  winrt::impl::hstring_builder::hstring_builder((WCHAR **)&Destination, *(_QWORD *)(a3 + 8) + *(_QWORD *)(a2 + 8));
  memcpy_s_1(Destination, 2LL * *(_QWORD *)(a2 + 8), *(const void *const *)a2, 2LL * *(_QWORD *)(a2 + 8));
  memcpy_s_1(
    (char *)Destination + 2 * *(_QWORD *)(a2 + 8),
    2LL * *(_QWORD *)(a3 + 8),
    *(const void *const *)a3,
    2LL * *(_QWORD *)(a3 + 8));
  winrt::impl::hstring_builder::to_hstring(&Destination, a1);
  if ( bufferHandle )
    WindowsDeleteStringBuffer_0(bufferHandle);
  return a1;
}
