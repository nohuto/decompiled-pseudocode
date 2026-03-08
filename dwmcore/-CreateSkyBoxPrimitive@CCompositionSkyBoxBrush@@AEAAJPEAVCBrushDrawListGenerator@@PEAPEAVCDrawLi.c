/*
 * XREFs of ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x1802222C0
 * Callers:
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x180221EB0 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z @ 0x18000A0D4 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Create@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x180041FAC (-Create@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800583E0 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005F090 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800C3EE0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800DAF28 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@G$0A@@@QEAAJPEFBGI@Z @ 0x180221E1C (-AddMultipleAndSet@-$DynArray@G$0A@@@QEAAJPEFBGI@Z.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::CreateSkyBoxPrimitive(
        CCompositionSkyBoxBrush *this,
        const struct D2D_SIZE_F *a2,
        struct CDrawListPrimitive **a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int i; // ebx
  int v10; // eax
  CTransform3D *v11; // rcx
  const struct CMILMatrix *Matrix; // rax
  __int64 v13; // rbx
  const struct MilPoint4F *v14; // rdi
  __int64 v15; // rsi
  int v16; // xmm0_4
  int v17; // eax
  int v18; // xmm1_4
  int v19; // xmm0_4
  int v20; // eax
  __int128 v21; // xmm0
  gsl::details *v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  _QWORD v26[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+60h] [rbp-A0h]
  int v29; // [rsp+64h] [rbp-9Ch]
  unsigned int v30; // [rsp+68h] [rbp-98h]
  int v31[2]; // [rsp+70h] [rbp-90h] BYREF
  int v32; // [rsp+78h] [rbp-88h]
  int v33; // [rsp+7Ch] [rbp-84h]
  int v34[2]; // [rsp+80h] [rbp-80h] BYREF
  int v35; // [rsp+88h] [rbp-78h]
  int v36; // [rsp+8Ch] [rbp-74h]
  _BYTE v37[80]; // [rsp+90h] [rbp-70h] BYREF
  size_t v38; // [rsp+E0h] [rbp-20h] BYREF
  int v39; // [rsp+E8h] [rbp-18h]
  _DWORD v40[64]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v41[64]; // [rsp+1F0h] [rbp+F0h] BYREF

  CMILMatrix::SetToIdentity((CMILMatrix *)v37);
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v27 = 0LL;
  v6 = DynArrayImpl<0>::Grow((unsigned __int64)&v27, 2u, 36, 0, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x128u, 0LL);
  }
  else
  {
    for ( i = 0; i < 6; ++i )
    {
      v10 = *((_DWORD *)this + 30);
      if ( _bittest(&v10, i) )
        DynArray<unsigned short,0>::AddMultipleAndSet((__int64)&v27, (__int64 *)((char *)&unk_1803B5010 + 12 * i));
    }
    CMILMatrix::Scale((CMILMatrix *)v37, *((float *)this + 29), *((float *)this + 29), *((float *)this + 29));
    CMILMatrix::Translate((CMILMatrix *)v37, *((float *)this + 26), *((float *)this + 27), *((float *)this + 28));
    v11 = (CTransform3D *)*((_QWORD *)this + 12);
    if ( v11 )
    {
      Matrix = CTransform3D::GetMatrix(v11, a2 + 1);
      CMILMatrix::Multiply((CMILMatrix *)v37, Matrix);
    }
    CMILMatrix::Translate((CMILMatrix *)v37, a2[1].width * 0.5, a2[1].height * 0.5, 0.0);
    v13 = 0LL;
    v14 = (const struct MilPoint4F *)&unk_1803B4F80;
    v15 = 8LL;
    do
    {
      CMILMatrix::Transform((CMILMatrix *)v37, v14, (struct MilPoint4F *)&v38, 1);
      v16 = HIDWORD(v38);
      v17 = *(_DWORD *)v14;
      v40[v13 + 3] = -1;
      v40[v13 + 7] = 0;
      v41[v13 + 2] = 0;
      v18 = v38;
      v41[v13 + 1] = v16;
      v40[v13 + 1] = v16;
      v40[v13 + 2] = v39;
      v19 = *((_DWORD *)v14 + 1) ^ _xmm;
      v40[v13 + 4] = v17;
      v20 = *((_DWORD *)v14 + 2);
      v14 = (const struct MilPoint4F *)((char *)v14 + 16);
      v40[v13 + 5] = v19;
      v40[v13] = v18;
      v40[v13 + 6] = v20;
      v41[v13] = v18;
      v41[v13 + 3] = 1065353216;
      v21 = *(_OWORD *)&v40[v13 + 4];
      v13 += 8LL;
      *(_OWORD *)&v40[v13 + 60] = v21;
      --v15;
    }
    while ( v15 );
    *(_QWORD *)v34 = v40;
    v38 = _mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
    v35 = 32;
    v36 = 8;
    *(_QWORD *)v31 = v41;
    v32 = 32;
    v33 = 8;
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v26, v30);
    if ( v26[0] == -1LL || (v22 = (gsl::details *)v27) == 0LL && v26[0] )
    {
      gsl::details::terminate(v22);
      __debugbreak();
    }
    v26[1] = v27;
    v23 = CDrawListPrimitive::Create((__int64)v34, (int)v31, 2, (__int64)v26, (size_t)&v38, 0, (__int64 *)a3);
    v8 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x167u, 0LL);
    else
      v8 = 0;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v27);
  return v8;
}
