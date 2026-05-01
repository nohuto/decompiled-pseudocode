/*
 * XREFs of _lambda_c6623334da8ed11a0378a692878c9731_::operator() @ 0x180459D40
 * Callers:
 *     wil::ResultFromException__lambda_c6623334da8ed11a0378a692878c9731___ @ 0x180458A30 (wil--ResultFromException__lambda_c6623334da8ed11a0378a692878c9731___.c)
 * Callees:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18004C914 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D1E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$?4UIWICBitmapFlipRotator@@@?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@UIWICBitmapFlipRotator@@@12@@Z @ 0x18029338C (--$-4UIWICBitmapFlipRotator@@@-$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComP.c)
 *     ??$As@UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x180458584 (--$As@UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microso.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x1804587AC (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1804595C4 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$ComPtr@UIApplicationView@@@WRL@M.c)
 *     ?IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z @ 0x18045BC08 (-IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18045EAE0 (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIApplicationViewPosition@@PEAPEAU4@@Z @ 0x18045EEAC (-_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIAppli.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x18045F0F8 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_c6623334da8ed11a0378a692878c9731_::operator()(IUnknown **a1)
{
  IUnknown *v2; // rbx
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct IApplicationViewPosition *v7; // rsi
  IUnknown *v8; // rbx
  struct IApplicationViewPosition *v9; // rbx
  int fixed; // eax
  char v11; // r14
  int v12; // ecx
  CDesktopPositioner *v13; // rcx
  __int64 *v14; // rcx
  __int64 v15; // rax
  CDesktopPositioner *v16; // rcx
  int v17; // eax
  unsigned __int8 v19[8]; // [rsp+38h] [rbp-D0h] BYREF
  void *lpVtbl; // [rsp+40h] [rbp-C8h] BYREF
  struct IApplicationViewPosition *p_lpVtbl; // [rsp+48h] [rbp-C0h] BYREF
  struct IApplicationViewPosition *v22; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v24[44]; // [rsp+60h] [rbp-A8h]
  __int128 v25[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-58h]
  int v27; // [rsp+B8h] [rbp-50h]
  __int128 v28; // [rsp+C8h] [rbp-40h] BYREF
  struct tagRECT v29; // [rsp+D8h] [rbp-30h] BYREF
  _DWORD v30[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v31; // [rsp+F0h] [rbp-18h]
  __m128i v32; // [rsp+100h] [rbp-8h]
  struct tagRECT v33; // [rsp+110h] [rbp+8h] BYREF
  __int128 v34; // [rsp+128h] [rbp+20h]

  v2 = *a1;
  lpVtbl = a1[1]->lpVtbl;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&lpVtbl);
  v4 = (__int64)v2[46].lpVtbl;
  v5 = *(_QWORD *)(v4 + 8);
  if ( *(_BYTE *)(v5 + 25) )
    goto LABEL_8;
  do
  {
    if ( *(_QWORD *)(v5 + 32) >= (unsigned __int64)lpVtbl )
    {
      v4 = v5;
      v5 = *(_QWORD *)v5;
    }
    else
    {
      v5 = *(_QWORD *)(v5 + 16);
    }
  }
  while ( !*(_BYTE *)(v5 + 25) );
  if ( (struct IUnknownVtbl *)v4 == v2[46].lpVtbl || (unsigned __int64)lpVtbl < *(_QWORD *)(v4 + 32) )
  {
LABEL_8:
    p_lpVtbl = (struct IApplicationViewPosition *)&lpVtbl;
    v4 = *std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<Microsoft::WRL::ComPtr<IApplicationView> &&>,std::tuple<>>(
            (__int64 *)&v2[46],
            (__int64 *)&v29.left,
            (__int64 *)v4,
            v3,
            (unsigned __int64 **)&p_lpVtbl);
  }
  v22 = *(struct IApplicationViewPosition **)(v4 + 40);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&lpVtbl);
  v7 = v22;
  if ( v22 )
  {
LABEL_12:
    v9 = 0LL;
    p_lpVtbl = 0LL;
    if ( a1[2]->lpVtbl )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&p_lpVtbl);
      fixed = CDesktopPositioner::_FixPositionForLayout(
                (CDesktopPositioner *)&p_lpVtbl,
                (struct IApplicationView *)a1[1]->lpVtbl,
                (struct IAppLayout *)a1[2]->lpVtbl,
                v22,
                &p_lpVtbl);
      v9 = p_lpVtbl;
      if ( fixed >= 0 )
        goto LABEL_17;
      v7 = v22;
    }
    if ( v9 != v7 )
    {
      lpVtbl = v7;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&lpVtbl);
      lpVtbl = v9;
      v9 = v7;
      p_lpVtbl = v7;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&lpVtbl);
    }
LABEL_17:
    v11 = 0;
    v12 = (int)a1[3]->lpVtbl;
    if ( v12 == 3 )
    {
      lpVtbl = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&p_lpVtbl,
                  (__int64 *)&lpVtbl) >= 0
        && (*(int (__fastcall **)(void *, int *))(*(_QWORD *)lpVtbl + 32LL))(lpVtbl, &v23) >= 0
        && v23 == 3
        && (*(int (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)lpVtbl + 56LL))(lpVtbl, &v29) >= 0 )
      {
        CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v13, &v29, &v33);
        CDesktopPositioner::_FixRectForWorkArea(*a1, 1LL, &v33, 0LL);
        (*((void (__fastcall **)(struct IUnknownVtbl *, __int64))a1[4]->lpVtbl->QueryInterface + 6))(a1[4]->lpVtbl, 3LL);
        v14 = (__int64 *)a1[4]->lpVtbl;
        v15 = *v14;
        v28 = v34;
        (*(void (__fastcall **)(__int64 *, __int128 *))(v15 + 56))(v14, &v28);
        (*((void (__fastcall **)(struct IUnknownVtbl *, __int64))a1[4]->lpVtbl->QueryInterface + 9))(a1[4]->lpVtbl, 1LL);
        v11 = 1;
      }
    }
    else
    {
      if ( v12 != 4 )
        goto LABEL_38;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
        1u,
        v6);
      v19[0] = 0;
      if ( (int)CDesktopPositioner::IsWindowMinimizing(v16, (struct IUnknown *)a1[5]->lpVtbl, v19) < 0 || v19[0] )
        goto LABEL_38;
      lpVtbl = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&p_lpVtbl,
                  (__int64 *)&lpVtbl) >= 0
        && (*(int (__fastcall **)(void *, int *))(*(_QWORD *)lpVtbl + 32LL))(lpVtbl, &v23) >= 0
        && v23 == 1
        && (*(int (__fastcall **)(void *, _DWORD *))(*(_QWORD *)lpVtbl + 72LL))(lpVtbl, v30) >= 0 )
      {
        *(_DWORD *)v24 = 44;
        *(_DWORD *)&v24[4] = v30[0];
        *(_DWORD *)&v24[8] = v30[1];
        *(_OWORD *)&v24[12] = v31;
        *(__m128i *)&v24[28] = v32;
        v25[0] = *(_OWORD *)v24;
        v25[1] = *(_OWORD *)&v24[16];
        v26 = *(__int64 *)((char *)v32.m128i_i64 + 4);
        v27 = _mm_cvtsi128_si32(_mm_srli_si128(v32, 12));
        DWORD2(v25[0]) = 1;
        if ( (*(int (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)lpVtbl + 64LL))(lpVtbl, &v29) >= 0 )
        {
          v17 = 1;
          if ( v29.left == 1 )
            v17 = 3;
          DWORD2(v25[0]) = v17;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&lpVtbl);
        Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(
          &lpVtbl,
          v25);
        Microsoft::WRL::ComPtr<IWICBitmapSource>::operator=<IWICBitmapFlipRotator>(
          (__int64 *)&p_lpVtbl,
          (__int64 *)&lpVtbl);
        v9 = p_lpVtbl;
      }
      (*((void (__fastcall **)(struct IUnknownVtbl *, __int64))a1[4]->lpVtbl->QueryInterface + 12))(a1[4]->lpVtbl, 1LL);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&lpVtbl);
    if ( v11 )
    {
LABEL_39:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&p_lpVtbl);
      return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    }
LABEL_38:
    (*((void (__fastcall **)(struct IUnknownVtbl *, struct IApplicationViewPosition *))a1[4]->lpVtbl->QueryInterface + 10))(
      a1[4]->lpVtbl,
      v9);
    goto LABEL_39;
  }
  v8 = *a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  if ( (int)CDesktopPositioner::_GetRestorePosition(v8, (struct IApplicationView *)a1[1]->lpVtbl, 0LL, &v22) >= 0 )
  {
    v7 = v22;
    goto LABEL_12;
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
}
