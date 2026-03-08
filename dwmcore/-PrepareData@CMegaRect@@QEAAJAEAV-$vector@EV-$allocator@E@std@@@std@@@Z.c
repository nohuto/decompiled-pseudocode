/*
 * XREFs of ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18004A01C
 * Callers:
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x180049F94 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180046720 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180047D5C (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ReorderAxisAlignedRectVertices @ 0x1800499F4 (ReorderAxisAlignedRectVertices.c)
 *     IsValidAxisAlignedRect @ 0x180049BD0 (IsValidAxisAlignedRect.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180049C3C (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     VerticesHaveIntegralXY @ 0x180076254 (VerticesHaveIntegralXY.c)
 *     ?GetPrimitive@CMegaRectBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ @ 0x180085C7C (-GetPrimitive@CMegaRectBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800AB7E0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x1801C06D0 (--_GCRegion@@QEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CMegaRect::PrepareData(__int64 a1, unsigned __int64 *a2)
{
  unsigned int v4; // r12d
  struct CDrawListPrimitive *Primitive; // rax
  __int64 *v6; // rdx
  char *v7; // r14
  __int64 v8; // r13
  __int64 v9; // rdx
  char *v10; // rcx
  unsigned int v11; // r15d
  char *v12; // rbx
  unsigned __int64 v13; // r14
  SIZE_T v14; // rcx
  LPVOID v15; // rax
  int v16; // r8d
  __int64 v17; // r9
  _QWORD *v18; // rcx
  int v19; // edx
  __int32 *v20; // rdi
  int v21; // ebx
  __int32 v22; // xmm1_4
  __int32 v23; // xmm1_4
  __m128 v24; // xmm0
  __m128 v25; // xmm1
  char *v26; // rax
  _DWORD *v27; // rax
  CRegion *v28; // rax
  _DWORD **v29; // rax
  __int32 v30; // r9d
  __int32 v31; // r10d
  __int32 v32; // r11d
  __int32 v33; // ebx
  _DWORD *v34; // rdx
  __int32 *v35; // r8
  __m128 *v36; // rcx
  const struct FastRegion::Internal::CRgnData **v38; // rbx
  __m128 v39; // xmm1
  __m128 v40; // xmm0
  __m128 v41; // xmm1
  int v42; // eax
  size_t v43; // rbx
  char *v44; // rax
  unsigned int v45; // [rsp+20h] [rbp-69h]
  __m128 v46; // [rsp+30h] [rbp-59h] BYREF
  struct tagRECT v47; // [rsp+40h] [rbp-49h] BYREF
  const struct FastRegion::Internal::CRgnData *v48[10]; // [rsp+50h] [rbp-39h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+5Fh]

  v4 = 0;
  Primitive = CMegaRectBatchCommand::GetPrimitive(*(CMegaRectBatchCommand **)a1);
  v7 = (char *)v6[1];
  v8 = (__int64)Primitive;
  v9 = *v6;
  v10 = &v7[-v9];
  v11 = 8 * *(_DWORD *)(a1 + 24) + 16;
  v12 = (char *)(4 * v11);
  if ( v12 < &v7[-v9] )
  {
    v44 = (char *)(v9 + 4 * v11);
  }
  else
  {
    if ( v12 <= v10 )
      goto LABEL_5;
    if ( (unsigned __int64)v12 > a2[2] - v9 )
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(a2, (unsigned int)v12);
      goto LABEL_5;
    }
    v43 = v12 - v10;
    memset_0(v7, 0, v43);
    v44 = &v7[v43];
  }
  a2[1] = (unsigned __int64)v44;
LABEL_5:
  v13 = *a2;
  v14 = a2[1] - *a2;
  v46.m128_u64[0] = *a2;
  v46.m128_u64[1] = v11 | 0x400000000LL;
  v15 = DefaultHeap::Alloc(v14);
  v18 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v15;
  if ( v18 )
    operator delete(v18);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v45 = 229;
LABEL_27:
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v18, 0LL, 0, -2147024882, v45, 0LL);
    return v4;
  }
  TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(v8, *(_QWORD *)a1 + 16LL, v16, v17, (__int64)&v46);
  v46.m128_u64[0] = v13;
  v46.m128_u64[1] = v11 | 0x400000000LL;
  if ( !(unsigned __int8)VerticesHaveIntegralXY(&v46) )
    return v4;
  v46.m128_u64[0] = v13;
  v46.m128_u64[1] = v11 | 0x400000000LL;
  if ( !IsValidAxisAlignedRect((__int64)&v46) )
    return v4;
  v19 = *(_DWORD *)(a1 + 24);
  v46.m128_u64[0] = *(_QWORD *)(a1 + 16);
  v20 = (__int32 *)v46.m128_u64[0];
  *(_QWORD *)&v47.left = v13;
  v21 = v19 + 2;
  v47.right = v11;
  v46.m128_i32[2] = 8 * (v19 + 2);
  v46.m128_i32[3] = 4;
  v47.bottom = 4;
  ReorderAxisAlignedRectVertices((__int64 *)&v47.left, v19, (__int64)&v46);
  v22 = v20[1];
  v46.m128_i32[0] = *v20;
  v46.m128_i32[1] = v22;
  v21 *= 16;
  v23 = *(__int32 *)((char *)v20 + v21 + 4);
  v46.m128_i32[2] = *(__int32 *)((char *)v20 + v21);
  v46.m128_i32[3] = v23;
  v24 = _mm_mul_ps(_mm_add_ps(v46, g_halfFixedPointForRounding), (__m128)_xmm);
  v25 = _mm_cmplt_ps(DirectX::g_XMMaxInt, v24);
  v46 = _mm_or_ps(_mm_andnot_ps(v25, (__m128)_mm_cvttps_epi32(v24)), _mm_and_ps(v25, DirectX::g_XMAbsMask));
  v26 = (char *)DefaultHeap::Alloc(0x48uLL);
  v18 = v26;
  if ( v26 )
  {
    v27 = v26 + 8;
    *v18 = v27;
    *v27 = 0;
  }
  else
  {
    v18 = 0LL;
  }
  v28 = *(CRegion **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v18;
  if ( v28 )
    CRegion::`scalar deleting destructor'(v28, 1u);
  v29 = *(_DWORD ***)(a1 + 8);
  if ( !v29 )
  {
    v45 = 267;
    goto LABEL_27;
  }
  v30 = v46.m128_i32[0];
  v31 = v46.m128_i32[2];
  if ( v46.m128_i32[0] >= v46.m128_i32[2]
    || (v32 = v46.m128_i32[1], v33 = v46.m128_i32[3], v46.m128_i32[1] >= v46.m128_i32[3]) )
  {
    **v29 = 0;
  }
  else
  {
    v34 = *v29;
    v35 = *v29 + 7;
    *v34 = 2;
    *v35 = v30;
    v35[1] = v31;
    v34[1] = v30;
    v34[4] = (_DWORD)v35 - ((_DWORD)v34 + 12);
    v34[2] = v31;
    v34[3] = v32;
    v34[6] = (_DWORD)v35 - ((_DWORD)v34 + 20) + 8;
    v34[5] = v33;
  }
  if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(*(_QWORD *)a1 + 104LL) )
  {
    v38 = *(const struct FastRegion::Internal::CRgnData ***)(a1 + 8);
    v39 = _mm_mul_ps(_mm_add_ps(g_halfFixedPointForRounding, *v36), (__m128)_xmm);
    v40 = (__m128)_mm_cvttps_epi32(v39);
    v41 = _mm_cmplt_ps(DirectX::g_XMMaxInt, v39);
    v47 = (struct tagRECT)_mm_or_ps(_mm_and_ps(v41, DirectX::g_XMAbsMask), _mm_andnot_ps(v41, v40));
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v48, &v47);
    v42 = FastRegion::CRegion::Subtract(v38, v48);
    if ( v42 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v42, retaddr);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v48);
  }
  return v4;
}
