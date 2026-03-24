/*
 * XREFs of ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0049254
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FD4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00134E8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C00472D4 (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     NtUserShowWindow @ 0x1C0048460 (NtUserShowWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0049EC8 (xxxRealDefWindowProc.c)
 *     xxxShowScrollBar @ 0x1C0115EF4 (xxxShowScrollBar.c)
 *     xxxSetWindowPlacement @ 0x1C011A428 (xxxSetWindowPlacement.c)
 *     ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x1C01359B4 (-xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C020930C (xxxSetInternalWindowPos.c)
 *     xxxbFullscreenSwitch @ 0x1C021E8AC (xxxbFullscreenSwitch.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 * Callees:
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C002B6FC (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0039B68 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C003AA88 (xxxMakeWindowForegroundWithState.c)
 *     ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C0049690 (-xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C004B630 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     _FChildVisible @ 0x1C004BAE4 (_FChildVisible.c)
 *     SetVisible @ 0x1C004BD40 (SetVisible.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     xxxSetWindowPos @ 0x1C006BC54 (xxxSetWindowPos.c)
 *     _GetDesktopWindow @ 0x1C00704C0 (_GetDesktopWindow.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C007E8C0 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxSendSizeMessage @ 0x1C00FFBC0 (xxxSendSizeMessage.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C0111C80 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C012B7A0 (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023D6C8 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C023F190 (xxxMinimizeHungWindow.c)
 */

__int64 __fastcall xxxShowWindowEx(struct tagWND *a1, unsigned __int8 a2, int a3)
{
  int v3; // r14d
  _BYTE *v5; // rdx
  int v6; // esi
  int v8; // r8d
  unsigned int v9; // ebp
  __int64 v10; // r10
  char v11; // dl
  unsigned __int8 ShellShowWindowAction; // al
  __int64 v13; // r8
  unsigned int v14; // r14d
  int v15; // r10d
  int v16; // ecx
  unsigned __int64 v17; // rdx
  __int64 v18; // r9
  int v19; // esi
  int v20; // eax
  __int64 v21; // rdi
  int v23; // esi
  struct tagWND *v24; // rdx
  bool v25; // r8
  __int64 v26; // rax
  char v27; // cl
  int v28; // r8d
  char v29; // cl
  int v30; // edx
  __int64 v31; // r9
  int v32; // edx
  __int64 v33; // r8
  int v34; // edx
  char v35; // di
  char v36; // di
  int v37; // [rsp+50h] [rbp-58h] BYREF
  __int128 v38; // [rsp+58h] [rbp-50h] BYREF

  v3 = a2;
  v5 = (_BYTE *)*((_QWORD *)a1 + 5);
  v6 = 3;
  v8 = 0;
  v37 = 0;
  v9 = v5[31] & 0x10 | v5[25] & 8;
  v10 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( (*(_DWORD *)(v10 + 808) & 1) != 0 && (v5[31] & 0xC0) != 0x40 && (v5[30] & 0xC0) == 0xC0 && !*((_QWORD *)a1 + 15) )
  {
    v8 = 1;
    if ( v3 == 1 || v3 == 5 )
      LOBYTE(v3) = 10;
  }
  if ( (_BYTE)v3 == 10 )
  {
    if ( (*(_DWORD *)(v10 + 808) & 1) != 0 )
    {
      LOBYTE(v3) = *(_BYTE *)(v10 + 812);
      v8 = 1;
      if ( (_BYTE)v3 != 10 )
        goto LABEL_62;
    }
    LOBYTE(v3) = 1;
  }
  if ( v8 )
  {
LABEL_62:
    *(_DWORD *)(v10 + 808) &= 0xFFFFFFF8;
    TraceLoggingShowWindowDPIAwarenessEvent(a1);
    v5 = (_BYTE *)*((_QWORD *)a1 + 5);
  }
  v11 = v5[23] & 7;
  if ( v11 && *((_QWORD *)a1 + 3) == grpdeskRitInput && (((_BYTE)v3 - 1) & 0xF5) == 0 && (_BYTE)v3 != 11 )
  {
    LOBYTE(v3) = 2;
    if ( v11 == 4 )
    {
      SetOrClrWF(0LL, a1, 1799LL, 1LL);
      SetOrClrWF(1LL, a1, 1793LL, 1LL);
    }
    if ( gpqForeground && *(struct tagWND **)(gpqForeground + 120LL) == a1 )
      xxxMakeWindowForegroundWithState(0LL, 0);
  }
  ShellShowWindowAction = xxxGetShellShowWindowAction(a1, v3, &v37);
  v14 = ShellShowWindowAction;
  if ( ShellShowWindowAction != 0xFF )
  {
    v15 = 128;
    if ( v37
      && ShellWindowManagement::BehaviorEnabled(
           *((ShellWindowManagement **)a1 + 3),
           (const struct tagDESKTOP *)0x10,
           v13) )
    {
      a3 |= v15;
      v6 = 2097155;
    }
    v16 = v6;
    v17 = v14;
    v18 = 9LL;
    if ( v14 == 8 )
    {
      v19 = v6 | 0x50;
      goto LABEL_16;
    }
    if ( v14 <= 8 )
    {
      if ( !(_BYTE)v14 )
      {
        if ( !v9 )
          return v9;
        v23 = 148;
        if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) )
          v23 = v15;
        v19 = v16 | v23;
        goto LABEL_16;
      }
      if ( v14 != 1 )
      {
        if ( v14 <= 3 )
        {
LABEL_55:
          LOBYTE(v28) = a3;
          goto LABEL_56;
        }
        if ( v14 != 4 )
        {
          if ( v14 == 5 )
          {
            if ( v9 )
              return v9;
            v19 = v6 | 0x40;
LABEL_16:
            if ( (_BYTE)v14 )
            {
              v20 = 1;
              v21 = 1LL;
            }
            else
            {
              v20 = 0;
              v21 = 0LL;
            }
            if ( v20 != v9 )
            {
              xxxSendMessage(a1, 24LL, v21, 0LL);
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1) == 0 )
                xxxSendMessage(a1, 9LL, v21, 0LL);
            }
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 9LL) & 8) == 0
                || (((_BYTE)v14 - 1) & 0xFB) != 0 )
              {
                goto LABEL_23;
              }
              xxxActivateWindow(a1);
            }
            v19 |= 0x14u;
