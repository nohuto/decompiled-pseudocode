__int64 __fastcall XilDeviceSlot_SendSetDeviceContextRequest(__int64 *a1, __int64 a2, int a3)
{
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // eax
  int v10; // edx
  unsigned int v11; // edi
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  int v16[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v17[8]; // [rsp+50h] [rbp-78h] BYREF

  v6 = *(_QWORD *)(a1[9] + 8);
  v7 = *(_QWORD *)(v6 + 112);
  memset(v17, 0, sizeof(v17));
  v8 = *a1;
  v16[0] = 0;
  v17[3] = v8;
  v17[5] = *(_QWORD *)(a2 + 608);
  LODWORD(v17[4]) = 26;
  LODWORD(v17[6]) = a3;
  v17[7] = XilUsbDevice_GetDeviceContextBufferLA(a2);
  v9 = SecureChannel_SendRequestSynchronously(v7, v17, 64LL, v16, 4);
  v11 = v9;
  if ( v9 >= 0 )
  {
    v11 = v16[0];
    if ( v16[0] < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 72),
          v10,
          10,
          24,
          (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
          v16[0]);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v12, v13, v14);
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 72), v10, 10, 23, (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids, v9);
  }
  return v11;
}
