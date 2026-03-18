/*
 * XREFs of ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EFC00
 * Callers:
 *     xxxSysCommand @ 0x1C00A7BFC (xxxSysCommand.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006E7C (IsAdaptiveQueueDetachExempted.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x1C000C65C (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     xxxCapture @ 0x1C00117FC (xxxCapture.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C005AF60 (-zzzShowCursor@@YAH_N@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C005F1AC (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     xxxInternalGetMessage @ 0x1C006A4F0 (xxxInternalGetMessage.c)
 *     bSetDevDragRect @ 0x1C006EAD0 (bSetDevDragRect.c)
 *     bSetDevDragWidth @ 0x1C00AAC00 (bSetDevDragWidth.c)
 *     GetProcessDpiServerInfo @ 0x1C00AB4FC (GetProcessDpiServerInfo.c)
 *     xxxTranslateMessage @ 0x1C00ACC1C (xxxTranslateMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00BFCAC (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x1C00C0C0C (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x1C00C3000 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x1C00C3038 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00D3B08 (IsToplevelWindowDesktopComposed.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C01158D4 (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     xxxDispatchMessage @ 0x1C0117884 (xxxDispatchMessage.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 *     xxxCallMsgFilter @ 0x1C015208E (xxxCallMsgFilter.c)
 *     ChangeComposableCursor @ 0x1C01A8FC0 (ChangeComposableCursor.c)
 *     SlowAppThreadInShellFrame @ 0x1C01B6A9C (SlowAppThreadInShellFrame.c)
 *     TryDetachShellFrame @ 0x1C01B6D5C (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01B7350 (xxxWaitMessageEx.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01E8FB0 (-AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x1C01E9440 (-EnableDwmSwCursorMoveSize@@YAXPEAH@Z.c)
 *     ?EndLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z @ 0x1C01E9488 (-EndLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z.c)
 *     ?EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01E955C (-EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C01EA4CC (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?StartLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z @ 0x1C01EAC68 (-StartLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x1C01EC5E0 (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ED858 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EEA38 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01F0AEC (-xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01F19F0 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C021CFF0 (-DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?SnapFurtherFromEdge@WindowArrangement@@YA_NXZ @ 0x1C022DF30 (-SnapFurtherFromEdge@WindowArrangement@@YA_NXZ.c)
 *     ?CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z @ 0x1C023A2BC (-CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     ?FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z @ 0x1C023A380 (-FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z.c)
 *     ?SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z @ 0x1C023AF10 (-SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z @ 0x1C023B000 (-SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z.c)
 *     ?SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z @ 0x1C023B1A8 (-SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z.c)
 *     DwmAsyncNotifyIsInMoveSizeChange @ 0x1C026D1AC (DwmAsyncNotifyIsInMoveSizeChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxMoveSize(struct tagWND *a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  ULONG_PTR v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct MOVESIZEDATA *MoveSizeData; // rax
  __int64 v13; // rsi
  int v14; // edx
  int v15; // r8d
  PDEVICE_OBJECT v16; // rcx
  __int16 v17; // ax
  int v18; // ecx
  int v19; // ebx
  __int64 v20; // rdx
  bool v21; // bl
  struct tagWND *v22; // rdx
  int v23; // ecx
  char v24; // dl
  char v25; // r8
  char v26; // dl
  char v27; // r8
  WindowArrangement *v28; // rcx
  char v29; // dl
  const char *v30; // rax
  __int64 v31; // rcx
  void *v32; // rax
  int WindowState; // eax
  const char *StateString; // rax
  int v35; // eax
  const char *v36; // r15
  char v37; // dl
  _DWORD *v38; // rax
  struct tagWND *v39; // rdx
  char v40; // dl
  char v41; // r8
  unsigned int v42; // r8d
  __int64 v43; // rcx
  void *v44; // rax
  __int64 v45; // rcx
  __int64 ProcessDpiServerInfo; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  tagQ *v52; // rcx
  bool v53; // al
  int v54; // edx
  int v55; // r8d
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  struct tagTHREADINFO *v64; // rax
  char v65; // dl
  char v66; // r8
  int v67; // edx
  int v68; // r8d
  unsigned __int16 v69; // bx
  int v70; // r14d
  char v71; // dl
  char v72; // r8
  __int64 v73; // [rsp+40h] [rbp-69h]
  __int64 v74; // [rsp+48h] [rbp-61h]
  __int64 v75; // [rsp+50h] [rbp-59h]
  int v76; // [rsp+80h] [rbp-29h]
  __int128 v77; // [rsp+88h] [rbp-21h] BYREF
  __int64 v78; // [rsp+98h] [rbp-11h]
  unsigned int v79[4]; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int64 v80[2]; // [rsp+B0h] [rbp+7h]
  __int128 v81; // [rsp+C0h] [rbp+17h]
  struct MOVESIZEDATA *v82; // [rsp+110h] [rbp+67h] BYREF
  int v83; // [rsp+118h] [rbp+6Fh]
  int v84; // [rsp+128h] [rbp+7Fh] BYREF

  v83 = a2;
  *(_OWORD *)v79 = 0LL;
  *(_OWORD *)v80 = 0LL;
  v76 = 0;
  v78 = 0LL;
  v6 = *((_QWORD *)a1 + 2);
  v81 = 0LL;
  v84 = 0;
  v77 = 0LL;
  v7 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(v6 + 432) == v7 && !*(_QWORD *)(gptiCurrent + 672LL) )
  {
    v8 = *(_QWORD *)(v7 + 120);
    if ( v8 )
    {
      if ( (*(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x2FFF) == 0x2A2
        || (v8 = *(_QWORD *)(v8 + 104)) != 0 && (*(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x2FFF) == 0x2A2 )
      {
        *(_QWORD *)&v77 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v77;
        *((_QWORD *)&v77 + 1) = v8;
        HMLockObject(v8);
        xxxSendMessage(v8);
        ThreadUnlock1(v10, v9, v11);
      }
    }
    MoveSizeData = MOVESIZEDATA::CreateMoveSizeData(a1);
    v13 = (__int64)MoveSizeData;
    if ( MoveSizeData )
    {
      *((_DWORD *)MoveSizeData + 50) &= 0xFFFC7FFF;
      *(_QWORD *)((char *)MoveSizeData + 268) = *(_QWORD *)(gptiCurrent + 776LL);
      AdjustProcessPriorityForDrag(MoveSizeData);
      xxxInitializeMoveSizeData(a1, (struct MOVESIZEDATA *)v13, a2, a3);
      if ( (*(_DWORD *)(v13 + 200) & 2) != 0 )
      {
        LODWORD(v82) = 1;
        v16 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v14) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v15) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v15) = 0;
        }
        if ( (_BYTE)v14 || (_BYTE)v15 )
        {
          v17 = 91;
LABEL_52:
          WPP_RECORDER_AND_TRACE_SF_(
            v16->AttachedDevice,
            v14,
            v15,
            (unsigned int)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
            5,
            1,
            v17,
            (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
        }
      }
      else
      {
        v18 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL);
        if ( (v18 & 0x800000) != 0 )
        {
          LODWORD(v82) = 4;
          v16 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v14) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v15) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            LOBYTE(v15) = 0;
          }
          if ( (_BYTE)v14 || (_BYTE)v15 )
          {
            v17 = 92;
            goto LABEL_52;
          }
        }
        else if ( (v18 & 0x1000000) != 0 )
        {
          LODWORD(v82) = 8;
          v16 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v14) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v15) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            LOBYTE(v15) = 0;
          }
          if ( (_BYTE)v14 || (_BYTE)v15 )
          {
            v17 = 93;
            goto LABEL_52;
          }
        }
        else
        {
          LODWORD(v82) = 2;
          v16 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v14) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v15) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            LOBYTE(v15) = 0;
          }
          if ( (_BYTE)v14 || (_BYTE)v15 )
          {
            v17 = 94;
            goto LABEL_52;
          }
        }
      }
      if ( (*(_DWORD *)(v13 + 200) & 0x20) != 0 )
        gdwPUDFlags |= 0x10000000u;
      else
        gdwPUDFlags &= ~0x10000000u;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) == 0 )
        bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), 2);
      v19 = *(_DWORD *)(v13 + 176);
      v20 = 2LL;
      if ( v19 != 9 )
        v20 = 0LL;
      NotifyShell::DragSizeInfo(*(_QWORD *)(v13 + 16), v20, (unsigned int)v82);
      if ( v19 != 9 )
        xxxQueryShellForSizeCooperation((struct MOVESIZEDATA *)v13);
      v21 = 0;
      if ( gpqForeground )
      {
        v22 = *(struct tagWND **)(gpqForeground + 120LL);
        if ( v22 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
          {
            v23 = 33;
            if ( *((_QWORD *)v22 + 2) == gptiCurrent )
              v22 = a1;
            else
              v23 = 49;
            xxxWindowEvent(0x80000004, v22, 0, 2u, v23);
          }
        }
      }
      xxxWindowEvent(0xAu, a1, 0, 0, 0);
      xxxWindowEvent(0x19u, a1, 0, v83, 0);
      xxxDrawDragRect((struct MOVESIZEDATA *)v13, 0LL, 0);
      *(_DWORD *)(gptiCurrent + 488LL) |= 0x10u;
      v80[1] = (*(unsigned __int16 *)(v13 + 264) << 16) | *(unsigned __int16 *)(v13 + 260);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v24 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        v24 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (v25 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        v25 = 0;
      }
      if ( v24 || v25 )
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v24,
          v25,
          95LL,
          5u,
          1u,
          0x5Fu,
          (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
          *(_QWORD *)a1);
      xxxSendMessage((ULONG_PTR)a1);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v26 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        v26 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (v27 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        v27 = 0;
      }
      if ( v26 || v27 )
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v26,
          v27,
          96LL,
          5u,
          1u,
          0x60u,
          (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
          *(_QWORD *)a1);
      xxxCapture(gptiCurrent, a1, 6);
      if ( (*(_DWORD *)(v13 + 200) & 0xC00) != 0 && !WindowArrangement::SnapFurtherFromEdge(v28) )
        v21 = 1;
      v29 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v30 = "Enabled";
        if ( !v21 )
          v30 = "Disabled";
        WPP_RECORDER_AND_TRACE_SF_s(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v29,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          4u,
          1u,
          0x61u,
          (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
          v30);
      }
      CCursorClip::EnableSpeedBump(gpCursorClip, v21);
      zzzShowCursor(1);
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        EnableDwmSwCursorMoveSize(&v84);
        *(_DWORD *)(v13 + 200) ^= (*(_DWORD *)(v13 + 200) ^ (v84 << 25)) & 0x2000000;
      }
      v32 = (void *)ReferenceDwmApiPort(v31);
      DwmAsyncNotifyIsInMoveSizeChange(v32, v83);
      WindowState = AdvancedWindowPos::GetWindowState(a1);
      StateString = AdvancedWindowPos::GetStateString(WindowState);
      InputTraceLogging::MoveSize::StartLoop(a1, StateString);
      if ( (*(_DWORD *)(v13 + 200) & 8) != 0 )
      {
LABEL_105:
        v35 = AdvancedWindowPos::GetWindowState(a1);
        v36 = AdvancedWindowPos::GetStateString(v35);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (v37 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v37 = 0;
        }
        if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v38 = (_DWORD *)*((_QWORD *)a1 + 5);
          v84 = 104;
          LODWORD(v75) = v38[23];
          LODWORD(v74) = v38[22];
          WPP_RECORDER_AND_TRACE_SF_sdddddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v37,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gFullLog,
            4u,
            1u,
            0x68u,
            (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
            v36,
            v74,
            v75,
            v38[24],
            v38[25],
            v38[24] - v74,
            v38[25] - v75);
        }
        InputTraceLogging::MoveSize::EndLoop(a1, v36);
        CCursorClip::EnableSpeedBump(gpCursorClip, 0);
        if ( gpqForeground )
        {
          v39 = *(struct tagWND **)(gpqForeground + 120LL);
          if ( v39 )
          {
            if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
              xxxWindowEvent(0x80000005, v39, 0, 2u, 33);
          }
        }
        xxxWindowEvent(0xBu, a1, 0, 0, 0);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (v40 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          v40 = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (v41 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          v41 = 0;
        }
        if ( v40 || v41 )
          WPP_RECORDER_AND_TRACE_SF_q(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v40,
            v41,
            105LL,
            5u,
            1u,
            0x69u,
            (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
            *(_QWORD *)a1);
        xxxSendMessage((ULONG_PTR)a1);
        ReportMoveSizeCompletionToShell(v13, (unsigned int)v82, v42);
        if ( (*(_DWORD *)(v13 + 200) & 0x2000000) != 0 )
          ChangeComposableCursor(0LL);
        *(_DWORD *)(v13 + 200) &= ~0x2000000u;
        v44 = (void *)ReferenceDwmApiPort(v43);
        DwmAsyncNotifyIsInMoveSizeChange(v44, v83);
        DWM_ARRANGEMENT_DATA::SetShrinkWidth((DWM_ARRANGEMENT_DATA *)(v13 + 344), 0, (const struct MOVESIZEDATA *)v13);
        DWM_ARRANGEMENT_DATA::SendShrinkWidthToDwm(
          (DWM_ARRANGEMENT_DATA *)(v13 + 344),
          (const struct MOVESIZEDATA *)v13);
        DWM_ARRANGEMENT_DATA::SetPreviewInsertAfter(
          (DWM_ARRANGEMENT_DATA *)(v13 + 344),
          0LL,
          (const struct MOVESIZEDATA *)v13);
        *(_DWORD *)(v13 + 200) &= ~0x80000u;
        AdjustProcessPriorityForDrag((struct MOVESIZEDATA *)v13);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) == 0 )
        {
          ProcessDpiServerInfo = GetProcessDpiServerInfo(v45);
          bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), *(_DWORD *)(ProcessDpiServerInfo + 4) + 3);
        }
        bSetDevDragRect(*(Gre::Base **)(gpDispInfo + 40LL), 0LL, 0LL, 0);
        *(_DWORD *)(gptiCurrent + 488LL) &= ~0x10u;
        if ( (*(_DWORD *)(v13 + 200) & 0x20) != 0 )
        {
          if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink )
          {
            GreDeleteObject(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink);
            WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = 0LL;
            LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = 0;
          }
        }
        gdwPUDFlags &= ~0x10000000u;
        MOVESIZEDATA::FreeMoveSizeData(&v82);
        zzzShowCursor(0);
        return;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) != a1 )
            goto LABEL_187;
          if ( (unsigned int)xxxInternalGetMessage(v79, 0LL, 0, 0, 1, 0) )
            break;
          if ( (*(_DWORD *)(v13 + 200) & 8) != 0 )
            goto LABEL_187;
          if ( (*(_DWORD *)(gptiCurrent + 1272LL) & 0x40000) == 0
            || (unsigned int)IsAdaptiveQueueDetachExempted(gptiCurrent) )
          {
            if ( !(unsigned int)xxxWaitMessageEx(0x3CFFu, 0, 0LL) )
              goto LABEL_187;
          }
          else
          {
            v52 = *(tagQ **)(gptiCurrent + 432LL);
            v84 = 0;
            v53 = tagQ::AreMultipleThreadsAttached(v52);
            if ( (unsigned int)xxxWaitMessageEx(0x3C07u, v53 ? 200 : 5000, (enum SLEEP_STATUS *)&v84) || v84 )
            {
              if ( v84 )
              {
                if ( tagQ::AreMultipleThreadsAttached(*(tagQ **)(gptiCurrent + 432LL)) )
                {
                  v61 = *((_QWORD *)PtiCurrentShared(v57, v56, v58, v59) + 58);
                  if ( !*(_QWORD *)(v61 + 48)
                    && !*(_QWORD *)(*((_QWORD *)PtiCurrentShared(v61, v60, v62, v63) + 58) + 56LL) )
                  {
                    v64 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                    if ( v64 )
                      TryDetachShellFrame(gptiCurrent, (__int64)v64, v84 == 2, 1);
                  }
                }
              }
            }
            else
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v54) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                LOBYTE(v54) = 0;
              }
              if ( (_BYTE)v54 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v55) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v54,
                  v55,
                  (unsigned int)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
                  3,
                  1,
                  100,
                  (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
              }
LABEL_187:
              EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext((struct MOVESIZEDATA *)v13);
              if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) != a1 )
              {
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                  || (LOBYTE(v67) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
                {
                  LOBYTE(v67) = 0;
                }
                if ( (_BYTE)v67 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v68) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v67,
                    v68,
                    (unsigned int)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
                    4,
                    1,
                    101,
                    (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
                }
                xxxMS_TrackMove((ULONG_PTR)a1, 256, 0x1BuLL, 1LL, (MOVESIZEDATA *)v13);
                goto LABEL_105;
              }
              if ( (*(_DWORD *)(v13 + 200) & 8) != 0 )
              {
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                  || (LOBYTE(v67) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
                {
                  LOBYTE(v67) = 0;
                }
                if ( (_BYTE)v67 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v68) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v67,
                    v68,
                    (unsigned int)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
                    4,
                    1,
                    102,
                    (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
                }
                *(_DWORD *)(v13 + 200) &= ~8u;
                goto LABEL_105;
              }
              if ( v79[2] == 35 )
                xxxCallHook(2LL, 0LL, 0LL, 5LL);
              if ( (*(_DWORD *)(v13 + 200) & 1) != 0
                && !(unsigned int)xxxTrackInitSize((ULONG_PTR)a1, v79[2], v80[0], v80[1], (struct MOVESIZEDATA *)v13) )
              {
                goto LABEL_105;
              }
              v69 = *(_DWORD *)(v13 + 168) + WORD2(v81);
              v70 = *(_DWORD *)(v13 + 172) + DWORD2(v81);
              if ( (*(_DWORD *)(v13 + 200) & 1) == 0 )
              {
                v71 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  || (v72 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
                {
                  v72 = 0;
                }
                if ( v71 || v72 )
                {
                  LODWORD(v74) = *(_DWORD *)(v13 + 172);
                  LODWORD(v73) = *(_DWORD *)(v13 + 168);
                  WPP_RECORDER_AND_TRACE_SF_dd(
                    (__int64)WPP_GLOBAL_Control->AttachedDevice,
                    v71,
                    v72,
                    (__int64)gFullLog,
                    5u,
                    1u,
                    0x67u,
                    (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
                    v73,
                    v74);
                }
                xxxMS_TrackMove((ULONG_PTR)a1, v79[2], v80[0], v69 | ((unsigned __int16)v70 << 16), (MOVESIZEDATA *)v13);
              }
              if ( (*(_DWORD *)(v13 + 200) & 8) != 0 )
                goto LABEL_105;
            }
          }
        }
        if ( v79[2] - 256 <= 9 || v79[2] == 35 || v79[2] - 512 <= 0xE )
        {
          *(_QWORD *)(v13 + 268) = *(_QWORD *)(gptiCurrent + 776LL);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (v65 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            v65 = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (v66 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            v66 = 0;
          }
          if ( v65 || v66 )
          {
            LODWORD(v75) = *(_DWORD *)(v13 + 272);
            LODWORD(v74) = *(_DWORD *)(v13 + 268);
            LODWORD(v73) = v79[2];
            WPP_RECORDER_AND_TRACE_SF_Ddd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v65,
              v66,
              98LL,
              5u,
              1u,
              0x62u,
              (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
              v73,
              v74,
              v75);
          }
          if ( !v76 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) & 0x1800000) != 0 )
            {
              v76 = 2;
              *(_DWORD *)(v13 + 200) ^= (*(_DWORD *)(v13 + 200) ^ (*(_DWORD *)(v13 + 200) + 0x8000)) & 0x38000;
            }
            else
            {
              v76 = 1;
            }
          }
          goto LABEL_187;
        }
        if ( !(unsigned int)xxxCallMsgFilter((__int64)v79, (unsigned int)(v83 != 9) + 3, v47, v48) )
        {
          xxxTranslateMessage((__int64)v79, 0);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v49) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v49) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v50) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            LOBYTE(v50) = 0;
          }
          if ( (_BYTE)v49 || (_BYTE)v50 )
          {
            LODWORD(v73) = v79[2];
            WPP_RECORDER_AND_TRACE_SF_D(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v49,
              v50,
              (__int64)gFullLog,
              5u,
              1u,
              0x63u,
              (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
              v73);
          }
          *(_DWORD *)(gptiCurrent + 488LL) |= 0x8000u;
          xxxDispatchMessage((__int64 *)v79, v49, v50, v51);
          *(_DWORD *)(gptiCurrent + 488LL) &= ~0x8000u;
        }
      }
    }
  }
}
