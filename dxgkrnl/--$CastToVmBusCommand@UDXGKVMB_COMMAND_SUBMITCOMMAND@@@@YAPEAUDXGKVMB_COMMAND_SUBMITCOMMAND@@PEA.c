__int64 __fastcall CastToVmBusCommand<DXGKVMB_COMMAND_SUBMITCOMMAND>(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 144) >= 0x198u )
    return *(_QWORD *)(a1 + 136);
  LogPacketLengthError((struct DXGADAPTER_VMBUS_PACKET *)a1, 0x198uLL);
  return 0LL;
}
