/*
 * XREFs of ?AnimatePositionChanged@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x180433350
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x18000C270 (-IsHighContrast@@YAHXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIVirtualDesktopBarElement@@@?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopBarElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x180408084 (--$As@UIVirtualDesktopBarElement@@@-$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18040BFB8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInShell@@@details@wil@@QEAAX_NW.c)
 *     ??$As@UIAnimatableScrollViewer@@@?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAnimatableScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804291DC (--$As@UIAnimatableScrollViewer@@@-$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@Q.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73___ @ 0x180433068 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_ebf7812295cd6a46fe62472baa772.c)
 */

void __fastcall VirtualDesktopAddAnimationCoordinator::AnimatePositionChanged(
        VirtualDesktopAddAnimationCoordinator *this,
        const struct ItemAnimationCoordinatorBase::PositionChangedInfo *a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  char *v7; // r14
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdx
  int AnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73; // eax
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp-20h] BYREF
  __m128i v17; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( *((_DWORD *)a2 + 2) == 8 )
  {
    (*(void (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**(_QWORD **)a2 + 512LL))(
      *(_QWORD *)a2,
      (char *)a2 + 12,
      0LL,
      0LL);
    (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)a2 + 512LL))(*(_QWORD *)a2, (char *)a2 + 28, 25LL);
  }
  else if ( *((_DWORD *)a2 + 2) == 3 )
  {
    v12 = 0LL;
    v4 = Microsoft::WRL::ComPtr<IAnimatableMultitaskingViewElement>::As<IAnimatableScrollViewer>(a2, &v12);
    if ( v4 >= 0 )
      (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v12 + 112LL))(v12, (char *)a2 + 28, 25LL);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x42,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopaddanimationcoordinator.cpp",
        (const char *)(unsigned int)v4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  else if ( *((_DWORD *)a2 + 2) == 7 && *((_QWORD *)this + 12) )
  {
    v13 = 0LL;
    v5 = Microsoft::WRL::ComPtr<IAnimatableMultitaskingViewElement>::As<IVirtualDesktopBarElement>(a2, &v13);
    if ( v5 >= 0 )
    {
      v6 = *((_DWORD *)this + 62);
      v7 = (char *)a2 + 28;
      v17 = *(__m128i *)((char *)a2 + 28);
      v17.m128i_i32[3] = v6 + _mm_srli_si128(v17, 8).m128i_i32[1];
      v17.m128i_i32[1] += v6;
      (*(void (__fastcall **)(__int64, _QWORD, __m128i *, _QWORD, _QWORD))(*(_QWORD *)v13 + 32LL))(
        v13,
        0LL,
        &v17,
        0LL,
        0LL);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 56LL))(v13, &v12);
      v14 = 0LL;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_ActivitiesInShell>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_ActivitiesInShell>::GetImpl'::`2'::impl,
        0,
        v8);
      if ( v12 && !(unsigned int)IsHighContrast() )
      {
        v9 = v12;
        v16 = v12;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        v15 = v9;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
        AnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73 = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73___(
                                                                      &v15,
                                                                      v10,
                                                                      &v14);
        if ( AnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73 >= 0 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 32LL))(v12, 0LL);
        else
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x72,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopaddanimationcoordinator.cpp",
            (const char *)(unsigned int)AnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      }
      (*(void (__fastcall **)(__int64, _QWORD, char *, __int64, __int64))(*(_QWORD *)v13 + 32LL))(
        v13,
        0LL,
        v7,
        23LL,
        v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4C,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopaddanimationcoordinator.cpp",
        (const char *)(unsigned int)v5);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  }
}
