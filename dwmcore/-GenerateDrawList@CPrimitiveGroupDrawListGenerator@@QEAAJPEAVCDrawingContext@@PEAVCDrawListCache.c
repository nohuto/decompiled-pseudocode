__int64 __fastcall CPrimitiveGroupDrawListGenerator::GenerateDrawList(
        CPrimitiveGroupDrawListGenerator *this,
        struct CDrawingContext *a2,
        struct CDrawListCache *a3)
{
  unsigned int v4; // ebx
  int v7; // eax
  bool v8; // zf
  int v9; // r12d
  __int64 v10; // rcx
  unsigned int v11; // r15d
  __int64 v12; // rdi
  bool v13; // cf
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  char v17; // r12
  char v18; // r13
  __int64 v19; // rcx
  char v20; // al
  char v21; // bl
  struct CCommonRenderingEffect *v22; // rcx
  struct CObjectCache *ObjectCache; // rdx
  _QWORD *v24; // rax
  int v25; // r8d
  __int64 v26; // rax
  unsigned int v27; // ecx
  __int128 *v28; // rbx
  char v29; // al
  char v30; // cl
  const struct PrimitiveVertexAttributesDesc *v31; // r8
  unsigned int v32; // ecx
  unsigned int v33; // xmm1_4
  int v34; // xmm1_4
  int v35; // xmm1_4
  int v36; // eax
  __int64 (__fastcall ***v38)(_QWORD, struct CRenderingEffect **); // rcx
  unsigned int v39; // edi
  int v40; // r15d
  __int128 *v41; // r10
  int v42; // eax
  unsigned int v43; // ecx
  unsigned __int64 v44; // rcx
  int v45; // xmm1_4
  int v46; // xmm1_4
  int v47; // r9d
  unsigned int v48; // [rsp+20h] [rbp-E0h]
  char v49; // [rsp+30h] [rbp-D0h]
  char v50; // [rsp+31h] [rbp-CFh]
  char v51; // [rsp+32h] [rbp-CEh]
  _BYTE v52[16]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v53[16]; // [rsp+50h] [rbp-B0h] BYREF
  int v54; // [rsp+60h] [rbp-A0h]
  __int128 v55; // [rsp+68h] [rbp-98h] BYREF
  char v56; // [rsp+78h] [rbp-88h]
  __int128 v57; // [rsp+80h] [rbp-80h] BYREF
  char v58; // [rsp+90h] [rbp-70h]
  __int128 v59; // [rsp+98h] [rbp-68h] BYREF
  __int128 v60; // [rsp+A8h] [rbp-58h]
  __int128 v61; // [rsp+B8h] [rbp-48h]
  CDrawListCache *v62; // [rsp+C8h] [rbp-38h]
  __int128 v63; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v64; // [rsp+E0h] [rbp-20h]
  _QWORD v65[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v66; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v67[8]; // [rsp+110h] [rbp+10h] BYREF
  __int128 *v68; // [rsp+118h] [rbp+18h]
  _BYTE v69[80]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v70[32]; // [rsp+180h] [rbp+80h] BYREF
  char v71; // [rsp+1A0h] [rbp+A0h]
  __int128 v72; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v73; // [rsp+1C0h] [rbp+C0h]
  __int64 v74; // [rsp+1D0h] [rbp+D0h]
  __int128 v75; // [rsp+1D8h] [rbp+D8h]
  int v76; // [rsp+1F0h] [rbp+F0h]
  struct CRenderingEffect *v77[2]; // [rsp+200h] [rbp+100h] BYREF
  __int128 v78; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v79[4480]; // [rsp+220h] [rbp+120h] BYREF
  _DWORD v80[9]; // [rsp+13A0h] [rbp+12A0h] BYREF
  __int128 v81; // [rsp+13C4h] [rbp+12C4h]
  int v82; // [rsp+13D4h] [rbp+12D4h]
  int v83; // [rsp+13D8h] [rbp+12D8h]
  int v84; // [rsp+13DCh] [rbp+12DCh]
  int v85; // [rsp+13E0h] [rbp+12E0h]
  int v86; // [rsp+13E4h] [rbp+12E4h]
  int v87; // [rsp+13E8h] [rbp+12E8h]
  int v88; // [rsp+13ECh] [rbp+12ECh]
  int v89; // [rsp+13F0h] [rbp+12F0h]
  int v90; // [rsp+13F4h] [rbp+12F4h]
  __int128 v91; // [rsp+13F8h] [rbp+12F8h]

  v62 = a3;
  v4 = 0;
  v59 = 0LL;
  v60 = 0LL;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v79);
  CCpuClip::CCpuClip((CCpuClip *)v69);
  ++dword_1803E2AD0;
  v76 = 0;
  CDrawListCache::Invalidate(a3);
  if ( CDrawingContext::IsWarpFastPathEnabled(a2) && CPrimitiveGroupDrawListGenerator::CanUseWarpExtension(this) )
  {
    v8 = *((_DWORD *)a2 + 85) == 4;
    BYTE12(v60) = 1;
    if ( !v8 )
    {
      v38 = (__int64 (__fastcall ***)(_QWORD, struct CRenderingEffect **))(*((_QWORD *)a2 + 4)
                                                                         + 8LL
                                                                         + *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL)
                                                                                  + 12LL));
      v39 = 0;
      v40 = *(_DWORD *)((**v38)(v38, v77) + 8);
      if ( !*((_DWORD *)this + 8) )
        goto LABEL_2;
      while ( *(_DWORD *)(CDrawListBitmap::GetPixelFormatInfo(*((_QWORD *)this + 10) + 24LL * v39, v77) + 8) == v40 )
      {
        if ( ++v39 >= *((_DWORD *)this + 8) )
          goto LABEL_2;
      }
    }
    BYTE12(v60) = 0;
  }
