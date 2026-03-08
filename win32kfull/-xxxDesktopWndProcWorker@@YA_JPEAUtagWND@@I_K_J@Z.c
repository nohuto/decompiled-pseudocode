/*
 * XREFs of ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00FA1BC
 * Callers:
 *     xxxDesktopWndProc @ 0x1C00FA150 (xxxDesktopWndProc.c)
 * Callees:
 *     xxxSetThreadDesktop @ 0x1C00361B8 (xxxSetThreadDesktop.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxRedrawWindow @ 0x1C0050700 (xxxRedrawWindow.c)
 *     SetRITTimer @ 0x1C00793E0 (SetRITTimer.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     xxxDWP_UpdateUIState @ 0x1C00A2360 (xxxDWP_UpdateUIState.c)
 *     xxxDefWindowProc @ 0x1C00A66F0 (xxxDefWindowProc.c)
 *     xxxSetWindowLong @ 0x1C00C9054 (xxxSetWindowLong.c)
 *     xxxSendNotifyMessage @ 0x1C00D8320 (xxxSendNotifyMessage.c)
 *     xxxInternalPaintDesktop @ 0x1C00F9338 (xxxInternalPaintDesktop.c)
 *     xxxValidateClassAndSize @ 0x1C00FA3E4 (xxxValidateClassAndSize.c)
 *     GreGetSystemPaletteUse @ 0x1C00FA6A8 (GreGetSystemPaletteUse.c)
 *     GreRealizeDefaultPalette @ 0x1C00FA71C (GreRealizeDefaultPalette.c)
 *     xxxBeginPaint @ 0x1C00FD4C0 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x1C00FE504 (xxxEndPaint.c)
 *     SetDesktopPattern @ 0x1C010AAFC (SetDesktopPattern.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     xxxRealizeDesktop @ 0x1C01BFDAC (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxDesktopWndProcWorker(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 i; // rbx
  __int64 v13; // rbx
  unsigned int CurrentProcessId; // eax
  unsigned int CurrentThreadId; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  _BYTE v21[8]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v22; // [rsp+48h] [rbp-61h] BYREF
  __int128 v23; // [rsp+50h] [rbp-59h] BYREF
  __int64 v24; // [rsp+60h] [rbp-49h]
  _BYTE v25[80]; // [rsp+70h] [rbp-39h] BYREF

  memset_0(v25, 0, 0x48uLL);
  v22 = 0LL;
  if ( !(unsigned int)xxxValidateClassAndSize((_DWORD)a1, a2, a3, a4, 669, 1, (__int64)&v22) )
    return v22;
  if ( !*((_QWORD *)a1 + 13) )
  {
    if ( a2 != 128 )
      goto LABEL_11;
    return 0LL;
  }
  if ( a2 <= 0x80 )
  {
    switch ( a2 )
    {
      case 0x80u:
        return 0LL;
      case 1u:
        v23 = 0LL;
        v24 = 0LL;
        v13 = CreateProfileUserName(&v23);
        SetDesktopPattern(v13, 0LL);
        FreeProfileUserName(v13, &v23);
        xxxSendNotifyMessage((struct tagTHREADINFO **)a1, 0x15u, 0LL, 0LL, 1);
        xxxRealizeDesktop(a1);
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        xxxSetWindowLong(a1, 0, CurrentProcessId, 0, 0);
        CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
        xxxSetWindowLong(a1, 4, CurrentThreadId, 0, 0);
        return 0LL;
      case 0xFu:
        xxxBeginPaint(a1);
        xxxEndPaint(a1, v25);
        return 0LL;
      case 0x10u:
        return 0LL;
    }
    if ( a2 != 20 )
    {
      switch ( a2 )
      {
        case 0x15u:
          xxxRedrawWindow(a1, 0LL, 0LL, 133);
          break;
        case 0x3Au:
          LODWORD(v22) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1296LL);
          break;
        case 0x46u:
          if ( (*(_DWORD *)(a4 + 32) & 4) == 0 && !*(_QWORD *)(a4 + 8) )
          {
            xxxSetThreadDesktop(0LL, grpdeskRitInput, v9);
            if ( (unsigned int)GreGetSystemPaletteUse(*(HDC *)(gpDispInfo + 56LL)) != 1 )
              GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 56LL));
            if ( (*(_DWORD *)(grpdeskRitInput + 48LL) & 1) != 0 )
            {
              xxxSendNotifyMessage((struct tagTHREADINFO **)0xFFFFFFFFFFFFFFFFLL, 0x311u, *(_QWORD *)a1, 0LL, 1);
              *(_DWORD *)(grpdeskRitInput + 48LL) &= ~1u;
            }
          }
          break;
        case 0x51u:
          AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v21);
          for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
            xxxSendNotifyMessage((struct tagTHREADINFO **)i, 0x51u, a3, (__int128 *)a4, 1);
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v21);
          break;
        default:
          goto LABEL_11;
      }
      return 0LL;
    }
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
      xxxInternalPaintDesktop((__int64)a1, (HDC)a3, 1);
    return 1LL;
  }
  else
  {
    if ( a2 == 161 )
      return 0LL;
    if ( a2 == 274 )
    {
      v10 = 61760LL;
      if ( a3 == 61760 )
        return xxxDefWindowProc(a1, a2, (HWND)v10, a4);
      return 0LL;
    }
    if ( a2 != 296 )
    {
      if ( a2 == 515 )
      {
        a2 = 274;
        a3 = 61744LL;
        goto LABEL_11;
      }
      if ( a2 == 783 )
        goto LABEL_49;
      if ( a2 != 785 )
      {
        if ( a2 != 1025 )
        {
LABEL_11:
          v10 = a3;
          return xxxDefWindowProc(a1, a2, (HWND)v10, a4);
        }
        if ( !gProtocolType
          && *(_DWORD *)(SGDGetUserSessionState(v8) + 15936)
          && !*(_QWORD *)(SGDGetUserSessionState(v16) + 15944) )
        {
          v18 = SGDGetUserSessionState(v17);
          v19 = SetRITTimer(*(_QWORD *)(v18 + 15944), 0x14u, (__int64)HideMouseTrails, 0);
          *(_QWORD *)(SGDGetUserSessionState(v20) + 15944) = v19;
        }
        return 0LL;
      }
      if ( *(_QWORD *)a1 != a3 )
LABEL_49:
        xxxRealizeDesktop(a1);
      return 0LL;
    }
    return xxxDWP_UpdateUIState((__int64 *)a1, a3, a4);
  }
}
