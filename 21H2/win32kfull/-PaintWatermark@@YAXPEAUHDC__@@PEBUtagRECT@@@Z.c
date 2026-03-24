/*
 * XREFs of ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0223290
 * Callers:
 *     xxxDesktopPaintCallback @ 0x1C01311D0 (xxxDesktopPaintCallback.c)
 * Callees:
 *     GreSetTextColor @ 0x1C0044618 (GreSetTextColor.c)
 *     GreSelectFont @ 0x1C0045F20 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C0045F3C (GreSetBkMode.c)
 *     GreExtTextOutWInternal @ 0x1C00AAE5C (GreExtTextOutWInternal.c)
 *     GetDPIServerInfo @ 0x1C00E0E18 (GetDPIServerInfo.c)
 *     GreTextInitialized @ 0x1C00E3548 (GreTextInitialized.c)
 *     GreGetTextExtentW @ 0x1C00E36CC (GreGetTextExtentW.c)
 */

void __fastcall PaintWatermark(HDC a1, const struct tagRECT *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rcx
  __int64 DPIServerInfo; // rsi
  __int64 v7; // rcx
  int v8; // ebp
  int v9; // r15d
  __int64 v10; // rcx
  struct _POINTL v11; // [rsp+90h] [rbp+18h] BYREF

  v11 = 0LL;
  v3 = 0LL;
  if ( GreTextInitialized() && *(_DWORD *)(gpsi + 2164LL) )
  {
    DPIServerInfo = GetDPIServerInfo(v5);
    if ( *(_QWORD *)(DPIServerInfo + 8) )
      v3 = GreSelectFont(a1);
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    EnterRenderBlock();
    UserSessionSwitchLeaveCrit(v7);
    EnterSharedCrit(0LL, 1LL);
    EnterSharedRenderCrit();
    v8 = GreSetBkMode(a1, 1);
    v9 = GreSetTextColor(a1, 0xFFFFFF);
    if ( (unsigned int)GreGetTextExtentW(a1, gwszSafeModeStr, gSafeModeStrLen, (struct tagSIZE *)&v11, 1) )
    {
      GreExtTextOutWInternal(a1, a2->left, a2->top, 0, 0LL, gwszSafeModeStr, gSafeModeStrLen, 0LL, 0LL, 0);
      GreExtTextOutWInternal(a1, a2->right - v11.x, a2->top, 0, 0LL, gwszSafeModeStr, gSafeModeStrLen, 0LL, 0LL, 0);
      GreExtTextOutWInternal(
        a1,
        a2->right - v11.x,
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
    GreSetBkMode(a1, v8);
    GreSetTextColor(a1, v9);
    LeaveRenderBlock();
    LeaveRenderCrit();
    UserSessionSwitchLeaveCrit(v10);
    EnterCrit(0LL, 1LL);
    if ( v3 )
      GreSelectFont(a1);
  }
}
