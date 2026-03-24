/*
 * XREFs of ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00462FC
 * Callers:
 *     xxxDesktopWndProc @ 0x1C0046290 (xxxDesktopWndProc.c)
 * Callees:
 *     SetDesktopPattern @ 0x1C0026030 (SetDesktopPattern.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C003A9E8 (xxxMakeWindowForegroundWithState.c)
 *     xxxSendNotifyMessage @ 0x1C00402D0 (xxxSendNotifyMessage.c)
 *     xxxEndPaint @ 0x1C00461A0 (xxxEndPaint.c)
 *     xxxDefWindowProc @ 0x1C00484E0 (xxxDefWindowProc.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxRedrawWindow @ 0x1C00722B4 (xxxRedrawWindow.c)
 *     xxxBeginPaint @ 0x1C007D854 (xxxBeginPaint.c)
 *     xxxSetThreadDesktop @ 0x1C00D9270 (xxxSetThreadDesktop.c)
 *     xxxDWP_UpdateUIState @ 0x1C00E0B94 (xxxDWP_UpdateUIState.c)
 *     xxxSetWindowLong @ 0x1C00FACB8 (xxxSetWindowLong.c)
 *     SetRITTimer @ 0x1C0114DF0 (SetRITTimer.c)
 *     GreRealizeDefaultPalette @ 0x1C012B594 (GreRealizeDefaultPalette.c)
 *     xxxInternalPaintDesktop @ 0x1C012CD90 (xxxInternalPaintDesktop.c)
 *     GreGetSystemPaletteUse @ 0x1C012D988 (GreGetSystemPaletteUse.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     xxxValidateClassAndSize @ 0x1C0167A7C (xxxValidateClassAndSize.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     xxxRealizeDesktop @ 0x1C01E9658 (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxDesktopWndProcWorker(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 i; // rbx
  struct tagWND *v10; // rcx
  __int64 v11; // rcx
  struct tagWND *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // [rsp+50h] [rbp-89h] BYREF
  __int64 v16; // [rsp+58h] [rbp-81h] BYREF
  struct tagWND *v17; // [rsp+60h] [rbp-79h]
  __int64 v18; // [rsp+68h] [rbp-71h]
  char v19[8]; // [rsp+70h] [rbp-69h] BYREF
  __int128 v20; // [rsp+78h] [rbp-61h] BYREF
  __int64 v21; // [rsp+88h] [rbp-51h]
  _QWORD v22[10]; // [rsp+90h] [rbp-49h] BYREF

  memset(v22, 0, 0x48uLL);
  v15 = 0LL;
  if ( !(unsigned int)xxxValidateClassAndSize((_DWORD)a1, a2, a3, a4, 669, 1, (__int64)&v15) )
    return v15;
  if ( !*((_QWORD *)a1 + 13) )
  {
    if ( a2 != 128 )
      return xxxDefWindowProc(a1);
    return 0LL;
  }
  if ( a2 > 0x80 )
  {
    if ( a2 != 161 )
    {
      switch ( a2 )
      {
        case 0x112u:
          if ( a3 == 61760 )
            return xxxDefWindowProc(a1);
          break;
        case 0x128u:
          return xxxDWP_UpdateUIState(a1, a3, a4);
        case 0x203u:
          return xxxDefWindowProc(a1);
        case 0x30Fu:
          goto LABEL_49;
        case 0x311u:
          if ( *(_QWORD *)a1 != a3 )
LABEL_49:
            xxxRealizeDesktop(a1);
          break;
        case 0x401u:
          if ( !gProtocolType && LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) && !WPP_MAIN_CB.Dpc.DeferredContext )
            WPP_MAIN_CB.Dpc.DeferredContext = (PVOID)SetRITTimer(0LL, 20LL, HideMouseTrails, 0LL);
          return 0LL;
        default:
          return xxxDefWindowProc(a1);
      }
    }
    return 0LL;
  }
  switch ( a2 )
  {
    case 0x80u:
      return 0LL;
    case 1u:
      v20 = 0LL;
      v21 = 0LL;
      v14 = CreateProfileUserName(&v20);
      SetDesktopPattern(v14, 0LL);
      FreeProfileUserName(v14, &v20);
      xxxSendNotifyMessage((__int64)a1, 0x15u, 0LL, 0LL, 1);
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
        v18 = 0LL;
        v10 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
        v16 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v16;
        v17 = v10;
        if ( v10 )
          HMLockObject(v10);
        xxxMakeWindowForegroundWithState(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), 2);
        ThreadUnlock1(v11);
        v12 = gspwndAltTab;
        if ( gspwndAltTab )
        {
          v16 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v16;
          v17 = v12;
          HMLockObject(v12);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout((int)gspwndAltTab, 58, 0, 0, 0, 0, 0LL, 1, 1);
          ThreadUnlock1(v13);
        }
        break;
      case 0x46u:
        if ( (*(_DWORD *)(a4 + 32) & 4) == 0 && !*(_QWORD *)(a4 + 8) )
        {
          xxxSetThreadDesktop(0LL, grpdeskRitInput);
          if ( (unsigned int)GreGetSystemPaletteUse(*(HDC *)(gpDispInfo + 56LL)) != 1 )
            GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 56LL));
          if ( (*(_DWORD *)(grpdeskRitInput + 48LL) & 1) != 0 )
          {
            xxxSendNotifyMessage(-1LL, 0x311u, *(_QWORD *)a1, 0LL, 1);
            *(_DWORD *)(grpdeskRitInput + 48LL) &= ~1u;
          }
        }
        break;
      case 0x51u:
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v19);
        for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
          xxxSendNotifyMessage(i, 0x51u, a3, (struct _LARGE_STRING *)a4, 1);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v19);
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
