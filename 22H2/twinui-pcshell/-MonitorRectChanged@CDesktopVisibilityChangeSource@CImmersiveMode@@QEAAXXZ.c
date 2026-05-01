/*
 * XREFs of ?MonitorRectChanged@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXXZ @ 0x1801D04D0
 * Callers:
 *     ??0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_MODE@@@Z @ 0x1801CF450 (--0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_M.c)
 *     ?DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801D0180 (-DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_C.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveMode::CDesktopVisibilityChangeSource::MonitorRectChanged(HWND *this)
{
  int X[4]; // [rsp+40h] [rbp-28h] BYREF

  if ( (*(int (__fastcall **)(HWND, int *))(*(_QWORD *)*this + 72LL))(*this, X) >= 0 )
    SetWindowPos(this[2], 0LL, X[0], X[1], 0, 0, 0x14u);
}
