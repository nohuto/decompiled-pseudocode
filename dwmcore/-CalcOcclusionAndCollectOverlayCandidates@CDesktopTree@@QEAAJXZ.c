/*
 * XREFs of ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x180086974
 * Callers:
 *     ?CollectOverlayCandidates@CLegacyRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x180086940 (-CollectOverlayCandidates@CLegacyRenderTarget@@UEBAPEAVCOverlayContext@@XZ.c)
 *     ?CollectOverlayCandidates@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x1801C0E90 (-CollectOverlayCandidates@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ.c)
 * Callees:
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ @ 0x180086BB8 (-BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180086CF0 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z @ 0x180087264 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?clear_region@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800C1ED4 (-clear_region@-$vector_facade@VCVIRenderList@@V-$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_ex.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CDesktopTree::CalcOcclusionAndCollectOverlayCandidates(CDesktopTree *this)
{
  unsigned __int64 v1; // rdi
  unsigned int v3; // r14d
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  COverlayContext **v7; // rbx
  COverlayContext **v8; // r14
  gsl::details *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ecx
  COverlayContext **v13; // rbx
  COverlayContext **v14; // r15
  HANDLE CurrentThread; // rax
  BOOL v16; // eax
  __int64 v18[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 CycleTime; // [rsp+80h] [rbp+30h] BYREF

  v1 = 0LL;
  v3 = 0;
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)this + 603) - *((_QWORD *)this + 602)) >> 3) )
    detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::clear_region();
  v4 = 0LL;
  if ( g_pComposition )
    v4 = *((_QWORD *)g_pComposition + 62);
  if ( *((_QWORD *)this + 14) != v4 )
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2003292412, 0xE8u, 0LL);
    return v3;
  }
  v5 = 0LL;
  if ( g_pComposition )
    v5 = *((_QWORD *)g_pComposition + 62);
  if ( *((_QWORD *)this + 592) != v5 )
  {
    v6 = 0LL;
    if ( g_pComposition )
      v6 = *((_QWORD *)g_pComposition + 62);
    *((_QWORD *)this + 592) = v6;
    v7 = (COverlayContext **)*((_QWORD *)this + 594);
    v8 = (COverlayContext **)*((_QWORD *)this + 595);
    while ( v7 != v8 )
      COverlayContext::BeginOverlayCandidateCollection(*v7++);
    v9 = (gsl::details *)*((_QWORD *)this + 594);
    v10 = (__int64)(*((_QWORD *)this + 595) - (_QWORD)v9) >> 3;
    v18[0] = v10;
    if ( v10 != -1 )
    {
      v18[1] = (__int64)v9;
      if ( v9 || !v10 )
      {
        if ( *((_BYTE *)this + 4524) )
        {
          if ( this != (CDesktopTree *)-4504LL )
          {
LABEL_17:
            v11 = COcclusionContext::Compute((CDesktopTree *)((char *)this + 120), (__int64)v18);
            v3 = v11;
            if ( v11 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xDBu, 0LL);
            v13 = (COverlayContext **)*((_QWORD *)this + 594);
            v14 = (COverlayContext **)*((_QWORD *)this + 595);
            while ( v13 != v14 )
              COverlayContext::EndOverlayCandidateCollection(*v13++, this, (CDesktopTree *)((char *)this + 104));
            goto LABEL_23;
          }
        }
        else
        {
          v9 = (gsl::details *)*((unsigned int *)this + 731);
          if ( this != (CDesktopTree *)-2764LL || !MEMORY[0xA0] )
            goto LABEL_17;
        }
      }
    }
    gsl::details::terminate(v9);
    __debugbreak();
  }
LABEL_23:
  CycleTime = 0LL;
  if ( ::CycleTime )
  {
    CurrentThread = GetCurrentThread();
    v16 = QueryThreadCycleTime(CurrentThread, &CycleTime);
    v1 = CycleTime;
    if ( v16 )
      qword_1803E2A78 += CycleTime - ::CycleTime;
  }
  ::CycleTime = v1;
  return v3;
}
