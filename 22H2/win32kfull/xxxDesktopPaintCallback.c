/*
 * XREFs of xxxDesktopPaintCallback @ 0x1C0130E20
 * Callers:
 *     NtUserPaintMonitor @ 0x1C01FF970 (NtUserPaintMonitor.c)
 * Callees:
 *     GetMonitorWorkRect @ 0x1C0041390 (GetMonitorWorkRect.c)
 *     FillRect @ 0x1C0045694 (FillRect.c)
 *     GetStyleWindow @ 0x1C00714C0 (GetStyleWindow.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0222CD0 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 */

_BOOL8 __fastcall xxxDesktopPaintCallback(__int64 a1, HDC a2, const RECT *a3, __int64 a4)
{
  int v5; // edi
  __int64 StyleWindow; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  BOOL v11; // ebx
  __int64 v12; // rcx
  BOOL v14; // eax
  __int64 v15; // rax
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  struct tagRECT v23; // [rsp+30h] [rbp-28h] BYREF
  __int128 v24; // [rsp+40h] [rbp-18h] BYREF

  v5 = 0;
  StyleWindow = 0LL;
  if ( *(_QWORD *)(a4 + 8) )
    a2 = *(HDC *)(a4 + 8);
  v23 = (struct tagRECT)*GetMonitorWorkRect(&v24, a1);
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
      v15 = *(_QWORD *)(StyleWindow + 40);
      v16 = *(_DWORD *)(v15 + 88);
      v17 = -*(_DWORD *)(v15 + 92);
      v23.bottom -= *(_DWORD *)(v15 + 92);
      v18 = -v16;
      v23.left += v18;
      v23.right += v18;
      v23.top += v17;
    }
  }
  if ( !*(_DWORD *)(gpsi + 2164LL) && !v5 )
  {
    if ( gbDesktopLocked )
    {
      v11 = 0;
    }
    else
    {
      if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      EnterRenderBlock();
      UserSessionSwitchLeaveCrit(v19);
      EnterSharedCrit(0LL, 1LL);
      EnterSharedRenderCrit();
      v11 = FillRect(a2, a3, *(HBRUSH *)(gpsi + 4704LL)) != 0;
      LeaveRenderBlock();
      LeaveRenderCrit();
      UserSessionSwitchLeaveCrit(v20);
      EnterCrit(0LL, 1LL);
    }
    goto LABEL_20;
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  EnterRenderBlock();
  UserSessionSwitchLeaveCrit(v10);
  EnterSharedCrit(0LL, 1LL);
  EnterSharedRenderCrit();
  v11 = FillRect(a2, a3, ghbrBlack) != 0;
  LeaveRenderBlock();
  LeaveRenderCrit();
  UserSessionSwitchLeaveCrit(v12);
  EnterCrit(0LL, 1LL);
  if ( !v5 )
  {
LABEL_20:
    if ( *(_DWORD *)(gpsi + 2164LL) )
    {
      v21 = *(_QWORD *)(gptiCurrent + 456LL);
      if ( v21 )
        v22 = *(_QWORD *)(*(_QWORD *)(v21 + 8) + 168LL);
      else
        v22 = 0LL;
      v14 = v22 == 0;
    }
    else
    {
      v14 = 0;
    }
    if ( v14 )
      PaintWatermark(a2, &v23);
  }
  return v11;
}
