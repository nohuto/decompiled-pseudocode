char __fastcall CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::TryAddEdge(
        __int64 *a1,
        float *a2,
        float *a3,
        int *a4,
        float a5)
{
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  int v13; // ecx
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+28h] [rbp-30h]

  if ( *a2 == 0.0 && a2[1] == 0.0 )
    return 0;
  v9 = std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>,0>>::_Find<D2D_VECTOR_2F>();
  if ( v9 == *a1 )
  {
    v10 = *a4;
    v11 = *a1;
    v14 = *(_QWORD *)a3;
    v15 = v10;
    ((void (__fastcall *)(__int64 *, __int64, float *, __int64 *))std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>,0>>::_Emplace_hint<D2D_VECTOR_2F const &,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData &>)(
      a1,
      v11,
      a2,
      &v14);
    return 1;
  }
  if ( (float)((float)((float)(a3[1] - *(float *)(v9 + 40)) * *(float *)(v9 + 28))
             - (float)((float)(*a3 - *(float *)(v9 + 36)) * *(float *)(v9 + 32))) > a5 )
  {
    v13 = *a4;
    *(_QWORD *)(v9 + 36) = *(_QWORD *)a3;
    *(_DWORD *)(v9 + 44) = v13;
    return 1;
  }
  return 0;
}
