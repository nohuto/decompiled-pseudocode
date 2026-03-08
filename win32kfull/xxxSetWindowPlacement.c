/*
 * XREFs of xxxSetWindowPlacement @ 0x1C00FF7C8
 * Callers:
 *     NtUserSetWindowPlacement @ 0x1C00FF670 (NtUserSetWindowPlacement.c)
 * Callees:
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C000F544 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     ?_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z @ 0x1C00121FC (-_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z.c)
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002AE4C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     _MonitorFromRect @ 0x1C00AEE80 (_MonitorFromRect.c)
 *     UpdateCheckpoint @ 0x1C01009F4 (UpdateCheckpoint.c)
 *     GetMonitorWorkRect @ 0x1C0101744 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C0101788 (GetMonitorRect.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     WPUpdateCheckPointSettings @ 0x1C01F3F38 (WPUpdateCheckPointSettings.c)
 */

__int64 __fastcall xxxSetWindowPlacement(struct tagWND *a1, __int64 a2)
{
  struct tagMONITOR *v2; // rdi
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v6; // r12d
  __int64 DesktopWindow; // rax
  __int64 v8; // rdx
  struct tagPOINT v9; // rcx
  BOOL v10; // r14d
  struct tagPOINT v11; // rax
  int v12; // r15d
  __int64 v13; // rax
  int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 updated; // rax
  __int64 v18; // r8
  unsigned int v19; // edx
  int v20; // edx
  int v21; // ecx
  __int64 v22; // rcx
  int v23; // edi
  char v24; // al
  int v25; // edi
  struct tagPOINT v27; // [rsp+40h] [rbp-29h] BYREF
  struct tagPOINT v28; // [rsp+48h] [rbp-21h] BYREF
  __int128 v29; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v30[16]; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT v31; // [rsp+70h] [rbp+7h] BYREF

  v2 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  v6 = (unsigned __int8)ShouldVirtualizeWindowRect(a1, CurrentThreadDpiAwarenessContext);
  v31 = *(struct tagRECT *)(a2 + 28);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v8 == DesktopWindow )
  {
    v2 = (struct tagMONITOR *)MonitorFromRect((__int64)&v31, 1u, 0);
    v29 = *(_OWORD *)GetMonitorWorkRect(&v29, v2);
  }
  v9 = *(struct tagPOINT *)(a2 + 12);
  v27 = v9;
  v10 = v9.x != -1 && v9.y != -1;
  v11 = *(struct tagPOINT *)(a2 + 20);
  v28 = v11;
  if ( v11.x == -1 || v11.y == -1 )
    v12 = 0;
  else
    v12 = 64;
  v13 = GetDesktopWindow((__int64)a1);
  v14 = DWORD1(v29);
  if ( v15 == v13 && *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
  {
    v16 = *(_QWORD *)GetMonitorRect(v30, v2);
    v31.bottom += v14 - HIDWORD(v16);
    v31.left += v29 - v16;
    v31.right += v29 - v16;
    v31.top += v14 - HIDWORD(v16);
    if ( v10 )
    {
      v27.x += v29 - v16;
      v27.y += v14 - HIDWORD(v16);
    }
    CheckPlacementBounds(&v31, &v27, &v28, v2);
  }
  if ( v6 )
    TransformRectBetweenCoordinateSpaces(&v31, &v31, a1, 0LL);
  updated = UpdateCheckpoint(a1);
  v18 = updated;
  if ( updated )
  {
    v19 = *(_DWORD *)(updated + 48) & 0xFFFFFFDF;
    *(struct tagRECT *)updated = v31;
    *(struct tagPOINT *)(updated + 32) = v27;
    v20 = (32 * v10) | v19;
    *(_DWORD *)(updated + 48) = v20;
    v21 = v20 ^ (*(_DWORD *)(a2 + 4) ^ v20) & 1;
    *(_DWORD *)(updated + 48) = v21;
    *(struct tagPOINT *)(updated + 40) = v28;
    *(_DWORD *)(updated + 48) = v12 & 0xFFFFFFFD | v21 & 0xFFFFFFBD;
  }
  v22 = *((_QWORD *)a1 + 5);
  v23 = ((*(_DWORD *)(a2 + 4) & 4) << 12) | 0x14;
  v24 = *(_BYTE *)(v22 + 31);
  if ( (v24 & 0x20) != 0 )
  {
    if ( (!v18 || (*(_DWORD *)(v18 + 48) & 1) != 0) && v10 )
    {
      if ( v6 )
        TransformPointBetweenCoordinateSpaces(&v27, &v27, a1, 0LL);
      xxxSetWindowPos(a1, 0LL, (unsigned int)v27.x, (unsigned int)v27.y, 0, 0, v23 | 1);
    }
  }
  else if ( (v24 & 1) != 0 )
  {
    if ( v18 )
    {
      if ( (*(_BYTE *)(v22 + 19) & 0x40) != 0 )
        *(_DWORD *)(v18 + 48) &= ~0x40u;
      if ( (*(_DWORD *)(v18 + 48) & 0x40) != 0 )
      {
        if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
        {
          v28.x += v29;
          v28.y += v14;
        }
        if ( v6 )
          TransformPointBetweenCoordinateSpaces(&v28, &v28, a1, 0LL);
        xxxSetWindowPos(a1, 0LL, (unsigned int)v28.x, (unsigned int)v28.y, 0, 0, v23 | 1);
      }
    }
  }
  else
  {
    xxxSetWindowPos(
      a1,
      0LL,
      (unsigned int)v31.left,
      (unsigned int)v31.top,
      v31.right - v31.left,
      v31.bottom - v31.top,
      v23);
  }
  if ( (*(_DWORD *)(a2 + 4) & 4) == 0 || *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == *(_QWORD *)(gptiCurrent + 432LL) )
  {
    v25 = 0;
    xxxShowWindowEx((__int64)a1, *(_WORD *)(a2 + 8), 0);
  }
  else
  {
    _ShowWindowAsync((struct tagTHREADINFO **)a1, 0, *(_DWORD *)(a2 + 8), *(unsigned int *)(a2 + 4));
    v25 = 1;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 && !v25 )
    WPUpdateCheckPointSettings(a1, *(unsigned int *)(a2 + 4));
  return 1LL;
}
