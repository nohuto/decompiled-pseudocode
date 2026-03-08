/*
 * XREFs of ??RCompareEdgeDirection@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@QEBA_NAEBUD2D_VECTOR_2F@@0@Z @ 0x1800B1CA4
 * Callers:
 *     ??$_Find@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x1800B1BEC (--$_Find@UD2D_VECTOR_2F@@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygon.c)
 *     ??$_Find_lower_bound@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@std@@@1@AEBUD2D_VECTOR_2F@@@Z @ 0x1800B1C38 (--$_Find_lower_bound@UD2D_VECTOR_2F@@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CC.c)
 *     ??$_Find_hint@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x1800B1E74 (--$_Find_hint@UD2D_VECTOR_2F@@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPo.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

bool __fastcall CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection::operator()(
        __int64 a1,
        float *a2,
        float *a3)
{
  float v3; // xmm3_4
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  float v9; // xmm1_4
  float v10; // xmm2_4
  unsigned int v11; // r11d
  _DWORD v13[4]; // [rsp+0h] [rbp-28h] BYREF

  v3 = a2[1];
  v13[0] = 0;
  v13[1] = 1;
  v5 = 1LL;
  v13[2] = 3;
  v6 = 1LL;
  v13[3] = 2;
  v7 = 2LL;
  v8 = 2LL;
  v9 = a3[1];
  v10 = *a3;
  if ( v3 <= 0.0 )
    v6 = 0LL;
  if ( *a2 >= 0.0 )
    v8 = 0LL;
  v11 = v13[v8 + v6];
  if ( v9 <= 0.0 )
    v5 = 0LL;
  if ( v10 >= 0.0 )
    v7 = 0LL;
  if ( v11 < v13[v7 + v5] )
    return 1;
  if ( v11 == v13[v7 + v5] )
    return (float)((float)(v9 * *a2) - (float)(v10 * v3)) > 0.000081380211;
  return 0;
}
