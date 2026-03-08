/*
 * XREFs of ?Copy@?$CConvexPolygonEdgeMap@I@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801FDC0C
 * Callers:
 *     ?Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801FC538 (-Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x1800308A8 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18008048C (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@1@@Z @ 0x18010D8C4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@st.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x1801A41BC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x1801FD4D0 (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygon.c)
 *     ??$_Emplace_hint@UD2D_VECTOR_2F@@AEAUEdgeData@?$CConvexPolygonEdgeMap@I@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@1@QEAU21@$$QEAUD2D_VECTOR_2F@@AEAUEdgeData@?$CConvexPolygonEdgeMap@I@@@Z @ 0x1801FD680 (--$_Emplace_hint@UD2D_VECTOR_2F@@AEAUEdgeData@-$CConvexPolygonEdgeMap@I@@@-$_Tree@V-$_Tmap_trait.c)
 *     ??C?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@@std@@@std@@@std@@QEBAPEBU?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@1@XZ @ 0x1801FDA38 (--C-$reverse_iterator@V-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2.c)
 *     ??F?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801FDA64 (--F-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2D_VECTOR_2.c)
 */

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
