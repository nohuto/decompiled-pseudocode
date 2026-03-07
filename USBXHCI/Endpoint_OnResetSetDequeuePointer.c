char __fastcall Endpoint_OnResetSetDequeuePointer(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v6; // rbx
  unsigned int v7; // r9d
  int v8; // r9d

  v2 = *a1;
  if ( *(_BYTE *)(*a1 + 37) )
  {
    if ( Endpoint_IsTransferRingEmpty(v2, a2) )
      return Endpoint_StreamsOnResetSetDequeuePointerComplete(a1, a2);
    v6 = 104LL * (a2 - 1) + *(_QWORD *)(v2 + 136) + 56LL;
  }
  else
  {
    v6 = v2 + 160;
  }
  memset((void *)v6, 0, 0x60uLL);
  v7 = *(_DWORD *)(v6 + 36) & 0xFFFF43FF;
  *(_QWORD *)(v6 + 40) = Endpoint_OnResetSetDequeuePointerCompletion;
  *(_QWORD *)(v6 + 48) = a1;
  *(_DWORD *)(v6 + 36) = v7 | 0x4000;
  *(_QWORD *)(v6 + 24) = Endpoint_GetDequeuePointer(v2, a2);
  *(_DWORD *)(v6 + 36) = v8 ^ (v8 ^ (*(_DWORD *)(v2 + 144) << 16)) & 0x1F0000;
  *(_BYTE *)(v6 + 39) = *(_BYTE *)(*(_QWORD *)(v2 + 16) + 135LL);
  if ( *(_BYTE *)(v2 + 37) )
    *(_WORD *)(v6 + 34) = a2;
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_DWORD *)(v6 + 80) = 0;
  *(_DWORD *)(v6 + 84) = 0;
  *(_QWORD *)(v6 + 88) = 0LL;
  return Command_SendCommand(*(_QWORD *)(*(_QWORD *)v2 + 144LL), v6);
}
