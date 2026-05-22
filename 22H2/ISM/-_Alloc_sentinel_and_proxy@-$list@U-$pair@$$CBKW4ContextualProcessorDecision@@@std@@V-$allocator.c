/*
 * XREFs of ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@2@@std@@AEAAXXZ @ 0x180012E30
 * Callers:
 *     ??0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z @ 0x180012790 (--0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@1@@Z @ 0x180024AD8 (--0-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K@std@@U-$.c)
 *     ??0?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x18014ADF8 (--0-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$ha_ea_18014ADF8.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned long const,enum ContextualProcessorDecision>>::_Alloc_sentinel_and_proxy(
        _QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x18uLL);
  *result = result;
  result[1] = result;
  *a1 = result;
  return result;
}
