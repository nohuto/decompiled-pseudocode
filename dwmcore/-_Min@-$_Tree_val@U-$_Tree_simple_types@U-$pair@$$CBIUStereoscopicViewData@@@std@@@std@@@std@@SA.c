/*
 * XREFs of ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x1801A41BC
 * Callers:
 *     ??$_Find_hint@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x1800B1E74 (--$_Find_hint@UD2D_VECTOR_2F@@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPo.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801A3B98 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801A3D88 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@@std.c)
 *     ??$_Find_hint@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x1801FD7B4 (--$_Find_hint@UD2D_VECTOR_2F@@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeDat_ea_1801FD7B4.c)
 *     ?Copy@?$CConvexPolygonEdgeMap@I@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801FDC0C (-Copy@-$CConvexPolygonEdgeMap@I@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Copy@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801FDDDC (-Copy@-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@QEAAXAEBV1@PEBUD2D_MATRI.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min(
        _QWORD *a1)
{
  __int64 *v1; // rdx

  v1 = (__int64 *)*a1;
  if ( !*(_BYTE *)(*a1 + 25LL) )
  {
    do
    {
      a1 = v1;
      v1 = (__int64 *)*v1;
    }
    while ( !*((_BYTE *)v1 + 25) );
  }
  return a1;
}
