char __fastcall UsbDevice_SendStopEndpointToOffloadedEndpoint(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rbp
  int v6; // r8d
  unsigned int v7; // r8d

  v2 = a2 + 160;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL);
  memset((void *)(a2 + 160), 0, 0x60uLL);
  v6 = *(_DWORD *)(v2 + 36);
  *(_QWORD *)(v2 + 40) = UsbDevice_StopEndpointToOffloadedEndpointCompletion;
  v7 = v6 & 0xFFFF03FF | 0x3C00;
  *(_QWORD *)(v2 + 48) = a2;
  *(_DWORD *)(v2 + 36) = v7;
  *(_DWORD *)(v2 + 36) = v7 ^ (v7 ^ (*(_DWORD *)(a2 + 144) << 16)) & 0x1F0000;
  *(_BYTE *)(v2 + 39) = *(_BYTE *)(a1 + 135);
  return Command_SendCommand(v5, v2);
}
