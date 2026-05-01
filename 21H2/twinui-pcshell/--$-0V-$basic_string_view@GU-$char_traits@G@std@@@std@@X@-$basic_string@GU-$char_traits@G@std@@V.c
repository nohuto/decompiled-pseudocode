/*
 * XREFs of ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@X@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180116D14
 * Callers:
 *     ??$?0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z @ 0x180116978 (--$-0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z.c)
 *     ??$?0V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0A@@path@filesystem@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@W4format@012@@Z @ 0x180116CA4 (--$-0V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0A@@path@filesystem@std@@QEA.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@path@filesystem@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@2@W4format@012@@Z @ 0x180116CE0 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@path@filesystem@std@@QEAA@AEBV-$basi.c)
 *     _anonymous_namespace_::CreateTileInStoreIfNeeded @ 0x180138B94 (_anonymous_namespace_--CreateTileInStoreIfNeeded.c)
 *     _anonymous_namespace_::GetPinRequestPromptContent @ 0x180139C40 (_anonymous_namespace_--GetPinRequestPromptContent.c)
 *     _anonymous_namespace_::CreateTemporaryFile @ 0x180148CB4 (_anonymous_namespace_--CreateTemporaryFile.c)
 *     _anonymous_namespace_::TruncateDisplayName @ 0x18014D244 (_anonymous_namespace_--TruncateDisplayName.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800618B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::wstring::wstring(__int64 a1, const void **a2)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  std::wstring::assign((char *)a1, *a2, _mm_srli_si128(*(__m128i *)a2, 8).m128i_u64[0]);
  return a1;
}
