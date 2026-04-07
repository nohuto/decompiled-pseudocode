/*
 * XREFs of ?_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z @ 0x1800B1DAC
 * Callers:
 *     ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B3CA0 (-_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B3ED0 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLaunchSwitchBase::_RecordMonitorRectForWindow(CLaunchSwitchBase *this, const struct CWindowData *a2)
{
  CTransitionVisualController::GetMonitorRectFromRectImpl(
    (const struct tagRECT *)((char *)a2 + ((*((_DWORD *)a2 + 154) & 0x1000000) != 0 ? 0x24C : 0) + 48),
    (struct tagRECT *)((char *)this + 152));
}
