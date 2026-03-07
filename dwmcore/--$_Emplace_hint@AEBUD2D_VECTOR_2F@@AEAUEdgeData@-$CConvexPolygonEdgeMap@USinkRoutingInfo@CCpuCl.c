__int64 __fastcall std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>,0>>::_Emplace_hint<D2D_VECTOR_2F const &,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 v9; // r14
  __int64 v10; // r9
  __int64 v11; // rax
  __int128 v12; // xmm6
  __int128 v14; // [rsp+20h] [rbp-68h] BYREF
  __int64 v15; // [rsp+30h] [rbp-58h]
  _BYTE v16[32]; // [rsp+40h] [rbp-48h] BYREF

  v4 = *a1;
  std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>(
    &v14,
    a1);
  v9 = *((_QWORD *)&v14 + 1);
  v10 = *((_QWORD *)&v14 + 1) + 28LL;
  *(_QWORD *)(*((_QWORD *)&v14 + 1) + 28LL) = *a3;
  *(_QWORD *)(v10 + 8) = *(_QWORD *)a4;
  *(_DWORD *)(v10 + 16) = *(_DWORD *)(a4 + 8);
  *(_QWORD *)v9 = v4;
  *(_QWORD *)(v9 + 8) = v4;
  *(_QWORD *)(v9 + 16) = v4;
  *(_WORD *)(v9 + 24) = 0;
  v11 = std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>,0>>::_Find_hint<D2D_VECTOR_2F>(
          a1,
          v16,
          a2);
  v12 = *(_OWORD *)v11;
  v15 = *(_QWORD *)(v11 + 16);
  v14 = v12;
  if ( (_BYTE)v15 )
  {
    std::_Deallocate<16,0>(v9, 48LL);
    return v14;
  }
  else
  {
    std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>,0>>::_Check_grow_by_1(a1);
    v14 = v12;
    return std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>>::_Insert_node(
             a1,
             &v14,
             v9);
  }
}
