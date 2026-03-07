void __fastcall SelectWindowRgn(struct tagWND *a1, __int64 a2, int a3)
{
  bool v5; // bp
  HRGN v6; // r9
  HRGN MonitorRegionForDpi; // rdi
  char v8; // si
  Gre::Base *v9; // rcx
  __int64 v10; // rcx
  unsigned __int16 WindowCompositedDpi; // ax
  __int64 v12; // r9
  int v13; // r8d
  int v14; // r9d
  int v15; // edx

  v5 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL) != 0LL;
  if ( tagWND::GetExplicitClipRgn(a1) && v6 == (HRGN)2 )
    return;
  MonitorRegionForDpi = 0LL;
  v8 = 1;
  if ( v6 != (HRGN)1 )
    MonitorRegionForDpi = v6;
  SetOrClrWF(0LL, a1, 1288LL, 1LL);
  tagWND::ClearClipRgnOrMaxClip(a1);
  if ( MonitorRegionForDpi == (HRGN)2 )
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
          MonitorRegionForDpi = (HRGN)CreateMonitorRegionForDpi(v12, WindowCompositedDpi);
          if ( MonitorRegionForDpi )
          {
            SetOrClrWF(1LL, a1, 1288LL, 1LL);
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
                (__int64)&WPP_79e939fa1d4d36fcf42089c5c6e082fd_Traceguids,
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
        GreUpdateSpriteClipRgn(v9, *(HWND *)a1, MonitorRegionForDpi, a3);
    }
    DirtyVisRgnTrackers(a1);
  }
}
