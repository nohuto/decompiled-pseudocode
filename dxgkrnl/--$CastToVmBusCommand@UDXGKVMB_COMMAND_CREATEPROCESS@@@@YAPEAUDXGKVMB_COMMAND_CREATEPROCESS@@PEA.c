__int64 __fastcall CastToVmBusCommand<DXGKVMB_COMMAND_CREATEPROCESS>(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 144) >= 0x238u )
    return *(_QWORD *)(a1 + 136);
  LogPacketLengthError((struct DXGADAPTER_VMBUS_PACKET *)a1, 0x238uLL);
  return 0LL;
}
