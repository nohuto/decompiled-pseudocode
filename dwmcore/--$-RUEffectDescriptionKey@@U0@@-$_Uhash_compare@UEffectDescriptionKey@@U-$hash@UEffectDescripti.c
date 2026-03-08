/*
 * XREFs of ??$?RUEffectDescriptionKey@@U0@@?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@QEBA_NAEBUEffectDescriptionKey@@0@Z @ 0x1800E37E8
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800E2E88 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_U.c)
 *     ??$_Find_last@UEffectDescriptionKey@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@PEAX@std@@@1@AEBUEffectDescriptionKey@@_K@Z @ 0x1800E3758 (--$_Find_last@UEffectDescriptionKey@@@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffect.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>::operator()<EffectDescriptionKey,EffectDescriptionKey>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v3; // al
  char v4; // cl

  if ( *(_DWORD *)a2 != *(_DWORD *)a3 )
    return 1;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 8) + 96LL))(
         *(_QWORD *)(a2 + 8),
         *(_QWORD *)(a3 + 8));
  v4 = 0;
  if ( !v3 )
    return 1;
  return v4;
}
