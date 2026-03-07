char __fastcall UsbDevice_SetDeviceDisabled(__int64 a1, __int64 a2)
{
  int v3; // edx
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rbp
  _QWORD *XilCoreDeviceSlotData; // rax
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rsi
  char result; // al
  int v14; // edi
  unsigned int v15; // edi
  int v16; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = *(unsigned __int8 *)(a1 + 135);
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v3,
      12,
      58,
      (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
      *(_BYTE *)(a1 + 135),
      *(_QWORD *)a1);
  }
  LOBYTE(a2) = 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL);
  Endpoint_Disable(*(_QWORD *)(a1 + 176), a2);
  v6 = (__int64 *)(a1 + 184);
  v7 = 30LL;
  do
  {
    if ( *v6 )
    {
      LOBYTE(v5) = 1;
      Endpoint_Disable(*v6, v5);
      *v6 = 0LL;
    }
    ++v6;
    --v7;
  }
  while ( v7 );
  v8 = *(unsigned __int8 *)(a1 + 135);
  if ( *(_BYTE *)(v4 + 80) )
  {
    XilDeviceSlot_SendClearDeviceContextRequest(v4 + 16, a1);
    *(_QWORD *)(XilDeviceSlot_GetUsbDeviceHandleArray(*(_QWORD *)(v4 + 88)) + 8 * v8) = 0LL;
  }
  else
  {
    XilCoreDeviceSlotData = (_QWORD *)DeviceSlot_GetXilCoreDeviceSlotData(*(_QWORD *)(v4 + 88));
    v11 = *(_QWORD *)(XilCoreDeviceSlotData[3] + 16LL);
    *(_QWORD *)(XilCoreDeviceSlotData[7] + 8 * v8) = 0LL;
    *(_QWORD *)(v11 + 8 * v8) = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(XilCoreDeviceSlotData[1] + 72LL),
        v10,
        10,
        10,
        (__int64)&WPP_cb7a5c278baa3da630509d7564b04261_Traceguids,
        a1,
        v8);
    }
  }
  v12 = *(_QWORD *)(a1 + 424);
  result = -*(_BYTE *)(a1 + 432);
  v14 = -(*(_BYTE *)(a1 + 432) != 0);
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_WORD *)(a1 + 134) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  v15 = ~v14 & 0xC0000001;
  if ( *(_QWORD *)(a1 + 440) )
  {
    v16 = 1;
    if ( *(int *)(a1 + 448) < 0 )
      v16 = 2;
    result = UsbDevice_QueueConfigureEndpointEvent(a1, v16);
  }
  if ( v12 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             v12,
             v15);
  return result;
}
