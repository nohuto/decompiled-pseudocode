/*
 * XREFs of TR_FreeSecureTransferSegments @ 0x1C00418F0
 * Callers:
 *     TR_Disable_Internal @ 0x1C0008044 (TR_Disable_Internal.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C0039EC0 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C003A180 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C003D100 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0052470 (SecureChannel_SendRequestSynchronously.c)
 */

char __fastcall TR_FreeSecureTransferSegments(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v7; // edx
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  int v12; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13; // [rsp+48h] [rbp-40h] BYREF
  __int128 v14; // [rsp+50h] [rbp-38h]
  __int64 v15; // [rsp+60h] [rbp-28h]
  int v16; // [rsp+68h] [rbp-20h]
  int v17; // [rsp+6Ch] [rbp-1Ch]
  __int64 v18; // [rsp+70h] [rbp-18h]

  v13 = 0LL;
  v1 = a1[36];
  v17 = 0;
  v12 = 0;
  v14 = 0LL;
  v15 = v1;
  v3 = a1[22];
  v16 = 41;
  v4 = *(_QWORD *)(v3 + 24);
  v5 = a1[5];
  v18 = v4;
  v6 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v5 + 112), &v13, 48LL, &v12, 4);
  if ( v6 >= 0 )
  {
    LOBYTE(v6) = v12;
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[5] + 72LL),
          v7,
          14,
          28,
          (__int64)&WPP_9ff532af533633cb75752ac9b9d63831_Traceguids,
          v12);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v8, v9, v10);
      }
      LOBYTE(v6) = KdRefreshDebuggerNotPresent();
      if ( !(_BYTE)v6 )
        __debugbreak();
    }
  }
  return v6;
}
