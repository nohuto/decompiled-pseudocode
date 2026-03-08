/*
 * XREFs of ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180032D94
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005F2F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180060AB0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x18007FE50 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800804EC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x180033270 (--0CRectanglesShape@@QEAA@XZ.c)
 *     ?CreateCombinedGeometry@CD2DFactory@@QEAAJPEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@01W4D2D1_COMBINE_MODE@@PEAPEAU2@@Z @ 0x1800333AC (-CreateCombinedGeometry@CD2DFactory@@QEAAJPEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@01W4D2D1_COMB.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003341C (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ??0CPolygonShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x180033454 (--0CPolygonShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x180092148 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180095F40 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800E7210 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1801AF88C (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CShape::D2DCombine(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        enum D2D1_COMBINE_MODE a5,
        CRectanglesShape **a6)
{
  int D2DGeometry; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  enum D2D1_COMBINE_MODE v12; // eax
  struct D2D_MATRIX_3X2_F *v13; // rcx
  unsigned int v14; // xmm1_4
  struct CRectanglesShape *v15; // rcx
  CPolygonShape *v16; // rax
  unsigned int v17; // ecx
  CPolygonShape *v18; // rax
  struct CObjectCache *ObjectCache; // rdx
  CRectanglesShape *v21; // rax
  int v22; // r8d
  CRectanglesShape *v23; // rax
  unsigned int v24; // ecx
  CComplexShape *v25; // rax
  unsigned int v26; // ecx
  CComplexShape *v27; // rax
  unsigned int v28; // [rsp+20h] [rbp-E0h]
  struct ID2D1Geometry *v29; // [rsp+40h] [rbp-C0h] BYREF
  struct ID2D1Geometry *v30; // [rsp+48h] [rbp-B8h] BYREF
  struct ID2D1Geometry *v31; // [rsp+50h] [rbp-B0h] BYREF
  struct D2D_MATRIX_3X2_F v32; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v33; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v34[80]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v35[80]; // [rsp+D0h] [rbp-30h] BYREF

  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v35);
  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v34);
  v30 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  if ( a1 )
  {
    D2DGeometry = (*(__int64 (__fastcall **)(__int64, _QWORD, struct ID2D1Geometry **))(*(_QWORD *)a1 + 24LL))(
                    a1,
                    0LL,
                    &v30);
    v11 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      v28 = 528;
      goto LABEL_51;
    }
  }
  else
  {
    D2DGeometry = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v35, 0LL, &v30);
    v11 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      v28 = 532;
      goto LABEL_51;
    }
  }
  if ( a3 )
  {
    D2DGeometry = (*(__int64 (__fastcall **)(__int64, _QWORD, struct ID2D1Geometry **))(*(_QWORD *)a3 + 24LL))(
                    a3,
                    0LL,
                    &v31);
    v11 = D2DGeometry;
    if ( D2DGeometry >= 0 )
      goto LABEL_5;
    v28 = 537;
LABEL_51:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, D2DGeometry, v28, 0LL);
    goto LABEL_18;
  }
  D2DGeometry = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v34, 0LL, &v31);
  v11 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    v28 = 541;
    goto LABEL_51;
  }
LABEL_5:
  if ( a5 )
  {
    if ( a5 == D2D1_COMBINE_MODE_INTERSECT )
      v12 = D2D1_COMBINE_MODE_INTERSECT;
    else
      v12 = D2D1_COMBINE_MODE_EXCLUDE;
  }
  else
  {
    v12 = D2D1_COMBINE_MODE_UNION;
  }
  if ( a4 )
  {
    v13 = &v32;
    v14 = *(_DWORD *)(a4 + 4);
    v32.m11 = *(FLOAT *)a4;
    *(_QWORD *)&v32.m[0][1] = __PAIR64__(*(_DWORD *)(a4 + 16), v14);
    *(_QWORD *)&v32.m[1][1] = __PAIR64__(*(_DWORD *)(a4 + 48), *(_DWORD *)(a4 + 20));
    v32.dy = *(FLOAT *)(a4 + 52);
  }
  else
  {
    v13 = 0LL;
  }
  D2DGeometry = CD2DFactory::CreateCombinedGeometry((CD2DFactory *)v13, v30, 0LL, v31, v13, v12, &v29);
  v11 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    v28 = 549;
    goto LABEL_51;
  }
  D2DGeometry = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, __int128 *))(*(_QWORD *)v29 + 32LL))(
                  v29,
                  0LL,
                  &v33);
  v11 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    v28 = 553;
    goto LABEL_51;
  }
  *(_OWORD *)&v32.m11 = v33;
  if ( (unsigned __int8)IsRectEmptyOrInvalid(&v32) )
  {
    ObjectCache = CThreadContext::GetObjectCache(v15);
    v21 = 0LL;
    v22 = *((_DWORD *)ObjectCache + 1);
    if ( v22 )
    {
      v21 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
      *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v21;
      *((_DWORD *)ObjectCache + 1) = v22 - 1;
    }
    if ( v21 || (v21 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
    {
      v23 = CRectanglesShape::CRectanglesShape(v21);
      *a6 = v23;
      if ( v23 )
        goto LABEL_18;
    }
    else
    {
      *a6 = 0LL;
    }
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2147024882, 0x22Eu, 0LL);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1)
         && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a3 + 56LL))(a3)
         && (unsigned int)a5 <= D2D1_COMBINE_MODE_INTERSECT )
  {
    v16 = (CPolygonShape *)DefaultHeap::Alloc(0x18uLL);
    if ( v16 )
    {
      v18 = CPolygonShape::CPolygonShape(v16, v29);
      *a6 = v18;
      if ( v18 )
        goto LABEL_18;
    }
    else
    {
      *a6 = 0LL;
    }
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024882, 0x239u, 0LL);
  }
  else
  {
    v25 = (CComplexShape *)DefaultHeap::Alloc(0x18uLL);
    if ( v25 )
    {
      v27 = CComplexShape::CComplexShape(v25, v29);
      *a6 = v27;
      if ( v27 )
        goto LABEL_18;
    }
    else
    {
      *a6 = 0LL;
    }
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2147024882, 0x23Eu, 0LL);
  }
LABEL_18:
  if ( v29 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v30 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v31 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v31 + 16LL))(v31);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v34);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v35);
  return v11;
}
