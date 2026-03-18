/*
 * XREFs of ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1C0236640
 * Callers:
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C00CA638 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1C0237BB4 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C024ADB8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 * Callees:
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B2A40 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1C01DFA08 (LogicalToPhysicalInPlaceRect.c)
 *     ?GetWindowTrackState@ShellWindowManagement@@YA?AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z @ 0x1C0236424 (-GetWindowTrackState@ShellWindowManagement@@YA-AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z.c)
 *     ?WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x1C0236EBC (-WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z.c)
 */

void __fastcall ShellWindowPos::NotifyPosAndStateApplied(const struct tagWND *a1, int a2, _OWORD *a3, int a4)
{
  const struct tagSHELL_REQUESTED_POS_APPLIED *v6; // r8
  _DWORD v7[4]; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v8[56]; // [rsp+40h] [rbp-9h] BYREF
  int v9; // [rsp+78h] [rbp+2Fh]

  v9 = 0;
  memset(v8, 0, sizeof(v8));
  *(_DWORD *)v8 = a2;
  if ( (unsigned int)(a2 - 1) > 1 )
    *(_OWORD *)&v8[8] = *a3;
  *(_DWORD *)&v8[4] = ShellWindowManagement::GetWindowTrackState(a1, 1);
  if ( *(_DWORD *)&v8[4] != 2 )
  {
    *(_OWORD *)&v8[24] = *(_OWORD *)WindowMargins::ReduceRect(v7, a1, (_DWORD *)(*((_QWORD *)a1 + 5) + 88LL));
    LogicalToPhysicalInPlaceRect((__int64)a1, (__int64)&v8[24]);
    *(_OWORD *)&v8[40] = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
    LogicalToPhysicalInPlaceRect((__int64)a1, (__int64)&v8[40]);
  }
  v9 = a4;
  NotifyShell::WindowPosAndStateApplied(a1, (const struct tagWND *)v8, v6);
}
