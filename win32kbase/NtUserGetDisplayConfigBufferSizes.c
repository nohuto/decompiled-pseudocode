/*
 * XREFs of NtUserGetDisplayConfigBufferSizes @ 0x1C00217F0
 * Callers:
 *     <none>
 * Callees:
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C0021420 (UserRemoteConnectedSessionUsingXddm.c)
 *     GreIsDisconnectDeviceAttached @ 0x1C00218D0 (GreIsDisconnectDeviceAttached.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1C00221EC (_QdcSdcTranslateStatusDefault.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0022450 (DrvGetDisplayConfigBufferSizes.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 */

__int64 __fastcall NtUserGetDisplayConfigBufferSizes(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  unsigned int v6; // ebx
  _DWORD *v7; // rdx
  unsigned int DisplayConfigBufferSizes; // eax
  int v10; // [rsp+70h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0;
  v10 = 0;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  if ( gbVideoInitialized )
  {
    v7 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    *v7 = *v7;
    if ( ((unsigned __int16)(gProtocolType - 1) > 0xFFFDu || !(unsigned int)UserRemoteConnectedSessionUsingXddm())
      && !(unsigned int)GreIsDisconnectDeviceAttached() )
    {
      DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(v5, &v10);
      v6 = QdcSdcTranslateStatusDefault(DisplayConfigBufferSizes);
    }
    *a2 = v10;
  }
  else
  {
    v6 = -1073741823;
  }
  UserSessionSwitchLeaveCrit();
  return v6;
}
