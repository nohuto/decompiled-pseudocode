/*
 * XREFs of ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00CDA30
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C023DBB8 (xxxMinimizeHungWindow.c)
 * Callees:
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     GetLastTopMostWindow @ 0x1C0085494 (GetLastTopMostWindow.c)
 *     SkipWindowOnMonitor @ 0x1C00CDFE8 (SkipWindowOnMonitor.c)
 *     ?ForceForegroundChangeOnMinimize@@YAHPEAUtagWND@@0@Z @ 0x1C00CE268 (-ForceForegroundChangeOnMinimize@@YAHPEAUtagWND@@0@Z.c)
 *     GetThreadDesktopWindow @ 0x1C00F26A0 (GetThreadDesktopWindow.c)
 */

__int64 __fastcall xxxActivateOnMinimize(struct tagWND *a1)
{
  int v1; // r14d
  BOOL v3; // ebp
  int v4; // r12d
  __int64 LastTopMostWindow; // rax
  const struct tagWND *v6; // rdi
  const struct tagWND *v7; // rbx
  const struct tagWND *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 ThreadDesktopWindow; // rax
  unsigned int v12; // edi
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int128 v20; // [rsp+50h] [rbp-48h] BYREF
  __int64 v21; // [rsp+60h] [rbp-38h]

  v1 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL) != 0LL;
  v4 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
  v20 = 0LL;
  v21 = 0LL;
  if ( v4 != 1 || (LastTopMostWindow = GetLastTopMostWindow((__int64)a1)) == 0 )
  {
    ThreadDesktopWindow = *((_QWORD *)a1 + 13);
    goto LABEL_26;
  }
  v6 = *(const struct tagWND **)(LastTopMostWindow + 88);
  while ( 1 )
  {
    v7 = v3 ? *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL) : v6;
    v8 = 0LL;
    if ( v7 )
    {
      do
      {
        if ( (*(_BYTE *)(_HMPheFromObject(v7) + 25) & 1) == 0 )
        {
          v9 = *((_QWORD *)v7 + 5);
          if ( (*(_BYTE *)(v9 + 27) & 8) == 0
            && (*(_BYTE *)(v9 + 31) & 0x18) == 0x10
            && !(unsigned int)GetWindowCloakState(v7) )
          {
            v10 = *((_QWORD *)v7 + 5);
            if ( (*(_BYTE *)(v10 + 31) & 0x20) == 0
              && (v4 != 1 || *(_DWORD *)(v10 + 236) == 1)
              && !(unsigned int)SkipWindowOnMonitor(v7) )
            {
              if ( *(char *)(*((_QWORD *)v7 + 5) + 24LL) >= 0 )
                break;
              if ( !v8 )
                v8 = v7;
            }
          }
        }
        if ( v3 )
        {
          v3 = 0;
          v7 = v6;
        }
        else
        {
          v7 = (const struct tagWND *)*((_QWORD *)v7 + 11);
        }
      }
      while ( v7 );
      if ( v7 )
        break;
    }
    if ( v1 )
    {
      v7 = v8;
      if ( !v8 )
        return 0LL;
      break;
    }
    v1 = 1;
    if ( v6 )
    {
      ThreadDesktopWindow = *((_QWORD *)v6 + 13);
      goto LABEL_26;
    }
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
    if ( ThreadDesktopWindow )
LABEL_26:
      v6 = *(const struct tagWND **)(ThreadDesktopWindow + 112);
    else
      v6 = 0LL;
  }
  *(_QWORD *)&v20 = *(_QWORD *)(gptiCurrent + 416LL);
  v12 = 3;
  *(_QWORD *)(gptiCurrent + 416LL) = &v20;
  *((_QWORD *)&v20 + 1) = v7;
  HMLockObject(v7);
  if ( (unsigned int)ForceForegroundChangeOnMinimize(a1, v7) )
  {
    v12 = 7;
    LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v14,
        v15,
        4,
        2,
        10,
        (__int64)&WPP_ae72a12b720333dc278ca273d40f0432_Traceguids,
        gptiCurrent);
    }
  }
  LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      v13,
      v14,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      2,
      11,
      (__int64)&WPP_ae72a12b720333dc278ca273d40f0432_Traceguids,
      (char)v7,
      a1);
  }
  xxxSetForegroundWindowWithOptions(v7, v12, 0LL, 0);
  ThreadUnlock1(v17, v16, v18);
  return 1LL;
}
