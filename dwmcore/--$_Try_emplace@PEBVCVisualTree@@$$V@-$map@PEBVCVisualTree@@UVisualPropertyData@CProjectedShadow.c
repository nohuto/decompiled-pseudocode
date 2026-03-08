/*
 * XREFs of ??$_Try_emplace@PEBVCVisualTree@@$$V@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@_N@1@$$QEAPEBVCVisualTree@@@Z @ 0x1802164E0
 * Callers:
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x180216840 (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@@1@AEBQEBVCVisualTree@@@Z @ 0x1800058C0 (--$_Find_lower_bound@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyD.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180007230 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCVisualTree@@UVisualPropertyData@CPr.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAPEBVCVisualTree@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAPEBVCVisualTree@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800072A4 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAPEBVCVisualTree@@@1@V-$tuple@$$V@1@@-$_Tree_te.c)
 *     ?_Check_grow_by_1@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x180007370 (-_Check_grow_by_1@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowC.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180007398 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@QEBVCVisualTree@@UVisualPropertyData@CPr.c)
 */

__int64 __fastcall std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::_Try_emplace<CVisualTree const *,>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbx
  _BYTE v11[16]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]
  unsigned __int64 *v14; // [rsp+88h] [rbp+20h] BYREF

  std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Find_lower_bound<CVisualTree const *>(
    a1,
    (__int64)&v12,
    a3);
  if ( *(_BYTE *)(v13 + 25) || *a3 < *(_QWORD *)(v13 + 32) )
  {
    std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Check_grow_by_1((__int64)a1);
    v6 = *a1;
    v14 = a3;
    v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *>>>(
           (__int64)v11,
           (__int64)a1,
           v6,
           v7,
           &v14);
    v9 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)(v8 + 8) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *>>>((__int64)v11);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v12,
                      v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
