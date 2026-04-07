/*
 * XREFs of ?_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B48C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18000A43C (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x18000A474 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000ADB8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016130 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180034854 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?GetPVLTarget@CShrinkPanel@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800AF090 (-GetPVLTarget@CShrinkPanel@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z @ 0x1800B2118 (-_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800B214C (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 */

char __fastcall CGrowPanel::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  CAnimatedTransitionVisual **v4; // rbx
  int v5; // r14d
  int v9; // eax
  int v10; // eax
  CPanelAnimation *v11; // rcx
  int v12; // ecx
  LONG v13; // edx
  LONG v14; // edx
  int v15; // eax
  struct tagPOINT *v16; // rcx
  struct tagRECT *v17; // rcx
  int v18; // eax
  int PVLTarget; // eax
  int v20; // eax
  struct tagRECT v21; // xmm6
  struct tagPOINT *v22; // rcx
  struct tagRECT *v23; // rcx
  __int128 v24; // xmm0
  char result; // al
  struct tagRECT v26; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v27; // [rsp+60h] [rbp-20h] BYREF
  CBaseObject *v28; // [rsp+B8h] [rbp+38h] BYREF

  v4 = 0LL;
  v5 = 0;
  v28 = 0LL;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 || (*(_DWORD *)(a2 + 616) & 0xFFF) != 0x28 )
      goto LABEL_31;
    v24 = *(_OWORD *)(a2 + 48);
    *(_BYTE *)(a1 + 128) = 1;
    *(_OWORD *)(a1 + 132) = v24;
    goto LABEL_29;
  }
  if ( (*(_DWORD *)(a2 + 616) & 0xFFF) == 0x28 )
  {
    if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
            (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
            *(HWND *)(a2 + 40),
            1) )
      goto LABEL_31;
    PVLTarget = CShrinkPanel::GetPVLTarget(a1, *(_DWORD *)(a2 + 616));
    v20 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            0,
            PVLTarget,
            0LL,
            0LL,
            0xFFFFFFFF,
            1,
            &v28);
    v5 = v20;
    if ( v20 >= 0 )
    {
      v4 = (CAnimatedTransitionVisual **)v28;
      if ( *(_BYTE *)(a1 + 128) )
        v21 = *(struct tagRECT *)(a1 + 132);
      else
        v21 = *(struct tagRECT *)((char *)v28 + 88);
      v22 = (struct tagPOINT *)*((_QWORD *)v28 + 5);
      v27 = v21;
      CAnimatedTransitionVisual::SetBeginRect(v22, &v27);
      v23 = (struct tagRECT *)v4[5];
      v23[54] = v21;
      CVisual::SetDirtyFlags((CVisual *)&v23->right, 4096);
      goto LABEL_29;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v20, 0x59Au);
LABEL_8:
    v4 = (CAnimatedTransitionVisual **)v28;
LABEL_29:
    if ( v4 )
      CBaseObject::Release((CBaseObject *)v4);
    goto LABEL_31;
  }
  if ( (*(_DWORD *)(a2 + 616) & 0xFFF) != 0x29
    || !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
          (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
          *(HWND *)(a2 + 40),
          0) )
  {
    goto LABEL_31;
  }
  if ( *(_BYTE *)(a1 + 128) )
  {
    v9 = CShrinkPanel::GetPVLTarget(a1, *(_DWORD *)(a2 + 616));
    v10 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            0,
            v9,
            0LL,
            0LL,
            0xFFFFFFFF,
            1,
            &v28);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v4 = (CAnimatedTransitionVisual **)v28;
      v26 = *(struct tagRECT *)((char *)v28 + 88);
      v27 = v26;
      if ( CPanelAnimation::_ShouldSlideBasedOnLeft(v11, &v26, (const struct tagRECT *)(a1 + 132)) )
      {
        v12 = 0;
        v13 = *(_DWORD *)(a1 + 132);
        if ( v26.right - v26.left >= 0 )
          v12 = v26.right - v26.left;
        v27.right = v13 + v12;
      }
      else
      {
        v14 = *(_DWORD *)(a1 + 140);
        v15 = 0;
        v27.right = v14;
        if ( v26.right - v26.left >= 0 )
          v15 = v26.right - v26.left;
        v13 = v14 - v15;
      }
      v16 = (struct tagPOINT *)v4[5];
      v27.left = v13;
      CAnimatedTransitionVisual::SetBeginRect(v16, &v27);
      v17 = (struct tagRECT *)v4[5];
      v17[54] = v26;
      CVisual::SetDirtyFlags((CVisual *)&v17->right, 4096);
      CAnimatedTransitionVisual::SetBeginAlpha(v4[5], 0.0);
      goto LABEL_29;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0x57Bu);
    goto LABEL_8;
  }
  v18 = CSlide::_SlideWindow((CSlide *)a1, (struct CWindowData *)a2, 0.0, 0LL);
  v5 = v18;
  if ( v18 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v18, 0x592u);
LABEL_31:
  result = 1;
  *a4 = v5;
  return result;
}
