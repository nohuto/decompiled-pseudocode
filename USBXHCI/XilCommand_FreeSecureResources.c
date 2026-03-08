/*
 * XREFs of XilCommand_FreeSecureResources @ 0x1C0031700
 * Callers:
 *     XilCommand_FreeResources @ 0x1C00316D4 (XilCommand_FreeResources.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0052470 (SecureChannel_SendRequestSynchronously.c)
 */

char __fastcall XilCommand_FreeSecureResources(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // r10
  int v4; // eax
  int v5; // edx
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  int v10; // [rsp+40h] [rbp-48h] BYREF
  __int64 v11; // [rsp+48h] [rbp-40h] BYREF
  __int128 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+60h] [rbp-28h]
  int v14; // [rsp+68h] [rbp-20h]
  int v15; // [rsp+6Ch] [rbp-1Ch]

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(v1 + 112);
  v11 = 0LL;
  v15 = 0;
  v10 = 0;
  v12 = 0LL;
  v13 = v2;
  v14 = 14;
  v4 = SecureChannel_SendRequestSynchronously(v3, &v11, 40LL, &v10, 4);
  if ( v4 >= 0 )
  {
    LOBYTE(v4) = v10;
    if ( v10 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v1 + 72),
          v5,
          7,
          18,
          (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids,
          v10);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8);
      }
      LOBYTE(v4) = KdRefreshDebuggerNotPresent();
      if ( !(_BYTE)v4 )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    LOBYTE(v4) = WPP_RECORDER_SF_d(
                   *(_QWORD *)(v1 + 72),
                   v5,
                   7,
                   17,
                   (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids,
                   v4);
  }
  return v4;
}
