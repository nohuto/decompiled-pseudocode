/*
 * XREFs of ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x1800B9780
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B92D0 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x1800185E4 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??8RenderTargetInfo@@QEBA_NAEBV0@@Z @ 0x18004FB68 (--8RenderTargetInfo@@QEBA_NAEBV0@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180051BFC (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180056430 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180056574 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800577C0 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180057AA8 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x180057BE4 (-GetPixelFormatInfo@CDrawListBitmap@@QEBA-AUPixelFormatInfo@@XZ.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800584DC (-Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18005A210 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180092A8C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800931E8 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x180098BE8 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?FromD2D1ExtendMode@ExtendMode@@YA?AW4Enum@1@W4D2D1_EXTEND_MODE@@@Z @ 0x1800B9D80 (-FromD2D1ExtendMode@ExtendMode@@YA-AW4Enum@1@W4D2D1_EXTEND_MODE@@@Z.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x1800B9D94 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x1800B9F3C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800B9F70 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x1800B9FB4 (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800B9FD8 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x1800BA118 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BA1F8 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x1800BA320 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800BA628 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800C1EDC (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C4488 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C876C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C8D60 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C8D94 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800D3444 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800E5E44 (--1CRectanglesShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800EB7D4 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x18019D908 (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?CalculatePrimitiveToBitmap@CPrimitiveGroupDrawListGenerator@@CAXAEBVCDrawListBitmap@@AEBUD2D_MATRIX_3X2_F@@PEAVMatrix3x3@@@Z @ 0x18026917C (-CalculatePrimitiveToBitmap@CPrimitiveGroupDrawListGenerator@@CAXAEBVCDrawListBitmap@@AEBUD2D_MA.c)
 *     ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x180269264 (-CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::GenerateDrawList(
        CPrimitiveGroupDrawListGenerator *this,
        struct CDrawingContext *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v6; // rcx
  CDrawListCache *v7; // r10
  char v8; // r15
  int v9; // r12d
  struct CMILMatrix *v10; // rdx
  unsigned int v11; // ebx
  int CpuClip; // eax
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // rdi
  int v18; // ebx
  bool v19; // cf
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // ecx
  char v23; // r12
  char v24; // r13
  int v25; // ecx
  char v26; // bl
  struct CCommonRenderingEffect *v27; // rcx
  struct CObjectCache *ObjectCache; // rdx
  _QWORD *v29; // rax
  int v30; // r8d
  struct CRenderingEffect *v31; // rbx
  __int64 v32; // rcx
  __int128 *v33; // rbx
  __int128 v34; // xmm0
  char v35; // cl
  __int64 v36; // rdx
  __int64 v37; // r8
  const struct PrimitiveVertexAttributesDesc *v38; // r9
  unsigned int v39; // ecx
  unsigned int v40; // xmm1_4
  int v41; // xmm1_4
  int v42; // xmm1_4
  int v43; // eax
  __int64 (__fastcall ***v45)(_QWORD, _QWORD *); // rcx
  unsigned int v46; // ebx
  int v47; // edi
  CMILMatrix *v48; // rax
  __int128 *v49; // r10
  int v50; // eax
  __int64 v51; // rcx
  unsigned __int64 v52; // rcx
  int v53; // xmm1_4
  int v54; // xmm1_4
  int v55; // r9d
  unsigned int v56; // [rsp+20h] [rbp-E0h]
  char v57; // [rsp+30h] [rbp-D0h]
  char v58; // [rsp+31h] [rbp-CFh]
  char v59; // [rsp+32h] [rbp-CEh]
  _BYTE v60[16]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v61[16]; // [rsp+50h] [rbp-B0h] BYREF
  int v62; // [rsp+60h] [rbp-A0h]
  unsigned int v63; // [rsp+64h] [rbp-9Ch]
  struct CRenderingEffect *v64; // [rsp+68h] [rbp-98h] BYREF
  __int128 v65; // [rsp+70h] [rbp-90h] BYREF
  __int128 v66; // [rsp+80h] [rbp-80h]
  __int128 v67; // [rsp+90h] [rbp-70h] BYREF
  __int64 v68; // [rsp+A0h] [rbp-60h]
  int v69; // [rsp+A8h] [rbp-58h]
  __int64 v70; // [rsp+ACh] [rbp-54h]
  int v71; // [rsp+B4h] [rbp-4Ch]
  char v72; // [rsp+B8h] [rbp-48h]
  __int128 v73; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v74; // [rsp+D0h] [rbp-30h] BYREF
  char v75; // [rsp+D8h] [rbp-28h]
  char v76; // [rsp+E0h] [rbp-20h]
  __int128 v77; // [rsp+E8h] [rbp-18h]
  __int128 v78; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v79; // [rsp+108h] [rbp+8h]
  int v80; // [rsp+110h] [rbp+10h]
  __int64 v81; // [rsp+114h] [rbp+14h]
  int v82; // [rsp+11Ch] [rbp+1Ch]
  char v83; // [rsp+120h] [rbp+20h]
  CDrawListCache *v84; // [rsp+140h] [rbp+40h]
  __int128 v85; // [rsp+148h] [rbp+48h] BYREF
  int v86; // [rsp+158h] [rbp+58h]
  __int64 v87; // [rsp+15Ch] [rbp+5Ch]
  int v88; // [rsp+164h] [rbp+64h]
  _BYTE v89[8]; // [rsp+168h] [rbp+68h] BYREF
  __int128 *v90; // [rsp+170h] [rbp+70h]
  _BYTE v91[64]; // [rsp+190h] [rbp+90h] BYREF
  int v92; // [rsp+1D0h] [rbp+D0h]
  __int128 v93; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v94; // [rsp+1F0h] [rbp+F0h]
  __m256i v95; // [rsp+200h] [rbp+100h] BYREF
  int v96; // [rsp+220h] [rbp+120h]
  _QWORD v97[2]; // [rsp+230h] [rbp+130h] BYREF
  __int128 v98; // [rsp+240h] [rbp+140h] BYREF
  struct CDrawListEntry **v99[288]; // [rsp+250h] [rbp+150h] BYREF
  _DWORD v100[9]; // [rsp+B50h] [rbp+A50h] BYREF
  __int128 v101; // [rsp+B74h] [rbp+A74h]
  _DWORD v102[9]; // [rsp+B84h] [rbp+A84h] BYREF
  __int128 v103; // [rsp+BA8h] [rbp+AA8h]

  v84 = a4;
  v65 = 0LL;
  v66 = 0LL;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v99);
  v74 = 0LL;
  v75 = 0;
  v73 = 0LL;
  v76 = 0;
  v92 = 0;
  if ( !RenderTargetInfo::operator==((__int64)this + 32, (__int64)a2 + 56) )
  {
    v11 = -2003304315;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003304315, 0x120u, 0LL);
    goto LABEL_44;
  }
  ++dword_180347360;
  CDrawListCache::Invalidate(v7);
  if ( CDrawingContext::IsWarpFastPathEnabled(a2) && CPrimitiveGroupDrawListGenerator::CanUseWarpExtension(this) )
  {
    v8 = 1;
    if ( *((_DWORD *)a2 + 70) != 4 )
    {
      v45 = (__int64 (__fastcall ***)(_QWORD, _QWORD *))(*((_QWORD *)a2 + 4)
                                                       + 8LL
                                                       + *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL) + 12LL));
      v46 = 0;
      v47 = *(_DWORD *)((**v45)(v45, v97) + 8);
      if ( !*((_DWORD *)this + 14) )
        goto LABEL_4;
      while ( CDrawListBitmap::GetPixelFormatInfo((CDrawListBitmap *)(*((_QWORD *)this + 13) + 48LL * v46), v97)[2] == v47 )
      {
        if ( ++v46 >= *((_DWORD *)this + 14) )
          goto LABEL_4;
      }
    }
  }
  v8 = 0;
LABEL_4:
  v62 = D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)a2 + 68));
  v9 = v62;
  CDrawingContext::GetWorldTransform(a2, (struct CMILMatrix *)v91);
  v11 = 0;
  if ( !v8 )
  {
    CpuClip = CDrawingContext::GetCpuClip(a2, v10, (struct CCpuClip *)&v73);
    v11 = CpuClip;
    if ( CpuClip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, CpuClip, 0x159u, 0LL);
      goto LABEL_44;
    }
  }
  v14 = *((_DWORD *)a2 + 69) == 0;
  LODWORD(v65) = 2;
  BYTE12(v66) = 1;
  HIDWORD(v65) = !v14;
  *(_QWORD *)&v66 = &v73;
  CMILMatrix::Get2DScaleDimensionsWithPerspective(v91, (char *)&v65 + 4, (char *)&v65 + 8, 0LL);
  v15 = *((_QWORD *)this + 2);
  v16 = 0;
  v63 = 0;
  if ( !*(_DWORD *)(v15 + 8) )
  {
LABEL_43:
    CDrawListCache::Update(v84, a2, v99);
    goto LABEL_44;
  }
  while ( 1 )
  {
    v17 = *(_QWORD *)v15 + 144LL * v16;
    CPrimitiveGroupDrawListGenerator::GetIteratorForState(this, v89, v16);
    v14 = (*(_BYTE *)(v17 + 4) & 0x20) == 0;
    v18 = 16;
    DWORD2(v66) = 16;
    if ( v14 )
      break;
    if ( v76 )
    {
      CShapePtr::Release((CShapePtr *)&v74);
      v76 = 0;
    }
    v48 = CMILMatrix::CMILMatrix((CMILMatrix *)&v78, (const struct D2D_MATRIX_3X2_F *)(v90 + 1));
    v93 = *(_OWORD *)v48;
    v94 = *((_OWORD *)v48 + 1);
    v95 = *(__m256i *)((_BYTE *)v48 + 1);
    v96 = *((_DWORD *)v48 + 16);
    v98 = *v49;
    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v100, (const struct MilRectF *)&v98);
    v50 = CCpuClip::AddPrimitiveClip((CCpuClip *)&v73, (const struct CShape *)v100, (const struct CMILMatrix *)&v93);
    v11 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x182u, 0LL);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v100);
      goto LABEL_44;
    }
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v100);
LABEL_42:
    v15 = *((_QWORD *)this + 2);
    v16 = v63 + 1;
    v63 = v16;
    if ( v16 >= *(_DWORD *)(v15 + 8) )
      goto LABEL_43;
  }
  if ( ((_QWORD)v73 || v74) && !HIDWORD(v65) )
  {
    if ( !CCpuClip::IsAxisAlignedRectangle((CCpuClip *)&v73)
      || !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v91) )
    {
      BYTE12(v66) = 1;
      goto LABEL_11;
    }
    v18 = 48;
    DWORD2(v66) = 48;
  }
  BYTE12(v66) = 0;
LABEL_11:
  v80 = 0;
  v19 = *(_DWORD *)v17 == 0;
  v78 = 0LL;
  v81 = 0LL;
  v82 = 0;
  v79 = 0LL;
  v83 = 0;
  v67 = 0LL;
  v70 = 0LL;
  v71 = 0;
  v68 = 0LL;
  v69 = 0;
  v72 = 0;
  if ( !v19 )
  {
    v20 = *(unsigned int *)(v17 + 40);
    if ( (unsigned int)v20 < *((_DWORD *)this + 14) )
      CDrawListBitmap::operator=((__int64)&v78, *((_QWORD *)this + 13) + 48 * v20);
    v21 = *(unsigned int *)(v17 + 56);
    if ( (unsigned int)v21 < *((_DWORD *)this + 18) )
      CDrawListBitmap::operator=((__int64)&v67, *((_QWORD *)this + 14) + 48 * v21);
  }
  if ( (*(_BYTE *)(v17 + 4) & 0x10) != 0 )
    DWORD2(v66) = v18 | 1;
  v59 = ExtendMode::FromD2D1ExtendMode(*(unsigned int *)(v17 + 52));
  v58 = ExtendMode::FromD2D1ExtendMode(*(unsigned int *)(v17 + 48));
  v22 = 0;
  if ( v9 )
    v22 = *(_DWORD *)(v17 + 44);
  v23 = InterpolationMode::FromD2D1InterpolationMode(v22);
  v24 = ExtendMode::FromD2D1ExtendMode(*(unsigned int *)(v17 + 68));
  v57 = ExtendMode::FromD2D1ExtendMode(*(unsigned int *)(v17 + 64));
  if ( v62 )
    v25 = *(_DWORD *)(v17 + 60);
  else
    v25 = 0;
  v26 = InterpolationMode::FromD2D1InterpolationMode(v25);
  ObjectCache = CThreadContext::GetObjectCache(v27);
  v29 = 0LL;
  v30 = *((_DWORD *)ObjectCache + 1);
  if ( v30 )
  {
    v29 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v29;
    *((_DWORD *)ObjectCache + 1) = v30 - 1;
  }
  if ( v29 || (v29 = DefaultHeap::Alloc(0x78uLL)) != 0LL )
  {
    v60[1] = v57;
    v61[1] = v58;
    v61[2] = v59;
    v60[0] = v26;
    v60[2] = v24;
    v61[0] = v23;
    v31 = (struct CRenderingEffect *)CCommonRenderingEffect::CCommonRenderingEffect(v29, &v78, v61, &v67, v60);
  }
  else
  {
    v31 = 0LL;
  }
  v97[0] = v31;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v97);
  v97[0] = 0LL;
  v64 = v31;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v97);
  if ( v31 )
  {
    CDrawListEntryBuilder::Begin(
      (CDrawListEntryBuilder *)v99,
      (const struct DrawListEntryBuilderSetupParams *)&v65,
      v31);
    do
    {
      v33 = v90;
      v87 = 0LL;
      v88 = 0;
      v34 = *v90;
      v86 = *((_DWORD *)v90 + 11);
      v35 = ~(unsigned __int8)*(_DWORD *)(v17 + 4) & 2 | ~(4 * *(_DWORD *)(v17 + 4)) & 4;
      v85 = v34;
      BYTE4(v87) = v35;
      memset(&v95, 0, 24);
      v93 = 0LL;
      v94 = 0LL;
      memset_0(v100, 0, 0x68uLL);
      v38 = 0LL;
      if ( *(_DWORD *)v17 )
      {
        v39 = 7;
        HIDWORD(v77) = *((_DWORD *)v33 + 15);
        *(float *)&v40 = *((float *)&v77 + 3) * *((float *)v33 + 13);
        *(float *)&v77 = *((float *)&v77 + 3) * *((float *)v33 + 12);
        *(_QWORD *)((char *)&v77 + 4) = __PAIR64__(*((float *)&v77 + 3) * *((float *)v33 + 14), v40);
        v93 = v77;
        if ( *((_DWORD *)v33 + 36) < 7u )
          v39 = *((_DWORD *)v33 + 36);
        if ( v39 < *(_DWORD *)(v17 + 12) )
        {
          v52 = *(_DWORD *)(v17 + 8) + v39;
          if ( v52 >= *((_QWORD *)this + 11) )
          {
            ((void (__fastcall *)(unsigned __int64, __int64, __int64, _QWORD))`gsl::details::get_terminate_handler'::`2'::handler)(
              v52,
              v36,
              v37,
              0LL);
            __debugbreak();
          }
          *((_QWORD *)&v94 + 1) = *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v52);
        }
        if ( v78 != 0 )
        {
          if ( v8 )
          {
            CPrimitiveGroupDrawListGenerator::CalculatePrimitiveToBitmap(
              (const struct CDrawListBitmap *)&v78,
              (const struct D2D_MATRIX_3X2_F *)(v33 + 4),
              (struct Matrix3x3 *)v100);
          }
          else
          {
            v100[0] = *((_DWORD *)v33 + 16);
            v41 = *((_DWORD *)v33 + 17);
            v100[2] = 0;
            v100[1] = v41;
            v100[3] = *((_DWORD *)v33 + 18);
            v42 = *((_DWORD *)v33 + 19);
            v100[5] = 0;
            v100[4] = v42;
            v100[6] = *((_DWORD *)v33 + 20);
            v100[7] = *((_DWORD *)v33 + 21);
            v100[8] = 1065353216;
          }
          v101 = *(__int128 *)((char *)v33 + 88);
        }
        if ( v67 != 0 )
        {
          if ( v8 )
          {
            CPrimitiveGroupDrawListGenerator::CalculatePrimitiveToBitmap(
              (const struct CDrawListBitmap *)&v67,
              (const struct D2D_MATRIX_3X2_F *)((char *)v33 + 104),
              (struct Matrix3x3 *)v102);
          }
          else
          {
            v102[0] = *((_DWORD *)v33 + 26);
            v53 = *((_DWORD *)v33 + 27);
            v102[2] = 0;
            v102[1] = v53;
            v102[3] = *((_DWORD *)v33 + 28);
            v54 = *((_DWORD *)v33 + 29);
            v102[5] = 0;
            v102[4] = v54;
            v102[6] = *((_DWORD *)v33 + 30);
            v102[7] = *((_DWORD *)v33 + 31);
            v102[8] = 1065353216;
          }
          v103 = v33[8];
        }
        v95.m256i_i64[1] = 2LL;
        v95.m256i_i64[2] = (__int64)v100;
        v38 = (const struct PrimitiveVertexAttributesDesc *)&v93;
      }
      v43 = CDrawListEntryBuilder::Insert(
              (CDrawListEntryBuilder *)v99,
              v8,
              (const struct PrimitiveGeometryDesc *)&v85,
              v38,
              (const struct D2D_MATRIX_3X2_F *)(v33 + 1));
      v11 = v43;
      if ( v43 < 0 )
      {
        v56 = 553;
        goto LABEL_77;
      }
    }
    while ( CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v89) );
    v43 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v99);
    v11 = v43;
    if ( v43 >= 0 )
    {
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v64);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v67 + 8);
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v67);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v78 + 8);
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v78);
      v9 = v62;
      goto LABEL_42;
    }
    v56 = 557;
LABEL_77:
    v55 = v43;
  }
  else
  {
    v11 = -2147024882;
    v55 = -2147024882;
    v56 = 459;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v55, v56, 0LL);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v64);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v67 + 8);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v67);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v78 + 8);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v78);
LABEL_44:
  CShapePtr::Release((CShapePtr *)&v74);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v99);
  return v11;
}
