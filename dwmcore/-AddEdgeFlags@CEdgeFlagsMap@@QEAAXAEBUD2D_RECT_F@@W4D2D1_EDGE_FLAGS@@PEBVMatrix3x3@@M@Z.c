/*
 * XREFs of ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x1800D9444
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005C788 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005F2F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x1801FA1DC (-ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V-$span@PEBVC.c)
 *     ?Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801FC538 (-Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180035DF4 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18007F7E4 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800B1E44 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800D45A4 (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?ClipRectAndEdgeFlags@@YA?AW4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@W41@01PEAU2@PEAW41@@Z @ 0x1800D9524 (-ClipRectAndEdgeFlags@@YA-AW4D2D1_EDGE_FLAGS@@AEBUD2D_RECT_F@@W41@01PEAU2@PEAW41@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@1@@Z @ 0x18010D8C4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@st.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@VCRectangleMapStrategy@CEdgeFlagsMap@@VCPolygonMapStrategy@4@@std@@QEAAXXZ @ 0x1801F7F40 (-_Destroy@-$_Variant_base@Umonostate@std@@VCRectangleMapStrategy@CEdgeFlagsMap@@VCPolygonMapStra.c)
 *     ?AddEdgeFlags@CPolygonMapStrategy@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x1801FC384 (-AddEdgeFlags@CPolygonMapStrategy@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMat.c)
 *     ?IsCompatibleTransform@CRectangleMapStrategy@CEdgeFlagsMap@@SA_NPEBVMatrix3x3@@@Z @ 0x1801FC680 (-IsCompatibleTransform@CRectangleMapStrategy@CEdgeFlagsMap@@SA_NPEBVMatrix3x3@@@Z.c)
 *     ?Is2DAffine@Matrix3x3@@QEBA_NXZ @ 0x18026FF00 (-Is2DAffine@Matrix3x3@@QEBA_NXZ.c)
 */

char __fastcall CEdgeFlagsMap::AddEdgeFlags(__int64 *a1, D2DMatrixHelper *a2, unsigned int a3, FLOAT *a4, int a5)
{
  unsigned int v6; // edx
  char v10; // al
  char result; // al
  const struct D2D_MATRIX_3X2_F *v12; // rdx
  __int64 v13; // r9
  int v14; // xmm5_4
  int v15; // xmm4_4
  int v16; // xmm3_4
  int v17; // xmm2_4
  FLOAT v18; // xmm1_4
  SIZE_T v19; // rax
  __int64 v20; // rax
  unsigned int v21; // ebx
  SIZE_T size_of; // rax
  __int64 v23; // rax
  FLOAT v24; // xmm1_4
  int v25; // xmm0_4
  int v26; // xmm1_4
  int v27; // xmm0_4
  int v28; // xmm1_4
  const struct D2D_MATRIX_3X2_F *v29; // r8
  unsigned int v30; // eax
  struct D2D_MATRIX_3X2_F v31; // [rsp+30h] [rbp-40h] BYREF
  int v32; // [rsp+48h] [rbp-28h]
  int v33; // [rsp+4Ch] [rbp-24h]
  int v34; // [rsp+50h] [rbp-20h]
  int v35; // [rsp+54h] [rbp-1Ch]

  v6 = *((char *)a1 + 24);
  if ( *((_BYTE *)a1 + 24) )
  {
    if ( (_BYTE)v6 == 1
      && a1
      && !CEdgeFlagsMap::CRectangleMapStrategy::IsCompatibleTransform((const struct Matrix3x3 *)a4) )
    {
      v21 = *((_DWORD *)a1 + 4);
      *(_OWORD *)&v31.m11 = *(_OWORD *)a1;
      std::_Variant_base<std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>::_Destroy(a1);
      *((_BYTE *)a1 + 24) = 0;
      std::_Variant_base<std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>::_Destroy(a1);
      *((_BYTE *)a1 + 24) = -1;
      *a1 = 0LL;
      a1[1] = 0LL;
      size_of = std::_Get_size_of_n<48>(1uLL);
      v23 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      *(_QWORD *)v23 = v23;
      *(_QWORD *)(v23 + 8) = v23;
      *(_QWORD *)(v23 + 16) = v23;
      *(_WORD *)(v23 + 24) = 257;
      *a1 = v23;
      *((_BYTE *)a1 + 24) = 2;
      CEdgeFlagsMap::CPolygonMapStrategy::AddEdgeFlags(a1, &v31, v21, 0LL, a5);
    }
  }
  else
  {
    if ( !a4 )
      goto LABEL_4;
    if ( !Matrix3x3::Is2DAffine((Matrix3x3 *)a4) )
      goto LABEL_15;
    v14 = *(_DWORD *)(v13 + 28);
    v15 = *(_DWORD *)(v13 + 24);
    v16 = *(_DWORD *)(v13 + 16);
    v17 = *(_DWORD *)(v13 + 12);
    v18 = *(float *)(v13 + 4);
    v31.dx = *(FLOAT *)v13;
    v31.dy = v18;
    v32 = v17;
    v33 = v16;
    v34 = v15;
    v35 = v14;
    if ( D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)v31.m[2], v12) )
    {
LABEL_4:
      if ( v6 != -1 && v6 > 1 )
      {
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
          a1,
          a1,
          *(_QWORD *)(*a1 + 8));
        std::_Deallocate<16,0>(*a1, 48LL);
      }
      *((_DWORD *)a1 + 4) = 0;
      *(_DWORD *)a1 = -8388609;
      *((_DWORD *)a1 + 1) = -8388609;
      v10 = 1;
      *((_DWORD *)a1 + 2) = 2139095039;
      *((_DWORD *)a1 + 3) = 2139095039;
    }
    else
    {
LABEL_15:
      std::_Variant_base<std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>::_Destroy(a1);
      *((_BYTE *)a1 + 24) = -1;
      *a1 = 0LL;
      a1[1] = 0LL;
      v19 = std::_Get_size_of_n<48>(1uLL);
      v20 = std::_Allocate<16,std::_Default_allocate_traits,0>(v19);
      *(_QWORD *)v20 = v20;
      *(_QWORD *)(v20 + 8) = v20;
      *(_QWORD *)(v20 + 16) = v20;
      *(_WORD *)(v20 + 24) = 257;
      *a1 = v20;
      v10 = 2;
    }
    *((_BYTE *)a1 + 24) = v10;
  }
  result = *((_BYTE *)a1 + 24);
  if ( result == 1 )
  {
    if ( a1 )
    {
      if ( a4 )
      {
        v24 = a4[1];
        v31.dx = *a4;
        v25 = *((_DWORD *)a4 + 3);
        v31.dy = v24;
        v26 = *((_DWORD *)a4 + 4);
        v32 = v25;
        v27 = *((_DWORD *)a4 + 6);
        v33 = v26;
        v28 = *((_DWORD *)a4 + 7);
        v34 = v27;
        v35 = v28;
        D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
          a2,
          (const struct D2D_RECT_F *)v31.m[2],
          &v31,
          (struct D2D_RECT_F *)a4);
        v30 = D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving((D2DMatrixHelper *)a3, &v31.dx, v29);
        return ClipRectAndEdgeFlags(a1, *((unsigned int *)a1 + 4), &v31, v30, a1, a1 + 2);
      }
      else
      {
        return ClipRectAndEdgeFlags(a1, *((unsigned int *)a1 + 4), a2, a3, a1, a1 + 2);
      }
    }
  }
  else if ( result == 2 && a1 )
  {
    return CEdgeFlagsMap::CPolygonMapStrategy::AddEdgeFlags(a1, a2, a3, a4, a5);
  }
  return result;
}
