__int64 __fastcall CProjectedShadow::GenerateDrawList(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v4; // rax
  __int64 v8; // rsi
  CGeometryOnlyDrawListBrush *v9; // rcx
  int CasterShadowInputBrush; // ebx
  int v11; // xmm1_4
  int v12; // xmm0_4
  CGeometryOnlyDrawListBrush *v13; // rax
  CBrushRenderingGraph *v14; // rcx
  CGeometryOnlyDrawListBrush *v15; // rsi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  CGeometryOnlyDrawListBrush *v19; // rdx
  CProjectedShadowReceiver *v20; // rcx
  __int64 v21; // rcx
  CGeometryOnlyDrawListBrush *v22; // rdx
  float v23; // xmm1_4
  float v24; // xmm4_4
  float v25; // xmm5_4
  float v26; // xmm6_4
  float v27; // xmm7_4
  float v28; // xmm8_4
  float v29; // xmm9_4
  __int64 v30; // xmm1_8
  __int64 v31; // rdx
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  int v34; // eax
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int64 v37; // r9
  int DrawList; // eax
  __int64 v39; // rcx
  CGeometryOnlyDrawListBrush *v41; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v42)(_QWORD, __int64); // [rsp+38h] [rbp-C8h] BYREF
  __int128 v43; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v44[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v45; // [rsp+60h] [rbp-A0h]
  __int128 v46; // [rsp+64h] [rbp-9Ch]
  __int128 v47; // [rsp+74h] [rbp-8Ch]
  int v48; // [rsp+84h] [rbp-7Ch]
  __int128 v49; // [rsp+88h] [rbp-78h]
  __int128 v50; // [rsp+98h] [rbp-68h]
  int v51; // [rsp+A8h] [rbp-58h]
  int v52; // [rsp+ACh] [rbp-54h]
  char v53; // [rsp+B0h] [rbp-50h]
  __int128 v54; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v55; // [rsp+D0h] [rbp-30h]
  CGeometryOnlyDrawListBrush **v56; // [rsp+D8h] [rbp-28h] BYREF
  struct CGeometryOnlyDrawListBrush *v57; // [rsp+E0h] [rbp-20h] BYREF
  float v58; // [rsp+E8h] [rbp-18h]
  float v59; // [rsp+ECh] [rbp-14h]
  _BYTE v60[20]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v61; // [rsp+104h] [rbp+4h]
  _BYTE v62[4480]; // [rsp+140h] [rbp+40h] BYREF

  v4 = *((_QWORD *)this + 11);
  LOBYTE(v58) = 1;
  v57 = 0LL;
  v8 = *(_QWORD *)(v4 + 64);
  v56 = &v41;
  v41 = 0LL;
  CasterShadowInputBrush = CGeometryOnlyDrawListBrush::Create(&v57);
  if ( LOBYTE(v58) )
  {
    v9 = *v56;
    *v56 = v57;
    if ( v9 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v9, 1);
  }
  if ( CasterShadowInputBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0, CasterShadowInputBrush, 0x1BDu, 0LL);
    if ( v41 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v41, 1);
  }
  else
  {
    v11 = *(_DWORD *)(v8 + 140);
    v12 = *(_DWORD *)(v8 + 144);
    v13 = v41;
    *(_QWORD *)&v43 = 0LL;
    DWORD2(v43) = v11;
    *((_BYTE *)v41 + 52) = 1;
    *((_DWORD *)v13 + 12) = 50529027;
    HIDWORD(v43) = v12;
    *((_OWORD *)v13 + 2) = v43;
    v14 = (CBrushRenderingGraph *)*((_QWORD *)this + 47);
    v15 = v41;
    if ( v14 )
    {
      v16 = CBrushRenderingGraph::RenderSubgraphs(
              v14,
              a2,
              (struct D2D_SIZE_F *)(*(_QWORD *)(*((_QWORD *)this + 11) + 64LL) + 140LL),
              v41,
              0,
              a4);
      CasterShadowInputBrush = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1D3u, 0LL);
    }
    else
    {
      v45 = 0;
      *(_QWORD *)&v43 = &CProjectedShadowRenderingEffectFactory::`vftable';
      v52 = 257;
      v44[1] = &v43;
      v53 = 0;
      v56 = (CGeometryOnlyDrawListBrush **)&v42;
      v44[0] = v41;
      v42 = 0LL;
      v57 = 0LL;
      LOBYTE(v58) = 1;
      CasterShadowInputBrush = CProjectedShadow::GetCasterShadowInputBrush(this, a2, &v57);
      if ( LOBYTE(v58) )
      {
        v18 = (__int64)v56;
        v19 = *v56;
        *v56 = v57;
        if ( v19 )
          std::default_delete<CDrawListBrush>::operator()(v18, (__int64 (__fastcall ***)(_QWORD, __int64))v19);
      }
      if ( CasterShadowInputBrush < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, CasterShadowInputBrush, 0x1E1u, 0LL);
      }
      else
      {
        v20 = (CProjectedShadowReceiver *)*((_QWORD *)this + 11);
        v56 = &v41;
        v41 = 0LL;
        v57 = 0LL;
        LOBYTE(v58) = 1;
        CasterShadowInputBrush = CProjectedShadowReceiver::GetReceiverMaskInputBrush(v20, a2, &v57);
        if ( LOBYTE(v58) )
        {
          v21 = (__int64)v56;
          v22 = *v56;
          *v56 = v57;
          if ( v22 )
            std::default_delete<CDrawListBrush>::operator()(v21, (__int64 (__fastcall ***)(_QWORD, __int64))v22);
        }
        if ( CasterShadowInputBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, CasterShadowInputBrush, 0x1E5u, 0LL);
        }
        else
        {
          if ( COERCE_FLOAT(*((_DWORD *)this + 47) & _xmm) >= 0.000081380211
            || COERCE_FLOAT(*((_DWORD *)this + 50) & _xmm) >= 0.000081380211 )
          {
            v32 = *(_OWORD *)((char *)this + 180);
            v33 = *(_OWORD *)((char *)this + 196);
            v48 = *((_DWORD *)this + 53);
            v34 = *((_DWORD *)this + 62);
            v46 = v32;
            v45 = 1;
            v35 = *(_OWORD *)((char *)this + 216);
            v51 = v34;
            v47 = v33;
            v36 = *(_OWORD *)((char *)this + 232);
            v49 = v35;
            v50 = v36;
          }
          else
          {
            v23 = *((float *)this + 53);
            v24 = *((float *)this + 45);
            v25 = *((float *)this + 46);
            v26 = *((float *)this + 48);
            v27 = *((float *)this + 49);
            v28 = *((float *)this + 51);
            v29 = *((float *)this + 52);
            v56 = (CGeometryOnlyDrawListBrush **)__PAIR64__(LODWORD(v25), LODWORD(v24));
            v57 = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(v27), LODWORD(v26));
            v58 = v28;
            v59 = v29;
            if ( COERCE_FLOAT(LODWORD(v23) & _xmm) >= 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v23 - 1.0) & _xmm) >= 0.000081380211 )
            {
              *(float *)&v56 = v24 / v23;
              *((float *)&v56 + 1) = v25 / v23;
              *(float *)&v57 = v26 / v23;
              *((float *)&v57 + 1) = v27 / v23;
              v58 = v28 / v23;
              v59 = v29 / v23;
            }
            D2D1::Matrix3x2F::SetProduct(
              (D2D1::Matrix3x2F *)&v54,
              (const struct D2D1::Matrix3x2F *)(v42 + 1),
              (const struct D2D1::Matrix3x2F *)&v56);
            v30 = v55;
            *(_OWORD *)v31 = v54;
            *(_QWORD *)(v31 + 16) = v30;
          }
          CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v60, a2);
          v61 = *((_OWORD *)this + 22);
          CBrushDrawListGenerator::AttachInput((__int64)v60, 0, (__int64 *)&v42);
          CBrushDrawListGenerator::AttachInput((__int64)v60, 1u, (__int64 *)&v41);
          CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v62);
          DrawList = CBrushDrawListGenerator::GenerateDrawList(
                       (CBrushDrawListGenerator *)v60,
                       (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v44,
                       (struct CDrawListEntryBuilder *)v62,
                       v37);
          CasterShadowInputBrush = DrawList;
          if ( DrawList < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, DrawList, 0x20Cu, 0LL);
          else
            CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v62);
          CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v62);
          CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v60);
        }
        if ( v41 )
          std::default_delete<CDrawListBrush>::operator()(v17, (__int64 (__fastcall ***)(_QWORD, __int64))v41);
      }
      if ( v42 )
        std::default_delete<CDrawListBrush>::operator()(v17, v42);
    }
    if ( v15 )
      std::default_delete<CDrawListBrush>::operator()(v17, (__int64 (__fastcall ***)(_QWORD, __int64))v15);
  }
  return (unsigned int)CasterShadowInputBrush;
}