LABEL_2:
  v7 = D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)a2 + 83));
  v8 = *((_DWORD *)a2 + 84) == 0;
  v54 = v7;
  LODWORD(v59) = 2;
  HIDWORD(v59) = !v8;
  v9 = v7;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 400), (struct CMILMatrix *)&v72);
  CMILMatrix::Get2DScaleDimensionsWithPerspective((CMILMatrix *)&v72, (float *)&v59 + 1, (float *)&v59 + 2);
  CDrawingContext::GetCpuClip(a2, (struct CCpuClip *)v69);
  v10 = *((_QWORD *)this + 2);
  *(_QWORD *)&v60 = v69;
  v11 = 0;
  if ( *(_DWORD *)(v10 + 8) )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)v10 + 144LL * v11;
      CPrimitiveGroupDrawListGenerator::GetIteratorForState(this, v67, v11);
      if ( (*(_BYTE *)(v12 + 4) & 0x20) == 0 )
        break;
      if ( v71 )
      {
        CShapePtr::Release((CShapePtr *)v70);
        v71 = 0;
      }
      CMILMatrix::CMILMatrix((CMILMatrix *)&v72, (const struct D2D_MATRIX_3X2_F *)(v68 + 1));
      v78 = *v41;
      CRectanglesShape::CRectanglesShape((CRectanglesShape *)v80, (const struct MilRectF *)&v78);
      v42 = CCpuClip::AddPrimitiveClip((CCpuClip *)v69, (const struct CShape *)v80, (const struct CMILMatrix *)&v72);
      v4 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x13Fu, 0LL);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v80);
        goto LABEL_36;
      }
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v80);
LABEL_34:
      v10 = *((_QWORD *)this + 2);
      if ( ++v11 >= *(_DWORD *)(v10 + 8) )
        goto LABEL_35;
    }
    v13 = *(_DWORD *)v12 == 0;
    v58 = 0;
    v57 = 0LL;
    v56 = 0;
    v55 = 0LL;
    if ( !v13 )
    {
      v14 = *(unsigned int *)(v12 + 40);
      if ( (unsigned int)v14 < *((_DWORD *)this + 8) )
        CDrawListBitmap::operator=(&v57, *((_QWORD *)this + 10) + 24 * v14);
      v15 = *(unsigned int *)(v12 + 56);
      if ( (unsigned int)v15 < *((_DWORD *)this + 12) )
        CDrawListBitmap::operator=(&v55, *((_QWORD *)this + 11) + 24 * v15);
    }
    if ( (*(_BYTE *)(v12 + 4) & 0x10) != 0 )
      DWORD2(v60) |= 1u;
    v51 = ExtendMode::FromD2D1ExtendMode(*(unsigned int *)(v12 + 52));
    v50 = ExtendMode::FromD2D1ExtendMode(*(unsigned int *)(v12 + 48));
    v16 = 0LL;
    if ( v9 )
      v16 = *(unsigned int *)(v12 + 44);
    v17 = InterpolationMode::FromD2D1InterpolationMode(v16);
    v18 = ExtendMode::FromD2D1ExtendMode(*(unsigned int *)(v12 + 68));
    v49 = ExtendMode::FromD2D1ExtendMode(*(unsigned int *)(v12 + 64));
    if ( v54 )
      v19 = *(unsigned int *)(v12 + 60);
    else
      v19 = 0LL;
    v20 = InterpolationMode::FromD2D1InterpolationMode(v19);
    v77[0] = 0LL;
    v21 = v20;
    ObjectCache = CThreadContext::GetObjectCache(v22);
    v24 = 0LL;
    v25 = *((_DWORD *)ObjectCache + 1);
    if ( v25 )
    {
      v24 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
      *((_QWORD *)ObjectCache + 1) = *v24;
      *((_DWORD *)ObjectCache + 1) = v25 - 1;
    }
    if ( v24 || (v24 = DefaultHeap::Alloc(0x48uLL)) != 0LL )
    {
      v52[1] = v49;
      v53[1] = v50;
      v53[2] = v51;
      v52[0] = v21;
      v52[2] = v18;
      v53[0] = v17;
      v26 = CCommonRenderingEffect::CCommonRenderingEffect(v24, &v57, v53, &v55, v52);
    }
    else
    {
      v26 = 0LL;
    }
    Microsoft::WRL::ComPtr<CRenderingEffect>::operator=<CCommonRenderingEffect>(v77, v26);
    if ( v77[0] )
    {
      CDrawListEntryBuilder::Begin(
        (CDrawListEntryBuilder *)v79,
        (const struct DrawListEntryBuilderSetupParams *)&v59,
        v77[0]);
      do
      {
        v28 = v68;
        v64 = 0LL;
        v63 = 0LL;
        v63 = *v68;
        LODWORD(v64) = *((_DWORD *)v68 + 11);
        v29 = ~(unsigned __int8)*(_DWORD *)(v12 + 4);
        v30 = ~(4 * *(_DWORD *)(v12 + 4));
        v75 = 0uLL;
        BYTE8(v64) = v29 & 2 | v30 & 4;
        v72 = 0LL;
        v74 = 0LL;
        v73 = 0LL;
        memset_0(v80, 0, 0x68uLL);
        v31 = 0LL;
        if ( *(_DWORD *)v12 )
        {
          v32 = 7;
          HIDWORD(v61) = *((_DWORD *)v28 + 15);
          *(float *)&v33 = *((float *)&v61 + 3) * *((float *)v28 + 13);
          *(float *)&v61 = *((float *)&v61 + 3) * *((float *)v28 + 12);
          *(_QWORD *)((char *)&v61 + 4) = __PAIR64__(*((float *)&v61 + 3) * *((float *)v28 + 14), v33);
          v72 = v61;
          if ( *((_DWORD *)v28 + 36) < 7u )
            v32 = *((_DWORD *)v28 + 36);
          if ( v32 < *(_DWORD *)(v12 + 12) )
          {
            v44 = *(_DWORD *)(v12 + 8) + v32;
            if ( v44 >= *((_QWORD *)this + 8) )
            {
              gsl::details::terminate((gsl::details *)v44);
              __debugbreak();
            }
            *(_QWORD *)&v73 = *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v44);
          }
          if ( *((_QWORD *)&v57 + 1) )
          {
            v80[0] = *((_DWORD *)v28 + 16);
            v34 = *((_DWORD *)v28 + 17);
            v80[2] = 0;
            v80[1] = v34;
            v80[3] = *((_DWORD *)v28 + 18);
            v35 = *((_DWORD *)v28 + 19);
            v80[5] = 0;
            v80[4] = v35;
            v80[6] = *((_DWORD *)v28 + 20);
            v80[7] = *((_DWORD *)v28 + 21);
            v80[8] = 1065353216;
            v81 = *(__int128 *)((char *)v28 + 88);
          }
          if ( *((_QWORD *)&v55 + 1) )
          {
            v82 = *((_DWORD *)v28 + 26);
            v45 = *((_DWORD *)v28 + 27);
            v84 = 0;
            v83 = v45;
            v85 = *((_DWORD *)v28 + 28);
            v46 = *((_DWORD *)v28 + 29);
            v87 = 0;
            v86 = v46;
            v88 = *((_DWORD *)v28 + 30);
            v89 = *((_DWORD *)v28 + 31);
            v90 = 1065353216;
            v91 = v28[8];
          }
          v65[0] = 2LL;
          v65[1] = v80;
          gsl::span<PrimitiveUVDesc const,-1>::span<PrimitiveUVDesc const,-1>(&v66, v65, 0LL);
          v31 = (const struct PrimitiveVertexAttributesDesc *)&v72;
          v75 = v66;
        }
        v36 = CDrawListEntryBuilder::Insert(
                (CDrawListEntryBuilder *)v79,
                (const struct PrimitiveGeometryDesc *)&v63,
                v31,
                (const struct D2D_MATRIX_3X2_F *)(v28 + 1));
        v4 = v36;
        if ( v36 < 0 )
        {
          v48 = 421;
          goto LABEL_57;
        }
      }
      while ( CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v67) );
      v36 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v79);
      v4 = v36;
      if ( v36 >= 0 )
      {
        Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(v77);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)&v55 + 8);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v55);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)&v57 + 8);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v57);
        v9 = v54;
        goto LABEL_34;
      }
      v48 = 425;
LABEL_57:
      v47 = v36;
    }
    else
    {
      v4 = -2147024882;
      v47 = -2147024882;
      v48 = 364;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v47, v48, 0LL);
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(v77);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)&v55 + 8);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v55);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)&v57 + 8);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v57);
  }
  else
  {
LABEL_35:
    CDrawListCache::Update(v62, a2, (struct CDrawListEntryBuilder *)v79);
  }
LABEL_36:
  CShapePtr::Release((CShapePtr *)v70);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v79);
  return v4;
}
