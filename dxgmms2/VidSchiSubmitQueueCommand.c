/*
 * XREFs of VidSchiSubmitQueueCommand @ 0x1C0106CD8
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x1C003A850 (VidSchiDrainContextFromWorkerThread.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C0007920 (VidSchIsTDRPending.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000EAF0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x1C00105F4 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C00163E0 (VidSchiSubmitSignalCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C0017004 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C001831C (VidSchiProcessCompletedQueuePacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C00A46E0 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0106954 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C0106E0C (VidSchiSubmitRenderCommand.c)
 */

void __fastcall VidSchiSubmitQueueCommand(_VIDSCH_QUEUE_PACKET *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rbp
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8

  v3 = *((_QWORD *)this + 11);
  v5 = *(_QWORD *)(v3 + 104);
  v6 = *(_QWORD *)(v3 + 96);
  v7 = *((_DWORD *)this + 12);
  v8 = *(_QWORD *)(v5 + 32);
  if ( v7 )
  {
    switch ( v7 )
    {
      case 8:
        VidSchiSubmitPagingCommand(this, a2, a3);
        break;
      case 3:
        VidSchiSubmitMmIoFlipCommand(this, a2, a3);
        break;
      case 4:
        VidSchiSubmitWaitCommand(this);
        break;
      case 5:
        VidSchiSubmitSignalCommand(this);
        break;
      case 6:
        v9 = (_QWORD *)((char *)this + 320);
        if ( *((_DWORD *)this + 78) != 5 )
          v9 = (_QWORD *)*v9;
        (*((void (__fastcall **)(_QWORD *))this + 37))(v9);
        VidSchiProcessCompletedQueuePacket(this, v10, v11);
        break;
      case 7:
        VidSchiSubmitSoftwareCommand(this);
        break;
    }
  }
  else
  {
    if ( (*(_BYTE *)(v8 + 3036) & 1) != 0
      || VidSchIsTDRPending(*(_QWORD *)(v5 + 32))
      || *(_BYTE *)(v5 + 204)
      || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 200), 0, 0) )
    {
      *((_DWORD *)this + 16) &= ~4u;
    }
    if ( (*((_DWORD *)this + 16) & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 2872));
      RtlSetBitEx(v8 + 488, *(unsigned __int16 *)(v6 + 4));
    }
    if ( (*((_DWORD *)this + 68) & 0x8000000) != 0 )
      VidSchiSubmitRenderVirtualCommand(this);
    else
      VidSchiSubmitRenderCommand(this);
  }
}
