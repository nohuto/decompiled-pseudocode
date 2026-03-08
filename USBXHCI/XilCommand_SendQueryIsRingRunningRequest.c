/*
 * XREFs of XilCommand_SendQueryIsRingRunningRequest @ 0x1C0031F68
 * Callers:
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C0030270 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0052470 (SecureChannel_SendRequestSynchronously.c)
 */

char __fastcall XilCommand_SendQueryIsRingRunningRequest(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // edx
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  __int64 v14; // [rsp+40h] [rbp-58h] BYREF
  __int64 v15; // [rsp+48h] [rbp-50h] BYREF
  __int128 v16; // [rsp+50h] [rbp-48h]
  __int64 v17; // [rsp+60h] [rbp-38h]
  int v18; // [rsp+68h] [rbp-30h]
  int v19; // [rsp+6Ch] [rbp-2Ch]

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD *)(v5 + 112);
  v15 = 0LL;
  v19 = 0;
  v14 = 0LL;
  v16 = 0LL;
  v17 = v6;
  v18 = 18;
  v8 = SecureChannel_SendRequestSynchronously(v7, &v15, 40LL, &v14, 8);
  if ( v8 >= 0 )
  {
    if ( (int)v14 >= 0 )
    {
      *a2 = BYTE4(v14);
      LOBYTE(v8) = BYTE5(v14);
      *a3 = BYTE5(v14);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v5 + 72),
          v9,
          7,
          28,
          (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids,
          v14);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v10, v11, v12);
      }
      LOBYTE(v8) = KdRefreshDebuggerNotPresent();
      if ( !(_BYTE)v8 )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    LOBYTE(v8) = WPP_RECORDER_SF_d(
                   *(_QWORD *)(v5 + 72),
                   v9,
                   7,
                   27,
                   (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids,
                   v8);
  }
  return v8;
}