LABEL_23:
            if ( (unsigned int)FChildVisible(a1, v17, v13, v18) )
            {
              xxxSetWindowPos(a1, 0, 0, v19);
              if ( (v19 & 0x200000) != 0 )
              {
                LOBYTE(v24) = 1;
                NotifyShell::TrackedWindowPosChanged(a1, v24, v25);
              }
            }
            else
            {
              SetVisible(a1);
            }
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x10) != 0 )
            {
              SetOrClrWF(0LL, a1, 16LL, 1LL);
              v29 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
              if ( (v29 & 0x20) != 0 )
                v30 = 1;
              else
                v30 = 2 * (v29 & 1);
              xxxSendSizeMessage((int)a1, v30);
              v31 = *((_QWORD *)a1 + 13);
              v38 = *(_OWORD *)(*(_QWORD *)(v31 + 40) + 104LL);
              TransformRectBetweenCoordinateSpaces(&v38, &v38, a1, v31);
              if ( *((_QWORD *)a1 + 13) == GetDesktopWindow(a1) )
                v34 = *(unsigned __int16 *)(v33 + 104) | (v32 << 16);
              else
                v34 = (unsigned __int16)(*(_WORD *)(v33 + 104) - v38) | ((unsigned __int16)(v32 - WORD2(v38)) << 16);
              _InterlockedAdd(&glSendMessage, 1u);
              xxxSendTransformableMessageTimeout((int)a1, 3, 0, v34, 0, 0, 0LL, 1, 0);
            }
            if ( !(_BYTE)v14 )
            {
              if ( *(_QWORD *)(gptiCurrent + 432LL) == gpqForeground && a1 == *(struct tagWND **)(gpqForeground + 120LL) )
                xxxActivateWindowWithOptions((__int64)a1, 2, 61, 1);
              else
                xxxMoveFocusAway(a1);
            }
            return v9;
          }
          goto LABEL_55;
        }
      }
LABEL_38:
      v26 = *((_QWORD *)a1 + 5);
      v27 = *(_BYTE *)(v26 + 233) & 3;
      if ( (*(_BYTE *)(v26 + 31) & 0x21) == 0 && !v27 )
      {
        if ( v9 )
          return v9;
        v19 = v6 | 0x40;
        if ( (_BYTE)v14 == 4 )
          v19 |= 0x14u;
        goto LABEL_16;
      }
      v28 = a3 | (v27 != 0 ? 4 : 0);
LABEL_56:
      xxxShowWindowViaMinMax(a1, v17, v28);
      return v9;
    }
    switch ( v14 )
    {
      case 9u:
        goto LABEL_38;
      case 0xBu:
        xxxMinimizeHungWindow(a1);
        return v9;
      case 0x11u:
        v36 = a3 | 0xC0;
        break;
      case 0x12u:
        v35 = a3 | 0xC0;
LABEL_84:
        LOBYTE(v28) = v35;
        v17 = 9LL;
        goto LABEL_56;
      case 0x13u:
        v36 = a3 | 0xC0;
        break;
      case 0x14u:
        v35 = a3 | 0xC0;
        goto LABEL_84;
      default:
        UserSetLastError(1449LL);
        return v9;
    }
    LOBYTE(v28) = v36;
    v17 = 3LL;
    goto LABEL_56;
  }
  return v9;
}
