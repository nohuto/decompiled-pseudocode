/*
 * XREFs of _MonitorFromRect @ 0x1C007B570
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0048C48 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     xxxCheckFullScreen @ 0x1C0061F88 (xxxCheckFullScreen.c)
 *     GetNewMonitor @ 0x1C006F304 (GetNewMonitor.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C007B464 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _GetWindowPlacement @ 0x1C007C658 (_GetWindowPlacement.c)
 *     CkptUpdate @ 0x1C007CA54 (CkptUpdate.c)
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     ?xxxProcessTopologyChange@CRecalcProp@@AEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AF100 (-xxxProcessTopologyChange@CRecalcProp@@AEAA-AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcConte.c)
 *     _anonymous_namespace_::GetPreviousMonitorInfo @ 0x1C00B02C8 (_anonymous_namespace_--GetPreviousMonitorInfo.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C00BA5DC (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     CreateSpb @ 0x1C00C92A0 (CreateSpb.c)
 *     CitGetWindowInfo @ 0x1C00CB860 (CitGetWindowInfo.c)
 *     xxxSetWindowPlacement @ 0x1C01045D8 (xxxSetWindowPlacement.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C015B0AC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x1C01DE8CC (-DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E1818 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C020BFC8 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020E1A8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C02108F0 (xxxSetInternalWindowPos.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C022F9FC (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@AEBVCMonitorTopology@@@Z @ 0x1C023B3FC (-xxxFullscreenRestore@CRecalcState@@QEAA-AW4ProcessRecalcResult@@PEAUtagWND@@AEBVCMonitorTopolog.c)
 *     ?xxxRestore@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@@Z @ 0x1C023B694 (-xxxRestore@CRecalcState@@QEAA-AW4ProcessRecalcResult@@PEAUtagWND@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C024ADB8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1C024BDB4 (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     _MonitorFromPoint @ 0x1C007B350 (_MonitorFromPoint.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007B728 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetScreenRectForDpi @ 0x1C00B06C4 (GetScreenRectForDpi.c)
 *     GetMonitorRectForDpi @ 0x1C00B0924 (GetMonitorRectForDpi.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromRect(struct tagRECT *a1, unsigned int a2, unsigned int CurrentThreadDpiAwarenessContext)
{
  __int64 v6; // r13
  __int64 DispInfo; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r14d
  __int64 v12; // rdi
  int v13; // r15d
  __int64 v14; // rcx
  unsigned int v15; // esi
  __int64 v16; // rdi
  unsigned int v17; // esi
  unsigned __int16 v18; // r14
  LONG right; // eax
  int v20; // ecx
  unsigned int v21; // ecx
  LONG bottom; // eax
  int v23; // edx
  LONG top; // eax
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  __int64 v27; // rdi
  unsigned __int64 v28; // rsi
  LONG v29; // edx
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  LONG v33; // eax
  int v34; // ecx
  LONG v35; // eax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  unsigned __int16 v38; // [rsp+20h] [rbp-60h]
  LONG v39; // [rsp+28h] [rbp-58h] BYREF
  LONG v40; // [rsp+2Ch] [rbp-54h]
  LONG v41; // [rsp+30h] [rbp-50h]
  int v42; // [rsp+34h] [rbp-4Ch]
  __int128 v43; // [rsp+40h] [rbp-40h] BYREF
  __int128 v44; // [rsp+50h] [rbp-30h] BYREF
  __int128 v45; // [rsp+60h] [rbp-20h] BYREF

  v45 = 0LL;
  v6 = 0LL;
  DispInfo = GetDispInfo();
  if ( **(_DWORD **)DispInfo == 1 && a2 )
    return *(_QWORD *)(GetDispInfo() + 96);
  if ( (unsigned int)IsRectEmptyInl(a1) )
    return MonitorFromPoint(*(_QWORD *)&a1->left, a2, CurrentThreadDpiAwarenessContext);
  if ( !CurrentThreadDpiAwarenessContext )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v10, v9);
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
       || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                     + 64LL) & 1) == 0) )
    {
      CurrentThreadDpiAwarenessContext = 18;
    }
  }
  v11 = CurrentThreadDpiAwarenessContext >> 8;
  v38 = v11 & 0x1FF;
  GetScreenRectForDpi(&v43, v11 & 0x1FF);
  if ( a1->left <= (int)v43 && a1->top <= SDWORD1(v43) && a1->right >= SDWORD2(v43) && a1->bottom >= SHIDWORD(v43) )
    return *(_QWORD *)(GetDispInfo() + 96);
  v12 = *(_QWORD *)(DispInfo + 104);
  v13 = 0;
  if ( v12 )
  {
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v12 + 40) + 24LL) & 1) != 0 )
      {
        GetMonitorRectForDpi(&v44, v12, v38);
        v43 = v44;
        if ( (unsigned int)IntersectRect(&v45, &a1->left, (int *)&v43) )
        {
          v14 = v45 - *(_QWORD *)&a1->left;
          if ( (_QWORD)v45 == *(_QWORD *)&a1->left )
            v14 = *((_QWORD *)&v45 + 1) - *(_QWORD *)&a1->right;
          if ( !v14 )
            return v12;
          if ( (DWORD2(v45) - (int)v45) * (HIDWORD(v45) - DWORD1(v45)) > v13 )
          {
            v13 = (DWORD2(v45) - v45) * (HIDWORD(v45) - DWORD1(v45));
            v6 = v12;
          }
        }
      }
      v12 = *(_QWORD *)(v12 + 56);
    }
    while ( v12 );
    if ( v13 > 0 )
      return v6;
  }
  if ( a2 )
  {
    v15 = a2 - 1;
    if ( v15 )
    {
      if ( v15 != 1 )
        return 0LL;
      if ( (unsigned int)(a1->left + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->top + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->right + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->bottom + 0x8000) <= 0xFFFF )
      {
        v16 = *(_QWORD *)(DispInfo + 104);
        v17 = -1;
        if ( !v16 )
          return v6;
        v18 = v11 & 0x1FF;
        while ( (*(_DWORD *)(*(_QWORD *)(v16 + 40) + 24LL) & 1) == 0 )
        {
LABEL_55:
          v16 = *(_QWORD *)(v16 + 56);
          if ( !v16 )
            return v6;
        }
        GetMonitorRectForDpi(&v39, v16, v18);
        right = a1->right;
        if ( right > v39 )
        {
          if ( a1->left < v41 )
          {
            v21 = 0;
            goto LABEL_45;
          }
          v20 = a1->left - v41;
        }
        else
        {
          v20 = v39 - right;
        }
        v21 = v20 + 1;
LABEL_45:
        if ( v21 < v17 )
        {
          bottom = a1->bottom;
          if ( bottom > v40 )
          {
            top = a1->top;
            if ( top >= v42 )
              v23 = top - v42 + 1;
            else
              v23 = 0;
          }
          else
          {
            v23 = v40 - bottom + 1;
          }
          v25 = v21 * v21;
          if ( v25 < v17 && v25 + v23 < v17 )
          {
            v26 = v23 * v23 + v25;
            if ( v26 < v17 )
            {
              v17 = v26;
              v6 = v16;
            }
          }
        }
        goto LABEL_55;
      }
      v27 = *(_QWORD *)(DispInfo + 104);
      v28 = -1LL;
      while ( 1 )
      {
        if ( !v27 )
          return v6;
        if ( (*(_DWORD *)(*(_QWORD *)(v27 + 40) + 24LL) & 1) != 0 )
          break;
LABEL_75:
        v27 = *(_QWORD *)(v27 + 56);
      }
      GetMonitorRectForDpi(&v39, v27, v38);
      v29 = a1->right;
      if ( v29 > v39 )
      {
        if ( a1->left < v41 )
        {
          v31 = 0;
LABEL_65:
          v32 = v31;
          if ( v31 < v28 )
          {
            v33 = a1->bottom;
            if ( v33 > v40 )
            {
              v35 = a1->top;
              v34 = v35 >= v42 ? v35 - v42 + 1 : 0;
            }
            else
            {
              v34 = v40 - v33 + 1;
            }
            v36 = v32 * v32;
            if ( v36 < v28 && v34 + v36 < v28 )
            {
              v37 = v34 * (__int64)v34 + v36;
              if ( v37 < v28 )
              {
                v28 = v37;
                v6 = v27;
              }
            }
          }
          goto LABEL_75;
        }
        v30 = a1->left - v41;
      }
      else
      {
        v30 = v39 - v29;
      }
      v31 = v30 + 1;
      goto LABEL_65;
    }
    return *(_QWORD *)(GetDispInfo() + 96);
  }
  return 0LL;
}
