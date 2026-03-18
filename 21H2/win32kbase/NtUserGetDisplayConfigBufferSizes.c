/*
 * XREFs of NtUserGetDisplayConfigBufferSizes @ 0x1C006FF40
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C006F4B0 (UserRemoteConnectedSessionUsingXddm.c)
 *     GreIsDisconnectDeviceAttached @ 0x1C0070020 (GreIsDisconnectDeviceAttached.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1C00705D8 (_QdcSdcTranslateStatusDefault.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0070630 (DrvGetDisplayConfigBufferSizes.c)
 */

__int64 __fastcall NtUserGetDisplayConfigBufferSizes(unsigned int a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rdx
  unsigned int DisplayConfigBufferSizes; // eax
  unsigned int v12; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v12 = 0;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  if ( gbVideoInitialized )
  {
    v9 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v9 = (_DWORD *)MmUserProbeAddress;
    *v9 = *v9;
    if ( ((unsigned __int16)(gProtocolType - 1) > 0xFFFDu || !(unsigned int)UserRemoteConnectedSessionUsingXddm())
      && !(unsigned int)GreIsDisconnectDeviceAttached() )
    {
      DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(a1, &v12);
      v4 = QdcSdcTranslateStatusDefault(DisplayConfigBufferSizes);
    }
    v6 = v12;
    *a2 = v12;
  }
  else
  {
    v4 = -1073741823;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
