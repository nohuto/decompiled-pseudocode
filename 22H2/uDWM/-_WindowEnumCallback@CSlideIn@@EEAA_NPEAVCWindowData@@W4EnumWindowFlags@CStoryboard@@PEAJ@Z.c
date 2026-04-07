/*
 * XREFs of ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180003460
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180003E50 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800047C4 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x1800049D0 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x180007E94 (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180008AB0 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x18000A474 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18000A7E8 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000ADB8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016130 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18002B1EC (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z @ 0x1800A7B78 (-SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z.c)
 *     ?GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800AFA34 (-GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800B214C (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800B2368 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 */

char __fastcall CSlideIn::_WindowEnumCallback(CSlide *a1, __int64 a2, char a3, int *a4)
{
  int v4; // ebx
  CBaseObject *v5; // r15
  int v8; // esi
  unsigned int v9; // r14d
  struct tagRECT v10; // xmm0
  HWND v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  CBaseObject *v14; // rsi
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  CAnimatedTransitionVisual *v18; // rcx
  __int128 v19; // xmm6
  __int64 v20; // rcx
  char result; // al
  int v22; // eax
  CBaseObject *v23; // rsi
  RECT *v24; // rax
  LONG *TaggedWindow; // rax
  unsigned int v26; // r9d
  LONG bottom; // edi
  int v28; // edx
  double v29; // xmm8_8
  double v30; // xmm6_8
  int v31; // ecx
  __m128i v32; // xmm8
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // ecx
  CBaseObject **v41; // r8
  struct tagSIZE *v42; // rdx
  struct CAnimationComponent **v43; // [rsp+30h] [rbp-91h]
  struct CAnimationComponent **v44; // [rsp+30h] [rbp-91h]
  CBaseObject *v45; // [rsp+38h] [rbp-89h] BYREF
  struct tagSIZE v46; // [rsp+40h] [rbp-81h] BYREF
  CBaseObject *v47; // [rsp+48h] [rbp-79h] BYREF
  struct tagRECT v48; // [rsp+50h] [rbp-71h] BYREF
  int *v49; // [rsp+60h] [rbp-61h]
  struct tagRECT rcDst; // [rsp+68h] [rbp-59h] BYREF
  RECT rcSrc2; // [rsp+78h] [rbp-49h] BYREF
  RECT rcSrc1; // [rsp+88h] [rbp-39h] BYREF
  RECT v53; // [rsp+98h] [rbp-29h] BYREF

  v4 = 0;
  v49 = a4;
  v45 = 0LL;
  v5 = 0LL;
  v47 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_21;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v48);
  v8 = *(_DWORD *)(a2 + 616);
  v9 = v8 & 0xFFF;
  if ( v9 > 0x2B )
  {
    if ( v9 != 60 )
    {
      switch ( v9 )
      {
        case 'E':
          v39 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v48, 1, &v45);
          v4 = v39;
          if ( v39 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              v39,
              0x29Fu,
              v43);
          break;
        case 'F':
          v38 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v45);
          v4 = v38;
          if ( v38 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              v38,
              0x29Bu,
              v43);
          break;
        case 'W':
          goto LABEL_6;
        default:
          goto LABEL_21;
      }
      goto LABEL_17;
    }
LABEL_27:
    v22 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v45);
    v4 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v22, 0x2B7u, v43);
    }
    else
    {
      *(_DWORD *)(a2 + 616) = v8;
      if ( (v8 & 0xFFF) == 0x3C )
      {
        v23 = v45;
        v47 = 0LL;
        *(double *)&v46 = 0.0;
        *(_BYTE *)(*((_QWORD *)v45 + 5) + 968LL) = 1;
        v53 = *(RECT *)(*((_QWORD *)v23 + 5) + 848LL);
        v24 = (RECT *)*((_QWORD *)v23 + 5);
        rcDst = 0LL;
        rcSrc1 = v24[54];
        rcSrc2 = 0LL;
        TaggedWindow = (LONG *)CStoryboard::GetTaggedWindow();
        bottom = v48.bottom;
        if ( TaggedWindow )
        {
          v28 = 0;
          rcSrc2.left = TaggedWindow[12];
          if ( TaggedWindow[15] - TaggedWindow[13] >= 0 )
            v28 = TaggedWindow[15] - TaggedWindow[13];
          rcSrc2.top = v48.bottom - v28;
          rcSrc2.right = TaggedWindow[14];
          rcSrc2.bottom = v48.bottom;
        }
        if ( v53.bottom <= rcSrc1.bottom )
        {
          v30 = 0.0;
          if ( v53.bottom >= rcSrc1.bottom )
            goto LABEL_74;
          if ( IntersectRect(&rcDst, &v53, &rcSrc2) && !IsRectEmpty(&rcDst) )
          {
            v40 = 0;
            if ( rcDst.bottom - rcDst.top >= 0 )
              v40 = rcDst.bottom - rcDst.top;
            v30 = (double)-v40;
            *(double *)&v46 = v30;
          }
          v32 = _mm_cvtsi32_si128(bottom - rcSrc1.bottom);
        }
        else
        {
          v29 = 0.0;
          v30 = (double)(v48.bottom - v53.bottom);
          *(double *)&v46 = v30;
          if ( !IntersectRect(&rcDst, &rcSrc1, &rcSrc2) || IsRectEmpty(&rcDst) )
          {
LABEL_72:
            if ( v29 != 0.0 )
            {
              v41 = &v47;
LABEL_75:
              if ( v30 == 0.0 )
                v42 = 0LL;
              else
                v42 = &v46;
              CAnimatedTransitionVisual::SetChopPosition(
                *((CAnimatedTransitionVisual **)v23 + 5),
                (const double *)v42,
                (const double *)v41,
                v26);
              goto LABEL_17;
            }
LABEL_74:
            v41 = 0LL;
            goto LABEL_75;
          }
          v31 = 0;
          if ( rcDst.bottom - rcDst.top >= 0 )
            v31 = rcDst.bottom - rcDst.top;
          v32 = _mm_cvtsi32_si128(-v31);
        }
        *(_QWORD *)&v29 = *(_OWORD *)&_mm_cvtepi32_pd(v32);
        v47 = *(CBaseObject **)&v29;
        goto LABEL_72;
      }
    }
