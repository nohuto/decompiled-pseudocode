/*
 * XREFs of NtUserGetDisplayConfigBufferSizes @ 0x1C001D4B0
 * Callers:
 *     <none>
 * Callees:
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C001D190 (UserRemoteConnectedSessionUsingXddm.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1C001DD24 (_QdcSdcTranslateStatusDefault.c)
 *     GreIsDisconnectDeviceAttached @ 0x1C001EE40 (GreIsDisconnectDeviceAttached.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C001EF30 (DrvGetDisplayConfigBufferSizes.c)
 *     EnterSharedCrit @ 0x1C0035E30 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDisplayConfigBufferSizes(unsigned int a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  unsigned int DisplayConfigBufferSizes; // eax
  unsigned int v9; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v9 = 0;
  EnterSharedCrit(0LL, 1LL);
  if ( gbVideoInitialized )
  {
    v6 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v6 = (_DWORD *)MmUserProbeAddress;
    *v6 = *v6;
    if ( ((unsigned __int16)(gProtocolType - 1) > 0xFFFDu || !(unsigned int)UserRemoteConnectedSessionUsingXddm())
      && !(unsigned int)GreIsDisconnectDeviceAttached() )
    {
      DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(a1, &v9);
      v4 = QdcSdcTranslateStatusDefault(DisplayConfigBufferSizes);
    }
    v5 = v9;
    *a2 = v9;
  }
  else
  {
    v4 = -1073741823;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
