void __fastcall PaintWatermark(HDC a1, const struct tagRECT *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 DPIServerInfo; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // ebp
  unsigned int v13; // r15d
  __int64 v14; // rcx
  struct tagSIZE v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = 0LL;
  v4 = 0LL;
  if ( (unsigned int)GreTextInitialized((__int64)a1) && *(_DWORD *)(gpsi + 2164LL) )
  {
    DPIServerInfo = GetDPIServerInfo(v5);
    v7 = *(_QWORD *)(DPIServerInfo + 8);
    if ( v7 )
      v4 = GreSelectFontInternal((__int64)a1, v7, 1);
    EnterRenderBlock();
    UserSessionSwitchLeaveCrit(v8);
    EnterSharedCrit(v10, v9, v11);
    EnterSharedRenderCrit();
    v12 = GreSetBkMode(a1, 1);
    v13 = GreSetTextColor((__int64)a1, 0xFFFFFFLL);
    if ( (unsigned int)GreGetTextExtentW(a1, gwszSafeModeStr, gSafeModeStrLen, &v15) )
    {
      GreExtTextOutW((__int64)a1, a2->left, a2->top, 0, 0LL, (__int64)gwszSafeModeStr, gSafeModeStrLen);
      GreExtTextOutW((__int64)a1, a2->right - v15.cx, a2->top, 0, 0LL, (__int64)gwszSafeModeStr, gSafeModeStrLen);
      GreExtTextOutW(
        (__int64)a1,
        a2->right - v15.cx,
        a2->bottom - *(_DWORD *)(DPIServerInfo + 40),
        0,
        0LL,
        (__int64)gwszSafeModeStr,
        gSafeModeStrLen);
      GreExtTextOutW(
        (__int64)a1,
        a2->left,
        a2->bottom - *(_DWORD *)(DPIServerInfo + 40),
        0,
        0LL,
        (__int64)gwszSafeModeStr,
        gSafeModeStrLen);
    }
    GreSetBkMode(a1, v12);
    GreSetTextColor((__int64)a1, v13);
    LeaveRenderBlock();
    LeaveRenderCrit();
    UserSessionSwitchLeaveCrit(v14);
    EnterCrit(1LL, 0LL);
    if ( v4 )
      GreSelectFontInternal((__int64)a1, v4, 1);
  }
}
