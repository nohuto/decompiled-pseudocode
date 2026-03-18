/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800429C8
 * Callers:
 *     _anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn @ 0x180036CF8 (_anonymous_namespace_--FramesReport--UpdateResourceCountersForPsn.c)
 *     _anonymous_namespace_::SynthesizeDescription @ 0x18004291C (_anonymous_namespace_--SynthesizeDescription.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180054E50 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180042A08 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

_QWORD *__fastcall std::wstring::wstring(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8

  a1[3] = 7LL;
  *a1 = 0LL;
  v2 = -1LL;
  a1[2] = 0LL;
  do
    ++v2;
  while ( *(_WORD *)(a2 + 2 * v2) );
  std::wstring::assign(a1);
  return a1;
}
