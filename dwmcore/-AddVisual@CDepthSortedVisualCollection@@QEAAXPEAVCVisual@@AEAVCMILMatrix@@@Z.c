/*
 * XREFs of ?AddVisual@CDepthSortedVisualCollection@@QEAAXPEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x180256960
 * Callers:
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z @ 0x1801D6458 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z.c)
 * Callees:
 *     ??0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z @ 0x180008B48 (--0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@VCVisualDepthGeometry@@@?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@std@@QEAAPEAVCVisualDepthGeometry@@QEAV2@$$QEAV2@@Z @ 0x18025663C (--$_Emplace_reallocate@VCVisualDepthGeometry@@@-$vector@VCVisualDepthGeometry@@V-$allocator@VCVi.c)
 *     ??$emplace_back@VCDepthSortingLayer@@@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@QEAA?A_T$$QEAVCDepthSortingLayer@@@Z @ 0x1802568F8 (--$emplace_back@VCDepthSortingLayer@@@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingL.c)
 *     ?AddVisual@CDepthSortingLayer@@QEAAXAEBVCVisualDepthGeometry@@@Z @ 0x1802695D8 (-AddVisual@CDepthSortingLayer@@QEAAXAEBVCVisualDepthGeometry@@@Z.c)
 *     ?IsOverlappingInZ@CDepthSortingLayer@@QEBA_NAEBVCVisualDepthGeometry@@@Z @ 0x18026963C (-IsOverlappingInZ@CDepthSortingLayer@@QEBA_NAEBVCVisualDepthGeometry@@@Z.c)
 *     ?MergeWith@CDepthSortingLayer@@QEAAXAEAV1@@Z @ 0x180269660 (-MergeWith@CDepthSortingLayer@@QEAAXAEAV1@@Z.c)
 */

