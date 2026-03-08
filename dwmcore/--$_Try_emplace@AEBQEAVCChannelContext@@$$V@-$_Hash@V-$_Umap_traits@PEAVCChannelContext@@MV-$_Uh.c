/*
 * XREFs of ??$_Try_emplace@AEBQEAVCChannelContext@@$$V@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCChannelContext@@M@std@@PEAX@std@@_N@1@AEBQEAVCChannelContext@@@Z @ 0x180024388
 * Callers:
 *     ?ProcessSetGlobalPlaybackRate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETGLOBALPLAYBACKRATE@@@Z @ 0x1800FC1FC (-ProcessSetGlobalPlaybackRate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_A.c)
 * Callees:
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEBA_K_K@Z @ 0x180019318 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkin.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x180023808 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTa.c)
 *     ??$_Find_last@PEAVCChannelContext@@@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAVCChannelContext@@M@std@@PEAX@std@@@1@AEBQEAVCChannelContext@@_K@Z @ 0x18002455C (--$_Find_last@PEAVCChannelContext@@@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_comp.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x180024658 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_compare@PEAVCChannelCont.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D7984 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::_Try_emplace<CChannelContext * const &,>(
        float *a1,
        __int64 a2,
        const unsigned __int8 *a3)
{
  __int64 appended; // rbp
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  float v10; // xmm0_4
  __int64 v11; // rcx
  float v12; // xmm1_4
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16[5]; // [rsp+20h] [rbp-28h] BYREF

  appended = std::_Fnv1a_append_bytes((unsigned __int64)a1, a3, 8uLL);
  std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::_Find_last<CChannelContext *>(
    a1,
    v16,
    a3,
    appended);
  if ( v16[1] )
  {
    *(_QWORD *)a2 = v16[1];
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>((unsigned int)(LODWORD(v16[1]) + 32));
    v8 = *(_QWORD *)a3;
    *(_DWORD *)(v7 + 24) = 0;
    *(_QWORD *)(v7 + 16) = v8;
    v9 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v9 < 0 )
      v10 = (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1))
          + (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1));
    else
      v10 = (float)(int)v9;
    v11 = *((_QWORD *)a1 + 7);
    if ( v11 < 0 )
    {
      v15 = *((_QWORD *)a1 + 7) & 1LL | (*((_QWORD *)a1 + 7) >> 1);
      v12 = (float)(int)v15 + (float)(int)v15;
    }
    else
    {
      v12 = (float)(int)v11;
    }
    if ( (float)(v10 / v12) > *a1 )
    {
      v14 = std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Desired_grow_bucket_count(
              (__int64)a1,
              v9);
      std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::_Forced_rehash(
        a1,
        v14);
      *(_OWORD *)v16 = *(_OWORD *)std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::_Find_last<CChannelContext *>(
                                    a1,
                                    v16,
                                    v7 + 16,
                                    appended);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Insert_new_node_before(
                      a1,
                      appended,
                      v16[0],
                      (_QWORD *)v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
