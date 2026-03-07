__int64 __fastcall CastToVmBusCommand<DXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN>(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 144) >= 0x488u )
    return *(_QWORD *)(a1 + 136);
  LogPacketLengthError((struct DXGADAPTER_VMBUS_PACKET *)a1, 0x488uLL);
  return 0LL;
}
