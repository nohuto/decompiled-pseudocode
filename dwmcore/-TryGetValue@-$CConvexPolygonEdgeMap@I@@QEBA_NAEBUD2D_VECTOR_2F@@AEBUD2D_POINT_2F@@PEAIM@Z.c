/*
 * XREFs of ?TryGetValue@?$CConvexPolygonEdgeMap@I@@QEBA_NAEBUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@PEAIM@Z @ 0x1801FE028
 * Callers:
 *     ?ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV?$StridedSpan@$$CBUD2D_VECTOR_2F@@@@PEBUD2D_POINT_2F@@W4D2D1_EDGE_FLAGS@@PEAUResolveEdgeFlagsResult@1@M@Z @ 0x1800D3FA4 (-ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV-$StridedSpan@$$CBUD2D_VECTOR_2F@@@@PEBUD2D_POINT_2F@@W4D.c)
 * Callees:
 *     ??$_Find@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x1801FD76C (--$_Find@UD2D_VECTOR_2F@@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@-$C_ea_1801FD76C.c)
 */

char __fastcall CConvexPolygonEdgeMap<unsigned int>::TryGetValue(
        _QWORD *a1,
        float *a2,
        float *a3,
        _DWORD *a4,
        float a5)
{
  __int64 v8; // rax
  int v9; // ecx
  char result; // al

  if ( *a2 == 0.0 && a2[1] == 0.0 )
    return 0;
  v8 = std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Find<D2D_VECTOR_2F>(
         (__int64)a1,
         (__int64)a2);
  if ( v8 == *a1
    || a5 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)(a3[1] - *(float *)(v8 + 40)) * *(float *)(v8 + 28))
                          - (float)((float)(*a3 - *(float *)(v8 + 36)) * *(float *)(v8 + 32))) & _xmm) )
  {
    return 0;
  }
  v9 = *(_DWORD *)(v8 + 44);
  result = 1;
  *a4 = v9;
  return result;
}
