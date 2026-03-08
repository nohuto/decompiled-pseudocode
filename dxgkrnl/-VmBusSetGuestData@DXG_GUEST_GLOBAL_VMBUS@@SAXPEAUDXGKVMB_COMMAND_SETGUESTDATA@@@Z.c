/*
 * XREFs of ?VmBusSetGuestData@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_SETGUESTDATA@@@Z @ 0x1C005CE1C
 * Callers:
 *     ?VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C005B740 (-VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION_.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0046DC4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSetGuestData(struct DXGKVMB_COMMAND_SETGUESTDATA *a1)
{
  ULONG64 v1; // rdx
  _QWORD *v2; // rdx

  v1 = *((_QWORD *)a1 + 3);
  if ( v1 > MmUserProbeAddress )
  {
    v2 = (_QWORD *)(v1 + 16);
    if ( v2 )
    {
      if ( ((*((_DWORD *)a1 + 10) >> 1) & 0xF) != 0 )
      {
        if ( ((*((_DWORD *)a1 + 10) >> 1) & 0xF) == 1 )
          *v2 = *((_QWORD *)a1 + 4);
      }
      else
      {
        *(_DWORD *)v2 = *((_DWORD *)a1 + 8);
      }
      if ( (*((_DWORD *)a1 + 10) & 1) != 0 )
        CRefCountedBuffer::RefCountedBufferRelease(*((PVOID *)a1 + 3));
    }
  }
}
