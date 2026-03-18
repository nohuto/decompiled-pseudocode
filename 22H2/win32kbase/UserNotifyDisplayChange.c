/*
 * XREFs of UserNotifyDisplayChange @ 0x1C0013D20
 * Callers:
 *     DxgkEngNotifyDisplayChange @ 0x1C0012370 (DxgkEngNotifyDisplayChange.c)
 *     DrvEnableMDEV @ 0x1C001A7D8 (DrvEnableMDEV.c)
 * Callees:
 *     IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x1C0013D88 (IsDwmAsyncNotifyDisplayModeChangeSupported.c)
 *     DwmAsyncNotifyDisplayModeChange @ 0x1C0013DB4 (DwmAsyncNotifyDisplayModeChange.c)
 *     ReferenceDwmApiPort @ 0x1C0047A70 (ReferenceDwmApiPort.c)
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
