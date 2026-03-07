__int64 __fastcall Win32kPnpNotify(
        struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // ebx
  __int64 v7; // rcx
  __int64 v9; // r14
  PVOID PhysDisp; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _DWORD *v22; // rax
  int v23; // eax
  __int64 v24; // [rsp+60h] [rbp-38h] BYREF
  __int64 v25; // [rsp+68h] [rbp-30h]
  char v26; // [rsp+B0h] [rbp+18h] BYREF

  v5 = 0;
  if ( !*(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 2952) )
    DrvSetWddmDeviceMonitorPowerState((__int64)a1->PhysDisp, 1, 1, (__int64)a2);
  if ( (int)IsxxxSetCsrssThreadDesktopSupported() >= 0 && !grpdeskRitInput )
  {
    *(_BYTE *)(SGDGetUserGdiSessionState(v7) + 20) = 0;
    return 3221225473LL;
  }
  DrvLogDiagDisplayChange(a1, 6LL);
  v9 = *((_QWORD *)gpDispInfo + 2);
  if ( a1->Param )
  {
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      v25 = 0LL;
      v24 = 0LL;
      *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v18) + 24) + 1340LL) = 0;
      DrvUpdateGraphicsDeviceList(1);
      v22 = DispBroker::DispBrokerClient::s_pSessionBroker;
      if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
        v22 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
      if ( *v22 )
      {
        if ( gbGDIOn && !(unsigned int)DrvIsNotUsingGraphicsDevice(v9, v19, v20, v21) )
          v5 = DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_2ffaef142a06e39d44c296ad8819dbf0___();
        goto LABEL_41;
      }
      if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0 )
        goto LABEL_34;
      if ( qword_1C02D6BA0 )
      {
        v5 = qword_1C02D6BA0(grpdeskRitInput, &v24);
        if ( v5 >= 0 )
        {
LABEL_34:
          v5 = xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 6u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2, 0LL);
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 && qword_1C02D6BB0 )
            qword_1C02D6BB0(&v24, 0LL);
        }
      }
      else
      {
        v5 = -1073741637;
      }
    }
LABEL_41:
    v23 = PnpNotifyForRemoteSession(0LL, a2);
    v14 = (unsigned __int16)gProtocolType;
    v17 = 65533LL;
    LOWORD(v14) = gProtocolType - 1;
    if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
      v5 = v23;
    goto LABEL_43;
  }
  PhysDisp = a1->PhysDisp;
  DrvDisableGraphicsDevices(PhysDisp);
  if ( !(unsigned int)DrvIsNotUsingGraphicsDevice(v9, v11, v12, v13) && (unsigned int)UserIsWddmConnectedSession() )
  {
    v25 = 0LL;
    v24 = 0LL;
    if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0 )
    {
LABEL_12:
      v26 = 0;
      v5 = xxxUserSetDisplayConfig(
             0,
             0LL,
             0x88Fu,
             0x406u,
             (__int64)grpdeskRitInput,
             0,
             0LL,
             0LL,
             &v26,
             (__int64)a2,
             0LL);
      if ( v5 < 0 )
      {
        v5 = xxxUserSetDisplayConfig(0, 0LL, 0x80u, 1u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2, 0LL);
      }
      else if ( a1->SurpriseRemoval && v26 )
      {
        DxgkEngNotifyDisplayChange(0);
      }
      if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 && qword_1C02D6BB0 )
        qword_1C02D6BB0(&v24, 0LL);
      goto LABEL_21;
    }
    if ( qword_1C02D6BA0 )
    {
      v5 = qword_1C02D6BA0(grpdeskRitInput, &v24);
      if ( v5 >= 0 )
        goto LABEL_12;
    }
    else
    {
      v5 = -1073741637;
    }
  }
LABEL_21:
  PnpNotifyForRemoteSession(PhysDisp, a2);
  if ( v5 >= 0 )
    DrvCleanupGraphicsDevices(PhysDisp);
  v17 = 65533LL;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
    DrvUpdateGraphicsDeviceList(1);
  if ( a1->LockUserSession )
    PostWinlogonMessage(1027LL, 0);
LABEL_43:
  if ( !gProtocolType && !*(_DWORD *)(SGDGetUserSessionState(v14, v17, v15, v16) + 2952)
    || (unsigned int)UserRemoteConnectedSessionUsingWddm() && gbFreezeScreenUpdates )
  {
    DrvSetWddmDeviceMonitorPowerState(0LL, 4, 1, (__int64)a2);
  }
  return (unsigned int)v5;
}
