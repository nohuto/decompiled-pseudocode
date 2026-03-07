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
