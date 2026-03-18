/*
 * XREFs of ?OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z @ 0x1C00C4D44
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C006696C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1C00C4AC0 (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x1C00EEA78 (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 */

void __fastcall WindowMargins::OnBecomingMinMaximized(WindowMargins *this, struct tagWND *a2)
{
  struct tagWND *v3; // rcx
  struct WindowMargins::CWindowMarginProp *v4; // rax
  char v5; // dl
  char v6; // r8
  const char *v7; // rax

  if ( (unsigned int)IsTopLevelWindow(this) )
  {
    v4 = WindowMargins::CWindowMarginProp::GetOrCreate(v3);
    if ( v4 )
    {
      if ( !*((_BYTE *)v4 + 24) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
          || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          v5 = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (v6 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          v6 = 0;
        }
        if ( v5 || v6 )
        {
          v7 = "Maximized";
          if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 1) == 0 )
            v7 = "Minimized";
          WPP_RECORDER_AND_TRACE_SF_qs(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v5,
            v6,
            (__int64)gFullLog,
            5u,
            0x15u,
            0x19u,
            (__int64)&WPP_96908661ae193f2a313f40ac3be36134_Traceguids,
            *(_QWORD *)this,
            v7);
        }
        WindowMargins::_anonymous_namespace_::GetWindowMargins((__int64)this, 0);
      }
    }
  }
}
