/*
 * XREFs of zzzLockWindowUpdate2 @ 0x1C00E51C8
 * Callers:
 *     NtUserLockWindowUpdate @ 0x1C0012A90 (NtUserLockWindowUpdate.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00E6D24 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EFBFC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     FreeSpb @ 0x1C000B520 (FreeSpb.c)
 *     CreateSpb @ 0x1C000D094 (CreateSpb.c)
 *     SpbCheckPwnd @ 0x1C0012BCC (SpbCheckPwnd.c)
 *     SpbCheck @ 0x1C0014BB8 (SpbCheck.c)
 *     zzzEndDeferWinEventNotify @ 0x1C002EF28 (zzzEndDeferWinEventNotify.c)
 *     GetStyleWindow @ 0x1C0039020 (GetStyleWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00519F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxInternalInvalidate @ 0x1C0053270 (xxxInternalInvalidate.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzLockWindowUpdate2(struct tagWND *a1, int a2)
{
  struct tagWND *v4; // rdi
  __int64 v5; // rbp
  char *i; // rbx
  struct tagWND *StyleWindow; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // ecx
  BOOL v12; // esi
  _QWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]
  char v16; // [rsp+80h] [rbp+18h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  if ( (gdwPUDFlags & 0x20000000) != 0 || gptiLockUpdate && gptiLockUpdate != gptiCurrent && !a2 )
  {
    v11 = 1440;
    goto LABEL_20;
  }
  if ( (a1 != 0LL) == (gptiLockUpdate != 0LL) )
  {
    if ( a2 )
      return 0LL;
    v11 = 87;
LABEL_20:
    UserSetLastError(v11);
    return 0LL;
  }
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( a1 )
  {
    SpbCheckPwnd(a1);
    CreateSpb(a1, 2, 0LL);
    v13[1] = a1;
    v13[0] = &gspwndLockUpdate;
    HMAssignmentLock(v13, 0LL);
    gptiLockUpdate = gptiCurrent;
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
  }
  else
  {
    SpbCheck();
    v4 = (struct tagWND *)gspwndLockUpdate;
    *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v14;
    *((_QWORD *)&v14 + 1) = v4;
    if ( v4 )
      HMLockObject(v4);
    gptiLockUpdate = 0LL;
    HMAssignmentUnlock(&gspwndLockUpdate);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)v4, 1, 0LL);
    v5 = 1LL;
    for ( i = *(char **)(gpDispInfo + 32LL); ; i = *(char **)i )
    {
      if ( !i )
        goto LABEL_15;
      if ( (*((_DWORD *)i + 12) & 2) != 0 )
        break;
    }
    if ( *((_QWORD *)i + 5) )
    {
      v5 = ghrgnSPB1;
      SetRectRgnIndirect(ghrgnSPB1, i + 24);
      v12 = GreCombineRgn(ghrgnSPB1, ghrgnSPB1, *((_QWORD *)i + 5), 4LL) != 1;
    }
    else
    {
      v12 = 0;
    }
    FreeSpb(i);
    if ( v12 )
    {
LABEL_15:
      StyleWindow = (struct tagWND *)GetStyleWindow((__int64)v4, 2568);
      if ( !StyleWindow )
        StyleWindow = (struct tagWND *)GetDesktopWindow((__int64)v4);
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v16);
      ++gdwDeferWinEvent;
      xxxInternalInvalidate(StyleWindow, (HRGN)v5, 0x10485u);
      zzzEndDeferWinEventNotify();
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v16);
    }
    SpbCheckPwnd(v4);
    ThreadUnlock1(v9, v8, v10);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
  return 1LL;
}
