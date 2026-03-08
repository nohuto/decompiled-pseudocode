/*
 * XREFs of UsbDevice_GetEndpointState @ 0x1C00111B4
 * Callers:
 *     Endpoint_OnCancelStopCompletion @ 0x1C0010D70 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x1C003B410 (Endpoint_OnResetEndpointResetCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0048620 (UsbDevice_DeviceResetCompletion.c)
 * Callees:
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C0007FC0 (XilUsbDevice_GetDeviceContextBufferVA.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C00386A8 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 */

__int64 __fastcall UsbDevice_GetEndpointState(__int64 a1, int a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 DeviceContextBufferVA; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v8; // r8
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v9 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 136) + 88LL) + 8LL);
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 136) + 80LL)
    && (*(_BYTE *)(a1 + 656) && *(_DWORD *)(v3 + 604) == 2 || *(_DWORD *)(v3 + 604) == 1) )
  {
    XilDeviceSlot_SendQueryEndpointContextInfoRequest(*(_DWORD *)(v2 + 136) + 16, a1, a2, (unsigned int)&v9, 0LL);
    return v9;
  }
  else
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 88) + 104LL) & 4) != 0 )
    {
      DeviceContextBufferVA = XilUsbDevice_GetDeviceContextBufferVA(a1);
      v6 = (v8 + 1) << 6;
    }
    else
    {
      DeviceContextBufferVA = XilUsbDevice_GetDeviceContextBufferVA(a1);
      v6 = 32 * (v5 + 1);
    }
    return *(_DWORD *)(v6 + DeviceContextBufferVA) & 7;
  }
}