void __fastcall CDepthSortedVisualCollection::AddVisual(
        CDepthSortedVisualCollection *this,
        struct CVisual *a2,
        struct CMILMatrix *a3)
{
  CVisualDepthGeometry *v4; // rax
  _OWORD *v5; // rdx
  _OWORD *v6; // rdx
  float *v7; // rsi
  float *v8; // r8
  __int64 v9; // r9
  float v10; // xmm1_4
  int v11; // r15d
  int v12; // r12d
  float v13; // xmm1_4
  __int64 v14; // r14
  const struct CVisualDepthGeometry *v15; // rdx
  CDepthSortingLayer *v16; // rcx
  float v17; // xmm1_4
  struct CDepthSortingLayer *v18; // rcx
  int v19; // eax
  __int64 v20; // r8
  __int128 v21; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+30h] [rbp-D0h]
  int v23; // [rsp+38h] [rbp-C8h]
  float v24; // [rsp+3Ch] [rbp-C4h]
  int v25; // [rsp+40h] [rbp-C0h]
  char v26[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = CVisualDepthGeometry::CVisualDepthGeometry((CVisualDepthGeometry *)v26, a2, a3);
  v5 = (_OWORD *)*((_QWORD *)this + 5);
  if ( v5 == *((_OWORD **)this + 6) )
  {
    std::vector<CVisualDepthGeometry>::_Emplace_reallocate<CVisualDepthGeometry>((__int64 *)this + 4, (__int64)v5, v4);
  }
  else
  {
    *v5 = *(_OWORD *)v4;
    v5[1] = *((_OWORD *)v4 + 1);
    v5[2] = *((_OWORD *)v4 + 2);
    v5[3] = *((_OWORD *)v4 + 3);
    v5[4] = *((_OWORD *)v4 + 4);
    v5[5] = *((_OWORD *)v4 + 5);
    v5[6] = *((_OWORD *)v4 + 6);
    v6 = v5 + 8;
    *(v6 - 1) = *((_OWORD *)v4 + 7);
    *v6 = *((_OWORD *)v4 + 8);
    v6[1] = *((_OWORD *)v4 + 9);
    v6[2] = *((_OWORD *)v4 + 10);
    *((_QWORD *)this + 5) += 176LL;
  }
  v7 = (float *)(*((_QWORD *)this + 5) - 176LL);
  v8 = v7 + 7;
  *((_DWORD *)v7 + 8) = -1171354717 * ((__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 4) - 1;
  v9 = *(_QWORD *)this;
  if ( *(_QWORD *)this == *((_QWORD *)this + 1) )
  {
    v10 = *v8;
    v22 = 0LL;
    v21 = 0LL;
    v25 = -1;
    v23 = *((_DWORD *)v7 + 4);
    v24 = v10;
    std::vector<CDepthSortingLayer>::emplace_back<CDepthSortingLayer>((__int64 *)this, (__int64)&v21);
    if ( (_QWORD)v21 )
      std::_Deallocate<16,0>((void *)v21, (v22 - v21) & 0xFFFFFFFFFFFFFFFCuLL);
    CDepthSortingLayer::AddVisual(
      (CDepthSortingLayer *)(*((_QWORD *)this + 1) - 40LL),
      (const struct CVisualDepthGeometry *)v7);
    *((_DWORD *)this + 6) = 0;
  }
  else
  {
    v11 = *((_DWORD *)this + 6);
    v12 = -1;
    if ( v11 == -1 )
    {
LABEL_13:
      v17 = *v8;
      v22 = 0LL;
      v21 = 0LL;
      v25 = -1;
      v23 = *((_DWORD *)v7 + 4);
      v24 = v17;
      std::vector<CDepthSortingLayer>::emplace_back<CDepthSortingLayer>((__int64 *)this, (__int64)&v21);
      if ( (_QWORD)v21 )
        std::_Deallocate<16,0>((void *)v21, (v22 - v21) & 0xFFFFFFFFFFFFFFFCuLL);
      CDepthSortingLayer::AddVisual(
        (CDepthSortingLayer *)(*((_QWORD *)this + 1) - 40LL),
        (const struct CVisualDepthGeometry *)v7);
      *(_DWORD *)(*(_QWORD *)this + 40LL * v12 + 32) = -858993459
                                                     * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3)
                                                     - 1;
    }
    else
    {
      v13 = *v8;
      while ( 1 )
      {
        v14 = v9 + 40LL * v11;
        if ( *(float *)(v14 + 24) > v13 )
          break;
        if ( CDepthSortingLayer::IsOverlappingInZ(
               (CDepthSortingLayer *)(v9 + 40LL * v11),
               (const struct CVisualDepthGeometry *)v7) )
        {
          CDepthSortingLayer::AddVisual(v16, v15);
          while ( 1 )
          {
            v19 = *(_DWORD *)(v14 + 32);
            if ( v19 == -1
              || !CDepthSortingLayer::IsOverlappingInZ(
                    (CDepthSortingLayer *)(*(_QWORD *)this + 40LL * v19),
                    (const struct CVisualDepthGeometry *)v7) )
            {
              break;
            }
            CDepthSortingLayer::MergeWith((CDepthSortingLayer *)v14, v18);
          }
          return;
        }
        v12 = v11;
        v11 = *(_DWORD *)(v14 + 32);
        if ( v11 == -1 )
          goto LABEL_13;
      }
      v22 = 0LL;
      v24 = v13;
      v21 = 0LL;
      v25 = -1;
      v23 = *((_DWORD *)v7 + 4);
      std::vector<CDepthSortingLayer>::emplace_back<CDepthSortingLayer>((__int64 *)this, (__int64)&v21);
      if ( (_QWORD)v21 )
        std::_Deallocate<16,0>((void *)v21, (v22 - v21) & 0xFFFFFFFFFFFFFFFCuLL);
      *(_DWORD *)(*((_QWORD *)this + 1) - 8LL) = v11;
      v20 = *((_QWORD *)this + 1);
      if ( v12 == -1 )
        *((_DWORD *)this + 6) = -858993459 * ((v20 - *(_QWORD *)this) >> 3) - 1;
      else
        *(_DWORD *)(*(_QWORD *)this + 40LL * v12 + 32) = -858993459 * ((v20 - *(_QWORD *)this) >> 3) - 1;
      CDepthSortingLayer::AddVisual(
        (CDepthSortingLayer *)(*(_QWORD *)this + 40LL * v11),
        (const struct CVisualDepthGeometry *)v7);
    }
  }
}
