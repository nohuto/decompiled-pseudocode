/*
 * XREFs of ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800B1EFC
 * Callers:
 *     ??$_Emplace_hint@AEBUD2D_VECTOR_2F@@AEAUEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@1@QEAU21@AEBUD2D_VECTOR_2F@@AEAUEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@Z @ 0x1800B1D64 (--$_Emplace_hint@AEBUD2D_VECTOR_2F@@AEAUEdgeData@-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuCl.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@2@@Z @ 0x1800B1FDC (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolyg.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1801A41E0 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Insert_node(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  _QWORD *v4; // r11
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // rcx

  ++*(_QWORD *)(a1 + 8);
  v3 = a3;
  v4 = *(_QWORD **)a1;
  v6 = *(_QWORD **)a2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a2;
  if ( v6 == v4 )
  {
    *v4 = a3;
    v4[1] = a3;
    v4[2] = a3;
    *(_BYTE *)(a3 + 24) = 1;
    return v3;
  }
  if ( *(_DWORD *)(a2 + 8) )
  {
    *v6 = a3;
    if ( v6 == (_QWORD *)*v4 )
      *v4 = a3;
  }
  else
  {
    v6[2] = a3;
    if ( v6 == (_QWORD *)v4[2] )
      v4[2] = a3;
  }
  v7 = *(_QWORD *)(a3 + 8);
  v8 = a3;
  while ( !*(_BYTE *)(v7 + 24) )
  {
    v9 = *(_QWORD *)(v8 + 8);
    v10 = *(__int64 **)(v9 + 8);
    v11 = *v10;
    if ( v9 == *v10 )
    {
      v11 = v10[2];
      if ( !*(_BYTE *)(v11 + 24) )
      {
LABEL_15:
        *(_BYTE *)(v9 + 24) = 1;
        *(_BYTE *)(v11 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + 24LL) = 0;
        v8 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL);
        goto LABEL_12;
      }
      if ( v8 == *(_QWORD *)(v9 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Lrotate(
          a1,
          *(_QWORD *)(v8 + 8),
          a3,
          v3);
      *(_BYTE *)(*(_QWORD *)(v8 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL),
        a3,
        v3);
    }
    else
    {
      if ( !*(_BYTE *)(v11 + 24) )
        goto LABEL_15;
      if ( v8 == *(_QWORD *)v9 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
          a1,
          *(_QWORD *)(v8 + 8),
          a3,
          v3);
      *(_BYTE *)(*(_QWORD *)(v8 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Lrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL),
        a3,
        v3);
    }
LABEL_12:
    v7 = *(_QWORD *)(v8 + 8);
  }
  *(_BYTE *)(v4[1] + 24LL) = 1;
  return v3;
}
