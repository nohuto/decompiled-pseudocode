/*
 * XREFs of ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1802B5D18
 * Callers:
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802B358C (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802B4660 (-_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ViewPresentationMode@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180098F28 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ViewPresentationMode@@@details@wil@@QEAAX.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1802134A4 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180215D98 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _LogEventWithViewHostItemData__ @ 0x1802ADC8C (_LogEventWithViewHostItemData__.c)
 *     ??4?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1802AED1C (--4-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEA.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1802B4160 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x1802B5BFC (-_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransit.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_TransitionViewFromHolographic(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Internal::Shell::Holographic::IViewHostItem *a3)
{
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v3; // rdi
  char *ViewHostItem; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  __m256i v17; // [rsp+30h] [rbp-30h] OVERLAPPED
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v19; // [rsp+90h] [rbp+30h] BYREF
  __int64 v20; // [rsp+98h] [rbp+38h] BYREF

  v3 = a3;
  v19 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
  if ( v3 )
    goto LABEL_23;
  ViewHostItem = (char *)HolographicPositioner::_FindViewHostItem((__int64)this, &v20);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::operator=((__int64 *)&v19, ViewHostItem);
  v7 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v3 = v19;
  if ( v19 )
  {
LABEL_23:
    if ( *((_QWORD *)this + 29) )
    {
      LogEventWithViewHostItemData__(
        (__int64)v3,
        (void (__fastcall *)(PCWSTR *, char *))HolographicPositionerTelemetry::TransitionViewFromHolographic<unsigned short const *,unsigned int &>);
      v8 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::Shell::Holographic::IViewHostItem *))(**((_QWORD **)this + 29) + 56LL))(
             *((_QWORD *)this + 29),
             v3);
      v10 = v8;
      if ( v8 < 0 )
      {
        v11 = 1859LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v8);
        goto LABEL_18;
      }
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_ViewPresentationMode>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetImpl'::`2'::impl,
        1u,
        v9);
      v17.m256i_i64[0] = 0LL;
      *(__m128i *)((char *)&v17.m256i_u64[1] + 4) = _mm_load_si128((const __m128i *)&_xmm);
      v17.m256i_i32[2] = 0;
      Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v20);
      v12 = v20;
      if ( !v20 )
      {
        v10 = -2147024882;
        v13 = 2147942414LL;
        v14 = 1869LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)v13);
        Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v20);
        goto LABEL_18;
      }
      *(_OWORD *)(v20 + 132) = 0LL;
      *(__m256i *)(v12 + 148) = v17;
      *(_BYTE *)(v12 + 128) = 1;
      v15 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 320LL))(a2);
      v10 = v15;
      if ( v15 < 0 )
      {
        v13 = (unsigned int)v15;
        v14 = 1871LL;
        goto LABEL_12;
      }
      Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v20);
    }
    v8 = HolographicPositioner::_SendViewTransitionNotification((__int64)this, (__int64)a2, 1);
    v10 = v8;
    if ( v8 < 0 )
    {
      v11 = 1875LL;
      goto LABEL_16;
    }
  }
  v10 = 0;
LABEL_18:
  if ( v3 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Holographic::IViewHostItem *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v10;
}
