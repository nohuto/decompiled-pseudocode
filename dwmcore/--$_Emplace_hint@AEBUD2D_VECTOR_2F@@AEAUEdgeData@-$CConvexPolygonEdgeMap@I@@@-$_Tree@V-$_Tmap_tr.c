/*
 * XREFs of ??$_Emplace_hint@AEBUD2D_VECTOR_2F@@AEAUEdgeData@?$CConvexPolygonEdgeMap@I@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@1@QEAU21@AEBUD2D_VECTOR_2F@@AEAUEdgeData@?$CConvexPolygonEdgeMap@I@@@Z @ 0x1801FD594
 * Callers:
 *     ?TryAddEdge@?$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@AEBIM@Z @ 0x1801FDE94 (-TryAddEdge@-$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@AEBIM@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@std@@@1@@Z @ 0x18010D354 (--0-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@U-$pair@QEBV-$basic_string@GU-$char_traits.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801A4034 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRo.c)
 *     ??$_Find_hint@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x1801FD7B4 (--$_Find_hint@UD2D_VECTOR_2F@@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeDat_ea_1801FD7B4.c)
 *     ?_Check_grow_by_1@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@IEAAXXZ @ 0x1801FE0BC (-_Check_grow_by_1@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPo_ea_1801FE0BC.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Emplace_hint<D2D_VECTOR_2F const &,CConvexPolygonEdgeMap<unsigned int>::EdgeData &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v4; // rdi
  _QWORD *v9; // r14
  __int64 v10; // r9
  __int64 v11; // rax
  __int128 v12; // xmm6
  __int128 v14; // [rsp+20h] [rbp-68h] BYREF
  __int64 v15; // [rsp+30h] [rbp-58h]
  _BYTE v16[32]; // [rsp+40h] [rbp-48h] BYREF

  v4 = *a1;
  std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>(
    &v14,
    (__int64)a1);
  v9 = (_QWORD *)*((_QWORD *)&v14 + 1);
  v10 = *((_QWORD *)&v14 + 1) + 28LL;
  *(_QWORD *)(*((_QWORD *)&v14 + 1) + 28LL) = *a3;
  *(_QWORD *)(v10 + 8) = *(_QWORD *)a4;
  *(_DWORD *)(v10 + 16) = *(_DWORD *)(a4 + 8);
  *v9 = v4;
  v9[1] = v4;
  v9[2] = v4;
  *((_WORD *)v9 + 12) = 0;
  v11 = std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Find_hint<D2D_VECTOR_2F>(
          a1,
          v16,
          a2);
  v12 = *(_OWORD *)v11;
  v15 = *(_QWORD *)(v11 + 16);
  v14 = v12;
  if ( (_BYTE)v15 )
  {
    std::_Deallocate<16,0>(v9, 0x30uLL);
    return v14;
  }
  else
  {
    std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Check_grow_by_1(a1);
    v14 = v12;
    return std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Insert_node(
             (__int64)a1,
             (__int64)&v14,
             (__int64)v9);
  }
}
