/*
 * XREFs of SelectWindowRgn @ 0x1C00847C0
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00F2300 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     ?FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z @ 0x1C00FE6AC (-FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z.c)
 *     NtUserSetWindowRgnEx @ 0x1C01FE640 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     ?ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ @ 0x1C0061020 (-ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C007B464 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1C0084B7C (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     GreUpdateSpriteClipRgn @ 0x1C0084B9C (GreUpdateSpriteClipRgn.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C00F9318 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
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
  SetOrClrWF(0, a1, 0x508u, 1);
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
            SetOrClrWF(1, a1, 0x508u, 1);
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800000) == 0
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
                24,
                18,
                (__int64)&WPP_b070418cf9b83e0c1c6b283a126581e8_Traceguids,
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
    if ( IsTopLevelWindow((__int64)a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
      GreUpdateSpriteClipRgn(v9, *(_QWORD *)a1, MonitorRegionForDpi, a3);
    DirtyVisRgnTrackers(a1);
  }
}
