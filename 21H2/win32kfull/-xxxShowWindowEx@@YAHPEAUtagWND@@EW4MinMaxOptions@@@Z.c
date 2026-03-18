/*
 * XREFs of ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0
 * Callers:
 *     NtUserSetWindowPos @ 0x1C0025580 (NtUserSetWindowPos.c)
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     NtUserShowWindow @ 0x1C00F05F0 (NtUserShowWindow.c)
 *     xxxSetWindowPlacement @ 0x1C01045D8 (xxxSetWindowPlacement.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C01095CC (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     xxxShowScrollBar @ 0x1C0142434 (xxxShowScrollBar.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C014501C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C02108F0 (xxxSetInternalWindowPos.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     SetVisible @ 0x1C001FE88 (SetVisible.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C0063110 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x1C0069E3C (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C006A158 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C006F980 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C007CC00 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00B0AE8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C00CA134 (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C00CA638 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C00CA700 (-xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     xxxSendSizeMessage @ 0x1C00F2578 (xxxSendSizeMessage.c)
 *     _FChildVisible @ 0x1C00F3654 (_FChildVisible.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C00FE2A4 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C0236E78 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C023DBB8 (xxxMinimizeHungWindow.c)
 *     ?xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z @ 0x1C023DDF8 (-xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z.c)
 */

__int64 __fastcall xxxShowWindowEx(ULONG_PTR a1, unsigned __int8 a2, unsigned int a3)
{
  _BYTE *v3; // r9
  int v6; // ebx
  int v7; // r15d
  __int64 v8; // rdx
  char v9; // cl
  char v10; // r14
  char v11; // bp
  __int64 v12; // r11
  unsigned int v13; // r14d
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _DEVICE_OBJECT *v17; // r9
  __int64 v19; // rsi
  int v20; // ecx
  int v21; // r15d
  struct tagWND *v22; // rdx
  __int64 v23; // r8
  ULONG_PTR v24; // rcx
  bool v25; // al
  void *v26; // r10
  __int64 v27; // r11
  __int64 v28; // r9
  int v29; // edx
  __int64 v30; // r8
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // r8
  int v34; // edx
  unsigned int v35; // esi
  __int64 ShellShowWindowCommand; // [rsp+50h] [rbp-68h]
  __int128 v37; // [rsp+60h] [rbp-58h] BYREF

  v3 = *(_BYTE **)(a1 + 40);
  v6 = a2;
  v7 = 3;
  v8 = 0LL;
  v9 = v3[31];
  v10 = v3[25];
  v11 = 1;
  v12 = *(_QWORD *)(gptiCurrent + 424LL);
  *(_QWORD *)&v37 = v12;
  v13 = v9 & 0x10 | v10 & 8;
  v14 = v12 + 788;
  if ( (*(_DWORD *)(v12 + 808) & 1) == 0
    || (v9 & 0xC0) == 0x40
    || (v3[30] & 0xC0) != 0xC0
    || *(_QWORD *)(a1 + 120)
    || (v8 = 1LL, v6 != 1) && v6 != 5 )
  {
    if ( (_BYTE)v6 != 10 )
      goto LABEL_3;
    if ( (*(_DWORD *)(v12 + 808) & 1) == 0 )
      goto LABEL_68;
  }
  LOBYTE(v6) = *(_BYTE *)(v12 + 812);
  v8 = 1LL;
  if ( (_BYTE)v6 == 10 )
  {
LABEL_68:
    LOBYTE(v6) = 1;
LABEL_3:
    if ( !(_DWORD)v8 )
      goto LABEL_4;
  }
  *(_DWORD *)(v12 + 808) &= 0xFFFFFFF8;
  TraceLoggingShowWindowDPIAwarenessEvent((struct tagWND *const)a1);
LABEL_4:
  LOBYTE(v8) = v6;
  ShellShowWindowCommand = xxxGetShellShowWindowCommand(a1, v8, v14);
  if ( BYTE4(ShellShowWindowCommand) != 0xFF )
  {
    v17 = (struct _DEVICE_OBJECT *)&WPP_GLOBAL_Control;
    if ( (_DWORD)ShellShowWindowCommand
      && ShellWindowManagement::BehaviorEnabled(
           *(ShellWindowManagement **)(a1 + 24),
           (const struct tagDESKTOP *)0x10,
           v16) )
    {
      LOBYTE(v15) = WPP_GLOBAL_Control != v17
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != v26;
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != v26 )
        WPP_RECORDER_AND_TRACE_SF_q(WPP_GLOBAL_Control->AttachedDevice, v15, v16, (_DWORD)v17, 4, 22, 31, v27, a1);
      a3 |= 0x20u;
      v7 = 1048579;
    }
    if ( BYTE4(ShellShowWindowCommand) == 8 )
    {
      v21 = v7 | 0x50;
LABEL_21:
      v19 = gptiCurrent;
      goto LABEL_22;
    }
    if ( BYTE4(ShellShowWindowCommand) <= 8u )
    {
      if ( !BYTE4(ShellShowWindowCommand) )
      {
        if ( !v13 )
          return v13;
        v19 = gptiCurrent;
        v20 = 148;
        v15 = 128LL;
        if ( a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) )
          v20 = 128;
        v21 = v20 | v7;
LABEL_22:
        if ( (BYTE4(ShellShowWindowCommand) != 0) == v13 )
          goto LABEL_25;
        goto LABEL_23;
      }
      if ( BYTE4(ShellShowWindowCommand) != 1 && BYTE4(ShellShowWindowCommand) != 4 )
      {
        if ( BYTE4(ShellShowWindowCommand) != 3 )
        {
          if ( BYTE4(ShellShowWindowCommand) == 2 )
            goto LABEL_60;
          if ( BYTE4(ShellShowWindowCommand) == 5 )
          {
            if ( v13 )
              return v13;
            v21 = v7 | 0x40;
            goto LABEL_21;
          }
          if ( BYTE4(ShellShowWindowCommand) > 5u && BYTE4(ShellShowWindowCommand) <= 7u )
          {
LABEL_60:
            xxxMinimizeWindowViaMinMax(a1, ShellShowWindowCommand, a3, v17);
            return v13;
          }
LABEL_93:
          UserSetLastError(1449LL);
          return v13;
        }
        v32 = ShellShowWindowCommand;
        v24 = a1;
        if ( (_DWORD)ShellShowWindowCommand != 1 )
        {
          v33 = a3;
LABEL_63:
          xxxShowWindowViaMinMax(v24, v32, v33, v17);
          return v13;
        }
LABEL_112:
        xxxShowWindowViaStartupInfo(v24, v32, v37 + 788, v17);
        return v13;
      }
      goto LABEL_37;
    }
    if ( BYTE4(ShellShowWindowCommand) == 9 )
    {
LABEL_37:
      v24 = a1;
      if ( (_DWORD)ShellShowWindowCommand == 1 )
      {
        v32 = ShellShowWindowCommand;
        goto LABEL_112;
      }
      v25 = IsSemiMaximized((const struct tagWND *)a1);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x21) == 0 && !v25 )
      {
        if ( v13 )
          return v13;
        v21 = v7 | 0x40;
        if ( BYTE4(ShellShowWindowCommand) == 4 )
        {
          v19 = gptiCurrent;
          v21 |= 0x14u;
LABEL_23:
          xxxSendMessage(a1);
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 21LL) & 1) == 0 )
            xxxSendMessage(a1);
