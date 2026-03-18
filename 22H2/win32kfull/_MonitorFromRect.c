/*
 * XREFs of _MonitorFromRect @ 0x1C00D0160
 * Callers:
 *     _GetWindowPlacement @ 0x1C0006908 (_GetWindowPlacement.c)
 *     CreateSpb @ 0x1C000DD04 (CreateSpb.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0029418 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     xxxSystemParametersInfoWorker @ 0x1C0043D70 (xxxSystemParametersInfoWorker.c)
 *     xxxCheckFullScreen @ 0x1C009687C (xxxCheckFullScreen.c)
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@PEAW4ProcessingDecision@1@@Z @ 0x1C00C2B6C (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@.c)
 *     CitGetWindowInfo @ 0x1C00C3C30 (CitGetWindowInfo.c)
 *     xxxSetWindowPlacement @ 0x1C00C4790 (xxxSetWindowPlacement.c)
 *     CkptUpdate @ 0x1C00C7B24 (CkptUpdate.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00D003C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetNewMonitor @ 0x1C010B39C (GetNewMonitor.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C0123BD4 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x1C01B8A28 (-DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BBFB0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C01EBC7C (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EEA38 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F0D8C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     xxxSetInternalWindowPos @ 0x1C01F2F6C (xxxSetInternalWindowPos.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C02160D4 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1C0226B68 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023BA64 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1C023D940 (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C00CFCCC (GetMonitorRectForDpi.c)
 *     GetScreenRectForDpi @ 0x1C00CFD44 (GetScreenRectForDpi.c)
 *     IntersectRect @ 0x1C00D0330 (IntersectRect.c)
 *     _MonitorFromPoint @ 0x1C00D03B0 (_MonitorFromPoint.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00D0BA8 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C00D1E80 (ScaleDPIRect.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromRect(__int64 a1, unsigned int a2, unsigned int CurrentThreadDpiAwarenessContext)
{
  __int64 v3; // rbx
  __int64 v7; // rcx
  __int64 DispInfo; // r13
  unsigned __int16 v10; // r14
  int v11; // r12d
  __int64 v12; // rsi
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // r15d
  __int64 v18; // rbx
  unsigned int v19; // esi
  __int64 v20; // r15
  __int32 v21; // eax
  __int32 v22; // ecx
  unsigned int v23; // ecx
  __int32 v24; // eax
  __int32 v25; // edx
  int v26; // eax
  unsigned int v27; // ecx
  unsigned __int32 v28; // ecx
  __int64 v29; // rbx
  unsigned __int64 v30; // rsi
  __int32 v31; // edx
  __int32 v32; // eax
  __int32 v33; // eax
  __int64 v34; // rdx
  __int32 v35; // eax
  __int32 v36; // ecx
  __int32 v37; // eax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  unsigned __int16 v40; // [rsp+30h] [rbp-40h]
  __m128i v41; // [rsp+40h] [rbp-30h] BYREF
  __int64 v42; // [rsp+50h] [rbp-20h]
  __int128 v43; // [rsp+58h] [rbp-18h] BYREF

  v3 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  DispInfo = GetDispInfo(a1);
  if ( **(_DWORD **)DispInfo == 1 && a2 )
    return *(_QWORD *)(GetDispInfo(v7) + 96);
  if ( *(_DWORD *)a1 >= *(_DWORD *)(a1 + 8) || *(_DWORD *)(a1 + 4) >= *(_DWORD *)(a1 + 12) )
    return MonitorFromPoint(*(_QWORD *)a1, a2, CurrentThreadDpiAwarenessContext);
  if ( !CurrentThreadDpiAwarenessContext )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v7);
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2
      && (!*((_QWORD *)PtiCurrentShared() + 57)
       || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) == 0) )
    {
      CurrentThreadDpiAwarenessContext = 18;
    }
  }
  v10 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  GetScreenRectForDpi(&v41, v10);
  if ( *(_DWORD *)a1 <= v41.m128i_i32[0]
    && *(_DWORD *)(a1 + 4) <= v41.m128i_i32[1]
    && *(_DWORD *)(a1 + 8) >= v41.m128i_i32[2]
    && *(_DWORD *)(a1 + 12) >= v41.m128i_i32[3] )
  {
    return *(_QWORD *)(GetDispInfo(v7) + 96);
  }
  v11 = 0;
  v12 = *(_QWORD *)(DispInfo + 104);
  if ( v12 )
  {
    do
    {
      v7 = *(_QWORD *)(v12 + 40);
      if ( (*(_DWORD *)(v7 + 24) & 1) != 0 )
      {
        v13 = *(unsigned __int16 *)(v7 + 62);
        v40 = *(_WORD *)(v7 + 60);
        v14 = *(__m128i *)(v7 + 28);
        v41 = v14;
        if ( v10 )
        {
          v15 = v41.m128i_i64[0];
          v16 = ExpandMonitorSpaceVertex(v10, v13, v41.m128i_i64[0]);
          ScaleDPIRect((unsigned int)&v41, (unsigned int)&v41, v10, v40, v16, v15);
          v14 = v41;
          v3 = v42;
        }
        v41 = v14;
        if ( (unsigned int)IntersectRect(&v43, a1, &v41) )
        {
          v7 = v43 - *(_QWORD *)a1;
          if ( (_QWORD)v43 == *(_QWORD *)a1 )
            v7 = *((_QWORD *)&v43 + 1) - *(_QWORD *)(a1 + 8);
          if ( !v7 )
            return v12;
          if ( (DWORD2(v43) - (int)v43) * (HIDWORD(v43) - DWORD1(v43)) > v11 )
          {
            v3 = v12;
            v11 = (DWORD2(v43) - v43) * (HIDWORD(v43) - DWORD1(v43));
            v42 = v12;
          }
        }
      }
      v12 = *(_QWORD *)(v12 + 56);
    }
    while ( v12 );
    if ( v11 > 0 )
      return v3;
  }
  if ( !a2 )
    return 0LL;
  v17 = a2 - 1;
  if ( !v17 )
    return *(_QWORD *)(GetDispInfo(v7) + 96);
  if ( v17 != 1 )
    return 0LL;
  if ( (unsigned int)(*(_DWORD *)a1 + 0x8000) <= 0xFFFF
    && (unsigned int)(*(_DWORD *)(a1 + 4) + 0x8000) <= 0xFFFF
    && (unsigned int)(*(_DWORD *)(a1 + 8) + 0x8000) <= 0xFFFF
    && (unsigned int)(*(_DWORD *)(a1 + 12) + 0x8000) <= 0xFFFF )
  {
    v18 = *(_QWORD *)(DispInfo + 104);
    v19 = -1;
    v20 = v42;
    while ( 1 )
    {
      if ( !v18 )
        return v20;
      if ( (*(_DWORD *)(*(_QWORD *)(v18 + 40) + 24LL) & 1) != 0 )
        break;
LABEL_57:
      v18 = *(_QWORD *)(v18 + 56);
    }
    GetMonitorRectForDpi(v41.m128i_i64, v18, v10);
    v21 = *(_DWORD *)(a1 + 8);
    if ( v21 > v41.m128i_i32[0] )
    {
      if ( *(_DWORD *)a1 < v41.m128i_i32[2] )
      {
        v23 = 0;
        goto LABEL_47;
      }
      v22 = *(_DWORD *)a1 - v41.m128i_i32[2];
    }
    else
    {
      v22 = v41.m128i_i32[0] - v21;
    }
    v23 = v22 + 1;
LABEL_47:
    if ( v23 < v19 )
    {
      v24 = *(_DWORD *)(a1 + 12);
      if ( v24 > v41.m128i_i32[1] )
      {
        v26 = *(_DWORD *)(a1 + 4);
        if ( v26 >= v41.m128i_i32[3] )
          v25 = v26 - v41.m128i_i32[3] + 1;
        else
          v25 = 0;
      }
      else
      {
        v25 = v41.m128i_i32[1] - v24 + 1;
      }
      v27 = v23 * v23;
      if ( v27 < v19 && v27 + v25 < v19 )
      {
        v28 = v25 * v25 + v27;
        if ( v28 < v19 )
        {
          v19 = v28;
          v20 = v18;
        }
      }
    }
    goto LABEL_57;
  }
  v29 = *(_QWORD *)(DispInfo + 104);
  v30 = -1LL;
  v20 = v42;
  while ( v29 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v29 + 40) + 24LL) & 1) == 0 )
      goto LABEL_79;
    GetMonitorRectForDpi(v41.m128i_i64, v29, v10);
    v31 = *(_DWORD *)(a1 + 8);
    if ( v31 <= v41.m128i_i32[0] )
    {
      v32 = v41.m128i_i32[0] - v31;
LABEL_68:
      v33 = v32 + 1;
      goto LABEL_69;
    }
    if ( *(_DWORD *)a1 >= v41.m128i_i32[2] )
    {
      v32 = *(_DWORD *)a1 - v41.m128i_i32[2];
      goto LABEL_68;
    }
    v33 = 0;
LABEL_69:
    v34 = v33;
    if ( v33 < v30 )
    {
      v35 = *(_DWORD *)(a1 + 12);
      if ( v35 > v41.m128i_i32[1] )
      {
        v37 = *(_DWORD *)(a1 + 4);
        v36 = v37 >= v41.m128i_i32[3] ? v37 - v41.m128i_i32[3] + 1 : 0;
      }
      else
      {
        v36 = v41.m128i_i32[1] - v35 + 1;
      }
      v38 = v34 * v34;
      if ( v38 < v30 && v36 + v38 < v30 )
      {
        v39 = v36 * (__int64)v36 + v38;
        if ( v39 < v30 )
        {
          v30 = v39;
          v20 = v29;
        }
      }
    }
LABEL_79:
    v29 = *(_QWORD *)(v29 + 56);
  }
  return v20;
}