LABEL_17:
    if ( v45 )
      CBaseObject::Release(v45);
    if ( v5 )
      CBaseObject::Release(v5);
    goto LABEL_21;
  }
  if ( v9 == 43 )
  {
    v35 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, (unsigned int)v8);
    v36 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(a1, (struct CWindowData *)a2, v35, 1, &v45);
    v4 = v36;
    if ( v36 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v36, 0x300u, v43);
    goto LABEL_17;
  }
  if ( (v8 & 0xFFF) != 0 )
  {
    if ( v9 == 42 )
    {
LABEL_6:
      if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
              *(HWND *)(a2 + 40),
              0) )
      {
        v37 = *(_DWORD *)(a2 + 616) & 0xFFF;
        if ( v37 != 42 && v37 != 87 )
          goto LABEL_21;
        if ( !CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40)) )
          goto LABEL_21;
      }
      v10 = *(struct tagRECT *)(a2 + 48);
      v11 = *(HWND *)(a2 + 40);
      *(_QWORD *)&rcSrc2.left = 0LL;
      v12 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
      *(double *)&v46 = 0.0;
      rcDst = v10;
      if ( (int)CWindowPropertyTracker::GetWindowEndPosition(
                  (CWindowPropertyTracker *)(v12 + 48),
                  v11,
                  (struct tagPOINT *)&rcSrc2) >= 0 )
        OffsetRect(&rcDst, rcSrc2.left - rcDst.left, rcSrc2.top - rcDst.top);
      if ( (int)CWindowPropertyTracker::GetWindowEndSize(
                  (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
                  *(HWND *)(a2 + 40),
                  &v46) >= 0 )
      {
        rcDst.right = v46.cx + rcDst.left;
        rcDst.bottom = v46.cy + rcDst.top;
      }
      CTransitionVisualController::GetMonitorRectFromRectImpl(&rcDst, &v48);
      v13 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v48, 1, &rcDst, &v45);
      v4 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          v13,
          0x284u,
          v44);
      }
      else
      {
        v14 = v45;
        *(_BYTE *)(*((_QWORD *)v45 + 5) + 968LL) = 1;
        v15 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, v9);
        v16 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v15, &v47);
        v4 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            v16,
            0x287u,
            v44);
          v5 = v47;
        }
        else
        {
          v5 = v47;
          if ( v47 )
          {
            v17 = *((_QWORD *)v14 + 5);
            v18 = (CAnimatedTransitionVisual *)*((_QWORD *)v47 + 5);
            v19 = *(_OWORD *)(v17 + 864);
            v53 = *(RECT *)(v17 + 848);
            CAnimatedTransitionVisual::SetBeginRect(v18, &v53);
            v20 = *((_QWORD *)v5 + 5);
            *(_OWORD *)(v20 + 864) = v19;
            CVisual::SetDirtyFlags((CVisual *)(v20 + 8), 0x1000u);
            *(_BYTE *)(*((_QWORD *)v5 + 5) + 979LL) = 1;
            *((_BYTE *)v5 + 74) = 1;
            if ( *((_DWORD *)v5 + 17) != 2 )
              *((_DWORD *)v5 + 17) = 1;
            *((_DWORD *)v45 + 14) = *((_DWORD *)v5 + 14) + 1;
          }
        }
      }
      goto LABEL_17;
    }
    if ( v9 == 8 )
    {
      if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
              *(HWND *)(a2 + 40),
              0) )
        goto LABEL_21;
      *(_DWORD *)(a2 + 616) |= 0x200000u;
      v33 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v48, 1, &v45);
      v4 = v33;
      if ( v33 >= 0 )
        *(_BYTE *)(*((_QWORD *)v45 + 5) + 968LL) = 1;
      else
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          v33,
          0x2A9u,
          v43);
      goto LABEL_17;
    }
    if ( v9 != 11 )
    {
      if ( v9 != 24 )
        goto LABEL_21;
      goto LABEL_6;
    }
    v8 |= 0x200000u;
    *(_DWORD *)(a2 + 616) = v8;
    goto LABEL_27;
  }
  if ( v8 < 0 )
  {
    v34 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
    v4 = v34;
    if ( v34 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v34, 0x2FAu, v43);
  }
LABEL_21:
  result = 1;
  *v49 = v4;
  return result;
}
