// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxMoveSize(struct tagWND *a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  struct tagWND *v8; // rbx
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
  char v47; // dl
  char v48; // r8
  tagQ *v49; // rcx
  bool v50; // al
  int v51; // edx
  int v52; // r8d
  __int64 v53; // rcx
  __int64 v54; // rcx
  struct tagTHREADINFO *v55; // rax
  char v56; // dl
  char v57; // r8
  int v58; // edx
  int v59; // r8d
  unsigned __int16 v60; // bx
  int v61; // r14d
  char v62; // dl
  char v63; // r8
  __int64 v64; // [rsp+40h] [rbp-69h]
  __int64 v65; // [rsp+48h] [rbp-61h]
  __int64 v66; // [rsp+50h] [rbp-59h]
  int v67; // [rsp+80h] [rbp-29h]
  __int128 v68; // [rsp+88h] [rbp-21h] BYREF
  __int64 v69; // [rsp+98h] [rbp-11h]
  unsigned int v70[4]; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int64 v71[2]; // [rsp+B0h] [rbp+7h]
  __int128 v72; // [rsp+C0h] [rbp+17h]
  struct MOVESIZEDATA *v73; // [rsp+110h] [rbp+67h] BYREF
  int v74; // [rsp+118h] [rbp+6Fh]
  int v75; // [rsp+128h] [rbp+7Fh] BYREF

  v74 = a2;
  *(_OWORD *)v70 = 0LL;
  *(_OWORD *)v71 = 0LL;
  v67 = 0;
  v69 = 0LL;
  v6 = *((_QWORD *)a1 + 2);
  v72 = 0LL;
  v75 = 0;
  v68 = 0LL;
  v7 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(v6 + 432) == v7 && !*(_QWORD *)(gptiCurrent + 672LL) )
  {
    v8 = *(struct tagWND **)(v7 + 120);
    if ( v8 )
    {
      if ( (*(_WORD *)(*((_QWORD *)v8 + 5) + 42LL) & 0x2FFF) == 0x2A2
        || (v8 = (struct tagWND *)*((_QWORD *)v8 + 13)) != 0LL
        && (*(_WORD *)(*((_QWORD *)v8 + 5) + 42LL) & 0x2FFF) == 0x2A2 )
      {
        *(_QWORD *)&v68 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v68;
        *((_QWORD *)&v68 + 1) = v8;
        HMLockObject(v8);
        xxxSendMessage(v8, 0x14Fu);
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
        LODWORD(v73) = 1;
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
LABEL_52:
          WPP_RECORDER_AND_TRACE_SF_(
            v16->AttachedDevice,
            v14,
            v15,
            (unsigned int)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
            5,
            1,
            v17,
            (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
        }
      }
      else
      {
        v18 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL);
        if ( (v18 & 0x800000) != 0 )
        {
          LODWORD(v73) = 4;
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
        else if ( (v18 & 0x1000000) != 0 )
        {
          LODWORD(v73) = 8;
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
            v17 = 95;
            goto LABEL_52;
          }
        }
        else
        {
          LODWORD(v73) = 2;
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
            v17 = 96;
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
      NotifyShell::DragSizeInfo(*(_QWORD *)(v13 + 16), v20, (unsigned int)v73);
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
      xxxWindowEvent(0x19u, a1, 0, v74, 0);
      xxxDrawDragRect((struct MOVESIZEDATA *)v13, 0LL, 0);
      *(_DWORD *)(gptiCurrent + 488LL) |= 0x10u;
      v71[1] = (*(unsigned __int16 *)(v13 + 264) << 16) | *(unsigned __int16 *)(v13 + 260);
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
          97LL,
          5u,
          1u,
          0x61u,
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
          *(_QWORD *)a1);
      xxxSendMessage(a1, 0x231u);
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
          98LL,
          5u,
          1u,
          0x62u,
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
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
          0x63u,
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
          v30);
      }
      CCursorClip::EnableSpeedBump(gpCursorClip, v21);
      zzzShowCursor(1);
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        EnableDwmSwCursorMoveSize(&v75);
        *(_DWORD *)(v13 + 200) ^= (*(_DWORD *)(v13 + 200) ^ (v75 << 25)) & 0x2000000;
      }
      v32 = (void *)ReferenceDwmApiPort(v31);
      DwmAsyncNotifyIsInMoveSizeChange(v32, v74);
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
          v75 = 106;
          LODWORD(v66) = v38[23];
          LODWORD(v65) = v38[22];
          WPP_RECORDER_AND_TRACE_SF_sdddddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v37,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gFullLog,
            4u,
            1u,
            0x6Au,
            (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
            v36,
            v65,
            v66,
            v38[24],
            v38[25],
            v38[24] - v65,
            v38[25] - v66);
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
            107LL,
            5u,
            1u,
            0x6Bu,
            (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
            *(_QWORD *)a1);
        xxxSendMessage(a1, 0x232u);
        ReportMoveSizeCompletionToShell(v13, (unsigned int)v73, v42);
        if ( (*(_DWORD *)(v13 + 200) & 0x2000000) != 0 )
          ChangeComposableCursor(0LL);
        *(_DWORD *)(v13 + 200) &= ~0x2000000u;
        v44 = (void *)ReferenceDwmApiPort(v43);
        DwmAsyncNotifyIsInMoveSizeChange(v44, v74);
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
          if ( ghrgnUpdateSave )
          {
            GreDeleteObject(ghrgnUpdateSave);
            ghrgnUpdateSave = 0LL;
            gnUpdateSave = 0;
          }
        }
        gdwPUDFlags &= ~0x10000000u;
        MOVESIZEDATA::FreeMoveSizeData(&v73);
        zzzShowCursor(0);
        return;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) != a1 )
            goto LABEL_187;
          if ( (unsigned int)xxxInternalGetMessage(v70, 0LL, 0, 0, 1, 0) )
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
            v49 = *(tagQ **)(gptiCurrent + 432LL);
            v75 = 0;
            v50 = tagQ::AreMultipleThreadsAttached(v49);
            if ( (unsigned int)xxxWaitMessageEx(0x3C07u, v50 ? 200 : 5000, (enum SLEEP_STATUS *)&v75) || v75 )
            {
              if ( v75 )
              {
                if ( tagQ::AreMultipleThreadsAttached(*(tagQ **)(gptiCurrent + 432LL)) )
                {
                  v54 = *((_QWORD *)PtiCurrentShared(v53) + 58);
                  if ( !*(_QWORD *)(v54 + 48) && !*(_QWORD *)(*((_QWORD *)PtiCurrentShared(v54) + 58) + 56LL) )
                  {
                    v55 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                    if ( v55 )
                      TryDetachShellFrame(gptiCurrent, (__int64)v55, v75 == 2, 1);
                  }
                }
              }
            }
            else
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v51) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                LOBYTE(v51) = 0;
              }
              if ( (_BYTE)v51 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v52) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v51,
                  v52,
                  (unsigned int)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
                  3,
                  1,
                  102,
                  (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
              }
