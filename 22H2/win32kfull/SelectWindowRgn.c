/*
 * XREFs of SelectWindowRgn @ 0x1C0077C08
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C004A500 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F58E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     NtUserSetWindowRgnEx @ 0x1C01DD2E0 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1C0077D38 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     ?ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ @ 0x1C0077D58 (-ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ.c)
 *     GreUpdateSpriteClipRgn @ 0x1C0077DA8 (GreUpdateSpriteClipRgn.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00D003C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C00EF520 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 */

void __fastcall SelectWindowRgn(struct tagWND *a1, __int64 a2, unsigned int a3)
{
  bool v5; // bp
  __int64 v6; // r9
  __int64 MonitorRegionForDpi; // rdi
  char v8; // si
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int16 WindowCompositedDpi; // ax
  __int64 v12; // r9
  int v13; // r8d
  int v14; // r9d
  int v15; // edx

  v5 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL) != 0LL;
  if ( tagWND::GetExplicitClipRgn(a1) && v6 == 2 )
    return;
  MonitorRegionForDpi = 0LL;
  v8 = 1;
  if ( v6 != 1 )
    MonitorRegionForDpi = v6;
  SetOrClrWF(0LL, a1, 1288LL, 1LL);
  tagWND::ClearClipRgnOrMaxClip(a1);
  if ( MonitorRegionForDpi == 2 )
  {
    MonitorRegionForDpi = 0LL;
    if ( *(_DWORD *)*gpDispInfo > 1u )
    {
      v10 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v10 + 31) & 1) != 0 && (*(_BYTE *)(v10 + 19) & 0x40) != 0 )
      {
        if ( _MonitorFromWindowInternal(a1, 0, 0) )
        {
          WindowCompositedDpi = GetWindowCompositedDpi(a1);
          MonitorRegionForDpi = CreateMonitorRegionForDpi(v12, WindowCompositedDpi);
          if ( MonitorRegionForDpi )
          {
            SetOrClrWF(1LL, a1, 1288LL, 1LL);
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
            {
              v8 = 0;
            }
            if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v15 = 18;
              LOBYTE(v15) = v8;
              LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_q(
                WPP_GLOBAL_Control->AttachedDevice,
                v15,
                v13,
                v14,
                4,
                8,
                18,
                (__int64)&WPP_73d000ae97953ecf03a093158984409f_Traceguids,
                (char)a1);
            }
            goto LABEL_8;
          }
        }
      }
    }
LABEL_10:
    if ( !v5 )
      return;
    goto LABEL_11;
  }
  if ( !MonitorRegionForDpi )
    goto LABEL_10;
  GreOffsetRgn(
    MonitorRegionForDpi,
    *(unsigned int *)(*((_QWORD *)a1 + 5) + 88LL),
    *(unsigned int *)(*((_QWORD *)a1 + 5) + 92LL));
LABEL_8:
  GreSetRegionOwner(MonitorRegionForDpi, 0LL);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL) = MonitorRegionForDpi;
LABEL_11:
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    if ( (unsigned int)IsTopLevelWindow(a1) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
        GreUpdateSpriteClipRgn(v9, *(_QWORD *)a1, MonitorRegionForDpi, a3);
    }
    DirtyVisRgnTrackers(a1);
  }
}
