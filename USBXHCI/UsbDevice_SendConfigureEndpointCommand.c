__int64 __fastcall UsbDevice_SendConfigureEndpointCommand(__int64 a1, int a2)
{
  __int64 v3; // rsi
  char v5; // r10
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r11
  __int64 (__fastcall *v9)(); // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rcx

  v3 = a1 + 456;
  memset((void *)(a1 + 456), 0, 0x60uLL);
  v5 = *(_BYTE *)(a1 + 657);
  v6 = 0;
  v7 = *(_QWORD *)((v5 != 0 ? 648LL : 640LL) + a1);
  if ( v7 )
    v8 = *(_QWORD *)(v7 + 16);
  else
    v8 = 0LL;
  if ( (a2 & 0xFFFFFFFD) == 0 )
  {
    v9 = UsbDevice_EndpointsConfigureCompletion;
LABEL_5:
    *(_QWORD *)(a1 + 496) = v9;
    v10 = a1 + 640;
    v11 = a1 + 648;
    v12 = *(_DWORD *)(a1 + 492) & 0xFFFF31FF;
    *(_QWORD *)(a1 + 504) = a1;
    *(_DWORD *)(a1 + 492) = v12 | 0x3000;
    *(_BYTE *)(a1 + 495) = *(_BYTE *)(a1 + 135);
    if ( !v5 )
      v11 = a1 + 640;
    if ( *(_QWORD *)v11 )
      v13 = *(_QWORD *)(*(_QWORD *)v11 + 24LL);
    else
      v13 = 0LL;
    *(_QWORD *)(a1 + 480) = v13;
    *(_QWORD *)(a1 + 528) = v8;
    if ( v5 )
      v10 = a1 + 648;
    if ( *(_QWORD *)v10 )
      v6 = *(_DWORD *)(*(_QWORD *)v10 + 44LL);
    v14 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 536) = v6;
    *(_DWORD *)(a1 + 540) = 1;
    *(_QWORD *)(a1 + 544) = a1;
    return Command_SendCommand(*(_QWORD *)(v14 + 144), v3, v10, a1 + 648);
  }
  if ( a2 == 1 )
  {
    v9 = UsbDevice_DropEndpointsCompletion;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 448) == 259 )
    *(_DWORD *)(a1 + 448) = -1073741595;
  return UsbDevice_QueueConfigureEndpointEvent(a1, 2LL);
}
