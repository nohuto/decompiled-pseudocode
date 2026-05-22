/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18014DEDC
 * Callers:
 *     ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x18014C864 (-MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualPr.c)
 *     ?RemoveContactFromBuffer@ContextualProcessorBuffer@@UEAAXK@Z @ 0x18014D730 (-RemoveContactFromBuffer@ContextualProcessorBuffer@@UEAAXK@Z.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_enum_ContextualProcessorState_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__enum_ContextualProcessorState____0___::_Copy_assign_::_1_::catch$18 @ 0x18014DC2F (_std--_Hash_std--_Umap_traits_unsigned_long_enum_ContextualProcessorState_std--_Uha_ea_18014DC2F.c)
 * Callees:
 *     ?clear@?$list@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@2@@std@@QEAAXXZ @ 0x18014DF30 (-clear@-$list@U-$pair@$$CBKW4ContextualProcessorDecision@@@std@@V-$allocator@U-$pair@$$CBKW4Cont.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::clear(
        _QWORD *a1)
{
  void *v2; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rcx

  std::list<std::pair<unsigned long const,enum ContextualProcessorDecision>>::clear(a1 + 1);
  v2 = (void *)a1[3];
  result = a1[1];
  v4 = (unsigned __int64)(a1[4] - (_QWORD)v2 + 7LL) >> 3;
  if ( (unsigned __int64)v2 > a1[4] )
    v4 = 0LL;
  if ( v4 )
    memset64(v2, result, v4);
  return result;
}
