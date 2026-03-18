/*
 * XREFs of xxxMNRecomputeBarIfNeeded @ 0x1C0239120
 * Callers:
 *     xxxMNStartMenu @ 0x1C01FFC8C (xxxMNStartMenu.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C02257F4 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxHiliteMenuItem @ 0x1C0230534 (xxxHiliteMenuItem.c)
 *     xxxGetMenuItemRect @ 0x1C02386F4 (xxxGetMenuItemRect.c)
 *     xxxMenuItemFromPoint @ 0x1C0239418 (xxxMenuItemFromPoint.c)
 * Callees:
 *     GetWindowBordersForDpi @ 0x1C00C6AB0 (GetWindowBordersForDpi.c)
 *     GetCaptionHeight @ 0x1C00ECE00 (GetCaptionHeight.c)
 *     GetWindowDpiLastNotify @ 0x1C00F0740 (GetWindowDpiLastNotify.c)
 *     xxxMenuBarCompute @ 0x1C0239240 (xxxMenuBarCompute.c)
 */

__int64 __fastcall xxxMNRecomputeBarIfNeeded(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 result; // rax
  int *v7; // r8
  int v8; // ecx
  int WindowDpiLastNotify; // eax
  __int64 v10; // rax
  int WindowBordersForDpi; // ebx
  int CaptionHeight; // eax

  v4 = (int)a2;
  result = *(_QWORD *)(*(_QWORD *)*a2 + 40LL);
  if ( (*(_DWORD *)(result + 40) & 0x80u) == 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)*a2 + 80LL) != a1
      || !*(_DWORD *)(*(_QWORD *)*a2 + 64LL)
      || (result = *a2, !*(_DWORD *)(*(_QWORD *)*a2 + 68LL)) )
    {
      v7 = *(int **)(a1 + 40);
      v8 = v7[72] & 0xF;
      if ( v8 == 3 )
      {
        WindowDpiLastNotify = ((unsigned int)v7[72] >> 8) & 0x1FF;
      }
      else if ( (v7[58] & 0x400) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
      }
      else if ( !v8
             && (v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v10 + 8) + 64LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
      }
      WindowBordersForDpi = GetWindowBordersForDpi(v7[7], v7[6], (__int64)v7, a4, WindowDpiLastNotify);
      CaptionHeight = GetCaptionHeight(a1);
      return xxxMenuBarCompute(
               v4,
               a1,
               WindowBordersForDpi + CaptionHeight,
               WindowBordersForDpi,
               *(_DWORD *)(*(_QWORD *)(a1 + 40) + 96LL)
             - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL)
             - 2 * WindowBordersForDpi);
    }
  }
  return result;
}
