/*
 * XREFs of ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800C8F1C
 * Callers:
 *     ?Present@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x180118950 (-Present@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 *     ?Present@CLegacyRenderTarget@@$4PPPPPPPM@BA@EAAJ_N@Z @ 0x180118970 (-Present@CLegacyRenderTarget@@$4PPPPPPPM@BA@EAAJ_N@Z.c)
 * Callees:
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180042478 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?Ready@CTargetStats@@QEAA_NAEBUtagCOMPOSITION_TARGET_ID@@_KPEAVIOverlaySwapChain@@@Z @ 0x18008BF70 (-Ready@CTargetStats@@QEAA_NAEBUtagCOMPOSITION_TARGET_ID@@_KPEAVIOverlaySwapChain@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z @ 0x1800C9100 (-CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z.c)
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I_N@Z @ 0x1800C9168 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800E18F0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?NeedsPresent@COverlayContext@@QEBA_NXZ @ 0x1800E2054 (-NeedsPresent@COverlayContext@@QEBA_NXZ.c)
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800F1BF8 (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRenderTarget::Present(struct IOverlaySwapChain **this, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  LARGE_INTEGER *v5; // r14
  struct IOverlaySwapChain **v6; // r15
  unsigned __int8 v7; // r12
  bool v8; // cl
  FastRegion::Internal::CRgnData **v9; // rcx
  char v10; // di
  int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  _DWORD **v14; // rax
  unsigned int v15; // eax
  LARGE_INTEGER v16; // rax
  struct CComposition *v17; // rcx
  LARGE_INTEGER v18; // rax
  void *v19; // rcx
  unsigned __int64 v20; // rdx
  void *v22[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h]
  LARGE_INTEGER PerformanceCount; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v25; // [rsp+A0h] [rbp+50h] BYREF
  void *v26; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0;
  if ( *(this - 2321) )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v5 = (LARGE_INTEGER *)(this - 33);
    v6 = this - 2344;
    v7 = CTargetStats::Ready(
           (CTargetStats *)(this - 33),
           (const struct tagCOMPOSITION_TARGET_ID *)(this - 40),
           PerformanceCount.QuadPart,
           *(this - 2321));
    v8 = *((_BYTE *)this - 52)
      || !*(_DWORD *)*(this - 21) && COverlayContext::NeedsPresent((COverlayContext *)(this - 2319));
    if ( *((_BYTE *)this - 51) | a2 || v7 && v8 )
    {
      v23 = 0LL;
      v9 = (FastRegion::Internal::CRgnData **)*(this - 12);
      *(_OWORD *)v22 = 0LL;
      if ( v9 )
        CRegion::GetRectangles(v9, v22);
      else
        (*(void (__fastcall **)(_QWORD, void **))(*(_QWORD *)*(this - 2321) + 40LL))(*(this - 2321), v22);
      v10 = (*((__int64 (__fastcall **)(char *))*v6 + 30))((char *)this - 18752);
      v11 = *((_DWORD *)this - 65) + 1 + *((_DWORD *)this - 64);
      (*((void (__fastcall **)(char *))*v6 + 31))((char *)this - 18752);
      v12 = COverlayContext::Present((COverlayContext *)(this - 2319), *(this - 2321), v11, v10);
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1DBu, 0LL);
        if ( v22[0] )
          std::_Deallocate<16,0>(v22[0], (v23 - (unsigned __int64)v22[0]) & 0xFFFFFFFFFFFFFFF0uLL);
      }
      else
      {
        QueryPerformanceCounter(&PerformanceCount);
        v14 = (_DWORD **)*(this - 12);
        *((_WORD *)this - 26) = 0;
        if ( v14 )
          **v14 = 0;
        v15 = CLegacyRenderTarget::CheckForOcclusionChange((CLegacyRenderTarget *)(this - 2344), v2);
        ++v5->LowPart;
        v2 = v15;
        v16 = PerformanceCount;
        ++v5->HighPart;
        v17 = g_pComposition;
        v5[7] = v16;
        v18.QuadPart = 0LL;
        if ( v17 )
          v18 = *(LARGE_INTEGER *)((char *)v17 + 496);
        v19 = v22[0];
        v5[8] = v18;
        if ( v19 )
        {
          v26 = v19;
          v20 = (v23 - (_QWORD)v19) & 0xFFFFFFFFFFFFFFF0uLL;
          v25 = v20;
          if ( v20 >= 0x1000 )
          {
            std::_Adjust_manually_vector_aligned(&v26, &v25);
            v20 = v25;
            v19 = v26;
          }
          operator delete(v19, v20);
        }
      }
    }
    else if ( v8 )
    {
      ScheduleCompositionPass(0LL, 2LL);
    }
  }
  if ( *((_BYTE *)this - 50) )
    return 142213121;
  return v2;
}
