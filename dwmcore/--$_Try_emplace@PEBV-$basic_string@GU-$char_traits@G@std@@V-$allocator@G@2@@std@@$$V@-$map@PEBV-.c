/*
 * XREFs of ??$_Try_emplace@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@std@@_N@1@$$QEAPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18010D1D4
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x18010B170 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Find_lower_bound@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@std@@@1@AEBQEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18010D294 (--$_Find_lower_bound@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18010D2E4 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAPEBV-$basic_string@GU-$char_traits@G@std@@V-$a.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18010D38C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBV-$basic_string@GU-$char_traits@G@std.c)
 *     ?_Check_grow_by_1@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@IEAAXXZ @ 0x18010D474 (-_Check_grow_by_1@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygonEdgeMap@.c)
 */

__int64 __fastcall std::map<std::wstring const *,unsigned int>::_Try_emplace<std::wstring const *,>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // r8
  int v7; // r9d
  char v9; // [rsp+30h] [rbp-38h] BYREF
  void *v10; // [rsp+38h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]
  _QWORD *v13; // [rsp+88h] [rbp+20h] BYREF

  std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Find_lower_bound<std::wstring const *>(
    a1,
    &v11,
    a3);
  if ( *(_BYTE *)(v12 + 25) || *a3 < *(_QWORD *)(v12 + 32) )
  {
    std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>,0>>::_Check_grow_by_1(a1);
    v6 = *a1;
    v13 = a3;
    *(_QWORD *)(std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>(
                  (unsigned int)&v9,
                  (_DWORD)a1,
                  v6,
                  v7,
                  (__int64)&v13)
              + 8) = 0LL;
    if ( v10 )
      std::_Deallocate<16,0>(v10, 0x30uLL);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const * const,unsigned int>>>::_Insert_node(
                      a1,
                      &v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
