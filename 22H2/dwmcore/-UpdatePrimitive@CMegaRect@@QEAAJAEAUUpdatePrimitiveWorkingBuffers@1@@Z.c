/*
 * XREFs of ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x18006A5AC
 * Callers:
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x180066F8C (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007454 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x180042514 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18004F150 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$FillAllRectangles@V?$back_insert_iterator@V?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@std@@@CRegion@@QEBAXV?$back_insert_iterator@V?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@std@@@Z @ 0x1800672C8 (--$FillAllRectangles@V-$back_insert_iterator@V-$vector@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180067378 (-Create@CDrawListPrimitive@@SAJ_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AE.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x180067490 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 *     ??4?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180067518 (--4-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV.c)
 *     CreateMegaRectVertex @ 0x18006AB60 (CreateMegaRectVertex.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18006C008 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?_Reallocate_exactly@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K@Z @ 0x1800CEF50 (-_Reallocate_exactly@-$vector@GV-$allocator@G@std@@@std@@AEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@G@?$vector@GV?$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z @ 0x1801AA834 (--$_Emplace_reallocate@G@-$vector@GV-$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z.c)
 */

__int64 __fastcall CMegaRect::UpdatePrimitive(CMegaRect *this, struct CMegaRect::UpdatePrimitiveWorkingBuffers *a2)
{
  char *v2; // r12
  char *v3; // r15
  gsl::details **v4; // rdi
  int v7; // eax
  FastRegion::Internal::CRgnData **v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 (__fastcall ***v16)(_QWORD, __int64); // r12
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rax
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int16 v22; // si
  __int64 v23; // r8
  float v24; // xmm0_4
  int v25; // edx
  gsl::details *v26; // rdx
  gsl::details *v27; // rdx
  gsl::details *v28; // rdx
  gsl::details *v29; // rdx
  gsl::details *v30; // rdx
  gsl::details *v31; // rdx
  int v32; // r12d
  __m128 v33; // xmm6
  __m128 v34; // xmm6
  __int32 v35; // xmm1_4
  float v36; // xmm0_4
  __int64 v37; // rax
  char v38; // si
  __int64 v39; // rax
  gsl::details *v40; // rcx
  unsigned int v41; // r9d
  __int64 v42; // rcx
  int v43; // ebx
  __int64 (__fastcall ***v44)(_QWORD, __int64); // rdx
  _QWORD *v45; // rcx
  __int64 v46; // rax
  __int64 *v47; // rax
  __int64 v48; // rcx
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // rbx
  _WORD v52[2]; // [rsp+48h] [rbp-79h] BYREF
  int v53; // [rsp+4Ch] [rbp-75h]
  __int64 (__fastcall ***v54)(_QWORD, __int64); // [rsp+50h] [rbp-71h] BYREF
  unsigned int v55; // [rsp+58h] [rbp-69h]
  __int32 *v56; // [rsp+60h] [rbp-61h] BYREF
  unsigned int v57; // [rsp+68h] [rbp-59h]
  int v58; // [rsp+6Ch] [rbp-55h]
  unsigned int v59; // [rsp+70h] [rbp-51h]
  int v60; // [rsp+74h] [rbp-4Dh]
  __int64 v61; // [rsp+78h] [rbp-49h]
  int v62; // [rsp+80h] [rbp-41h]
  __int32 *v63; // [rsp+88h] [rbp-39h] BYREF
  __int64 (__fastcall ***v64)(_QWORD, __int64); // [rsp+90h] [rbp-31h] BYREF
  _QWORD v65[2]; // [rsp+98h] [rbp-29h] BYREF
  __int64 (__fastcall ****v66)(_QWORD, __int64); // [rsp+A8h] [rbp-19h]
  unsigned int v67[2]; // [rsp+B0h] [rbp-11h] BYREF
  char v68; // [rsp+B8h] [rbp-9h]
  __m128 v69; // [rsp+C0h] [rbp-1h] BYREF

  v2 = (char *)a2 + 24;
  *((_QWORD *)a2 + 1) = *(_QWORD *)a2;
  v3 = (char *)a2 + 48;
  v4 = (gsl::details **)((char *)a2 + 72);
  *((_QWORD *)a2 + 4) = *((_QWORD *)a2 + 3);
  *((_QWORD *)a2 + 7) = *((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 10) = *((_QWORD *)a2 + 9);
  v63 = (__int32 *)*((_QWORD *)this + 2);
  v56 = v63;
  v7 = *((_DWORD *)this + 6);
  v8 = (FastRegion::Internal::CRgnData **)*((_QWORD *)this + 1);
  v58 = 4;
  v9 = 8 * v7 + 16;
  v57 = v9;
  CRegion::FillAllRectangles<std::back_insert_iterator<std::vector<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>>>>(
    v8,
    (__int64)a2);
  v11 = *(_QWORD *)v2;
  v65[0] = (__int64)(*((_QWORD *)a2 + 1) - *(_QWORD *)a2) >> 4;
  v64 = (__int64 (__fastcall ***)(_QWORD, __int64))(4LL * v65[0]);
  v12 = 4LL * v65[0] * v9;
  v13 = *((_QWORD *)v2 + 1) - v11;
  if ( v12 < v13 )
  {
    *((_QWORD *)v2 + 1) = v11 + v12;
  }
  else if ( v12 > v13 )
  {
    if ( v12 <= *((_QWORD *)v2 + 2) - v11 )
    {
      v50 = v11 + v12;
      memset_0(*((void **)v2 + 1), 0, v11 + v12 - *((_QWORD *)v2 + 1));
      *((_QWORD *)v2 + 1) = v50;
    }
    else
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>((__int64 *)v2, 4LL * v65[0] * v9);
    }
  }
  v14 = *(_QWORD *)v3;
  v61 = *(_QWORD *)v2;
  v15 = *((_QWORD *)v3 + 1) - v14;
  if ( v12 < v15 )
  {
    *((_QWORD *)v3 + 1) = v14 + v12;
  }
  else if ( v12 > v15 )
  {
    if ( v12 <= *((_QWORD *)v3 + 2) - v14 )
    {
      v51 = v14 + v12;
      memset_0(*((void **)v3 + 1), 0, v14 + v12 - *((_QWORD *)v3 + 1));
      *((_QWORD *)v3 + 1) = v51;
    }
    else
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>((__int64 *)v3, v12);
    }
  }
  v16 = *(__int64 (__fastcall ****)(_QWORD, __int64))v3;
  v17 = v65[0];
  v18 = (v4[2] - *v4) >> 1;
  v54 = v16;
  if ( 6LL * v65[0] > v18 )
  {
    if ( (unsigned __int64)(6LL * v65[0]) > 0x7FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    std::vector<unsigned short>::_Reallocate_exactly(v4);
  }
  v19 = v57;
  v20 = 0LL;
  v59 = 0;
  v55 = 0;
  if ( v65[0] )
  {
    v60 = 2 * v57;
    v53 = 2 * v57;
    LODWORD(v65[0]) = -v57;
    v21 = 0LL;
    v22 = 0;
    v62 = -2 * v57;
    do
    {
      v69 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_loadu_si128((const __m128i *)(*(_QWORD *)a2 + 16 * v21))), (__m128)_xmm);
      v24 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(&v69, v20, 2LL);
      v52[0] = v22;
      v55 = (int)v24 + v25;
      v26 = v4[1];
      if ( v4[2] == v26 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v26, v52);
        v23 = 2LL;
      }
      else
      {
        *(_WORD *)v26 = v22;
        v4[1] = (gsl::details *)((char *)v4[1] + v23);
      }
      v27 = v4[1];
      v52[0] = v22 + 1;
      if ( v4[2] == v27 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v27, v52);
        v28 = (gsl::details *)*((_QWORD *)a2 + 10);
        v23 = 2LL;
      }
      else
      {
        *(_WORD *)v27 = v22 + 1;
        v4[1] = (gsl::details *)((char *)v4[1] + v23);
        v28 = v4[1];
      }
      v52[0] = v22 + 3;
      if ( v4[2] == v28 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v28, v52);
        v29 = (gsl::details *)*((_QWORD *)a2 + 10);
        v23 = 2LL;
      }
      else
      {
        *(_WORD *)v28 = v22 + 3;
        v4[1] = (gsl::details *)((char *)v4[1] + v23);
        v29 = v4[1];
      }
      v52[0] = v22;
      if ( v4[2] == v29 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v29, v52);
        v30 = (gsl::details *)*((_QWORD *)a2 + 10);
        v23 = 2LL;
      }
      else
      {
        *(_WORD *)v29 = v22;
        v4[1] = (gsl::details *)((char *)v4[1] + v23);
        v30 = v4[1];
      }
      v52[0] = v22 + 3;
      if ( v4[2] == v30 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v30, v52);
        v31 = (gsl::details *)*((_QWORD *)a2 + 10);
        v23 = 2LL;
      }
      else
      {
        *(_WORD *)v30 = v22 + 3;
        v4[1] = (gsl::details *)((char *)v4[1] + v23);
        v31 = v4[1];
      }
      v52[0] = v23 + v22;
      if ( v4[2] == v31 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v31, v52);
      }
      else
      {
        *(_WORD *)v31 = v23 + v22;
        v4[1] = (gsl::details *)((char *)v4[1] + v23);
      }
      v32 = v60;
      v33 = (__m128)v69.m128_u32[1];
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)v69.m128_u32[0], (__m128)v69.m128_u32[1]).m128_u32[0],
        (unsigned int)&v56,
        *((_DWORD *)this + 6),
        v61 + v62 + v60,
        (__int64)v54 + v62 + v53);
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)v69.m128_u32[2], v33).m128_u32[0],
        (unsigned int)&v56,
        *((_DWORD *)this + 6),
        v61 + LODWORD(v65[0]) + v32,
        (__int64)v54 + LODWORD(v65[0]) + v53);
      v34 = (__m128)v69.m128_u32[3];
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)v69.m128_u32[0], (__m128)v69.m128_u32[3]).m128_u32[0],
        (unsigned int)&v56,
        *((_DWORD *)this + 6),
        v61 + v32,
        (__int64)v54 + v53);
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)v69.m128_u32[2], v34).m128_u32[0],
        (unsigned int)&v56,
        *((_DWORD *)this + 6),
        v61 + v32 + v19,
        (__int64)v54 + (int)(v19 + v53));
      v20 = v55;
      v22 += 4;
      v53 += 4 * v19;
      v21 = ++v59;
      v10 = 2LL;
      v60 = 4 * v19 + v32;
    }
    while ( v59 < v17 );
    v16 = v54;
  }
  v35 = v63[1];
  v69.m128_i32[0] = *v63;
  *(unsigned __int64 *)((char *)v69.m128_u64 + 4) = __PAIR64__(*(__int32 *)((char *)v63 + (int)(3 * v19)), v35);
  v69.m128_i32[3] = *(__int32 *)((char *)v63 + (int)(3 * v19) + 4);
  v36 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(&v69, v63, v10);
  v54 = 0LL;
  *(_QWORD *)v67 = 0LL;
  v68 = 1;
  CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved += (int)v36 - v55;
  v66 = &v54;
  v37 = *(_QWORD *)this;
  v63 = (__int32 *)_mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
  v38 = *(_BYTE *)(*(_QWORD *)(v37 + 184) + 97LL);
  v39 = gsl::narrow<__int64,unsigned __int64>((v4[1] - *v4) >> 1);
  v40 = *v4;
  if ( v39 < 0 || !v40 && v39 )
  {
    `gsl::details::get_terminate_handler'::`2'::handler(v40);
    __debugbreak();
  }
  v41 = *((_DWORD *)this + 6);
  v65[0] = v39;
  v58 = (int)v64;
  v65[1] = v40;
  v56 = (__int32 *)v61;
  v69.m128_u64[0] = (unsigned __int64)v16;
  v69.m128_u64[1] = __PAIR64__((unsigned int)v64, v19);
  v57 = v19;
  v43 = CDrawListPrimitive::Create(
          1,
          (__int64)&v56,
          (__int64)&v69,
          v41,
          (__int64)v65,
          (__int64)&v63,
          v38,
          (PrimitiveStorage::CInlineStorageBase **)v67);
  if ( v68 )
  {
    v42 = *(_QWORD *)v67;
    v44 = *v66;
    *v66 = *(__int64 (__fastcall ****)(_QWORD, __int64))v67;
    if ( v44 )
      std::default_delete<CShape>::operator()(v42, v44);
  }
  if ( v43 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v43, 0x1A5u, 0LL);
  }
  else
  {
    v45 = *(_QWORD **)this;
    v46 = *(_QWORD *)(*(_QWORD *)this + 64LL);
    *(_OWORD *)((char *)this + 40) = *(_OWORD *)(v46 + 8);
    *(_OWORD *)((char *)this + 56) = *(_OWORD *)(v46 + 24);
    *(_OWORD *)((char *)this + 72) = *(_OWORD *)(v46 + 40);
    *(_OWORD *)((char *)this + 88) = *(_OWORD *)(v46 + 56);
    *((_DWORD *)this + 26) = *(_DWORD *)(v46 + 72);
    v47 = CHWDrawListEntry::ReplacePrimitive(v45, &v64, (__int64)&v54, (__int64)&CMILMatrix::Identity);
    std::unique_ptr<CDrawListPrimitive>::operator=((__int64 *)this + 4, v47);
    if ( v64 )
      std::default_delete<CShape>::operator()(v48, v64);
  }
  if ( v54 )
    std::default_delete<CShape>::operator()(v48, v54);
  return (unsigned int)v43;
}
