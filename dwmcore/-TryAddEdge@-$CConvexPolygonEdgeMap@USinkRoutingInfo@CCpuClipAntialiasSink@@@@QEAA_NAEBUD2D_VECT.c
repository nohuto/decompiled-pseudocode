/*
 * XREFs of ?TryAddEdge@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@QEAA_NAEBUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@AEBUSinkRoutingInfo@CCpuClipAntialiasSink@@M@Z @ 0x1800B1B5C
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800B12AC (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 * Callees:
 *     ??$_Find@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x1800B1BEC (--$_Find@UD2D_VECTOR_2F@@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygon.c)
 *     ??$_Emplace_hint@AEBUD2D_VECTOR_2F@@AEAUEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@1@QEAU21@AEBUD2D_VECTOR_2F@@AEAUEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@Z @ 0x1800B1D64 (--$_Emplace_hint@AEBUD2D_VECTOR_2F@@AEAUEdgeData@-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuCl.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

char __fastcall CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::TryAddEdge(
        __int64 *a1,
        float *a2,
        float *a3,
        int *a4,
        float a5)
{
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  int v13; // ecx
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+28h] [rbp-30h]

  if ( *a2 == 0.0 && a2[1] == 0.0 )
    return 0;
  v9 = std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>,0>>::_Find<D2D_VECTOR_2F>();
  if ( v9 == *a1 )
  {
    v10 = *a4;
    v11 = *a1;
    v14 = *(_QWORD *)a3;
    v15 = v10;
    ((void (__fastcall *)(__int64 *, __int64, float *, __int64 *))std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>,0>>::_Emplace_hint<D2D_VECTOR_2F const &,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData &>)(
      a1,
      v11,
      a2,
      &v14);
    return 1;
  }
  if ( (float)((float)((float)(a3[1] - *(float *)(v9 + 40)) * *(float *)(v9 + 28))
             - (float)((float)(*a3 - *(float *)(v9 + 36)) * *(float *)(v9 + 32))) > a5 )
  {
    v13 = *a4;
    *(_QWORD *)(v9 + 36) = *(_QWORD *)a3;
    *(_DWORD *)(v9 + 44) = v13;
    return 1;
  }
  return 0;
}
