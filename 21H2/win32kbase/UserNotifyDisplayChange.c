/*
 * XREFs of UserNotifyDisplayChange @ 0x1C0078BB0
 * Callers:
 *     DrvEnableMDEV @ 0x1C00783A4 (DrvEnableMDEV.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C007F550 (DxgkEngNotifyDisplayChange.c)
 * Callees:
 *     DwmAsyncNotifyDisplayModeChange @ 0x1C0078C18 (DwmAsyncNotifyDisplayModeChange.c)
 *     ReferenceDwmApiPort @ 0x1C0078C50 (ReferenceDwmApiPort.c)
 *     IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x1C0078CB4 (IsDwmAsyncNotifyDisplayModeChangeSupported.c)
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
