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
