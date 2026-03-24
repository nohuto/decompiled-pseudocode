/*
 * XREFs of ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C00B7210
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008C500 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x1C0024508 (McTemplateK0ppq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0024930 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0064888 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0082E10 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0082FE0 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00B6B98 (-MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::Yield(VIDMM_DEVICE *this, struct VIDMM_DEVICE *a2)
{
  unsigned int v3; // esi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  _QWORD *v11; // rax

  v3 = *((_DWORD *)this + 13) & 7;
  *((_QWORD *)this + 30) = a2;
  if ( v3 != 2 )
  {
    if ( v3 )
    {
      if ( v3 == 1 )
        VIDMM_DEVICE::SuspendPagingQueues(this);
    }
    else
    {
      VIDMM_DEVICE::SuspendSchedulerDevice(this);
      VIDMM_DEVICE::SuspendPagingQueues(this);
      v5 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)this + 29) = *((_QWORD *)this + 28) - v5 * KeQueryTimeIncrement();
    }
    VIDMM_DEVICE::MoveToPenaltyBoxBand((__int64)this, 2);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      McTemplateK0pq_EtwWriteTransfer(v6, &EventVidMmSuspendDevice, v7, *((_QWORD *)this + 3), 2);
  }
  VIDMM_DEVICE::FaultAllAllocations(this);
  v10 = *((_QWORD *)a2 + 28);
  *((_QWORD *)this + 27) = v10;
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8);
    v11[3] = this;
    v11[4] = *((_QWORD *)this + 30);
    v8 = v3;
    v11[5] = v3;
    v11[6] = 3LL;
    v11[7] = v10;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
    McTemplateK0ppq_EtwWriteTransfer(
      v8,
      &EventVidMmYieldDevice,
      v9,
      *((_QWORD *)this + 3),
      *((_QWORD *)a2 + 3),
      v10 - *(_DWORD *)(*(_QWORD *)this + 4616LL));
}
