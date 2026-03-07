__int64 __fastcall CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 144) >= 0x28u )
    return *(_QWORD *)(a1 + 136);
  LogPacketLengthError((struct DXGADAPTER_VMBUS_PACKET *)a1, 0x28uLL);
  return 0LL;
}
