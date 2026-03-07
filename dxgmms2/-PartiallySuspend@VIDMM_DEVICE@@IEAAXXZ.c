void __fastcall VIDMM_DEVICE::PartiallySuspend(VIDMM_GLOBAL **this)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rax
  int v8; // [rsp+20h] [rbp-18h]

  VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(*this, this[1], (struct VIDMM_DEVICE *)this, 0);
  v2 = *((_DWORD *)this + 15) & 7;
  VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)this);
  v3 = MEMORY[0xFFFFF78000000320];
  this[30] = (VIDMM_GLOBAL *)((char *)this[29] - v3 * KeQueryTimeIncrement());
  VIDMM_DEVICE::MoveToPenaltyBoxBand((__int64)this, 1);
  v5 = *(_QWORD *)*this;
  v6 = *(_QWORD *)(v5 + 16);
  if ( v6 && (*(_DWORD *)(v6 + 60) & 7) != 0 )
    *((_BYTE *)this + 58) |= 0x10u;
  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdTrace(v5);
    v5 = v2;
    v7[3] = this;
    v7[4] = v2;
    v7[5] = 1LL;
  }
  if ( (byte_1C00769C2 & 0x40) != 0 )
  {
    v8 = 1;
    McTemplateK0pq_EtwWriteTransfer(v5, &EventVidMmSuspendDevice, v4, this[3], v8);
  }
}
