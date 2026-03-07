__int64 __fastcall UsbDevice_GetXhciEndpointDequeuePointer(__int64 a1, int a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 DeviceContextBufferVA; // rax
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v8; // r8
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v9 = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 136) + 88LL) + 8LL);
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 136) + 80LL)
    && (*(_BYTE *)(a1 + 656) && *(_DWORD *)(v3 + 604) == 2 || *(_DWORD *)(v3 + 604) == 1) )
  {
    XilDeviceSlot_SendQueryEndpointContextInfoRequest(*(_DWORD *)(v2 + 136) + 16, a1, a2, 0, (__int64)&v9);
    return v9;
  }
  else
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 88) + 104LL) & 4) != 0 )
    {
      DeviceContextBufferVA = XilUsbDevice_GetDeviceContextBufferVA(a1);
      v6 = (v8 << 6) + 72;
    }
    else
    {
      DeviceContextBufferVA = XilUsbDevice_GetDeviceContextBufferVA(a1);
      v6 = 32 * v5 + 40;
    }
    return *(_QWORD *)(v6 + DeviceContextBufferVA);
  }
}
