/*
 * XREFs of IdleTimerProc @ 0x1C0041A08
 * Callers:
 *     xxxHungAppDemon @ 0x1C0041780 (xxxHungAppDemon.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C003F958 (_PostTransformableMessage.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
char IdleTimerProc()
{
  int IsDisplayRequired; // eax
  signed int v1; // edi
  char v2; // bl
  signed int v3; // ebx
  struct tagWND *v4; // rcx
  __int64 GlobalTickCount; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rbx
  int v9; // [rsp+30h] [rbp-50h] BYREF
  __int128 v10; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v11[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v12[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v13; // [rsp+68h] [rbp-18h] BYREF

  v10 = 0LL;
  v9 = 0;
  RIMWatchDog();
  LOBYTE(IsDisplayRequired) = gPowerState;
  if ( (gPowerState & 1) != 0 )
    return IsDisplayRequired;
  LOBYTE(IsDisplayRequired) = gafAsyncKeyState[0];
  if ( (gafAsyncKeyState[0] & 4) != 0 )
    return IsDisplayRequired;
  if ( (gafAsyncKeyState[0] & 0x10) != 0 )
    return IsDisplayRequired;
  LOBYTE(IsDisplayRequired) = gafAsyncKeyState[1];
  if ( (IsDisplayRequired & 1) != 0 || (IsDisplayRequired & 4) != 0 || (IsDisplayRequired & 0x10) != 0 )
    return IsDisplayRequired;
  EtwTraceIdleStatus();
  if ( gbLockScreenAutoLockActive )
    v1 = giPowerOffTimeOutMs - 5000;
  else
    v1 = 0;
  if ( v1 <= 0
    || !CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, v1)
    || (GlobalTickCount = CInputGlobals::GetGlobalTickCount(gpInputGlobals, 1LL),
        GlobalTickCount == CInputGlobals::GetLastInputTime(gpInputGlobals))
    || (unsigned int)PowerIsDisplayRequired() && !gbBlockSendInputResets
    || (int)PostWinlogonMessage(1024LL, 3LL) < 0 )
  {
    v1 = dword_1C033AF00;
  }
  else
  {
    EtwTraceIdleActionExpiration(6LL, (unsigned int)v1);
    CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 1LL);
    dword_1C033AF00 = v1;
  }
  if ( v1 <= 0
    || !CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, v1)
    || CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, dword_1C033AF00 + 10000) )
  {
    v2 = 0;
    dword_1C033AF00 = 0;
  }
  else
  {
    v2 = 1;
  }
  if ( giPowerOffTimeOutMs > 0
    && CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, giPowerOffTimeOutMs)
    && !v2
    && (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 3LL) )
  {
    EtwTraceIdleActionExpiration(2LL, giPowerOffTimeOutMs);
  }
  if ( (gPowerTransitionsState[0] || gPowerTransitionsState[5] || gPowerTransitionsState[6]) && !v2 )
  {
    if ( (unsigned int)PowerIsDisplayIdleExpired(0LL, &v9) )
    {
      if ( !gpqForeground || (v4 = *(struct tagWND **)(gpqForeground + 120LL)) == 0LL )
      {
        v6 = v11;
        v11[1] = v9;
        v11[0] = 5LL;
LABEL_66:
        QueuePowerRequest(v6, 0LL);
        goto LABEL_19;
      }
    }
    else
    {
      if ( gPowerTransitionsState[5] || !(unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) )
        goto LABEL_19;
      if ( !gpqForeground || (v4 = *(struct tagWND **)(gpqForeground + 120LL)) == 0LL )
      {
        v12[0] = 5LL;
        v6 = v12;
        v12[1] = 17LL;
        goto LABEL_66;
      }
    }
    PostTransformableMessage(v4, 0x112u, 0xF170uLL, 2LL, 0);
  }
LABEL_19:
  if ( giPowerSessionActivityTimeOutMs > 0
    && CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, giPowerSessionActivityTimeOutMs)
    && !gPowerAdaptiveState )
  {
    gPowerAdaptiveState = 1;
    if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 4LL) )
      EtwTraceIdleActionExpiration(5LL, giPowerSessionActivityTimeOutMs);
    LODWORD(v10) = 9;
    QueuePowerRequest(&v10, 0LL);
  }
  if ( giScreenSaveTimeOutMs > 0 && CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, giScreenSaveTimeOutMs) )
  {
    if ( gbLockConsoleActive )
    {
      v7 = CInputGlobals::GetGlobalTickCount(gpInputGlobals, 1LL);
      if ( v7 != CInputGlobals::GetLastInputTime(gpInputGlobals) )
      {
        EtwTraceIdleActionExpiration(3LL, giScreenSaveTimeOutMs);
        if ( !(unsigned int)PowerIsDisplayRequired() || gbBlockSendInputResets )
          PostWinlogonMessage(1027LL, 0LL);
      }
    }
    else
    {
      LODWORD(v10) = 6;
      QueuePowerRequest(&v10, 0LL);
    }
  }
  LOBYTE(IsDisplayRequired) = giDimTimeOutMs;
  v3 = 0;
  if ( giDimTimeOutMs > 0 )
  {
    LOBYTE(IsDisplayRequired) = gbManualDimTimeOut;
    if ( gbManualDimTimeOut )
    {
      v3 = giDimTimeOutMs;
    }
    else
    {
      LOBYTE(IsDisplayRequired) = giPowerOffTimeOutMs;
      if ( giPowerOffTimeOutMs - 15000 >= 45000 )
        v3 = giPowerOffTimeOutMs - 15000;
    }
  }
  if ( v3 > 0 )
  {
    LOBYTE(IsDisplayRequired) = giPowerOffTimeOutMs;
    if ( giPowerOffTimeOutMs <= 0 || v3 < giPowerOffTimeOutMs )
    {
      LOBYTE(IsDisplayRequired) = CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, v3);
      if ( (_BYTE)IsDisplayRequired )
      {
        if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 5LL) )
          EtwTraceIdleActionExpiration(4LL, (unsigned int)v3);
        IsDisplayRequired = PowerIsDisplayRequired();
        if ( !IsDisplayRequired )
        {
          LOBYTE(IsDisplayRequired) = gPowerDisplayState;
          if ( *((_DWORD *)&gPowerDisplayState + 16) == 1 )
          {
            IsDisplayRequired = PowerIsDisplayBurstActive(0LL);
            if ( !IsDisplayRequired )
            {
              v13 = 0LL;
              LODWORD(v13) = 7;
              LOBYTE(IsDisplayRequired) = QueuePowerRequest(&v13, 0LL);
            }
          }
        }
      }
    }
  }
  return IsDisplayRequired;
}
