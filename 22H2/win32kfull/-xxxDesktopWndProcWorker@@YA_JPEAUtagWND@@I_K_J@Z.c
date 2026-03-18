/*
 * XREFs of ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C0020C7C
 * Callers:
 *     xxxDesktopWndProc @ 0x1C0020C10 (xxxDesktopWndProc.c)
 * Callees:
 *     GreRealizeDefaultPalette @ 0x1C001F258 (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C001F4AC (GreGetSystemPaletteUse.c)
 *     xxxValidateClassAndSize @ 0x1C0020EA4 (xxxValidateClassAndSize.c)
 *     xxxDefWindowProc @ 0x1C0020FF0 (xxxDefWindowProc.c)
 *     xxxRedrawWindow @ 0x1C0031604 (xxxRedrawWindow.c)
 *     SetRITTimer @ 0x1C003CE70 (SetRITTimer.c)
 *     xxxDWP_UpdateUIState @ 0x1C004AAD8 (xxxDWP_UpdateUIState.c)
 *     xxxSendNotifyMessage @ 0x1C004D370 (xxxSendNotifyMessage.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     xxxSetThreadDesktop @ 0x1C006A6E4 (xxxSetThreadDesktop.c)
 *     SetDesktopPattern @ 0x1C00AEAF4 (SetDesktopPattern.c)
 *     xxxInternalPaintDesktop @ 0x1C00B5048 (xxxInternalPaintDesktop.c)
 *     xxxSetWindowLong @ 0x1C00C9D14 (xxxSetWindowLong.c)
 *     xxxBeginPaint @ 0x1C00CDA00 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x1C00CEAA0 (xxxEndPaint.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     xxxRealizeDesktop @ 0x1C01BEC0C (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxDesktopWndProcWorker(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  int v10; // edx
  __int64 i; // rbx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  _BYTE v18[8]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v19; // [rsp+48h] [rbp-61h] BYREF
  __int128 v20; // [rsp+50h] [rbp-59h] BYREF
  __int64 v21; // [rsp+60h] [rbp-49h]
  _BYTE v22[80]; // [rsp+70h] [rbp-39h] BYREF

  memset_0(v22, 0, 0x48uLL);
  v19 = 0LL;
  if ( !(unsigned int)xxxValidateClassAndSize((_DWORD)a1, a2, a3, a4, 669, 1, (__int64)&v19) )
    return v19;
  if ( !*((_QWORD *)a1 + 13) )
  {
    if ( a2 != 128 )
      return xxxDefWindowProc(a1);
    return 0LL;
  }
  if ( a2 <= 0x80 )
  {
    switch ( a2 )
    {
      case 0x80u:
        return 0LL;
      case 1u:
        v20 = 0LL;
        v21 = 0LL;
        v12 = CreateProfileUserName(&v20);
        SetDesktopPattern(v12, 0LL);
        FreeProfileUserName(v12, &v20);
        xxxSendNotifyMessage(a1, 21LL, 0LL, 0LL, 1);
        xxxRealizeDesktop(a1);
        PsGetCurrentProcessId();
        xxxSetWindowLong(a1, 0);
        PsGetCurrentThreadId();
        xxxSetWindowLong(a1, 0);
        return 0LL;
      case 0xFu:
        xxxBeginPaint(a1);
        xxxEndPaint(a1, v22);
        return 0LL;
      case 0x10u:
        return 0LL;
    }
    if ( a2 != 20 )
    {
      switch ( a2 )
      {
        case 0x15u:
          xxxRedrawWindow(a1);
          break;
        case 0x3Au:
          LODWORD(v19) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1297LL);
          break;
        case 0x46u:
          if ( (*(_DWORD *)(a4 + 32) & 4) == 0 && !*(_QWORD *)(a4 + 8) )
          {
            xxxSetThreadDesktop(0LL, grpdeskRitInput);
            if ( (unsigned int)GreGetSystemPaletteUse(*(HDC *)(gpDispInfo + 56LL)) != 1 )
              GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 56LL), v10);
            if ( (*(_DWORD *)(grpdeskRitInput + 48LL) & 1) != 0 )
            {
              xxxSendNotifyMessage(-1LL, 785LL, *(_QWORD *)a1, 0LL, 1);
              *(_DWORD *)(grpdeskRitInput + 48LL) &= ~1u;
            }
          }
          break;
        case 0x51u:
          AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v18);
          for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
            xxxSendNotifyMessage(i, 81LL, a3, a4, 1);
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v18);
          break;
        default:
          return xxxDefWindowProc(a1);
      }
      return 0LL;
    }
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
      xxxInternalPaintDesktop(a1, a3, 1LL);
    return 1LL;
  }
  else
  {
    if ( a2 == 161 )
      return 0LL;
    if ( a2 == 274 )
    {
      if ( a3 == 61760 )
        return xxxDefWindowProc(a1);
      return 0LL;
    }
    if ( a2 != 296 )
    {
      if ( a2 == 515 )
        return xxxDefWindowProc(a1);
      if ( a2 == 783 )
        goto LABEL_48;
      if ( a2 != 785 )
      {
        if ( a2 != 1025 )
          return xxxDefWindowProc(a1);
        if ( !gProtocolType
          && *(_DWORD *)(SGDGetUserSessionState(v8) + 15936)
          && !*(_QWORD *)(SGDGetUserSessionState(v13) + 15944) )
        {
          v15 = SGDGetUserSessionState(v14);
          v16 = SetRITTimer(*(_QWORD *)(v15 + 15944), 20LL, HideMouseTrails, 0LL);
          *(_QWORD *)(SGDGetUserSessionState(v17) + 15944) = v16;
        }
        return 0LL;
      }
      if ( *(_QWORD *)a1 != a3 )
LABEL_48:
        xxxRealizeDesktop(a1);
      return 0LL;
    }
    return xxxDWP_UpdateUIState(a1, a3, a4);
  }
}
