/*
 * XREFs of ?TryAddEdge@?$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@AEBIM@Z @ 0x1801FDE94
 * Callers:
 *     ?AddEdgeFlags@CPolygonMapStrategy@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x1801FC384 (-AddEdgeFlags@CPolygonMapStrategy@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMat.c)
 *     ?TryAddEdgeFromEndPoints@?$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_POINT_2F@@0AEBIM@Z @ 0x1801FDF84 (-TryAddEdgeFromEndPoints@-$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_POINT_2F@@0AEBIM@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??$_Emplace_hint@AEBUD2D_VECTOR_2F@@AEAUEdgeData@?$CConvexPolygonEdgeMap@I@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@1@QEAU21@AEBUD2D_VECTOR_2F@@AEAUEdgeData@?$CConvexPolygonEdgeMap@I@@@Z @ 0x1801FD594 (--$_Emplace_hint@AEBUD2D_VECTOR_2F@@AEAUEdgeData@-$CConvexPolygonEdgeMap@I@@@-$_Tree@V-$_Tmap_tr.c)
 *     ??$_Find@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x1801FD76C (--$_Find@UD2D_VECTOR_2F@@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@-$C_ea_1801FD76C.c)
 */

char __fastcall CConvexPolygonEdgeMap<unsigned int>::TryAddEdge(__int64 *a1, __int64 a2, float *a3, int *a4, float a5)
{
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+28h] [rbp-30h]

  if ( *(float *)a2 != 0.0 || *(float *)(a2 + 4) != 0.0 )
  {
    v9 = std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Find<D2D_VECTOR_2F>(
           (__int64)a1,
           a2);
    if ( v9 == *a1 )
    {
      v10 = *a4;
      v11 = *a1;
      v13 = *(_QWORD *)a3;
      v14 = v10;
      std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Emplace_hint<D2D_VECTOR_2F const &,CConvexPolygonEdgeMap<unsigned int>::EdgeData &>(
        a1,
        v11,
        (_QWORD *)a2,
        (__int64)&v13);
      return 1;
    }
    if ( (float)((float)((float)(a3[1] - *(float *)(v9 + 40)) * *(float *)(v9 + 28))
               - (float)((float)(*a3 - *(float *)(v9 + 36)) * *(float *)(v9 + 32))) > a5 )
    {
      v13 = *(_QWORD *)a3;
      *(_QWORD *)(v9 + 36) = v13;
      *(_DWORD *)(v9 + 44) = *a4;
      return 1;
    }
  }
  return 0;
}
