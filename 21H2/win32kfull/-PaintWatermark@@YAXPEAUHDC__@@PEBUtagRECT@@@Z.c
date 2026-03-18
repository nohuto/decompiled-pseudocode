/*
 * XREFs of ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C021CC64
 * Callers:
 *     xxxDesktopPaintCallback @ 0x1C0113C80 (xxxDesktopPaintCallback.c)
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C008ABC0 (GreExtTextOutWInternal.c)
 *     GetDPIServerInfo @ 0x1C00BA3D4 (GetDPIServerInfo.c)
 *     GreSetTextColor @ 0x1C00BE3F8 (GreSetTextColor.c)
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     GreSetBkMode @ 0x1C00BFC20 (GreSetBkMode.c)
 *     GreTextInitialized @ 0x1C00C4278 (GreTextInitialized.c)
 *     GreGetTextExtentW @ 0x1C00C43FC (GreGetTextExtentW.c)
 */

void __fastcall PaintWatermark(HDC a1, const struct tagRECT *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 DPIServerInfo; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // ebp
  int v14; // r15d
  __int64 v15; // rcx
  struct _POINTL v16; // [rsp+90h] [rbp+18h] BYREF

  v16 = 0LL;
  v3 = 0LL;
  if ( GreTextInitialized() && *(_DWORD *)(gpsi + 2164LL) )
  {
    DPIServerInfo = GetDPIServerInfo(v6, v5);
    v8 = *(_QWORD *)(DPIServerInfo + 8);
    if ( v8 )
      v3 = GreSelectFontInternal(a1, v8, 1);
    EnterRenderBlock();
    UserSessionSwitchLeaveCrit(v9);
    EnterSharedCrit(v11, v10, v12);
    EnterSharedRenderCrit();
    v13 = GreSetBkMode(a1, 1);
    v14 = GreSetTextColor(a1, 0xFFFFFF);
    if ( (unsigned int)GreGetTextExtentW(a1, gwszSafeModeStr, gSafeModeStrLen, (struct tagSIZE *)&v16, 1u) )
    {
      GreExtTextOutWInternal(a1, a2->left, a2->top, 0, 0LL, gwszSafeModeStr, gSafeModeStrLen, 0LL, 0LL, 0);
      GreExtTextOutWInternal(a1, a2->right - v16.x, a2->top, 0, 0LL, gwszSafeModeStr, gSafeModeStrLen, 0LL, 0LL, 0);
      GreExtTextOutWInternal(
        a1,
        a2->right - v16.x,
        a2->bottom - *(_DWORD *)(DPIServerInfo + 40),
        0,
        0LL,
        gwszSafeModeStr,
        gSafeModeStrLen,
        0LL,
        0LL,
        0);
      GreExtTextOutWInternal(
        a1,
        a2->left,
        a2->bottom - *(_DWORD *)(DPIServerInfo + 40),
        0,
        0LL,
        gwszSafeModeStr,
        gSafeModeStrLen,
        0LL,
        0LL,
        0);
    }
    GreSetBkMode(a1, v13);
    GreSetTextColor(a1, v14);
    LeaveRenderBlock();
    LeaveRenderCrit();
    UserSessionSwitchLeaveCrit(v15);
    EnterCrit(1LL, 0LL);
    if ( v3 )
      GreSelectFontInternal(a1, v3, 1);
  }
}
