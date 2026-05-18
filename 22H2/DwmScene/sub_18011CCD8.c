/*
 * XREFs of sub_18011CCD8 @ 0x18011CCD8
 * Callers:
 *     sub_18011751C @ 0x18011751C (sub_18011751C.c)
 *     sub_180117864 @ 0x180117864 (sub_180117864.c)
 *     sub_180117C08 @ 0x180117C08 (sub_180117C08.c)
 *     sub_1801180B4 @ 0x1801180B4 (sub_1801180B4.c)
 *     sub_180118340 @ 0x180118340 (sub_180118340.c)
 *     sub_180118580 @ 0x180118580 (sub_180118580.c)
 *     sub_1801187C4 @ 0x1801187C4 (sub_1801187C4.c)
 *     sub_180118AA0 @ 0x180118AA0 (sub_180118AA0.c)
 *     sub_18011AEF0 @ 0x18011AEF0 (sub_18011AEF0.c)
 *     sub_18011B0B8 @ 0x18011B0B8 (sub_18011B0B8.c)
 *     sub_18011B1C0 @ 0x18011B1C0 (sub_18011B1C0.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180026DC8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_18011BE58 @ 0x18011BE58 (sub_18011BE58.c)
 */

bool __fastcall sub_18011CCD8(__int64 a1, _WORD *a2)
{
  unsigned __int64 v2; // r8
  __int64 v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7[2]; // [rsp+28h] [rbp-30h] BYREF
  __m128i si128; // [rsp+38h] [rbp-20h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v7[0]) = 0;
  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  std::wstring::assign((char *)v7, a2, v2);
  v4 = *(_QWORD *)(a1 + 72);
  sub_18011BE58((_QWORD *)(a1 + 64), &v6, v7);
  unknown_libname_101(v7);
  return v6 != v4;
}
