/*
 * XREFs of xxxDesktopPaintCallback @ 0x1C0113C80
 * Callers:
 *     NtUserPaintMonitor @ 0x1C01FAC30 (NtUserPaintMonitor.c)
 * Callees:
 *     GetStyleWindow @ 0x1C004CDA0 (GetStyleWindow.c)
 *     GetMonitorWorkRect @ 0x1C007CB4C (GetMonitorWorkRect.c)
 *     FillRect @ 0x1C00C1CEC (FillRect.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C021CC64 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 */

_BOOL8 __fastcall xxxDesktopPaintCallback(__int64 a1, HDC a2, const RECT *a3, __int64 a4)
{
  int v5; // edi
  __int64 StyleWindow; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  BOOL v14; // ebx
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rax
  struct tagRECT v28; // [rsp+20h] [rbp-28h] BYREF
  __int64 v29; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  StyleWindow = 0LL;
  if ( *(_QWORD *)(a4 + 8) )
    a2 = *(HDC *)(a4 + 8);
  v28 = *(struct tagRECT *)GetMonitorWorkRect((__int64)&v29, a1);
  if ( a2 )
  {
    GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
    v8 = LookupDC(a2, 0LL);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 16);
      if ( v9 && (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF) == 0x29D && *(PVOID *)(v9 + 24) == grpdeskLogon )
        v5 = 1;
      if ( (*(_DWORD *)(v8 + 64) & 0x4000) != 0 )
        StyleWindow = GetStyleWindow(v9, 2848);
    }
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( StyleWindow )
    {
      v22 = *(_QWORD *)(StyleWindow + 40);
      v23 = *(_DWORD *)(v22 + 88);
      v24 = -*(_DWORD *)(v22 + 92);
      v28.bottom -= *(_DWORD *)(v22 + 92);
      v25 = -v23;
      v28.left += v25;
      v28.right += v25;
      v28.top += v24;
    }
  }
  if ( *(_DWORD *)(gpsi + 2164LL) || v5 )
  {
    EnterRenderBlock();
    UserSessionSwitchLeaveCrit(v10);
    EnterSharedCrit(v12, v11, v13);
    EnterSharedRenderCrit();
    v14 = FillRect(a2, a3, ghbrBlack) != 0;
    LeaveRenderBlock();
    LeaveRenderCrit();
    UserSessionSwitchLeaveCrit(v15);
    EnterCrit(1LL, 0LL);
    if ( v5 )
      return v14;
  }
  else if ( gbDesktopLocked )
  {
    v14 = 0;
  }
  else
  {
    EnterRenderBlock();
    UserSessionSwitchLeaveCrit(v17);
    EnterSharedCrit(v19, v18, v20);
    EnterSharedRenderCrit();
    v14 = FillRect(a2, a3, *(HBRUSH *)(gpsi + 4704LL)) != 0;
    LeaveRenderBlock();
    LeaveRenderCrit();
    UserSessionSwitchLeaveCrit(v21);
    EnterCrit(1LL, 0LL);
  }
  if ( *(_DWORD *)(gpsi + 2164LL) )
  {
    v26 = *(_QWORD *)(gptiCurrent + 456LL);
    if ( v26 )
      v27 = *(_QWORD *)(*(_QWORD *)(v26 + 8) + 168LL);
    else
      v27 = 0LL;
    if ( !v27 )
      PaintWatermark(a2, &v28);
  }
  return v14;
}
