/*
 * XREFs of ?CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUtagRECT@@PEBUtagSIZE@@PEAPEAU3@@Z @ 0x180419D0C
 * Callers:
 *     ?_CreateDesktopBackgroundThumbnail@CMultitaskingViewFrameElement@@AEAAJAEBUCRect@Geometry@@PEAPEAUIDCompThumbnail@@@Z @ 0x18041B304 (-_CreateDesktopBackgroundThumbnail@CMultitaskingViewFrameElement@@AEAAJAEBUCRect@Geometry@@PEAPE.c)
 *     ?CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ @ 0x1804848F0 (-CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CDropFeedback@@QEAAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@@Z @ 0x180492628 (-RuntimeClassInitialize@CDropFeedback@@QEAAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800908D4 (_wcsicmp.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EmptyStageBackgroundImage@@@details@wil@@QEAA_NXZ @ 0x1800D5ADC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EmptyStageBackgroundImage@@@detai.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DCompThumbnailHelpers::CreateDesktopBackgroundThumbnail(
        DCompThumbnailHelpers *this,
        struct ISwitchThumbnailFactory *a2,
        struct IDCompThumbnail *a3,
        const struct tagRECT *a4,
        const struct tagSIZE *a5)
{
  HWND Window; // rbx
  bool v10; // si
  __int64 v11; // rbx
  __int64 v12; // rdi
  DWORD SysColor; // eax
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 (__fastcall *v17)(DCompThumbnailHelpers *, struct ISwitchThumbnailFactory *, HWND, _QWORD, const struct tagRECT *, _DWORD *, GUID *, const struct tagSIZE *); // rax
  __int64 v19; // [rsp+50h] [rbp-B0h]
  _DWORD v20[4]; // [rsp+58h] [rbp-A8h] BYREF
  struct tagRECT Rect; // [rsp+68h] [rbp-98h] BYREF
  wchar_t pvParam[264]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  Window = 0LL;
  *a5 = 0LL;
  memset_0(pvParam, 0, 0x208uLL);
  SystemParametersInfoW(0x73u, 0x104u, pvParam, 0);
  if ( IsPPIEdition()
    && wil::details::FeatureImpl<__WilFeatureTraits_Feature_EmptyStageBackgroundImage>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_EmptyStageBackgroundImage>::GetImpl'::`2'::impl) )
  {
    Window = FindWindowExW(0LL, 0LL, L"Windows.UI.Core.CoreWindow", L"PPIEmptyStage");
    v10 = Window != 0LL;
  }
  else
  {
    v10 = 0;
  }
  if ( pvParam[0] && wcsicmp(pvParam, L"(None)") && !IsPPIEdition() || v10 )
  {
    if ( !Window )
    {
      Window = GetShellWindow();
      if ( !Window )
      {
        v14 = -2147019873;
        v15 = 268LL;
        goto LABEL_19;
      }
    }
    Rect = 0LL;
    GetWindowRect(Window, &Rect);
    v16 = *(_QWORD *)this;
    v20[0] = *(_DWORD *)a3 - Rect.left;
    v17 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, struct ISwitchThumbnailFactory *, HWND, _QWORD, const struct tagRECT *, _DWORD *, GUID *, const struct tagSIZE *))(v16 + 64);
    v20[2] = *((_DWORD *)a3 + 2) - Rect.left;
    v20[3] = *((_DWORD *)a3 + 3) - Rect.top;
    v20[1] = *((_DWORD *)a3 + 1) - Rect.top;
    v14 = v17(this, a2, Window, 0LL, a4, v20, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, a5);
    if ( v14 < 0 )
    {
      v15 = 283LL;
      goto LABEL_19;
    }
  }
  else
  {
    if ( a4 )
    {
      v11 = *(_QWORD *)&a4->left;
    }
    else
    {
      LODWORD(v19) = *((_DWORD *)a3 + 2) - *(_DWORD *)a3;
      HIDWORD(v19) = *((_DWORD *)a3 + 3) - *((_DWORD *)a3 + 1);
      v11 = v19;
    }
    v12 = *(_QWORD *)this;
    SysColor = GetSysColor(1);
    v14 = (*(__int64 (__fastcall **)(DCompThumbnailHelpers *, struct ISwitchThumbnailFactory *, _QWORD, __int64, GUID *, const struct tagSIZE *))(v12 + 104))(
            this,
            a2,
            SysColor,
            v11,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            a5);
    if ( v14 < 0 )
    {
      v15 = 264LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"internal\\shell\\private\\inc\\DCompThumbnailFactory\\DCompThumbnailHelpers.h",
        (const char *)(unsigned int)v14);
    }
  }
  return (unsigned int)v14;
}
