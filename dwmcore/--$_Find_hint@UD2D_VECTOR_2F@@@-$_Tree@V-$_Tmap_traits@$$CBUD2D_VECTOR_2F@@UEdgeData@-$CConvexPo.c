__int64 __fastcall std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Find_hint<D2D_VECTOR_2F>(
        _QWORD **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  char v15; // cl
  __int64 result; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  char v19; // r14
  _QWORD *i; // rbx
  __int64 v21; // rbx
  __int64 v22; // rcx
  bool v23; // zf
  __int128 v24; // xmm0
  __int128 v25; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+30h] [rbp-38h]
  __int64 v27; // [rsp+70h] [rbp+8h] BYREF

  v4 = *a1;
  if ( *(_BYTE *)(a3 + 25) )
  {
    v9 = v4 + 2;
    if ( *(_BYTE *)(v4[1] + 25LL)
      || (unsigned __int8)CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection::operator()(a1, *v9 + 28LL, a4) )
    {
      *(_QWORD *)a2 = *v9;
      *(_BYTE *)(a2 + 16) = 0;
LABEL_32:
      *(_DWORD *)(a2 + 8) = 0;
      return a2;
    }
    goto LABEL_25;
  }
  v10 = a3 + 28;
  v11 = a3 + 28;
  if ( a3 == *v4 )
  {
    if ( (unsigned __int8)CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection::operator()(a1, a4, v11) )
    {
      *(_QWORD *)a2 = a3;
      *(_DWORD *)(a2 + 8) = 1;
      *(_BYTE *)(a2 + 16) = 0;
      return a2;
    }
    goto LABEL_25;
  }
  if ( (unsigned __int8)CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection::operator()(a1, a4, v11) )
  {
    v27 = a3;
    v13 = *(_QWORD *)std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>>,std::_Iterator_base0>::operator--(&v27);
    if ( !(unsigned __int8)CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection::operator()(v14, v13 + 28, a4) )
      goto LABEL_25;
    v15 = *(_BYTE *)(*(_QWORD *)(v13 + 16) + 25LL);
    result = a2;
    *(_BYTE *)(a2 + 16) = 0;
    if ( v15 )
    {
      *(_QWORD *)a2 = v13;
LABEL_12:
      *(_DWORD *)(a2 + 8) = 0;
      return result;
    }
    *(_QWORD *)a2 = a3;
    goto LABEL_14;
  }
  if ( !(unsigned __int8)CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection::operator()(v12, v10, a4) )
  {
    *(_QWORD *)a2 = a3;
    *(_BYTE *)(a2 + 16) = 1;
    goto LABEL_32;
  }
  v17 = *(_QWORD *)(a3 + 16);
  v18 = (_QWORD *)a3;
  v19 = *(_BYTE *)(v17 + 25);
  if ( v19 )
  {
    for ( i = *(_QWORD **)(a3 + 8); !*((_BYTE *)i + 25) && v18 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
      v18 = i;
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v17);
  }
  if ( *((_BYTE *)i + 25)
    || (unsigned __int8)CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection::operator()(v17, a4, (char *)i + 28) )
  {
    *(_BYTE *)(a2 + 16) = 0;
    result = a2;
    if ( v19 )
    {
      *(_QWORD *)a2 = a3;
      goto LABEL_12;
    }
    *(_QWORD *)a2 = i;
LABEL_14:
    *(_DWORD *)(a2 + 8) = 1;
    return result;
  }
LABEL_25:
  std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Find_lower_bound<D2D_VECTOR_2F>(
    a1,
    &v25,
    a4);
  v21 = v26;
  v23 = (unsigned __int8)std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Lower_bound_duplicate<D2D_VECTOR_2F>(
                           v22,
                           v26,
                           a4) == 0;
  result = a2;
  if ( v23 )
  {
    v24 = v25;
    *(_BYTE *)(a2 + 16) = 0;
    *(_OWORD *)a2 = v24;
  }
  else
  {
    *(_QWORD *)a2 = v21;
    *(_DWORD *)(a2 + 8) = 2;
    *(_BYTE *)(a2 + 16) = 1;
  }
  return result;
}
