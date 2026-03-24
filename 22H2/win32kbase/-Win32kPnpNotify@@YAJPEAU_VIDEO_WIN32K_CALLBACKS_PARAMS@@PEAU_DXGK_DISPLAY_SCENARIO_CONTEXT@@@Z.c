/*
 * XREFs of ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01198F8
 * Callers:
 *     VideoPortCalloutThread @ 0x1C011B084 (VideoPortCalloutThread.c)
 * Callees:
 *     DrvLogDiagDisplayChange @ 0x1C0018D80 (DrvLogDiagDisplayChange.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C001DC20 (UserRemoteConnectedSessionUsingWddm.c)
 *     UserIsWddmConnectedSession @ 0x1C001F320 (UserIsWddmConnectedSession.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C001F350 (DrvUpdateGraphicsDeviceList.c)
 *     PostWinlogonMessage @ 0x1C00763B0 (PostWinlogonMessage.c)
 *     xxxUserSetDisplayConfig @ 0x1C00770F0 (xxxUserSetDisplayConfig.c)
 *     DrvIsNotUsingGraphicsDevice @ 0x1C00B65C0 (DrvIsNotUsingGraphicsDevice.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00C3960 (DrvSetWddmDeviceMonitorPowerState.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_2ffaef142a06e39d44c296ad8819dbf0___ @ 0x1C0115710 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_3__lambda_2ffaef142a06e39d44c296ad8819dbf0___.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01186D0 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1C0146904 (DrvCleanupGraphicsDevices.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C014AC00 (DxgkEngNotifyDisplayChange.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported @ 0x1C01FC538 (IsxxxRestoreCsrssThreadDesktopSupported.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1C01FC564 (IsxxxSetCsrssThreadDesktopSupported.c)
 */

__int64 __fastcall Win32kPnpNotify(
        struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v4; // ebx
  __int64 v6; // r14
  PVOID PhysDisp; // rsi
  wchar_t *i; // rax
  _DWORD *v9; // rax
  int v10; // eax
  __int64 v11; // [rsp+50h] [rbp-38h] BYREF
  __int64 v12; // [rsp+58h] [rbp-30h]
  char v13; // [rsp+A0h] [rbp+18h] BYREF

  v4 = 0;
  if ( !gPowerTransitionsState )
    DrvSetWddmDeviceMonitorPowerState((__int64)a1->PhysDisp, 1, 1, (__int64)a2);
  if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0 || grpdeskRitInput )
  {
    DrvLogDiagDisplayChange((__int64)a1, 6);
    v6 = *(_QWORD *)(gpDispInfo + 16);
    if ( a1->Param )
    {
      if ( (unsigned int)UserIsWddmConnectedSession() )
      {
        v12 = 0LL;
        v11 = 0LL;
        gcLocalNextGlobalDeviceNumber = 0;
        DrvUpdateGraphicsDeviceList(1);
        v9 = DispBroker::DispBrokerClient::s_pSessionBroker;
        if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
          v9 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
        if ( *v9 )
        {
          if ( gbGDIOn && !(unsigned int)DrvIsNotUsingGraphicsDevice(v6) )
            v4 = DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_2ffaef142a06e39d44c296ad8819dbf0___();
        }
        else if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
               || (!qword_1C0256618 ? (v4 = -1073741637) : (v4 = qword_1C0256618(grpdeskRitInput, &v11)), v4 >= 0) )
        {
          v4 = xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 6u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2);
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 )
          {
            if ( qword_1C0256628 )
              qword_1C0256628(&v11, 0LL);
          }
        }
      }
      v10 = PnpNotifyForRemoteSession(0LL, a2);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
        v4 = v10;
    }
    else
    {
      PhysDisp = a1->PhysDisp;
      for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
      {
        if ( *((PVOID *)i + 18) == PhysDisp )
          *((_DWORD *)i + 41) |= 1u;
      }
      if ( !(unsigned int)DrvIsNotUsingGraphicsDevice(v6) && (unsigned int)UserIsWddmConnectedSession() )
      {
        v12 = 0LL;
        v11 = 0LL;
        if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
          || (!qword_1C0256618 ? (v4 = -1073741637) : (v4 = qword_1C0256618(grpdeskRitInput, &v11)), v4 >= 0) )
        {
          v13 = 0;
          v4 = xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 0x406u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, &v13, (__int64)a2);
          if ( v4 < 0 )
          {
            v4 = xxxUserSetDisplayConfig(0, 0LL, 0x80u, 1u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2);
          }
          else if ( a1->SurpriseRemoval && v13 )
          {
            DxgkEngNotifyDisplayChange(0LL);
          }
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 && qword_1C0256628 )
            qword_1C0256628(&v11, 0LL);
        }
      }
      PnpNotifyForRemoteSession(PhysDisp, a2);
      if ( v4 >= 0 )
        DrvCleanupGraphicsDevices(PhysDisp);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
        DrvUpdateGraphicsDeviceList(1);
      if ( a1->LockUserSession )
        PostWinlogonMessage(1027LL, 0);
    }
    if ( !gProtocolType && !gPowerTransitionsState
      || (unsigned int)UserRemoteConnectedSessionUsingWddm() && gbFreezeScreenUpdates )
    {
      DrvSetWddmDeviceMonitorPowerState(0LL, 4, 1, (__int64)a2);
    }
    return (unsigned int)v4;
  }
  else
  {
    gbInVideoPnpCallout = 0;
    return 3221225473LL;
  }
}
