__int64 __fastcall CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 144) >= 0x20u )
    return *(_QWORD *)(a1 + 136);
  LogPacketLengthError((struct DXGADAPTER_VMBUS_PACKET *)a1, 0x20uLL);
  return 0LL;
}
