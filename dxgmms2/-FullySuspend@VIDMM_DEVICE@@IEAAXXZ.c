void __fastcall VIDMM_DEVICE::FullySuspend(VIDMM_GLOBAL **this)
{
  unsigned int v2; // esi
  unsigned int v3; // ebp
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 TimeIncrement; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  _QWORD *v11; // rax
  _BYTE v12[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+40h] [rbp-18h]

  VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(*this, this[1], (struct VIDMM_DEVICE *)this, 0);
  v2 = 4;
  v3 = *((_DWORD *)this + 15) & 7;
  if ( !v3 )
    VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)this);
  VIDMM_DEVICE::SuspendPagingQueues((VIDMM_DEVICE *)this);
  this[30] = (VIDMM_GLOBAL *)qword_1C0076508;
  v4 = *(_QWORD *)*this;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4 + 144, 0LL);
  *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)*this + 5564, 0);
  DXGPUSHLOCK::AcquireExclusive(v13);
  v5 = (__int64)this[4];
  v14 = 2;
  if ( VidSchDeviceQueuesNotEmpty(v5) || *((_DWORD *)this + 18) )
    v2 = 3;
  VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock((__int64)this, v2);
  v6 = *(_QWORD *)*this + 144LL;
  *(_QWORD *)(v6 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
  if ( (*((_BYTE *)this + 58) & 4) != 0 )
  {
    --*((_DWORD *)*this + 11164);
    *((_BYTE *)this + 58) &= ~4u;
  }
  v7 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v10 = qword_1C00764F8 + TimeIncrement * v7;
  this[28] = (VIDMM_GLOBAL *)v10;
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(TimeIncrement);
    v11[4] = v3;
    TimeIncrement = v2;
    v11[5] = v2;
    v11[3] = this;
    v11[6] = v10;
  }
  if ( (byte_1C00769C2 & 0x40) != 0 )
    McTemplateK0pq_EtwWriteTransfer(TimeIncrement, &EventVidMmSuspendDevice, v9, this[3], v2);
  if ( (*(_DWORD *)(*((_QWORD *)this[3] + 5) + 424LL) & 4) != 0 )
    VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent(
      (VIDMM_COMMIT_TELEMETRY *)(*(_QWORD *)*this + 208LL),
      (struct VIDMM_DEVICE *)this,
      1);
}
