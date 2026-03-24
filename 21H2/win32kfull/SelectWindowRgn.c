/*
 * XREFs of SelectWindowRgn @ 0x1C0111AAC
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068330 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00FF9C0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     NtUserSetWindowRgnEx @ 0x1C02031A0 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0042200 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C00426C8 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x1C004E570 (DirtyVisRgnTrackers.c)
 *     _IsTopLevelWindow @ 0x1C006FC88 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C00704C0 (_GetDesktopWindow.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00BA4D8 (GreUpdateSpriteClipRgn.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C025D904 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 */

void __fastcall SelectWindowRgn(struct tagWND *a1, HRGN a2, int a3)
{
  __int64 v3; // rax
  int v5; // esi
  HRGN MonitorRegionForDpi; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int16 WindowCompositedDpi; // ax
  struct tagMONITOR *v13; // r9

  v3 = *((_QWORD *)a1 + 5);
  v5 = 0;
  MonitorRegionForDpi = a2;
  v8 = *(_QWORD *)(v3 + 168);
  if ( v8 )
  {
    if ( (*(_BYTE *)(v3 + 21) & 8) != 0 )
    {
      SetOrClrWF(0, (__int64)a1, 0x508u, 1);
    }
    else
    {
      if ( a2 == (HRGN)2 )
        return;
      GreDeleteObject(v8);
      v5 = 1;
    }
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL) = 0LL;
  }
  if ( (unsigned __int64)MonitorRegionForDpi > 1 )
  {
    if ( MonitorRegionForDpi == (HRGN)2 )
    {
      v11 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v11 + 31) & 1) == 0
        || (*(_BYTE *)(v11 + 19) & 0x40) == 0
        || !_MonitorFromWindowInternal(a1, 0, 0) )
      {
        return;
      }
      WindowCompositedDpi = GetWindowCompositedDpi(a1);
      MonitorRegionForDpi = GetMonitorRegionForDpi(v13, WindowCompositedDpi);
      SetOrClrWF(1, (__int64)a1, 0x508u, 1);
    }
    else
    {
      if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
        GreOffsetRgn(
          MonitorRegionForDpi,
          *(unsigned int *)(*((_QWORD *)a1 + 5) + 88LL),
          *(unsigned int *)(*((_QWORD *)a1 + 5) + 92LL));
      GreSetRegionOwner(MonitorRegionForDpi, 0LL);
      v5 = 1;
    }
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL) = MonitorRegionForDpi;
  }
  if ( v5 && (unsigned int)IsWindowDesktopComposed(a1) )
  {
    if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
    {
      v10 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v10 + 26) & 8) != 0 )
        GreUpdateSpriteClipRgn(v9, *(struct PDEVOBJ **)a1, *(HRGN *)(v10 + 168), a3);
    }
    DirtyVisRgnTrackers(a1);
  }
}
