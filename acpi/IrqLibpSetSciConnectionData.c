NTSTATUS __fastcall IrqLibpSetSciConnectionData(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  _QWORD Data[12]; // [rsp+40h] [rbp-78h] BYREF

  memset((char *)Data + 4, 0, 0x5CuLL);
  v4 = *(_OWORD *)(a1 + 16);
  *(_OWORD *)&Data[1] = *(_OWORD *)a1;
  v5 = *(_OWORD *)(a1 + 32);
  LODWORD(Data[0]) = 1;
  *(_OWORD *)&Data[3] = v4;
  v6 = *(_OWORD *)(a1 + 48);
  *(_OWORD *)&Data[5] = v5;
  v7 = *(_OWORD *)(a1 + 64);
  *(_OWORD *)&Data[7] = v6;
  *(_QWORD *)&v6 = *(_QWORD *)(a1 + 80);
  *(_OWORD *)&Data[9] = v7;
  Data[11] = v6;
  return IoSetDevicePropertyData(a2, &INTERRUPT_CONNECTION_DATA_PKEY, 0, 0, 0x1003u, 0x60u, Data);
}
