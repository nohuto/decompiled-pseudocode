/*
 * XREFs of ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A8210
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B7F80 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0011AEC (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E4FC (McTemplateK0p_EtwWriteTransfer.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A7EBC (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A83EC (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A85F4 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C00A8A54 (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE.c)
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C00B534C (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 *     ?Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00B5A20 (-Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 *     GetBucketIdForAllocationSizePow2 @ 0x1C00F4040 (GetBucketIdForAllocationSizePow2.c)
 */

__int64 __fastcall VIDMM_DEVICE::Resume(VIDMM_DEVICE *this, char a2, bool *a3, struct VIDMM_ALLOC **a4)
{
  LARGE_INTEGER PerformanceCounter; // rdi
  char v9; // al
  __int64 v10; // rcx
  int v11; // ebp
  VIDMM_GLOBAL *v12; // rcx
  __int64 v13; // rbx
  __int64 TimeIncrement; // rcx
  __int64 v15; // r8
  char v16; // al
  __int64 v17; // rcx
  __int64 v19; // rbx
  VIDMM_COMMIT_TELEMETRY *v20; // rcx
  __int64 v21; // rax
  LARGE_INTEGER v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r10
  __int64 v26; // r9
  _QWORD *v27; // rax
  _BYTE v28[8]; // [rsp+30h] [rbp-38h] BYREF
  DXGPUSHLOCK *v29; // [rsp+38h] [rbp-30h]
  int v30; // [rsp+40h] [rbp-28h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v21 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v21 + 24) = this;
    *(_QWORD *)(v21 + 32) = *((_DWORD *)this + 15) & 7;
  }
  PerformanceCounter.QuadPart = 0LL;
  v9 = *((_BYTE *)this + 58) | 2;
  *((_BYTE *)this + 58) = v9;
  if ( (v9 & 4) != 0 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = *((_QWORD *)this + 4);
  v11 = 0;
  if ( v10 && (*(_BYTE *)(v10 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 200), 0, 0))
    || (v11 = VIDMM_GLOBAL::TryPageInDevice(*(VIDMM_GLOBAL **)this, this, a2, a3, a4), v11 >= 0) )
  {
    VIDMM_DEVICE::ResumePagingQueues(this);
    VIDMM_DEVICE::ResumeSchedulerDevice(this);
    VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
      *(VIDMM_GLOBAL **)this,
      *((struct VIDMM_PROCESS **)this + 1),
      this,
      1u);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28, (struct _KTHREAD **)(*(_QWORD *)this + 44512LL), 0);
    DXGPUSHLOCK::AcquireExclusive(v29);
    v30 = 2;
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v12, (struct _LIST_ENTRY *)this + 12);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
    v13 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    v16 = *((_BYTE *)this + 58) & 0xED;
    *((_QWORD *)this + 31) = 0LL;
    v17 = *((_QWORD *)this + 30) + v13 * TimeIncrement;
    *((_QWORD *)this + 29) = v17;
    *((_QWORD *)this + 30) = 0LL;
    *((_BYTE *)this + 58) = v16;
    if ( (v16 & 4) != 0 )
    {
      --*(_DWORD *)(*(_QWORD *)this + 44656LL);
      *((_BYTE *)this + 58) &= ~4u;
      v22 = KeQueryPerformanceCounter(0LL);
      v15 = (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GetBucketIdForAllocationSizePow2)(
                            *(_QWORD *)(**(_QWORD **)this + 288LL),
                            (LARGE_INTEGER)v22.QuadPart,
                            v23);
      ++*(_DWORD *)(v25 + 4 * v15 + 8);
      *(_QWORD *)(v25 + 8 * v15 + 96) += v26;
      *(_QWORD *)(v25 + 8 * v15 + 272) += v24 - PerformanceCounter.QuadPart;
      *(_BYTE *)(v25 + 976) = 1;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v17);
      v27[3] = this;
      v17 = *((_DWORD *)this + 15) & 7;
      v27[5] = 0LL;
      v27[4] = v17;
    }
    if ( (*((_BYTE *)this + 60) & 7) == 3 )
    {
      v17 = *(_QWORD *)(*((_QWORD *)this + 3) + 40LL);
      if ( (*(_DWORD *)(v17 + 424) & 4) != 0 )
      {
        v19 = **(_QWORD **)this + 208LL;
        VIDMM_COMMIT_TELEMETRY::Init((VIDMM_COMMIT_TELEMETRY *)v19, *(struct VIDMM_GLOBAL **)this, this, 0LL);
        VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent(v20, this, 0);
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_QWORD *)(v19 + 16) = 0LL;
        *(_QWORD *)v19 = 0LL;
        *(_BYTE *)(v19 + 24) = 0;
      }
    }
    *((_DWORD *)this + 15) &= 0xFFFFFFF8;
    if ( (byte_1C00769C2 & 0x40) != 0 )
      McTemplateK0p_EtwWriteTransfer(v17, &EventVidMmResumeDevice, v15, *((_QWORD *)this + 3));
  }
  else
  {
    WdLogSingleEntry1(3LL, this);
    *((_BYTE *)this + 58) &= ~2u;
  }
  return (unsigned int)v11;
}
