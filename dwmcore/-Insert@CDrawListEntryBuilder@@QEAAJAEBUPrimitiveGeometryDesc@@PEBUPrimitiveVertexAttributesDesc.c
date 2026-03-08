/*
 * XREFs of ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005C788
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x1800102A0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180060AB0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B4C40 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x1802221E4 (-CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180012974 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x180033270 (--0CRectanglesShape@@QEAA@XZ.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180035DF4 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005C728 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005CB60 (-InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttribut.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800627D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18007F7E4 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800803C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18008048C (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180095F40 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800D45A4 (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800D4790 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x1800D9444 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z.c)
 *     ?clear_region@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800D9948 (-clear_region@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_.c)
 *     ?resize@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBUPrimitiveUVDesc@@@Z @ 0x1800D99B0 (-resize@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expans.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DBA68 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@1@@Z @ 0x18010D8C4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@st.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@VCRectangleMapStrategy@CEdgeFlagsMap@@VCPolygonMapStrategy@4@@std@@QEAAXXZ @ 0x1801F7F40 (-_Destroy@-$_Variant_base@Umonostate@std@@VCRectangleMapStrategy@CEdgeFlagsMap@@VCPolygonMapStra.c)
 *     ?Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801FC538 (-Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::Insert(
        CDrawListEntryBuilder *this,
        const struct PrimitiveGeometryDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        struct D2D_MATRIX_3X2_F *a4)
{
  char v4; // al
  char v5; // r12
  D2D1_MATRIX_3X2_F *v6; // rbx
  unsigned int v10; // esi
  int inserted; // eax
  unsigned int v13; // ecx
  __int64 v14; // xmm1_8
  const struct D2D_MATRIX_3X2_F *v15; // rdx
  struct CShape *v16; // r15
  char v17; // dl
  bool v18; // zf
  char v19; // dl
  struct D2D_RECT_F *v20; // r9
  unsigned int v21; // edx
  const struct D2D_MATRIX_3X2_F *v22; // r8
  __int64 v23; // rdx
  gsl::details *v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r9
  __int64 v27; // rax
  int v28; // r10d
  __int64 v29; // r11
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  char *v32; // rax
  unsigned __int64 v33; // r9
  __int128 v34; // xmm0
  __int64 v35; // rax
  int v36; // eax
  unsigned int v37; // ecx
  _BYTE *v38; // rbx
  int v39; // eax
  unsigned int v40; // ecx
  const struct CEdgeFlagsMap *v41; // rdx
  _BYTE *v42; // rcx
  unsigned int v43; // ecx
  FLOAT m12; // xmm1_4
  __int64 v45; // r8
  FLOAT dx; // xmm0_4
  FLOAT m22; // xmm1_4
  HANDLE ProcessHeap; // rax
  struct CShape *v49; // [rsp+30h] [rbp-D0h] BYREF
  struct CShape *v50; // [rsp+38h] [rbp-C8h] BYREF
  char v51; // [rsp+40h] [rbp-C0h]
  struct D2D_MATRIX_3X2_F v52; // [rsp+48h] [rbp-B8h] BYREF
  char v53; // [rsp+60h] [rbp-A0h]
  _QWORD v54[3]; // [rsp+68h] [rbp-98h] BYREF
  char v55; // [rsp+80h] [rbp-80h]
  _BYTE v56[80]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v57; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  __int64 v60; // [rsp+100h] [rbp+0h]
  __int128 v61; // [rsp+108h] [rbp+8h]
  __int128 v62; // [rsp+118h] [rbp+18h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+128h] [rbp+28h] BYREF
  __int128 v64; // [rsp+140h] [rbp+40h] BYREF
  __int128 v65; // [rsp+150h] [rbp+50h]
  __int128 v66; // [rsp+160h] [rbp+60h]
  int v67; // [rsp+170h] [rbp+70h]
  D2D1_MATRIX_3X2_F v68[2]; // [rsp+190h] [rbp+90h] BYREF
  LPVOID lpMem; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE *v70; // [rsp+1C8h] [rbp+C8h]
  char *v71; // [rsp+1D0h] [rbp+D0h]
  _BYTE v72[208]; // [rsp+1D8h] [rbp+D8h] BYREF
  char v73; // [rsp+2A8h] [rbp+1A8h] BYREF
  _BYTE v74[80]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v4 = *((_BYTE *)a2 + 24);
  v5 = 0;
  v6 = a4;
  v10 = 0;
  if ( (v4 & 1) == 0 && (*((float *)a2 + 2) <= *(float *)a2 || *((float *)a2 + 3) <= *((float *)a2 + 1))
    || (v4 & 6) == 0 )
  {
    return v10;
  }
  if ( *((_BYTE *)this + 4473) )
  {
    if ( a4 )
    {
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&matrix,
        (const struct D2D1::Matrix3x2F *)a4,
        (CDrawListEntryBuilder *)((char *)this + 32));
      v6 = v68;
      v68[0] = matrix;
      goto LABEL_13;
    }
    v6 = (D2D1_MATRIX_3X2_F *)((char *)this + 32);
  }
  if ( !v6 )
    goto LABEL_8;
LABEL_13:
  if ( D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)v6) )
  {
LABEL_8:
    inserted = CDrawListEntryBuilder::InsertWorker(this, a2, a3);
    v10 = inserted;
    if ( inserted < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, inserted, 0xC8u, 0LL);
    return v10;
  }
  v14 = *(_QWORD *)&v6->m[2][0];
  *(_OWORD *)&matrix.m11 = *(_OWORD *)&v6->m11;
  *(_QWORD *)&matrix.m[2][0] = v14;
  if ( !D2D1InvertMatrix(&matrix) )
    return v10;
  v16 = 0LL;
  v17 = (v53 ^ *((_BYTE *)a2 + 24)) & 6;
  v50 = 0LL;
  LOBYTE(v15) = v53 ^ v17;
  v18 = (*((_BYTE *)a2 + 24) & 1) == 0;
  v51 = 0;
  v55 = 0;
  v53 = (char)v15;
  if ( v18 )
  {
    if ( D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)v6, v15) )
    {
      v53 = v19 & 0xFE;
      D2DMatrixHelper::TransformRect_AxisAlignedPreserving(a2, (const struct D2D_RECT_F *)v6, &v52, v20);
      LODWORD(v52.dx) = D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
                          (D2DMatrixHelper *)*((unsigned int *)a2 + 4),
                          v21,
                          v22);
      goto LABEL_18;
    }
    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v74);
    v62 = *(_OWORD *)a2;
    CRectanglesShape::SetSingleRect((CRectanglesShape *)v74, (const struct MilRectF *)&v62);
    CMILMatrix::CMILMatrix((CMILMatrix *)v56, v6);
    v10 = CShape::CopyShape((CShape *)v74, (const struct CMILMatrix *)v56, &v49);
    if ( (v10 & 0x80000000) == 0 )
    {
      v16 = v49;
      CShapePtr::Release((CShapePtr *)&v50);
      m12 = v6->m12;
      v45 = *((unsigned int *)a2 + 4);
      v5 = 1;
      *(FLOAT *)&v64 = v6->m11;
      HIDWORD(v64) = LODWORD(v6->m21);
      dx = v6->dx;
      *(_QWORD *)((char *)&v64 + 4) = LODWORD(m12);
      m22 = v6->m22;
      *((FLOAT *)&v65 + 2) = dx;
      *(_QWORD *)&v65 = LODWORD(m22);
      HIDWORD(v65) = LODWORD(v6->dy);
      v50 = v16;
      v51 = 1;
      LODWORD(v66) = 1065353216;
      CEdgeFlagsMap::AddEdgeFlags(v54, a2, v45, &v64, LODWORD(FLOAT_0_000081380211));
      v53 |= 1u;
      *(_QWORD *)&v52.m11 = v49;
      *(_QWORD *)&v52.m[1][0] = v54;
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v74);
      goto LABEL_18;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v10, 0xFEu, 0LL);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v74);
LABEL_49:
    std::_Variant_base<std::monostate,CEdgeFlagsMap::CRectangleMapStrategy,CEdgeFlagsMap::CPolygonMapStrategy>::_Destroy(v54);
    CShapePtr::Release((CShapePtr *)&v50);
    return v10;
  }
  CMILMatrix::CMILMatrix((CMILMatrix *)&v64, v6);
  v39 = CShape::CopyShape(*(CShape **)a2, (const struct CMILMatrix *)&v64, &v49);
  v10 = v39;
  if ( v39 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0xE4u, 0LL);
    goto LABEL_49;
  }
  v16 = v49;
  CShapePtr::Release((CShapePtr *)&v50);
  v41 = (const struct CEdgeFlagsMap *)*((_QWORD *)a2 + 1);
  v5 = 1;
  v50 = v16;
  v51 = 1;
  if ( v41 )
    CEdgeFlagsMap::Copy((CEdgeFlagsMap *)v54, v41, v6);
  v53 |= 1u;
  *(_QWORD *)&v52.m11 = v49;
  *(_QWORD *)&v52.m[1][0] = v54;
LABEL_18:
  v61 = 0uLL;
  lpMem = v72;
  v70 = v72;
  v71 = &v73;
  if ( a3 )
  {
    v23 = *((_QWORD *)a3 + 5);
    if ( v23 )
    {
      v64 = 0LL;
      v67 = 0;
      v65 = 0LL;
      v66 = 0LL;
      detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::resize(
        &lpMem,
        v23,
        &v64);
      v25 = *((_QWORD *)a3 + 5);
      if ( v25 )
      {
        v26 = 0LL;
        while ( 1 )
        {
          *(FLOAT *)&v64 = matrix.m11;
          *(_QWORD *)((char *)&v64 + 4) = LODWORD(matrix.m12);
          HIDWORD(v64) = LODWORD(matrix.m21);
          *(_QWORD *)&v65 = LODWORD(matrix.m22);
          *((_QWORD *)&v65 + 1) = *(_QWORD *)&matrix.m[2][0];
          LODWORD(v66) = 1065353216;
          if ( v26 >= v25 )
          {
            gsl::details::terminate(v24);
            __debugbreak();
          }
          v27 = Matrix3x3::operator*(&v64, v68, 52 * v26 + *((_QWORD *)a3 + 6));
          v30 = *(_OWORD *)v27;
          v24 = (gsl::details *)*(unsigned int *)(v27 + 32);
          v31 = *(_OWORD *)(v27 + 16);
          v32 = (char *)lpMem;
          *(_OWORD *)((char *)lpMem + v29) = v30;
          *(_OWORD *)&v32[v29 + 16] = v31;
          *(_DWORD *)&v32[v29 + 32] = (_DWORD)v24;
          if ( v33 >= *((_QWORD *)a3 + 5) )
            break;
          v26 = (unsigned int)(v28 + 1);
          *(_OWORD *)((char *)lpMem + v29 + 36) = *(_OWORD *)(v29 + *((_QWORD *)a3 + 6) + 36);
          v25 = *((_QWORD *)a3 + 5);
          if ( v26 >= v25 )
            goto LABEL_25;
        }
LABEL_40:
        gsl::details::terminate(v24);
        JUMPOUT(0x18005CB56LL);
      }
LABEL_25:
      v24 = (gsl::details *)lpMem;
      v34 = *(_OWORD *)a3;
      v58 = *((_QWORD *)a3 + 2);
      v59 = *((_QWORD *)a3 + 3);
      v60 = *((_QWORD *)a3 + 4);
      v35 = 0x4EC4EC4EC4EC4EC5LL * ((v70 - (_BYTE *)lpMem) >> 2);
      v57 = v34;
      *(_QWORD *)&v62 = v35;
      if ( v35 == -1 )
        goto LABEL_40;
      *((_QWORD *)&v62 + 1) = lpMem;
      if ( !lpMem )
      {
        if ( v35 )
          goto LABEL_40;
      }
      a3 = (const struct PrimitiveVertexAttributesDesc *)&v57;
      v61 = v62;
    }
  }
  v36 = CDrawListEntryBuilder::InsertWorker(this, (const struct PrimitiveGeometryDesc *)&v52, a3);
  v10 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x121u, 0LL);
    v42 = lpMem;
    if ( 0x4EC4EC4EC4EC4EC5LL * ((v70 - (_BYTE *)lpMem) >> 2) )
    {
      detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::clear_region(
        &lpMem,
        0LL);
      v42 = lpMem;
    }
    lpMem = 0LL;
    if ( v42 == v72 )
      v42 = 0LL;
    operator delete(v42);
    goto LABEL_49;
  }
  v38 = lpMem;
  if ( 0x4EC4EC4EC4EC4EC5LL * ((v70 - (_BYTE *)lpMem) >> 2) )
  {
    detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::clear_region(
      &lpMem,
      0LL);
    v38 = lpMem;
  }
  lpMem = 0LL;
  if ( v38 != v72 && v38 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v38);
  }
  if ( v55 != -1 && (unsigned int)v55 > 1 )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
      v54,
      v54,
      *(_QWORD *)(v54[0] + 8LL));
    std::_Deallocate<16,0>(v54[0], 48LL);
  }
  if ( v5 && v16 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v16)(v16, 1LL);
  return v10;
}
