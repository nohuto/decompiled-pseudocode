/*
 * XREFs of ??C?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@@std@@@std@@@std@@QEBAPEBU?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@1@XZ @ 0x1801FDA38
 * Callers:
 *     ?Copy@?$CConvexPolygonEdgeMap@I@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801FDC0C (-Copy@-$CConvexPolygonEdgeMap@I@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ??F?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801FDA64 (--F-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2D_VECTOR_2.c)
 */

__int64 __fastcall std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>>>>::operator->(
        __int64 *a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>>,std::_Iterator_base0>::operator--(&v2);
  return v2 + 28;
}
