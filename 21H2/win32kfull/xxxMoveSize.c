/*
 * XREFs of xxxMoveSize @ 0x1C0212874
 * Callers:
 *     xxxSysCommand @ 0x1C0130714 (xxxSysCommand.c)
 * Callees:
 *     bSetDevDragRect @ 0x1C0029500 (bSetDevDragRect.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C003CE40 (IsAdaptiveQueueDetachExempted.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F430 (WPP_RECORDER_SF_q.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B900 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     xxxDispatchMessage @ 0x1C006AE54 (xxxDispatchMessage.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006BF1C (IsToplevelWindowDesktopComposed.c)
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     xxxCapture @ 0x1C00C062C (xxxCapture.c)
 *     xxxInternalGetMessage @ 0x1C00D9FB0 (xxxInternalGetMessage.c)
 *     bSetDevDragWidth @ 0x1C00DB7BC (bSetDevDragWidth.c)
 *     GetProcessDpiServerInfo @ 0x1C00E0E44 (GetProcessDpiServerInfo.c)
 *     xxxTranslateMessage @ 0x1C01107D0 (xxxTranslateMessage.c)
 *     SlowAppThreadInShellFrame @ 0x1C0125054 (SlowAppThreadInShellFrame.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C0125A74 (-zzzShowCursor@@YAH_N@Z.c)
 *     ChangeComposableCursor @ 0x1C01D42BC (ChangeComposableCursor.c)
 *     TryDetachShellFrame @ 0x1C01E2264 (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01E2B58 (xxxWaitMessageEx.c)
 *     xxxCallMsgFilter @ 0x1C01E6F9C (xxxCallMsgFilter.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020A68C (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x1C020ADE4 (-EnableDwmSwCursorMoveSize@@YAXPEAH@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EF28 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020FAD4 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020FB64 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0210C94 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxDrawDragRect @ 0x1C02114E8 (xxxDrawDragRect.c)
 *     xxxInitializeMoveSizeData @ 0x1C0211E0C (xxxInitializeMoveSizeData.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMoveSize(struct tagWND *a1, unsigned int a2, int a3)
{
  int v3; // r15d
  __int64 result; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  struct tagWND *v13; // rdx
  unsigned int v14; // eax
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned int v20; // edx
  struct tagTHREADINFO *v21; // rax
  int v22; // eax
  int v23; // ecx
  struct tagWND *v24; // rdx
  __int64 v25; // rdx
  int v26; // ecx
  unsigned int v27; // r8d
  int v28; // eax
  __int64 v29; // rcx
  __int64 ProcessDpiServerInfo; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD v33[2]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v34; // [rsp+40h] [rbp-29h] BYREF
  __int64 v35; // [rsp+50h] [rbp-19h]
  unsigned int v36[4]; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v37[2]; // [rsp+68h] [rbp-1h]
  __int128 v38; // [rsp+78h] [rbp+Fh]
  int v39; // [rsp+D0h] [rbp+67h] BYREF
  int v40; // [rsp+D8h] [rbp+6Fh] BYREF

  *(_OWORD *)v36 = 0LL;
  v3 = 0;
  *(_OWORD *)v37 = 0LL;
  v39 = 0;
  v35 = 0LL;
  result = *((_QWORD *)a1 + 2);
  v38 = 0LL;
  v34 = 0LL;
  v8 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(result + 432) == v8 && !*(_QWORD *)(gptiCurrent + 672LL) )
  {
    v9 = *(_QWORD *)(v8 + 112);
    if ( v9 )
    {
      if ( (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF) != 0x2A2 )
      {
        v9 = *(_QWORD *)(v9 + 104);
        if ( !v9 || (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF) != 0x2A2 )
          v9 = 0LL;
      }
      if ( v9 )
      {
        *(_QWORD *)&v34 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v34;
        *((_QWORD *)&v34 + 1) = v9;
        HMLockObject(v9);
        xxxSendMessage(v9, 0x14Fu, 0LL, 0LL);
        ThreadUnlock1(v10);
      }
    }
    result = Win32AllocPoolWithQuotaZInit(344LL, 1936552789LL);
    v11 = result;
    if ( result )
    {
      v12 = gActiveMoveSizeDataList;
      if ( *(__int64 **)(gActiveMoveSizeDataList + 8) != &gActiveMoveSizeDataList )
        goto LABEL_86;
      *(_QWORD *)(v11 + 8) = &gActiveMoveSizeDataList;
      *(_QWORD *)v11 = v12;
      *(_QWORD *)(v12 + 8) = v11;
      gActiveMoveSizeDataList = v11;
      *(_QWORD *)(gptiCurrent + 672LL) = v11;
      v33[0] = v11 + 16;
      v33[1] = a1;
      HMAssignmentLock(v33);
      *(_DWORD *)(v11 + 196) = *(_DWORD *)(v11 + 196) & 0xFFEC7FFF | 0x100000;
      *(_QWORD *)(v11 + 308) = *(_QWORD *)(gptiCurrent + 776LL);
      AdjustProcessPriorityForDrag((struct _MOVESIZEDATA *)v11);
      xxxInitializeMoveSizeData(a1, (struct _MOVESIZEDATA *)v11, a2, a3, 0);
      if ( (*(_DWORD *)(v11 + 196) & 0x20) != 0 )
        gdwPUDFlags |= 0x10000000u;
      else
        gdwPUDFlags &= ~0x10000000u;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) == 0 )
        bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), 2);
      xxxQueryShellForSizeCooperation((struct _MOVESIZEDATA *)v11);
      if ( gpqForeground )
      {
        v13 = *(struct tagWND **)(gpqForeground + 112LL);
        if ( v13 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
          {
            v14 = 33;
            if ( *((_QWORD *)v13 + 2) == gptiCurrent )
              v13 = a1;
            else
              v14 = 49;
            xxxWindowEvent(0x80000004, v13, 0, 2u, v14);
          }
        }
      }
      xxxWindowEvent(0xAu, a1, 0, 0, 0);
      xxxWindowEvent(0x19u, a1, 0, a2, 0);
      xxxDrawDragRect((struct _MOVESIZEDATA *)v11);
      *(_DWORD *)(gptiCurrent + 488LL) |= 0x10u;
      v37[1] = (*(unsigned __int16 *)(v11 + 304) << 16) | *(unsigned __int16 *)(v11 + 300);
      xxxSendMessage((unsigned __int64)a1, 0x231u, 0LL, 0LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_q(
          (unsigned int)&WPP_RECORDER_INITIALIZED,
          v15,
          1,
          17,
          (__int64)&WPP_44fe173a72dc32ad3264e41cf6895406_Traceguids,
          (char)a1);
      }
      xxxCapture(gptiCurrent, (__int64)a1, 6);
      CCursorClip::EnableSpeedBump(gpCursorClip, (*(_DWORD *)(v11 + 196) & 0xC00) != 0);
      LOBYTE(v16) = 1;
      zzzShowCursor(v16);
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        EnableDwmSwCursorMoveSize(&v39);
        *(_DWORD *)(v11 + 196) ^= (*(_DWORD *)(v11 + 196) ^ (v39 << 27)) & 0x8000000;
      }
      if ( (*(_DWORD *)(v11 + 196) & 8) == 0 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) != a1 )
              goto LABEL_56;
            if ( (unsigned int)xxxInternalGetMessage(v36, 0LL, 0, 0, 1, 0) )
              break;
            if ( (*(_DWORD *)(v11 + 196) & 8) != 0 )
              goto LABEL_56;
            if ( (*(_DWORD *)(gptiCurrent + 1232LL) & 0x40000) == 0
              || IsAdaptiveQueueDetachExempted(gptiCurrent, v17, v18) )
            {
              if ( !(unsigned int)xxxWaitMessageEx(15615LL, 0, 0LL) )
                goto LABEL_56;
            }
            else
            {
              v19 = *(_QWORD *)(gptiCurrent + 432LL);
              v40 = 0;
              v20 = 200;
              if ( *(_DWORD *)(v19 + 392) <= 1u )
                v20 = 5000;
              if ( (unsigned int)xxxWaitMessageEx(15367LL, v20, (enum SLEEP_STATUS *)&v40) || v40 )
              {
                if ( v40 )
                {
                  if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 392LL) > 1u
                    && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 48LL)
                    && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 56LL) )
                  {
                    v21 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                    if ( v21 )
                      TryDetachShellFrame(gptiCurrent, (__int64)v21, v40 == 2, 1);
                  }
                }
              }
              else
              {
LABEL_56:
                if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) != a1 )
                {
                  xxxMS_TrackMove((unsigned __int64 *)a1, 256, 0x1BuLL, 1LL, (struct _MOVESIZEDATA *)v11);
                  goto LABEL_69;
                }
                v22 = *(_DWORD *)(v11 + 196);
                if ( (v22 & 8) != 0 )
                {
                  *(_DWORD *)(v11 + 196) = v22 & 0xFFFFFFF7;
                  goto LABEL_69;
                }
                LOBYTE(v23) = *(_DWORD *)(v11 + 196);
                if ( v36[2] == 35 )
                {
                  xxxCallHook(2, 0LL, 0LL, 5);
                  v22 = *(_DWORD *)(v11 + 196);
                  LOBYTE(v23) = v22;
                }
                if ( (v22 & 1) != 0 )
                {
                  if ( !(unsigned int)xxxTrackInitSize(a1, v36[2], v37[0], v37[1], (struct _MOVESIZEDATA *)v11) )
                    goto LABEL_69;
                  v23 = *(_DWORD *)(v11 + 196);
                }
                if ( (v23 & 1) == 0 )
                {
                  xxxMS_TrackMove(
                    (unsigned __int64 *)a1,
                    v36[2],
                    v37[0],
                    (unsigned __int16)(WORD2(v38) + *(_WORD *)(v11 + 168)) | ((unsigned __int16)(WORD4(v38)
                                                                                               + *(_WORD *)(v11 + 172)) << 16),
                    (struct _MOVESIZEDATA *)v11);
                  v23 = *(_DWORD *)(v11 + 196);
                }
                if ( (v23 & 8) != 0 )
                  goto LABEL_69;
              }
            }
          }
          if ( v36[2] - 256 <= 9 || v36[2] == 35 || v36[2] - 512 <= 0xE )
          {
            *(_QWORD *)(v11 + 308) = *(_QWORD *)(gptiCurrent + 776LL);
            if ( !v3 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) & 0x1800000) != 0 )
              {
                v3 = 2;
                *(_DWORD *)(v11 + 196) ^= (*(_DWORD *)(v11 + 196) ^ (*(_DWORD *)(v11 + 196) + 0x8000)) & 0x38000;
              }
              else
              {
                v3 = 1;
              }
            }
            goto LABEL_56;
          }
          if ( !(unsigned int)xxxCallMsgFilter((__int64)v36, (unsigned int)(a2 != 9) + 3) )
          {
            xxxTranslateMessage((__int64)v36, 0);
            *(_DWORD *)(gptiCurrent + 488LL) |= 0x8000u;
            xxxDispatchMessage((__int64)v36);
            *(_DWORD *)(gptiCurrent + 488LL) &= ~0x8000u;
          }
        }
      }
LABEL_69:
      CCursorClip::EnableSpeedBump(gpCursorClip, 0);
      if ( gpqForeground )
      {
        v24 = *(struct tagWND **)(gpqForeground + 112LL);
        if ( v24 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
            xxxWindowEvent(0x80000005, v24, 0, 2u, 0x21u);
        }
      }
      xxxWindowEvent(0xBu, a1, 0, 0, 0);
      xxxSendMessage((unsigned __int64)a1, 0x232u, 0LL, 0LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v25) = 4;
        WPP_RECORDER_SF_q(v26, v25, 1, 18, (__int64)&WPP_44fe173a72dc32ad3264e41cf6895406_Traceguids, (char)a1);
      }
      xxxReportMoveSizeCompletionToShell((struct _MOVESIZEDATA *)v11, v25, v27);
      v28 = *(_DWORD *)(v11 + 196);
      if ( (v28 & 0x8000000) != 0 )
      {
        ChangeComposableCursor(0LL);
        v28 = *(_DWORD *)(v11 + 196);
      }
      *(_DWORD *)(v11 + 196) = v28 & 0xF7EFFFFF;
      AdjustProcessPriorityForDrag((struct _MOVESIZEDATA *)v11);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) == 0 )
      {
        ProcessDpiServerInfo = GetProcessDpiServerInfo(v29);
        bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), *(_DWORD *)(ProcessDpiServerInfo + 4) + 3);
      }
      bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x10u;
      if ( (*(_DWORD *)(v11 + 196) & 0x20) != 0 && ghrgnUpdateSave )
      {
        GreDeleteObject(ghrgnUpdateSave);
        ghrgnUpdateSave = 0LL;
        gnUpdateSave = 0;
      }
      gdwPUDFlags &= ~0x10000000u;
      *(_QWORD *)(gptiCurrent + 672LL) = 0LL;
      HMAssignmentUnlock(v11 + 16);
      v31 = *(_QWORD *)v11;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 || (v32 = *(_QWORD **)(v11 + 8), *v32 != v11) )
LABEL_86:
        __fastfail(3u);
      *v32 = v31;
      *(_QWORD *)(v31 + 8) = v32;
      Win32FreePool((void *)v11);
      return zzzShowCursor(0LL);
    }
  }
  return result;
}
