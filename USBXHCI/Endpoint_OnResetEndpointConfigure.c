void __fastcall Endpoint_OnResetEndpointConfigure(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 DeviceContextBufferVA; // rax
  int v8; // r8d
  __int64 v9; // rbx
  int v10; // edx
  __int64 v11; // rax
  int v12; // r8d
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rsi
  __int64 DequeuePointer; // rax
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1[35];
  v3 = *(_QWORD *)(*a1 + 144LL);
  v4 = *(_QWORD *)(*a1 + 88LL);
  v17 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v2,
         off_1C0063090);
  v6 = a1[2];
  if ( (*(_DWORD *)(v4 + 104) & 4) != 0 )
  {
    if ( *(_BYTE *)(v6 + 658) )
    {
      DeviceContextBufferVA = XilUsbDevice_GetDeviceContextBufferVA(v6);
      v9 = DeviceContextBufferVA + (((unsigned int)(v8 - 1) + 1LL) << 6);
    }
    else
    {
      v9 = 0LL;
    }
    v10 = 2112;
  }
  else
  {
    if ( *(_BYTE *)(v6 + 658) )
    {
      v11 = XilUsbDevice_GetDeviceContextBufferVA(v6);
      v9 = v11 + 32 * ((unsigned int)(v12 - 1) + 1LL);
    }
    else
    {
      v9 = 0LL;
    }
    v10 = 1056;
  }
  v13 = XilEndpoint_AcquireBuffer(a1, v10, (int)a1, 846491717);
  *(_QWORD *)(v5 + 8) = v13;
  if ( v13 )
  {
    if ( *((_BYTE *)a1 + 37) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_dd(
          a1[10],
          v14,
          13,
          49,
          (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
          *(_BYTE *)(a1[2] + 135LL),
          *((_DWORD *)a1 + 36));
      }
      v15 = v5 + 16;
      Endpoint_SetUpConfigureEndpointCommand(
        (int)a1,
        1,
        (int)Endpoint_OnResetEndpointConfigureCompletion_EpDropped,
        v5,
        *(_QWORD *)(v5 + 8),
        v9,
        0LL,
        (void *)(v5 + 16));
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_dd(
          a1[10],
          v14,
          13,
          50,
          (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
          *(_BYTE *)(a1[2] + 135LL),
          *((_DWORD *)a1 + 36));
      }
      v15 = v5 + 16;
      Endpoint_SetUpConfigureEndpointCommand(
        (int)a1,
        2,
        (int)Endpoint_OnResetEndpointConfigureCompletion,
        v5,
        *(_QWORD *)(v5 + 8),
        v9,
        (__int64)&v17,
        (void *)(v5 + 16));
      Endpoint_InitializeTransferRing(a1, 0);
      DequeuePointer = Endpoint_GetDequeuePointer((__int64)a1, 0);
      *(_QWORD *)(v17 + 8) = DequeuePointer;
    }
    Command_SendCommand(v3, v15);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_dd(
        a1[10],
        v14,
        13,
        48,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(a1[2] + 135LL),
        *((_DWORD *)a1 + 36));
    }
    *((_DWORD *)a1 + 72) = -1073741670;
    ESM_AddEvent(a1 + 37, 102);
  }
}
