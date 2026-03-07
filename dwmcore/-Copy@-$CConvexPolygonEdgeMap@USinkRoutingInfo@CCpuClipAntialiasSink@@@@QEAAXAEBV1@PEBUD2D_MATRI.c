void __fastcall CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::Copy(__int64 *a1, __int64 *a2)
{
  _QWORD *v2; // rbx
  __int64 v5; // r8
  _QWORD *v6; // r8
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // r8
  __int64 v10; // rax
  __int64 i; // rcx
  char v12; // [rsp+20h] [rbp-18h]

  if ( a1 != a2 )
  {
    v2 = (_QWORD *)*a1;
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
      (__int64)a1,
      (__int64)a1,
      *(_QWORD *)(*a1 + 8));
    v2[1] = v2;
    *v2 = v2;
    v2[2] = v2;
    v5 = *a1;
    a1[1] = 0LL;
    *(_QWORD *)(*a1 + 8) = std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Copy_nodes<std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Copy_tag>(
                             a1,
                             *(_QWORD *)(*a2 + 8),
                             v5,
                             v12);
    v6 = (_QWORD *)*a1;
    a1[1] = a2[1];
    v7 = v6[1];
    if ( *(_BYTE *)(v7 + 25) )
    {
      *v6 = v6;
      *(_QWORD *)(*a1 + 16) = *a1;
    }
    else
    {
      v8 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v7);
      *v9 = v8;
      v10 = *(_QWORD *)(*a1 + 8);
      for ( i = *(_QWORD *)(v10 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
        v10 = i;
      *(_QWORD *)(*a1 + 16) = v10;
    }
  }
}
