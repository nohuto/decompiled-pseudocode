__int64 __fastcall Command_Create(__int64 a1, __int64 a2, __int64 *a3)
{
  int v5; // edx
  int CommandWatchdogTimer; // ebx
  int v7; // edx
  __int64 v8; // rdi
  char IsProxyCommandRing; // al
  __int64 *v10; // r9
  int v12; // [rsp+30h] [rbp-40h] BYREF
  __int128 v13; // [rsp+34h] [rbp-3Ch]
  int v14; // [rsp+44h] [rbp-2Ch]
  int v15; // [rsp+48h] [rbp-28h]
  int v16; // [rsp+4Ch] [rbp-24h]
  __int64 v17; // [rsp+50h] [rbp-20h]
  __int64 v18; // [rsp+58h] [rbp-18h]
  void *v19; // [rsp+60h] [rbp-10h]
  __int64 v20; // [rsp+90h] [rbp+20h] BYREF

  v20 = a1;
  v19 = off_1C00631F8;
  v17 = *(_QWORD *)(a2 + 8);
  v20 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v18 = 0LL;
  v12 = 56;
  v15 = 1;
  v16 = 1;
  CommandWatchdogTimer = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, int *, __int64 *))(WdfFunctions_01023 + 1656))(
                           WdfDriverGlobals,
                           &v12,
                           &v20);
  if ( CommandWatchdogTimer < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 72),
        v5,
        7,
        10,
        (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
        CommandWatchdogTimer);
    }
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
           WdfDriverGlobals,
           v20,
           off_1C00631F8);
    *(_QWORD *)v8 = v20;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v7) = 5;
      WPP_RECORDER_SF_q(*(_QWORD *)(a2 + 72), v7, 7, 11, (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids, v20);
    }
    *(_QWORD *)(v8 + 8) = a2;
    CommandWatchdogTimer = XilCommand_Create(v8);
    if ( CommandWatchdogTimer >= 0 )
    {
      IsProxyCommandRing = Command_IsProxyCommandRing(v8);
      CommandWatchdogTimer = DynamicLock_Create(v20, *(_QWORD *)(a2 + 72), IsProxyCommandRing != 0, v10);
      if ( CommandWatchdogTimer >= 0 )
      {
        CommandWatchdogTimer = Command_CreateCommandWatchdogTimer(v8);
        if ( CommandWatchdogTimer >= 0 )
        {
          *(_DWORD *)(v8 + 36) = 1;
          *a3 = v8;
        }
      }
    }
  }
  return (unsigned int)CommandWatchdogTimer;
}
