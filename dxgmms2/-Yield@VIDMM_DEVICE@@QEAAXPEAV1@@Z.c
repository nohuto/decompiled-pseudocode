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

  v3 = *((_DWORD *)this + 15) & 7;
  *((_QWORD *)this + 31) = a2;
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
      *((_QWORD *)this + 30) = *((_QWORD *)this + 29) - v5 * KeQueryTimeIncrement();
    }
    VIDMM_DEVICE::MoveToPenaltyBoxBand((__int64)this, 2);
    if ( (byte_1C00769C2 & 0x40) != 0 )
      McTemplateK0pq_EtwWriteTransfer(v6, &EventVidMmSuspendDevice, v7, *((_QWORD *)this + 3), 2);
  }
  VIDMM_DEVICE::FaultAllAllocations(this);
  v10 = *((_QWORD *)a2 + 29);
  *((_QWORD *)this + 28) = v10;
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8);
    v11[3] = this;
    v11[4] = *((_QWORD *)this + 31);
    v8 = v3;
    v11[5] = v3;
    v11[6] = 3LL;
    v11[7] = v10;
  }
  if ( (byte_1C00769C2 & 0x40) != 0 )
    McTemplateK0ppq_EtwWriteTransfer(
      v8,
      &EventVidMmYieldDevice,
      v9,
      *((_QWORD *)this + 3),
      *((_QWORD *)a2 + 3),
      v10 - *(_DWORD *)(*(_QWORD *)this + 4632LL));
}