LABEL_25:
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) != 0x40 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL) + 9LL) & 8) == 0
              || ((BYTE4(ShellShowWindowCommand) - 1) & 0xFB) != 0 )
            {
              goto LABEL_27;
            }
            xxxActivateWindow((struct tagWND *)a1);
          }
          v21 |= 0x14u;
LABEL_27:
          if ( (unsigned int)FChildVisible(a1, v15, v16) )
          {
            xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, v21);
            if ( (v21 & 0x100000) != 0 )
            {
              LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_AND_TRACE_SF_qd(
                  WPP_GLOBAL_Control->AttachedDevice,
                  (_DWORD)v22,
                  v23,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  4,
                  22,
                  16,
                  (__int64)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids,
                  a1,
                  v21);
              LOBYTE(v22) = 1;
              NotifyShell::TrackedWindowPosChanged((NotifyShell *)a1, v22, v23);
            }
          }
          else
          {
            SetVisible((struct tagWND *)a1, BYTE4(ShellShowWindowCommand) != 0);
          }
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 16LL) & 0x10) != 0 )
          {
            SetOrClrWF(0, (struct tagWND *)a1, 0x10u, 1);
            xxxSendSizeMessage(a1);
            v28 = *(_QWORD *)(a1 + 104);
            v37 = *(_OWORD *)(*(_QWORD *)(v28 + 40) + 104LL);
            TransformRectBetweenCoordinateSpaces(&v37, &v37, a1, v28);
            if ( *(_QWORD *)(a1 + 104) == GetDesktopWindow(a1) )
              v31 = *(unsigned __int16 *)(v30 + 104) | (v29 << 16);
            else
              v31 = (unsigned __int16)(*(_WORD *)(v30 + 104) - v37) | ((unsigned __int16)(v29 - WORD2(v37)) << 16);
            _InterlockedAdd(&glSendMessage, 1u);
            xxxSendTransformableMessageTimeout((unsigned __int64 *)a1, 3u, 0LL, v31, 0, 0, 0LL, 1, 0);
          }
          if ( !BYTE4(ShellShowWindowCommand) )
          {
            if ( *(_QWORD *)(v19 + 432) == gpqForeground && a1 == *(_QWORD *)(gpqForeground + 120LL) )
              xxxActivateWindowWithOptions(a1, 2LL, 57LL, 1LL);
            else
              xxxMoveFocusAway((const struct tagWND *)a1, (__int64)v22, v23);
          }
          return v13;
        }
        goto LABEL_21;
      }
      v32 = ShellShowWindowCommand;
      v33 = a3 | (4 * v25);
LABEL_70:
      v24 = a1;
      goto LABEL_63;
    }
    if ( BYTE4(ShellShowWindowCommand) == 11 )
    {
      xxxMinimizeHungWindow((struct tagWND *)a1);
      return v13;
    }
    if ( BYTE4(ShellShowWindowCommand) == 17 )
    {
      BYTE4(ShellShowWindowCommand) = 3;
    }
    else
    {
      if ( BYTE4(ShellShowWindowCommand) != 18 )
      {
        if ( BYTE4(ShellShowWindowCommand) == 19 )
        {
          BYTE4(ShellShowWindowCommand) = 3;
        }
        else
        {
          if ( BYTE4(ShellShowWindowCommand) != 20 )
            goto LABEL_93;
          BYTE4(ShellShowWindowCommand) = 9;
        }
        v35 = a3 | 0x70;
        goto LABEL_98;
      }
      BYTE4(ShellShowWindowCommand) = 9;
    }
    v35 = a3 | 0x30;
LABEL_98:
    v32 = ShellShowWindowCommand;
    v33 = v35;
    goto LABEL_70;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v11 = 0;
  }
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v34 = 30;
    LOBYTE(v34) = v11;
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qd(
      WPP_GLOBAL_Control->AttachedDevice,
      v34,
      v16,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      22,
      30,
      (__int64)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids,
      a1,
      v13);
  }
  return v13;
}
