__int64 AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx

  result = AcquireCriticalSectionAndCheckState();
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)UserIsWddmConnectedSession()
      && !(unsigned int)DrvUpdateGraphicsDeviceList(0)
      && (unsigned int)SafeDisableMDEV(1LL) )
    {
      DrvUpdateGraphicsDeviceList(1);
      SafeEnableMDEV(1LL);
      if ( qword_1C02D6BC0 )
        qword_1C02D6BC0();
      if ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
      {
        v5 = -1071774232;
LABEL_12:
        UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
        return v5;
      }
    }
    result = UserRemoteConnectedSessionUsingXddm();
    if ( (_DWORD)result )
    {
      v5 = -1071774240;
      goto LABEL_12;
    }
  }
  return result;
}
