/*
 * XREFs of ?DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ @ 0x1C002DC94
 * Callers:
 *     ??1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ @ 0x1C00E0038 (--1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_ALLOC::DecrementPagingPacketReferenceCount(VIDMM_ALLOC *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 40, 0xFFFFFFFF) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = this;
    KeSetEvent((PRKEVENT)this + 7, 0, 0);
  }
}
