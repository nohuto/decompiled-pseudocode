/*
 * XREFs of zzzActiveCursorTracking @ 0x1C01B8530
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00E6D24 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 * Callees:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C001DD64 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     SetVisible @ 0x1C002DB8C (SetVisible.c)
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     GetActiveTrackPwnd @ 0x1C01B7A4C (GetActiveTrackPwnd.c)
 */

__int64 __fastcall zzzActiveCursorTracking(struct tagWND *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rax
  _DWORD *v4; // rcx
  _DWORD *v5; // r8
  __int64 v6; // r9
  int v7; // edi
  unsigned __int64 v8; // [rsp+58h] [rbp+28h] BYREF
  unsigned __int64 v9; // [rsp+60h] [rbp+30h] BYREF

  v8 = 0LL;
  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1
    || (result = CInputGlobals::GetLastInputType(gpInputGlobals), (_DWORD)result == 4) )
  {
    v3 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL));
    v4 = (_DWORD *)(*((_QWORD *)a1 + 5) + 88LL);
    v8 = v3;
    result = PtInRect(v4, v3);
    if ( !(_DWORD)result
      && (!gspwndCursor || (result = (__int64)GetActiveTrackPwnd((const struct tagWND *)gspwndCursor)) != 0) )
    {
      v5 = (_DWORD *)*((_QWORD *)a1 + 5);
      LODWORD(v8) = v5[22] + (v5[24] - v5[22]) / 2;
      HIDWORD(v8) = v5[23] + (v5[25] - v5[23]) / 2;
      v9 = v8;
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
        LogicalToPhysicalDPIPoint(&v9, &v8, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), 0LL);
      CCursorClip::BoundPoint(gpCursorClip, v9, 0LL, 2LL, &v9);
      v8 = v9;
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
        PhysicalToLogicalDPIPoint(&v8, &v9, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), 0LL);
      result = PtInRect((_DWORD *)(*((_QWORD *)a1 + 5) + 88LL), v8);
      if ( (_DWORD)result )
      {
        v7 = *(_BYTE *)(v6 + 31) & 0x10;
        if ( (*(_BYTE *)(v6 + 31) & 0x10) == 0 )
          SetVisible(a1, v7 + 5);
        result = zzzInternalSetCursorPos(v9, HIDWORD(v9), 2, 0);
        if ( !v7 )
          return SetVisible(a1, 0);
      }
    }
  }
  return result;
}
