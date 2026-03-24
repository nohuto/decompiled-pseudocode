/*
 * XREFs of XilEndpoint_CreateSecureObject @ 0x1C00372EC
 * Callers:
 *     XilEndpoint_Create @ 0x1C00095C8 (XilEndpoint_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0035E5C (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C004F688 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilEndpoint_CreateSecureObject(_QWORD *a1, int a2, int a3, int a4)
{
  _QWORD *v4; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  int v11; // edx
  unsigned int v12; // ebx
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  __int128 v17; // [rsp+40h] [rbp-9h] BYREF
  _OWORD v18[2]; // [rsp+50h] [rbp+7h] BYREF
  __int128 v19; // [rsp+70h] [rbp+27h]
  __int64 v20; // [rsp+80h] [rbp+37h]

  v4 = (_QWORD *)a1[4];
  v17 = 0LL;
  v6 = *v4;
  v7 = *(_QWORD *)(*v4 + 112LL);
  v19 = 0LL;
  LODWORD(v19) = 33;
  memset(v18, 0, sizeof(v18));
  v20 = 0LL;
  v8 = v4[2];
  if ( *(_BYTE *)(v8 + 657) )
  {
    v9 = *(_QWORD *)(v8 + 608);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    v9 = 0LL;
  }
  *((_QWORD *)&v19 + 1) = v9;
  LODWORD(v20) = *(_DWORD *)(a1[4] + 144LL);
  v10 = SecureChannel_SendRequestSynchronously(v7, v18, 56LL, &v17, 16);
  v12 = v10;
  if ( v10 >= 0 )
  {
    v12 = v17;
    if ( (int)v17 >= 0 )
    {
      *a1 = *((_QWORD *)&v17 + 1);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 72),
          v11,
          13,
          11,
          (__int64)&WPP_539d53059a2e35bc1c6dc9c85d9f465f_Traceguids,
          v17);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v13, v14, v15);
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 72), v11, 13, 10, (__int64)&WPP_539d53059a2e35bc1c6dc9c85d9f465f_Traceguids, v10);
  }
  return v12;
}
