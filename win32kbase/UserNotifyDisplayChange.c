/*
 * XREFs of UserNotifyDisplayChange @ 0x1C0016710
 * Callers:
 *     DxgkEngNotifyDisplayChange @ 0x1C000FDC0 (DxgkEngNotifyDisplayChange.c)
 *     DrvEnableMDEV @ 0x1C001D978 (DrvEnableMDEV.c)
 * Callees:
 *     ReferenceDwmApiPort @ 0x1C00167E0 (ReferenceDwmApiPort.c)
 *     IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x1C0016D1C (IsDwmAsyncNotifyDisplayModeChangeSupported.c)
 *     DwmAsyncNotifyDisplayModeChange @ 0x1C0016D48 (DwmAsyncNotifyDisplayModeChange.c)
 */

__int64 UserNotifyDisplayChange()
{
  __int64 v0; // rax
  int CurrentProcessSessionId; // [rsp+50h] [rbp+8h] BYREF

  if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported() >= 0 )
  {
    v0 = ReferenceDwmApiPort();
    DwmAsyncNotifyDisplayModeChange(v0);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  return ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId);
}
