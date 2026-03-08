/*
 * XREFs of ??$_Find@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x1800B1BEC
 * Callers:
 *     ?TryAddEdge@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@QEAA_NAEBUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@AEBUSinkRoutingInfo@CCpuClipAntialiasSink@@M@Z @ 0x1800B1B5C (-TryAddEdge@-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@QEAA_NAEBUD2D_VECT.c)
 * Callees:
 *     ??$_Find_lower_bound@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@std@@@1@AEBUD2D_VECTOR_2F@@@Z @ 0x1800B1C38 (--$_Find_lower_bound@UD2D_VECTOR_2F@@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CC.c)
 *     ??RCompareEdgeDirection@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@QEBA_NAEBUD2D_VECTOR_2F@@0@Z @ 0x1800B1CA4 (--RCompareEdgeDirection@-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@QEBA_N.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>,0>>::_Find<D2D_VECTOR_2F>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 result; // rax
  bool v7; // zf
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>,0>>::_Find_lower_bound<D2D_VECTOR_2F>(
    a1,
    v8,
    a2);
  v5 = v9;
  if ( *(_BYTE *)(v9 + 25) )
    return *(_QWORD *)a1;
  v7 = (unsigned __int8)CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection::operator()(
                          v4,
                          a2,
                          v9 + 28) == 0;
  result = v5;
  if ( !v7 )
    return *(_QWORD *)a1;
  return result;
}
