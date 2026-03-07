void __fastcall xxxReportHotKey(const struct tagHOTKEY *a1, bool a2, struct tagINPUT_MESSAGE_SOURCE *a3)
{
  int v4; // r14d
  struct tagWND *ShellWindow; // rax
  bool v6; // dl
  __int16 v7; // r12
  unsigned int v8; // esi
  __int64 v9; // rax
  __int16 v10; // dx
  HWND v11; // r8
  void (__fastcall *v12)(_QWORD, __int64); // r13
  __int64 v13; // rbx
  __int64 v14; // rax
  struct tagWND *v15; // rsi
  __int64 v16; // rbx
  char v17; // r15
  const struct tagHOTKEY *v18; // rcx
  char v19; // bp
  HWND v20; // rdi
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rax
  struct tagTHREADINFO *v24; // rdx
  __int64 v25; // rax
  HWND v26; // [rsp+30h] [rbp-68h]
  struct tagCHILDHOTKEY *v27; // [rsp+38h] [rbp-60h] BYREF
  struct tagTHREADINFO *v28; // [rsp+40h] [rbp-58h]
  unsigned __int8 v29; // [rsp+A0h] [rbp+8h]
  bool v32; // [rsp+B8h] [rbp+20h]

  v4 = *((_DWORD *)a1 + 10);
  v32 = *((_DWORD *)a3 + 1) == 1;
  ShellWindow = _GetShellWindow(*(struct tagDESKTOP **)(gptiCurrent + 456LL));
  if ( ShellWindow && (v4 == -7 || v4 == 61744) )
  {
    xxxReportWindowHotKey(a1, ShellWindow, v6);
    return;
  }
  v7 = *((_WORD *)a1 + 17);
  v8 = *((unsigned __int8 *)a1 + 36);
  v29 = *((_BYTE *)a1 + 36);
  if ( (v7 & 0x100) != 0 )
    return;
  v9 = SGDGetUserSessionState();
  v10 = *((_WORD *)a1 + 17);
  v11 = (HWND)*((_QWORD *)a1 + 3);
  v12 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)a1 + 1);
  v13 = *(unsigned __int16 *)(v9 + 13824);
  v14 = v8;
  v15 = (struct tagWND *)*((_QWORD *)a1 + 2);
  v16 = (v14 << 16) | v13;
  v17 = (unsigned __int8)v10 >> 7;
  v28 = *(struct tagTHREADINFO **)a1;
  v18 = (const struct tagHOTKEY *)*((_QWORD *)a1 + 7);
  v26 = v11;
  if ( v18 == (const struct tagHOTKEY *)((char *)a1 + 56) )
  {
    v19 = (unsigned __int8)v10 >> 7;
LABEL_8:
    v20 = v11;
    goto LABEL_18;
  }
  if ( (v10 & 0x1000) != 0 )
  {
    v15 = (struct tagWND *)*((_QWORD *)v18 - 3);
    v19 = 1;
    v4 = *((_DWORD *)v18 - 3);
    v12 = 0LL;
    v20 = (HWND)*((_QWORD *)v18 - 1);
    v7 = *((_WORD *)v18 - 8);
    goto LABEL_18;
  }
  v19 = (unsigned __int8)v10 >> 7;
  if ( !gpqForeground || !*(_QWORD *)(gpqForeground + 128LL) )
    goto LABEL_8;
  if ( (HIDWORD(gpdwCPUserPreferencesMask) & 0x200) == 0
    || (v21 = SGDGetUserSessionState(), !IsPenQuickLaunchHotKey(*(_DWORD *)(v21 + 13824), v29)) )
  {
    v27 = 0LL;
    v19 = v17;
    if ( HKFindChildHotkeyForQueue(gpqForeground, a1, &v27) )
    {
      v12 = 0LL;
      v22 = *((_DWORD *)a1 + 9);
      v15 = (struct tagWND *)*((_QWORD *)v27 + 1);
      v4 = *((_DWORD *)v27 + 5);
      v7 = *((_WORD *)v27 + 8);
      v28 = *(struct tagTHREADINFO **)v27;
      TraceLoggingYieldedHotkey(*((unsigned __int16 *)a1 + 16), v22);
    }
  }
  v20 = v26;
LABEL_18:
  if ( (v7 & 0x4000) == 0 || v16 != *(_QWORD *)(SGDGetUserSessionState() + 13784) )
  {
    if ( !v19 )
    {
      if ( v15 )
      {
        if ( v15 == (struct tagWND *)1 )
        {
          if ( !gpqForeground )
            return;
          v15 = *(struct tagWND **)(gpqForeground + 120LL);
          if ( !v15 )
            return;
        }
        if ( *(_QWORD *)(SGDGetUserSessionState() + 13784) != v16 )
          *(_QWORD *)(SGDGetUserSessionState() + 13784) = v16;
        v23 = SGDGetUserSessionState();
        InputTraceLogging::Keyboard::HotkeyInvoked(*(_DWORD *)(v23 + 13824), v29, a2);
        _PostTransformableMessageExtended(v15, 0x312u, v4, v16, a3, 1);
        v24 = (struct tagTHREADINFO *)*((_QWORD *)v15 + 2);
      }
      else
      {
        if ( *(_QWORD *)(SGDGetUserSessionState() + 13784) != v16 )
          *(_QWORD *)(SGDGetUserSessionState() + 13784) = v16;
        v25 = SGDGetUserSessionState();
        InputTraceLogging::Keyboard::HotkeyInvoked(*(_DWORD *)(v25 + 13824), v29, a2);
        if ( v12 )
        {
          v12(v4, v16);
          return;
        }
        PostThreadMessageEx(v28, 786LL, v4, v16, a3);
        v24 = v28;
      }
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v24, v32);
      return;
    }
    if ( *(_QWORD *)(SGDGetUserSessionState() + 13784) != v16 )
      *(_QWORD *)(SGDGetUserSessionState() + 13784) = v16;
    xxxReportHotKeyToShell(v15, v16, v4, v20, v32);
  }
}
