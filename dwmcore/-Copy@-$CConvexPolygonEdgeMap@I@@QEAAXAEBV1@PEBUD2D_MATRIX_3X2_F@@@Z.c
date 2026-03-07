void __fastcall CConvexPolygonEdgeMap<unsigned int>::Copy(__int64 *a1, __int64 *a2, float *a3)
{
  D2DMatrixHelper *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  float v9; // xmm3_4
  float *v10; // rax
  __int64 v11; // rdx
  __m128 v12; // xmm3
  __m128 v13; // xmm2
  _QWORD *v14; // rbx
  _QWORD *v15; // r8
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // r8
  __int64 v19; // rax
  __int64 i; // rcx
  char v21; // [rsp+20h] [rbp-50h]
  struct D2D_MATRIX_3X2_F v22; // [rsp+28h] [rbp-48h] BYREF
  float v23; // [rsp+40h] [rbp-30h]
  float v24; // [rsp+44h] [rbp-2Ch]
  float v25[4]; // [rsp+50h] [rbp-20h] BYREF

  if ( !a3 || D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)a3) )
  {
    if ( a1 != a2 )
    {
      v14 = (_QWORD *)*a1;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
        (__int64)a1,
        (__int64)a1,
        *(_QWORD *)(*a1 + 8));
      v14[1] = v14;
      *v14 = v14;
      v14[2] = v14;
      a1[1] = 0LL;
      *(_QWORD *)(*a1 + 8) = std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Copy_nodes<std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Copy_tag>(
                               a1,
                               *(_QWORD *)(*a2 + 8),
                               *a1,
                               v21);
      v15 = (_QWORD *)*a1;
      a1[1] = a2[1];
      v16 = v15[1];
      if ( *(_BYTE *)(v16 + 25) )
      {
        *v15 = v15;
        *(_QWORD *)(*a1 + 16) = *a1;
      }
      else
      {
        v17 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v16);
        *v18 = v17;
        v19 = *(_QWORD *)(*a1 + 8);
        for ( i = *(_QWORD *)(v19 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
          v19 = i;
        *(_QWORD *)(*a1 + 16) = v19;
      }
    }
  }
  else
  {
    D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(v6, &v22, &v22.m21, &v22.dx);
    v7 = *a2;
    *(_QWORD *)&v22.m11 = *a2;
    while ( v7 != *(_QWORD *)*a2 )
    {
      v8 = std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>>>>::operator->((__int64 *)&v22);
      v9 = (float)((float)(*(float *)(v8 + 8) * a3[1]) + (float)(*(float *)(v8 + 12) * a3[3])) + a3[5];
      v25[0] = (float)((float)(*(float *)(v8 + 12) * a3[2]) + (float)(*(float *)(v8 + 8) * *a3)) + a3[4];
      v25[1] = v9;
      v25[2] = *(float *)(std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>>>>::operator->((__int64 *)&v22)
                        + 16);
      v10 = (float *)std::reverse_iterator<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>>>>::operator->((__int64 *)&v22);
      v11 = *a1;
      v12 = (__m128)*((unsigned int *)v10 + 1);
      v13 = (__m128)*(unsigned int *)v10;
      v13.m128_f32[0] = (float)(v13.m128_f32[0] * v22.dx) + (float)(v10[1] * v23);
      v12.m128_f32[0] = (float)(v12.m128_f32[0] * v24) + (float)(*v10 * v22.dy);
      *(_QWORD *)&v22.m[1][0] = _mm_unpacklo_ps(v13, v12).m128_u64[0];
      std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Emplace_hint<D2D_VECTOR_2F,CConvexPolygonEdgeMap<unsigned int>::EdgeData &>(
        a1,
        v11,
        v22.m[1],
        (__int64)v25);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>>,std::_Iterator_base0>::operator--((__int64 **)&v22);
      v7 = *(_QWORD *)&v22.m11;
    }
  }
}
