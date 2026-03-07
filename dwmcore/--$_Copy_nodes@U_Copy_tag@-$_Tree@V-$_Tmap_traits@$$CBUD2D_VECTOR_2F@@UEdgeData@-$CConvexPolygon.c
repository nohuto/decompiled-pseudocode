__int64 __fastcall std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Copy_nodes<std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Copy_tag>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // rbp
  SIZE_T size_of; // rax
  __int64 v10; // rsi
  __int64 v11; // r9
  char v12; // di
  __int64 v13; // r9

  v5 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    size_of = std::_Get_size_of_n<48>(1uLL);
    v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    LOBYTE(v11) = a4;
    *(_OWORD *)(v10 + 28) = *(_OWORD *)(a2 + 28);
    *(_DWORD *)(v10 + 44) = *(_DWORD *)(a2 + 44);
    *(_QWORD *)v10 = v5;
    *(_QWORD *)(v10 + 16) = v5;
    *(_WORD *)(v10 + 24) = 0;
    *(_QWORD *)(v10 + 8) = a3;
    *(_BYTE *)(v10 + 24) = *(_BYTE *)(a2 + 24);
    v12 = *(_BYTE *)(v5 + 25);
    *(_QWORD *)v10 = std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Copy_nodes<std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Copy_tag>(
                       a1,
                       *(_QWORD *)a2,
                       v10,
                       v11);
    LOBYTE(v13) = a4;
    *(_QWORD *)(v10 + 16) = std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Copy_nodes<std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Copy_tag>(
                              a1,
                              *(_QWORD *)(a2 + 16),
                              v10,
                              v13);
    if ( !v12 )
      return v5;
    return v10;
  }
  return v5;
}
