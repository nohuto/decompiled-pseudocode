/*
 * XREFs of ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C00A8CDC
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1C00EDDA8 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     VidSchDeviceQueuesNotEmpty @ 0x1C0011C40 (VidSchDeviceQueuesNotEmpty.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C002EF24 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A8734 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C00A8A54 (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00A8C8C (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A90C4 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::IndefinitelySuspend(__int64 **this, char a2)
{
  unsigned int v4; // esi
  unsigned int v5; // ebp
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  bool v10; // zf
  _QWORD *v11; // rax
  _BYTE v12[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+40h] [rbp-18h]

  VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
    (VIDMM_GLOBAL *)*this,
    (struct VIDMM_PROCESS *)this[1],
    (struct VIDMM_DEVICE *)this,
    0);
  v4 = 4;
  v5 = *((_DWORD *)this + 15) & 7;
  if ( !v5 )
    VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)this);
  VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)this);
  v6 = **this;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v6 + 144, 0LL);
  *(_QWORD *)(v6 + 152) = KeGetCurrentThread();
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)*this + 5564, 0);
  DXGPUSHLOCK::AcquireExclusive(v13);
  v14 = 2;
  if ( a2 == 1 && (VidSchDeviceQueuesNotEmpty((__int64)this[4]) || *((_DWORD *)this + 18)) )
    v4 = 3;
  VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock((__int64)this, v4);
  v7 = **this + 144;
  *(_QWORD *)(v7 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
  v10 = (*((_BYTE *)this + 58) & 4) == 0;
  *((_BYTE *)this + 56) = a2;
  if ( !v10 )
  {
    --*((_DWORD *)*this + 11164);
    *((_BYTE *)this + 58) &= ~4u;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8);
    v11[4] = v5;
    v11[5] = v4;
    v11[3] = this;
    v8 = (__int64)this[28];
    v11[6] = v8;
  }
  if ( (byte_1C00769C2 & 0x40) != 0 )
    McTemplateK0pq_EtwWriteTransfer(v8, &EventVidMmSuspendDevice, v9, this[3], v4);
}
