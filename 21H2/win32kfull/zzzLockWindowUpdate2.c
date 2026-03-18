/*
 * XREFs of zzzLockWindowUpdate2 @ 0x1C00DBFA8
 * Callers:
 *     NtUserLockWindowUpdate @ 0x1C0004CE0 (NtUserLockWindowUpdate.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00DBE0C (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020E1A8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     SpbCheckPwnd @ 0x1C0004DF4 (SpbCheckPwnd.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048944 (zzzEndDeferWinEventNotify.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0049764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxInternalInvalidate @ 0x1C004A420 (xxxInternalInvalidate.c)
 *     GetStyleWindow @ 0x1C004CDA0 (GetStyleWindow.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     CreateSpb @ 0x1C00C92A0 (CreateSpb.c)
 *     SpbCheck @ 0x1C00DC1F8 (SpbCheck.c)
 *     FreeSpb @ 0x1C00DCA08 (FreeSpb.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzLockWindowUpdate2(struct tagWND *a1, __int64 a2)
{
  int v2; // r9d
  struct tagWND *v5; // rdi
  __int64 v6; // rbp
  __int64 *i; // rbx
  struct tagWND *StyleWindow; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  BOOL v15; // esi
  _QWORD v16[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-28h]
  char v19; // [rsp+80h] [rbp+18h] BYREF

  v17 = 0LL;
  v2 = a2;
  v18 = 0LL;
  if ( (gdwPUDFlags & 0x20000000) != 0 || (a2 = gptiLockUpdate) != 0 && gptiLockUpdate != gptiCurrent && !v2 )
  {
    v14 = 1440LL;
    goto LABEL_20;
  }
  if ( (a1 != 0LL) == (gptiLockUpdate != 0LL) )
  {
    if ( v2 )
      return 0LL;
    v14 = 87LL;
LABEL_20:
    UserSetLastError(v14, a2);
    return 0LL;
  }
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( a1 )
  {
    SpbCheckPwnd(a1);
    CreateSpb(a1, 2, 0LL);
    v16[1] = a1;
    v16[0] = &gspwndLockUpdate;
    HMAssignmentLock(v16, 0LL);
    gptiLockUpdate = gptiCurrent;
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
  }
  else
  {
    SpbCheck();
    v5 = (struct tagWND *)gspwndLockUpdate;
    *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v17;
    *((_QWORD *)&v17 + 1) = v5;
    if ( v5 )
      HMLockObject(v5);
    gptiLockUpdate = 0LL;
    HMAssignmentUnlock(&gspwndLockUpdate);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)v5, 1, 0LL);
    v6 = 1LL;
    for ( i = *(__int64 **)(gpDispInfo + 32LL); ; i = (__int64 *)*i )
    {
      if ( !i )
        goto LABEL_15;
      if ( (i[6] & 2) != 0 )
        break;
    }
    if ( i[5] )
    {
      v6 = ghrgnSPB1;
      SetRectRgnIndirect(ghrgnSPB1, i + 3);
      v15 = GreCombineRgn(ghrgnSPB1, ghrgnSPB1, i[5], 4LL) != 1;
    }
    else
    {
      v15 = 0;
    }
    FreeSpb(i);
    if ( v15 )
    {
LABEL_15:
      StyleWindow = (struct tagWND *)GetStyleWindow((__int64)v5, 2568);
      if ( !StyleWindow )
        StyleWindow = (struct tagWND *)GetDesktopWindow((__int64)v5);
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v19);
      ++gdwDeferWinEvent;
      xxxInternalInvalidate(StyleWindow, (HRGN)v6, 0x10485u);
      zzzEndDeferWinEventNotify();
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v19, v9, v10);
    }
    SpbCheckPwnd(v5);
    ThreadUnlock1(v12, v11, v13);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
  return 1LL;
}
