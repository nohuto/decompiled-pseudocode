/*
 * XREFs of ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x1800BF26C
 * Callers:
 *     ?AppendSessonIdToArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1800BF3E8 (-AppendSessonIdToArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?concat_hstring@impl@winrt@@YA?AUhstring@2@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x1800C0E40 (-concat_hstring@impl@winrt@@YA-AUhstring@2@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180256DD4 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 */

__int64 __fastcall winrt::operator+(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF

  winrt::hstring::operator std::basic_string_view<unsigned short>(a3, v8);
  v5 = -1LL;
  v7[0] = a2;
  do
    ++v5;
  while ( *(_WORD *)(a2 + 2 * v5) );
  v7[1] = v5;
  winrt::impl::concat_hstring(a1, v7, v8);
  return a1;
}
