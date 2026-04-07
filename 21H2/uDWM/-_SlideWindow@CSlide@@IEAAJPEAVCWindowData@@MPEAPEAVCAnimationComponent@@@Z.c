/*
 * XREFs of ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800B23BC
 * Callers:
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180003460 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800036E0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B4B30 (-_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CReposition@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B4FF0 (-_WindowEnumCallback@CReposition@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B50A0 (-_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006300 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18000AC7C (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18000B028 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000B5F8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016970 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180035094 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B09C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck@@@details@w.c)
 *     ?GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x1800B5904 (-GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 */

__int64 __fastcall CSlide::_SlideWindow(
        CSlide *this,
        struct CWindowData *a2,
        float a3,
        struct CAnimationComponent **a4)
{
  __int64 v4; // r8
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  HWND v11; // rdx
  CWindowPropertyTracker *v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  struct tagRECT *v15; // rcx
  struct CAnimationComponent *v16; // rax
  struct CAnimationComponent *v18; // [rsp+58h] [rbp-29h] BYREF
  struct tagPOINT v19; // [rsp+60h] [rbp-21h] BYREF
  struct tagPOINT v20; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT v21; // [rsp+78h] [rbp-9h]
  struct tagRECT rc; // [rsp+88h] [rbp+7h] BYREF
  struct tagRECT v23; // [rsp+98h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  if ( a4 )
    *a4 = 0LL;
  v18 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck>::GetImpl'::`2'::impl,
    0,
    v4);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v18);
  v8 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)this + 112LL))(this, *((unsigned int *)a2 + 154));
  v9 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v8, 0LL, 0LL, 0xFFFFFFFF, 1, &v18);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = (HWND)*((_QWORD *)a2 + 5);
    rc = *(struct tagRECT *)((char *)v18 + 88);
    v23 = rc;
    v12 = (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL);
    v21 = rc;
    if ( (int)CWindowPropertyTracker::GetWindowBeginPosition(v12, v11, &v19) >= 0
      && (int)CWindowPropertyTracker::GetWindowEndPosition(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
                *((HWND *)a2 + 5),
                &v20) >= 0 )
    {
      OffsetRect(&rc, v19.x - v21.left, v19.y - v21.top);
      OffsetRect(&v23, v20.x - v21.left, v20.y - v21.top);
    }
    v14 = *((_DWORD *)a2 + 154);
    if ( (v14 & 0x1000000) != 0 )
      rc = *(struct tagRECT *)((char *)a2 + 636);
    if ( (v14 & 0x800000) != 0 )
      v23 = *(struct tagRECT *)((char *)a2 + 668);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck>::GetImpl'::`2'::impl,
      0,
      v13);
    CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v18 + 5), &rc);
    v15 = (struct tagRECT *)*((_QWORD *)v18 + 5);
    v15[54] = v23;
    CVisual::SetDirtyFlags((CVisual *)&v15->right, 4096);
    CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v18 + 5), a3);
    v16 = v18;
    *a4 = v18;
    if ( v16 )
      _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE0,
      (__int64)"clientcore\\windows\\dwm\\udwm\\storyboard.cpp",
      (const char *)(unsigned int)v9);
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v18);
  return v10;
}
