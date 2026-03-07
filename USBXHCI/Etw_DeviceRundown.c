__int64 __fastcall Etw_DeviceRundown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v6; // cl
  char v8; // [rsp+E0h] [rbp-80h] BYREF
  char v9; // [rsp+E1h] [rbp-7Fh] BYREF
  unsigned __int8 v10; // [rsp+E2h] [rbp-7Eh] BYREF
  _BYTE v11[5]; // [rsp+E3h] [rbp-7Dh] BYREF
  _OWORD v12[2]; // [rsp+E8h] [rbp-78h] BYREF
  _OWORD v13[2]; // [rsp+108h] [rbp-58h] BYREF

  v8 = 0;
  v11[0] = 0;
  v6 = 0;
  v9 = 0;
  LOBYTE(a3) = 0;
  v10 = 0;
  LOBYTE(a4) = 0;
  if ( *(_BYTE *)(a2 + 656) )
  {
    XilUsbDevice_QueryAttributes(
      a2,
      (unsigned int)&v8,
      (unsigned int)&v9,
      (unsigned int)&v10,
      (__int64)v13,
      (__int64)v11,
      (__int64)v12);
    v6 = v10;
    LOBYTE(a3) = v8;
    LOBYTE(a4) = v11[0];
  }
  else
  {
    memset(v13, 0, sizeof(v13));
    memset(v12, 0, sizeof(v12));
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer(
      v6,
      (unsigned int)&USBXHCI_ETW_EVENT_RUNDOWN_DEVICE_INFORMATION_V3,
      a1,
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
      *(_QWORD *)(a2 + 24),
      *(_QWORD *)a2,
      *(_DWORD *)(a2 + 20),
      *(_DWORD *)(a2 + 36),
      a2 + 44,
      *(_BYTE *)(a2 + 135),
      *(_BYTE *)(a2 + 136) != 0,
      *(_DWORD *)(a2 + 140),
      *(_DWORD *)(a2 + 144));
  return Etw_EndpointListRundown(a1, a2, a3, a4);
}
