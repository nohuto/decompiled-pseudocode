/*
 * XREFs of XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C0031E04
 * Callers:
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x1C0031388 (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0052470 (SecureChannel_SendRequestSynchronously.c)
 */

char __fastcall XilCommand_SendAdvanceDequeuePointerRequest(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r10
  int v5; // eax
  int v6; // edx
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v11; // [rsp+40h] [rbp-48h] BYREF
  __int128 v12; // [rsp+48h] [rbp-40h] BYREF
  __int64 v13; // [rsp+58h] [rbp-30h]
  __int64 v14; // [rsp+60h] [rbp-28h]
  __int128 v15; // [rsp+68h] [rbp-20h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(v2 + 112);
  v11 = 0;
  v15 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = v3;
  DWORD2(v15) = a2;
  LODWORD(v15) = 17;
  v5 = SecureChannel_SendRequestSynchronously(v4, &v12, 48LL, &v11, 4);
  if ( v5 >= 0 )
  {
    LOBYTE(v5) = v11;
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v2 + 72),
          v6,
          7,
          24,
          (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids,
          v11);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v7, v8, v9);
      }
      LOBYTE(v5) = KdRefreshDebuggerNotPresent();
      if ( !(_BYTE)v5 )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 2;
    LOBYTE(v5) = WPP_RECORDER_SF_d(
                   *(_QWORD *)(v2 + 72),
                   v6,
                   7,
                   23,
                   (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids,
                   v5);
  }
  return v5;
}
