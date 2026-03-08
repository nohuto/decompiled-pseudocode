/*
 * XREFs of ??$_Find_hint@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x1800B1E74
 * Callers:
 *     ??$_Emplace_hint@AEBUD2D_VECTOR_2F@@AEAUEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@1@QEAU21@AEBUD2D_VECTOR_2F@@AEAUEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@Z @ 0x1800B1D64 (--$_Emplace_hint@AEBUD2D_VECTOR_2F@@AEAUEdgeData@-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuCl.c)
 * Callees:
 *     ??$_Find_lower_bound@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@std@@@1@AEBUD2D_VECTOR_2F@@@Z @ 0x1800B1C38 (--$_Find_lower_bound@UD2D_VECTOR_2F@@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CC.c)
 *     ??RCompareEdgeDirection@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@QEBA_NAEBUD2D_VECTOR_2F@@0@Z @ 0x1800B1CA4 (--RCompareEdgeDirection@-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@QEBA_N.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x1801A41BC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ??F?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801FDA64 (--F-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUD2D_VECTOR_2.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>,0>>::_Find_hint<D2D_VECTOR_2F>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        float *a4)
{
  _QWORD *v4; // rax
  _QWORD *v9; // rbx
  __int64 result; // rax
  float *v11; // rbx
  float *v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  char v16; // cl
  __int64 v17; // rcx
  __int64 v18; // rax
  char v19; // r14
  __int64 i; // rbx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int128 v23; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+30h] [rbp-38h]
  __int64 v25; // [rsp+70h] [rbp+8h] BYREF

  v4 = (_QWORD *)*a1;
  if ( *(_BYTE *)(a3 + 25) )
  {
    v9 = v4 + 2;
    if ( *(_BYTE *)(v4[1] + 25LL)
      || CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection::operator()(
           (__int64)a1,
           (float *)(*v9 + 28LL),
           a4) )
    {
      *(_QWORD *)a2 = *v9;
      *(_BYTE *)(a2 + 16) = 0;
LABEL_5:
      *(_DWORD *)(a2 + 8) = 0;
      return a2;
    }
    goto LABEL_30;
  }
  v11 = (float *)(a3 + 28);
  v12 = (float *)(a3 + 28);
  if ( a3 == *v4 )
  {
    if ( CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection::operator()(
           (__int64)a1,
           a4,
           v12) )
    {
      *(_QWORD *)a2 = a3;
      *(_DWORD *)(a2 + 8) = 1;
LABEL_11:
      *(_BYTE *)(a2 + 16) = 0;
      return a2;
    }
LABEL_30:
    std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>,0>>::_Find_lower_bound<D2D_VECTOR_2F>(
      a1,
      (__int64)&v23,
      (__int64)a4);
    v22 = v24;
    if ( !*(_BYTE *)(v24 + 25)
      && !CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection::operator()(
            v21,
            a4,
            (float *)(v24 + 28)) )
    {
      *(_QWORD *)a2 = v22;
      *(_DWORD *)(a2 + 8) = 2;
      *(_BYTE *)(a2 + 16) = 1;
      return a2;
    }
    *(_OWORD *)a2 = v23;
    goto LABEL_11;
  }
  if ( CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection::operator()(
         (__int64)a1,
         a4,
         v12) )
  {
    v25 = a3;
    v14 = *(_QWORD *)std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>>,std::_Iterator_base0>::operator--(&v25);
    if ( !CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection::operator()(
            v15,
            (float *)(v14 + 28),
            a4) )
      goto LABEL_30;
    v16 = *(_BYTE *)(*(_QWORD *)(v14 + 16) + 25LL);
    result = a2;
    *(_BYTE *)(a2 + 16) = 0;
    if ( v16 )
    {
      *(_QWORD *)a2 = v14;
LABEL_16:
      *(_DWORD *)(a2 + 8) = 0;
      return result;
    }
    *(_QWORD *)a2 = a3;
  }
  else
  {
    if ( !CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection::operator()(v13, v11, a4) )
    {
      *(_QWORD *)a2 = a3;
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_5;
    }
    v17 = *(_QWORD *)(a3 + 16);
    v18 = a3;
    v19 = *(_BYTE *)(v17 + 25);
    if ( v19 )
    {
      for ( i = *(_QWORD *)(a3 + 8); !*(_BYTE *)(i + 25) && v18 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
        v18 = i;
    }
    else
    {
      i = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min();
    }
    if ( !*(_BYTE *)(i + 25)
      && !CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection::operator()(
            v17,
            a4,
            (float *)(i + 28)) )
    {
      goto LABEL_30;
    }
    *(_BYTE *)(a2 + 16) = 0;
    result = a2;
    if ( v19 )
    {
      *(_QWORD *)a2 = a3;
      goto LABEL_16;
    }
    *(_QWORD *)a2 = i;
  }
  *(_DWORD *)(a2 + 8) = 1;
  return result;
}
