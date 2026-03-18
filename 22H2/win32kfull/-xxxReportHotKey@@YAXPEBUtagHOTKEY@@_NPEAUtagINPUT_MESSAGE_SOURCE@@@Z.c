/*
 * XREFs of ?xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0010920
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00500BC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     ?HotkeyInvoked@Keyboard@InputTraceLogging@@SAXIE_N@Z @ 0x1C0010CC4 (-HotkeyInvoked@Keyboard@InputTraceLogging@@SAXIE_N@Z.c)
 *     ?IsPenQuickLaunchHotKey@@YA_NIE@Z @ 0x1C001500C (-IsPenQuickLaunchHotKey@@YA_NIE@Z.c)
 *     ?_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z @ 0x1C0049738 (-_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z.c)
 *     _PostThreadMessageEx @ 0x1C0115548 (_PostThreadMessageEx.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C011E780 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage @ 0x1C0139AA0 (Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage.c)
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x1C013AB64 (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 *     ?xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z @ 0x1C013ACF8 (-xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     ?TraceLoggingYieldedHotkey@@YAXII@Z @ 0x1C0202880 (-TraceLoggingYieldedHotkey@@YAXII@Z.c)
 */

void __fastcall xxxReportHotKey(const struct tagHOTKEY *a1, bool a2, struct tagINPUT_MESSAGE_SOURCE *a3)
{
  int v4; // r15d
  unsigned int v5; // edi
  struct tagWND *ShellWindow; // rax
  __int16 v7; // r13
  unsigned int v8; // ebp
  __int64 v9; // rax
  _QWORD **v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rax
  struct tagWND *v13; // rbp
  __int64 v14; // rbx
  char v15; // r12
  const struct tagHOTKEY *v16; // rax
  char v17; // r14
  __int64 v18; // r12
  void (__fastcall *v19)(_QWORD, __int64); // rsi
  __int64 v20; // rax
  _QWORD *i; // rax
  __int64 v22; // rax
  struct tagTHREADINFO *v23; // rdx
  __int64 v24; // rax
  void (__fastcall *v25)(_QWORD, __int64); // [rsp+30h] [rbp-68h]
  __int64 v26; // [rsp+38h] [rbp-60h]
  struct tagTHREADINFO *v27; // [rsp+40h] [rbp-58h]
  unsigned __int8 v28; // [rsp+A0h] [rbp+8h]
  bool v31; // [rsp+B8h] [rbp+20h]

  v4 = *((_DWORD *)a1 + 10);
  v31 = *((_DWORD *)a3 + 1) == 1;
  v5 = v31;
  if ( (unsigned int)Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage()
    && !*((_DWORD *)a1 + 9) )
  {
    v5 = v31 | 2;
  }
  ShellWindow = _GetShellWindow(*(struct tagDESKTOP **)(gptiCurrent + 456LL));
  if ( ShellWindow && (v4 == -7 || v4 == 61744) )
  {
    xxxReportWindowHotKey(a1, ShellWindow, v5);
    return;
  }
  v7 = *((_WORD *)a1 + 17);
  v8 = *((unsigned __int8 *)a1 + 36);
  v28 = *((_BYTE *)a1 + 36);
  if ( (v7 & 0x100) != 0 )
    return;
  v9 = SGDGetUserSessionState();
  v10 = (_QWORD **)((char *)a1 + 56);
  v25 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)a1 + 1);
  v11 = *(unsigned __int16 *)(v9 + 13824);
  v12 = v8;
  v13 = (struct tagWND *)*((_QWORD *)a1 + 2);
  v14 = (v12 << 16) | v11;
  v15 = (unsigned __int8)*((_WORD *)a1 + 17) >> 7;
  v27 = *(struct tagTHREADINFO **)a1;
  v16 = (const struct tagHOTKEY *)*((_QWORD *)a1 + 7);
  v26 = *((_QWORD *)a1 + 3);
  if ( v16 == (const struct tagHOTKEY *)((char *)a1 + 56) )
  {
    v17 = (unsigned __int8)*((_WORD *)a1 + 17) >> 7;
LABEL_11:
    v18 = *((_QWORD *)a1 + 3);
LABEL_27:
    v19 = v25;
    goto LABEL_28;
  }
  if ( (*((_WORD *)a1 + 17) & 0x1000) == 0 )
  {
    v17 = (unsigned __int8)*((_WORD *)a1 + 17) >> 7;
    if ( !gpqForeground || !*(_QWORD *)(gpqForeground + 128LL) )
      goto LABEL_11;
    if ( (HIDWORD(gpdwCPUserPreferencesMask) & 0x200) != 0 )
    {
      v20 = SGDGetUserSessionState();
      if ( IsPenQuickLaunchHotKey(*(_DWORD *)(v20 + 13824), v28) )
      {
LABEL_26:
        v18 = v26;
        goto LABEL_27;
      }
      v10 = (_QWORD **)((char *)a1 + 56);
    }
    for ( i = *v10; i != v10; i = (_QWORD *)*i )
    {
      if ( *(_QWORD *)(*(i - 4) + 432LL) == gpqForeground )
      {
        v13 = (struct tagWND *)*(i - 3);
        v4 = *((_DWORD *)i - 3);
        v7 = *((_WORD *)i - 8);
        v25 = 0LL;
        v27 = (struct tagTHREADINFO *)*(i - 4);
        TraceLoggingYieldedHotkey(*((unsigned __int16 *)a1 + 16), *((_DWORD *)a1 + 9));
        break;
      }
    }
    v17 = v15;
    goto LABEL_26;
  }
  v13 = (struct tagWND *)*((_QWORD *)v16 - 3);
  v17 = 1;
  v4 = *((_DWORD *)v16 - 3);
  v19 = 0LL;
  v18 = *((_QWORD *)v16 - 1);
  v7 = *((_WORD *)v16 - 8);
LABEL_28:
  if ( (v7 & 0x4000) == 0 || v14 != *(_QWORD *)(SGDGetUserSessionState() + 13784) )
  {
    if ( !v17 )
    {
      if ( v13 )
      {
        if ( v13 == (struct tagWND *)1 )
        {
          if ( !gpqForeground )
            return;
          v13 = *(struct tagWND **)(gpqForeground + 120LL);
          if ( !v13 )
            return;
        }
        if ( *(_QWORD *)(SGDGetUserSessionState() + 13784) != v14 )
          *(_QWORD *)(SGDGetUserSessionState() + 13784) = v14;
        v22 = SGDGetUserSessionState();
        InputTraceLogging::Keyboard::HotkeyInvoked(*(_DWORD *)(v22 + 13824), v28, a2);
        _PostTransformableMessageExtended(v13, 0x312u, v4, v14, a3, 1);
        v23 = (struct tagTHREADINFO *)*((_QWORD *)v13 + 2);
      }
      else
      {
        if ( *(_QWORD *)(SGDGetUserSessionState() + 13784) != v14 )
          *(_QWORD *)(SGDGetUserSessionState() + 13784) = v14;
        v24 = SGDGetUserSessionState();
        InputTraceLogging::Keyboard::HotkeyInvoked(*(_DWORD *)(v24 + 13824), v28, a2);
        if ( v19 )
        {
          v19(v4, v14);
          return;
        }
        PostThreadMessageEx(v27, 786LL, v4, v14, a3);
        v23 = v27;
      }
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v23, v31);
      return;
    }
    if ( *(_QWORD *)(SGDGetUserSessionState() + 13784) != v14 )
      *(_QWORD *)(SGDGetUserSessionState() + 13784) = v14;
    xxxReportHotKeyToShell(v13, v14, v4, v18, v5);
  }
}
