/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUEffectDescriptionKey@@@Z @ 0x1801B92E4
 * Callers:
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x1800E3414 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 *     ??1CEffectCompilationTask@@QEAA@XZ @ 0x1801E2F4C (--1CEffectCompilationTask@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Find_last@UEffectDescriptionKey@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@PEAX@std@@@1@AEBUEffectDescriptionKey@@_K@Z @ 0x1800E3758 (--$_Find_last@UEffectDescriptionKey@@@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffect.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::erase(
        _QWORD *a1,
        unsigned int *a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a2;
  v4 = (_QWORD *)std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Find_last<EffectDescriptionKey>(
                   a1,
                   v10,
                   (__int64)a2,
                   v2)[1];
  if ( !v4 )
    return 0LL;
  v5 = a1[3];
  v6 = 2 * (v2 & a1[6]);
  if ( *(_QWORD **)(v5 + 16 * (v2 & a1[6]) + 8) == v4 )
  {
    if ( *(_QWORD **)(v5 + 16 * (v2 & a1[6])) == v4 )
    {
      v7 = a1[1];
      *(_QWORD *)(v5 + 16 * (v2 & a1[6])) = v7;
    }
    else
    {
      v7 = v4[1];
    }
    *(_QWORD *)(v5 + 8 * v6 + 8) = v7;
  }
  else if ( *(_QWORD **)(v5 + 16 * (v2 & a1[6])) == v4 )
  {
    *(_QWORD *)(v5 + 16 * (v2 & a1[6])) = *v4;
  }
  v8 = *v4;
  --a1[2];
  *(_QWORD *)v4[1] = v8;
  *(_QWORD *)(v8 + 8) = v4[1];
  std::_Deallocate<16,0>(v4, 0x28uLL);
  return 1LL;
}
