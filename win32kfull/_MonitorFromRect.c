/*
 * XREFs of _MonitorFromRect @ 0x1C00AEE80
 * Callers:
 *     _GetWindowPlacement @ 0x1C0006898 (_GetWindowPlacement.c)
 *     CreateSpb @ 0x1C000D094 (CreateSpb.c)
 *     xxxCheckFullScreen @ 0x1C0033340 (xxxCheckFullScreen.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0067EB8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C006A4D8 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     GetNewMonitor @ 0x1C00AB0FC (GetNewMonitor.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00D2B90 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@PEAW4ProcessingDecision@1@@Z @ 0x1C00FCDBC (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@.c)
 *     xxxSetWindowPlacement @ 0x1C00FF7C8 (xxxSetWindowPlacement.c)
 *     CkptUpdate @ 0x1C0100B24 (CkptUpdate.c)
 *     CitGetWindowInfo @ 0x1C0101B20 (CitGetWindowInfo.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     ?DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x1C01B9BC8 (-DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BD154 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C01ECE40 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EFBFC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F1F6C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     xxxSetInternalWindowPos @ 0x1C01F416C (xxxSetInternalWindowPos.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0218C94 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1C0229878 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023E6EC (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1C024060C (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetMonitorRectForDpi @ 0x1C00A2698 (GetMonitorRectForDpi.c)
 *     GetScreenRectForDpi @ 0x1C00A2874 (GetScreenRectForDpi.c)
 *     _MonitorFromPoint @ 0x1C00A2920 (_MonitorFromPoint.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00A3584 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C00A3890 (ScaleDPIRect.c)
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromRect(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v7; // rcx
  __int64 DispInfo; // r13
  unsigned __int16 v10; // r14
  int v11; // r12d
  __int64 v12; // rsi
  unsigned __int16 v13; // dx
  __m128i v14; // xmm0
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  unsigned int v20; // r15d
  __int64 v21; // rbx
  unsigned int v22; // esi
  __int64 v23; // r15
  __int32 v24; // eax
  __int32 v25; // ecx
  unsigned int v26; // ecx
  __int32 v27; // eax
  __int32 v28; // edx
  int v29; // eax
  unsigned int v30; // ecx
  unsigned __int32 v31; // ecx
  __int64 v32; // rbx
  unsigned __int64 v33; // rsi
  __int32 v34; // edx
  __int32 v35; // eax
  __int32 v36; // eax
  __int64 v37; // rdx
  __int32 v38; // eax
  __int32 v39; // ecx
  __int32 v40; // eax
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rdx
  unsigned __int16 v43; // [rsp+30h] [rbp-40h]
  __m128i v44; // [rsp+40h] [rbp-30h] BYREF
  __int64 v45; // [rsp+50h] [rbp-20h]
  __int128 v46; // [rsp+58h] [rbp-18h] BYREF

  v3 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  DispInfo = GetDispInfo(a1);
  if ( **(_DWORD **)DispInfo == 1 && a2 )
    return *(_QWORD *)(GetDispInfo(v7) + 96);
  if ( *(_DWORD *)a1 >= *(_DWORD *)(a1 + 8) || *(_DWORD *)(a1 + 4) >= *(_DWORD *)(a1 + 12) )
    return MonitorFromPoint(*(_QWORD *)a1, a2, a3);
  if ( !a3 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v7);
    v16 = CurrentThreadDpiAwarenessContext;
    a3 = CurrentThreadDpiAwarenessContext;
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 )
    {
      LOBYTE(v16) = CurrentThreadDpiAwarenessContext & 0xF;
      if ( !*((_QWORD *)PtiCurrentShared(v16) + 57)
        || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v17) + 57) + 8LL) + 64LL) & 1) == 0 )
      {
        a3 = 18;
      }
    }
  }
  v10 = (a3 >> 8) & 0x1FF;
  GetScreenRectForDpi(&v44, v10);
  if ( *(_DWORD *)a1 <= v44.m128i_i32[0]
    && *(_DWORD *)(a1 + 4) <= v44.m128i_i32[1]
    && *(_DWORD *)(a1 + 8) >= v44.m128i_i32[2]
    && *(_DWORD *)(a1 + 12) >= v44.m128i_i32[3] )
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
        v13 = *(_WORD *)(v7 + 62);
        v43 = *(_WORD *)(v7 + 60);
        v14 = *(__m128i *)(v7 + 28);
        v44 = v14;
        if ( v10 )
        {
          v18 = v44.m128i_i64[0];
          v19 = ExpandMonitorSpaceVertex(v10, v13, v44.m128i_i64[0]);
          ScaleDPIRect(&v44, &v44, v10, v43, v19, v18);
          v14 = v44;
          v3 = v45;
        }
        v44 = v14;
        if ( (unsigned int)IntersectRect(&v46, a1, &v44) )
        {
          v7 = v46 - *(_QWORD *)a1;
          if ( (_QWORD)v46 == *(_QWORD *)a1 )
            v7 = *((_QWORD *)&v46 + 1) - *(_QWORD *)(a1 + 8);
          if ( !v7 )
            return v12;
          if ( (DWORD2(v46) - (int)v46) * (HIDWORD(v46) - DWORD1(v46)) > v11 )
          {
            v3 = v12;
            v11 = (DWORD2(v46) - v46) * (HIDWORD(v46) - DWORD1(v46));
            v45 = v12;
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
  v20 = a2 - 1;
  if ( !v20 )
    return *(_QWORD *)(GetDispInfo(v7) + 96);
  if ( v20 != 1 )
    return 0LL;
  if ( (unsigned int)(*(_DWORD *)a1 + 0x8000) <= 0xFFFF
    && (unsigned int)(*(_DWORD *)(a1 + 4) + 0x8000) <= 0xFFFF
    && (unsigned int)(*(_DWORD *)(a1 + 8) + 0x8000) <= 0xFFFF
    && (unsigned int)(*(_DWORD *)(a1 + 12) + 0x8000) <= 0xFFFF )
  {
    v21 = *(_QWORD *)(DispInfo + 104);
    v22 = -1;
    v23 = v45;
    while ( 1 )
    {
      if ( !v21 )
        return v23;
      if ( (*(_DWORD *)(*(_QWORD *)(v21 + 40) + 24LL) & 1) != 0 )
        break;
LABEL_57:
      v21 = *(_QWORD *)(v21 + 56);
    }
    GetMonitorRectForDpi(v44.m128i_i64, v21, v10);
    v24 = *(_DWORD *)(a1 + 8);
    if ( v24 > v44.m128i_i32[0] )
    {
      if ( *(_DWORD *)a1 < v44.m128i_i32[2] )
      {
        v26 = 0;
        goto LABEL_47;
      }
      v25 = *(_DWORD *)a1 - v44.m128i_i32[2];
    }
    else
    {
      v25 = v44.m128i_i32[0] - v24;
    }
    v26 = v25 + 1;
LABEL_47:
    if ( v26 < v22 )
    {
      v27 = *(_DWORD *)(a1 + 12);
      if ( v27 > v44.m128i_i32[1] )
      {
        v29 = *(_DWORD *)(a1 + 4);
        if ( v29 >= v44.m128i_i32[3] )
          v28 = v29 - v44.m128i_i32[3] + 1;
        else
          v28 = 0;
      }
      else
      {
        v28 = v44.m128i_i32[1] - v27 + 1;
      }
      v30 = v26 * v26;
      if ( v30 < v22 && v30 + v28 < v22 )
      {
        v31 = v28 * v28 + v30;
        if ( v31 < v22 )
        {
          v22 = v31;
          v23 = v21;
        }
      }
    }
    goto LABEL_57;
  }
  v32 = *(_QWORD *)(DispInfo + 104);
  v33 = -1LL;
  v23 = v45;
  while ( v32 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v32 + 40) + 24LL) & 1) == 0 )
      goto LABEL_79;
    GetMonitorRectForDpi(v44.m128i_i64, v32, v10);
    v34 = *(_DWORD *)(a1 + 8);
    if ( v34 <= v44.m128i_i32[0] )
    {
      v35 = v44.m128i_i32[0] - v34;
LABEL_68:
      v36 = v35 + 1;
      goto LABEL_69;
    }
    if ( *(_DWORD *)a1 >= v44.m128i_i32[2] )
    {
      v35 = *(_DWORD *)a1 - v44.m128i_i32[2];
      goto LABEL_68;
    }
    v36 = 0;
LABEL_69:
    v37 = v36;
    if ( v36 < v33 )
    {
      v38 = *(_DWORD *)(a1 + 12);
      if ( v38 > v44.m128i_i32[1] )
      {
        v40 = *(_DWORD *)(a1 + 4);
        v39 = v40 >= v44.m128i_i32[3] ? v40 - v44.m128i_i32[3] + 1 : 0;
      }
      else
      {
        v39 = v44.m128i_i32[1] - v38 + 1;
      }
      v41 = v37 * v37;
      if ( v41 < v33 && v39 + v41 < v33 )
      {
        v42 = v39 * (__int64)v39 + v41;
        if ( v42 < v33 )
        {
          v33 = v42;
          v23 = v32;
        }
      }
    }
LABEL_79:
    v32 = *(_QWORD *)(v32 + 56);
  }
  return v23;
}
