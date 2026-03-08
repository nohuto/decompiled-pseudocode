/*
 * XREFs of ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C00A5350
 * Callers:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0003280 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00040E0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C001DC60 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ?SuspendResume@VIDMM_DEVICE@@QEAAX_N0@Z @ 0x1C0087C30 (-SuspendResume@VIDMM_DEVICE@@QEAAX_N0@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C008EDC0 (-AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C00AB790 (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     VidSchFlushDevice @ 0x1C00AB9F0 (VidSchFlushDevice.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00A8C8C (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::EnsureSchedulable(VIDMM_DEVICE *this, char a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r9d
  __int64 v8; // rcx

  if ( !a2 || *((_BYTE *)this + 56) )
  {
    v3 = *(_QWORD *)this;
    *((_BYTE *)this + 56) = 1;
    v4 = v3 + 44512;
    if ( v4 && *(struct _KTHREAD **)(v4 + 8) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1453LL);
      DxgkLogInternalTriageEvent(v8, 262146LL);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v4, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v7 = *(_DWORD *)(v4 + 24);
        if ( v7 != -1 && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v5, &EventBlockThread, v6, v7);
      }
      ExAcquirePushLockExclusiveEx(v4, 0LL);
    }
    *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
    if ( (*((_DWORD *)this + 15) & 7) == 4 )
    {
      VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(this, 3LL);
      KeSetEvent(*(PRKEVENT *)(**(_QWORD **)this + 176LL), 0, 0);
    }
    *(_QWORD *)(v4 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
  }
}
