/*
 * XREFs of XilCommand_CreateSecureObject @ 0x1C0031548
 * Callers:
 *     XilCommand_Create @ 0x1C001A6B4 (XilCommand_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0052470 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilCommand_CreateSecureObject(__int64 a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // rcx
  int v4; // eax
  int v5; // edx
  unsigned int v6; // edi
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  __int64 v11; // [rsp+48h] [rbp+7h] BYREF
  __int64 v12; // [rsp+50h] [rbp+Fh]
  __int64 v13; // [rsp+58h] [rbp+17h] BYREF
  __int128 v14; // [rsp+60h] [rbp+1Fh]
  __int64 v15; // [rsp+70h] [rbp+2Fh]
  int v16; // [rsp+78h] [rbp+37h]
  int v17; // [rsp+7Ch] [rbp+3Bh]
  __int64 v18; // [rsp+80h] [rbp+3Fh]

  v11 = 0LL;
  LODWORD(v12) = 0;
  v2 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 8LL);
  v3 = v2[14];
  v13 = 0LL;
  v17 = 0;
  v15 = 0LL;
  v14 = 0LL;
  v16 = 12;
  v18 = v2[77];
  v4 = SecureChannel_SendRequestSynchronously(v3, &v13, 48LL, &v11, 16);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v6 = v11;
    if ( (int)v11 >= 0 )
    {
      *(_QWORD *)(a1 + 32) = v12;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(v2[9], v5, 7, 11, (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids, v11);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v7, v8, v9);
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_d(v2[9], v5, 7, 10, (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids, v4);
  }
  return v6;
}