LABEL_187:
              EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext((struct MOVESIZEDATA *)v13);
              if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) != a1 )
              {
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                  || (LOBYTE(v58) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
                {
                  LOBYTE(v58) = 0;
                }
                if ( (_BYTE)v58 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v59) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v58,
                    v59,
                    (unsigned int)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
                    4,
                    1,
                    103,
                    (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
                }
                xxxMS_TrackMove((__int64)a1, 256, 27LL, 1LL, (MOVESIZEDATA *)v13);
                goto LABEL_105;
              }
              if ( (*(_DWORD *)(v13 + 200) & 8) != 0 )
              {
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                  || (LOBYTE(v58) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
                {
                  LOBYTE(v58) = 0;
                }
                if ( (_BYTE)v58 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v59) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v58,
                    v59,
                    (unsigned int)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
                    4,
                    1,
                    104,
                    (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
                }
                *(_DWORD *)(v13 + 200) &= ~8u;
                goto LABEL_105;
              }
              if ( v70[2] == 35 )
                xxxCallHook(2LL, 0LL, 0LL, 5);
              if ( (*(_DWORD *)(v13 + 200) & 1) != 0
                && !(unsigned int)xxxTrackInitSize(a1, v70[2], v71[0], v71[1], (struct MOVESIZEDATA *)v13) )
              {
                goto LABEL_105;
              }
              v60 = *(_DWORD *)(v13 + 168) + WORD2(v72);
              v61 = *(_DWORD *)(v13 + 172) + DWORD2(v72);
              if ( (*(_DWORD *)(v13 + 200) & 1) == 0 )
              {
                v62 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  || (v63 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
                {
                  v63 = 0;
                }
                if ( v62 || v63 )
                {
                  LODWORD(v65) = *(_DWORD *)(v13 + 172);
                  LODWORD(v64) = *(_DWORD *)(v13 + 168);
                  WPP_RECORDER_AND_TRACE_SF_dd(
                    (__int64)WPP_GLOBAL_Control->AttachedDevice,
                    v62,
                    v63,
                    (__int64)gFullLog,
                    5u,
                    1u,
                    0x69u,
                    (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
                    v64,
                    v65);
                }
                xxxMS_TrackMove((__int64)a1, v70[2], v71[0], v60 | ((unsigned __int16)v61 << 16), (MOVESIZEDATA *)v13);
              }
              if ( (*(_DWORD *)(v13 + 200) & 8) != 0 )
                goto LABEL_105;
            }
          }
        }
        if ( v70[2] - 256 <= 9 || v70[2] == 35 || v70[2] - 512 <= 0xE )
        {
          *(_QWORD *)(v13 + 268) = *(_QWORD *)(gptiCurrent + 776LL);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (v56 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            v56 = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (v57 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            v57 = 0;
          }
          if ( v56 || v57 )
          {
            LODWORD(v66) = *(_DWORD *)(v13 + 272);
            LODWORD(v65) = *(_DWORD *)(v13 + 268);
            LODWORD(v64) = v70[2];
            WPP_RECORDER_AND_TRACE_SF_Ddd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v56,
              v57,
              100LL,
              5u,
              1u,
              0x64u,
              (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
              v64,
              v65,
              v66);
          }
          if ( !v67 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) & 0x1800000) != 0 )
            {
              v67 = 2;
              *(_DWORD *)(v13 + 200) ^= (*(_DWORD *)(v13 + 200) ^ (*(_DWORD *)(v13 + 200) + 0x8000)) & 0x38000;
            }
            else
            {
              v67 = 1;
            }
          }
          goto LABEL_187;
        }
        if ( !(unsigned int)xxxCallMsgFilter((__int64)v70, (unsigned int)(v74 != 9) + 3) )
        {
          xxxTranslateMessage((__int64)v70, 0);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (v47 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            v47 = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (v48 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            v48 = 0;
          }
          if ( v47 || v48 )
          {
            LODWORD(v64) = v70[2];
            WPP_RECORDER_AND_TRACE_SF_D(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v47,
              v48,
              (__int64)gFullLog,
              5u,
              1u,
              0x65u,
              (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
              v64);
          }
          *(_DWORD *)(gptiCurrent + 488LL) |= 0x8000u;
          xxxDispatchMessage((__int64 *)v70);
          *(_DWORD *)(gptiCurrent + 488LL) &= ~0x8000u;
        }
      }
    }
  }
}
