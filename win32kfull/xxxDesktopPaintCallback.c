_BOOL8 __fastcall xxxDesktopPaintCallback(__int64 a1, HDC a2, const RECT *a3, __int64 a4)
{
  int v5; // ebx
  __int64 StyleWindow; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  BOOL v14; // edi
  __int64 v15; // rcx
  __int64 v17; // rax
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  struct tagRECT v26; // [rsp+20h] [rbp-28h] BYREF
  __int64 v27; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  StyleWindow = 0LL;
  if ( *(_QWORD *)(a4 + 8) )
    a2 = *(HDC *)(a4 + 8);
  v26 = *(struct tagRECT *)GetMonitorWorkRect(&v27, a1);
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
      v17 = *(_QWORD *)(StyleWindow + 40);
      v18 = *(_DWORD *)(v17 + 88);
      v19 = -*(_DWORD *)(v17 + 92);
      v26.bottom -= *(_DWORD *)(v17 + 92);
      v20 = -v18;
      v26.left += v20;
      v26.right += v20;
      v26.top += v19;
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
    UserSessionSwitchLeaveCrit(v21);
    EnterSharedCrit(v23, v22, v24);
    EnterSharedRenderCrit();
    v14 = FillRect(a2, a3, *(HBRUSH *)(gpsi + 4704LL)) != 0;
    LeaveRenderBlock();
    LeaveRenderCrit();
    UserSessionSwitchLeaveCrit(v25);
    EnterCrit(1LL, 0LL);
  }
  if ( *(_DWORD *)(gpsi + 2164LL) && !_GetShellWindow(*(struct tagDESKTOP **)(gptiCurrent + 456LL)) )
    PaintWatermark(a2, &v26);
  return v14;
}
