/*
 * XREFs of NtUserGetDisplayConfigBufferSizes @ 0x1C001E440
 * Callers:
 *     <none>
 * Callees:
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C001E410 (UserRemoteConnectedSessionUsingXddm.c)
 *     GreIsDisconnectDeviceAttached @ 0x1C001E520 (GreIsDisconnectDeviceAttached.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1C001EDBC (_QdcSdcTranslateStatusDefault.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C001F020 (DrvGetDisplayConfigBufferSizes.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C004CDAC (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDisplayConfigBufferSizes(unsigned int a1, _DWORD *a2)
{
  unsigned int v4; // ebx
  _DWORD *v5; // rdx
  unsigned int DisplayConfigBufferSizes; // eax
  int v8; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v8 = 0;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  if ( gbVideoInitialized )
  {
    v5 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v5 = (_DWORD *)MmUserProbeAddress;
    *v5 = *v5;
    if ( ((unsigned __int16)(gProtocolType - 1) > 0xFFFDu || !(unsigned int)UserRemoteConnectedSessionUsingXddm())
      && !(unsigned int)GreIsDisconnectDeviceAttached() )
    {
      DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(a1, &v8);
      v4 = QdcSdcTranslateStatusDefault(DisplayConfigBufferSizes);
    }
    *a2 = v8;
  }
  else
  {
    v4 = -1073741823;
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
