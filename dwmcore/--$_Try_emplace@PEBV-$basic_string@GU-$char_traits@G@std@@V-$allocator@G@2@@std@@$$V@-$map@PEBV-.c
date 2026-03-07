__int64 __fastcall std::map<std::wstring const *,unsigned int>::_Try_emplace<std::wstring const *,>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // r8
  int v7; // r9d
  char v9; // [rsp+30h] [rbp-38h] BYREF
  void *v10; // [rsp+38h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]
  _QWORD *v13; // [rsp+88h] [rbp+20h] BYREF

  std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Find_lower_bound<std::wstring const *>(
    a1,
    &v11,
    a3);
  if ( *(_BYTE *)(v12 + 25) || *a3 < *(_QWORD *)(v12 + 32) )
  {
    std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>,0>>::_Check_grow_by_1(a1);
    v6 = *a1;
    v13 = a3;
    *(_QWORD *)(std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>(
                  (unsigned int)&v9,
                  (_DWORD)a1,
                  v6,
                  v7,
                  (__int64)&v13)
              + 8) = 0LL;
    if ( v10 )
      std::_Deallocate<16,0>(v10, 0x30uLL);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const * const,unsigned int>>>::_Insert_node(
                      a1,
                      &v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
