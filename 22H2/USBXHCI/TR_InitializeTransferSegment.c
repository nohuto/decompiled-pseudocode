/*
 * XREFs of TR_InitializeTransferSegment @ 0x1C003F418
 * Callers:
 *     TR_InitializeTransferRing @ 0x1C0005758 (TR_InitializeTransferRing.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0035E5C (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C004F688 (SecureChannel_SendRequestSynchronously.c)
 */

char __fastcall TR_InitializeTransferSegment(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // eax
  int v6; // edx
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v11; // [rsp+40h] [rbp-48h] BYREF
  __int64 v12; // [rsp+48h] [rbp-40h] BYREF
  __int128 v13; // [rsp+50h] [rbp-38h]
  __int64 v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]
  int v16; // [rsp+6Ch] [rbp-1Ch]
  __int64 v17; // [rsp+70h] [rbp-18h]

  v12 = 0LL;
  v2 = *(_QWORD *)(a1 + 288);
  v16 = 0;
  v11 = 0;
  v13 = 0LL;
  v14 = v2;
  v4 = *(_QWORD *)(a2 + 24);
  v15 = 42;
  v17 = v4;
  v5 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), &v12, 48LL, &v11, 4);
  if ( v5 >= 0 )
  {
    LOBYTE(v5) = v11;
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
          v6,
          14,
          29,
          (__int64)&WPP_cd4ef2b1b5c53df0a5e2b7b6906ad1d0_Traceguids,
          v11);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v7, v8, v9);
      }
      LOBYTE(v5) = KdRefreshDebuggerNotPresent();
      if ( !(_BYTE)v5 )
        __debugbreak();
    }
  }
  return v5;
}
