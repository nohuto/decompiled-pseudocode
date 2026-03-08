/*
 * XREFs of ??F?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801FDA64
 * Callers:
 *     ??$_Find_hint@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x1800B1E74 (--$_Find_hint@UD2D_VECTOR_2F@@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPo.c)
 *     ??$_Find_hint@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x1801FD7B4 (--$_Find_hint@UD2D_VECTOR_2F@@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeDat_ea_1801FD7B4.c)
 *     ??C?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@@std@@@std@@@std@@QEBAPEBU?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@1@XZ @ 0x1801FDA38 (--C-$reverse_iterator@V-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2.c)
 *     ?Copy@?$CConvexPolygonEdgeMap@I@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801FDC0C (-Copy@-$CConvexPolygonEdgeMap@I@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>>,std::_Iterator_base0>::operator--(
        __int64 **a1)
{
  __int64 *v1; // rax
  __int64 *v3; // rcx
  __int64 *v4; // r8
  __int64 *v5; // r9
  __int64 *i; // rax

  v1 = *a1;
  if ( *((_BYTE *)*a1 + 25) )
  {
    *a1 = (__int64 *)v1[2];
    return a1;
  }
  v3 = (__int64 *)*v1;
  if ( !*(_BYTE *)(*v1 + 25) )
  {
    for ( i = (__int64 *)v3[2]; !*((_BYTE *)i + 25); i = (__int64 *)i[2] )
      v3 = i;
LABEL_13:
    *a1 = v3;
    return a1;
  }
  v3 = (__int64 *)v1[1];
  if ( !*((_BYTE *)v3 + 25) )
  {
    v4 = v1;
    v5 = v1;
    do
    {
      v1 = v5;
      if ( v4 != (__int64 *)*v3 )
        break;
      v4 = v3;
      *a1 = v3;
      v3 = (__int64 *)v3[1];
      v5 = v4;
      v1 = v4;
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  if ( !*((_BYTE *)v1 + 25) )
    goto LABEL_13;
  return a1;
}
