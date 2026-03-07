__int64 __fastcall VIDMM_SEGMENT::MoveOneResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        bool *a3,
        void *a4)
{
  VIDMM_GLOBAL *v6; // rcx
  _QWORD *v7; // r14
  __int64 v8; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v9; // rsi
  struct _VIDMM_GLOBAL_ALLOC *v10; // r15
  _QWORD **v11; // r15
  _QWORD *v12; // r14
  __int64 v13; // rcx
  VIDMM_SEGMENT *v14; // rcx
  char IsNonOverlappingResourceCB; // si

  if ( a2 && *((_QWORD *)a2 + 23) && *((_QWORD *)a2 + 25) == *((_QWORD *)a2 + 15) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)a2 + 504, 0LL);
    DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
    VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(v6, a2);
    v7 = (_QWORD *)((char *)a2 + 128);
    VIDMM_GLOBAL::MemoryTransfer(
      this[1],
      a2,
      *((_QWORD *)a2 + 2),
      0LL,
      *((struct VIDMM_SEGMENT **)a2 + 15),
      (union _LARGE_INTEGER *)a2 + 16,
      0LL,
      *((struct VIDMM_SEGMENT **)a2 + 15),
      (union _LARGE_INTEGER *)a2 + 24,
      0LL,
      0);
    if ( (*((_DWORD *)a2 + 17) & 0x200000) != 0 )
    {
      WdLogSingleEntry1(1LL, a2);
      DxgkLogInternalTriageEvent(v8, 0x40000LL);
      v9 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 34);
      if ( v9 != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 272) )
      {
        do
        {
          v10 = v9;
          v9 = *(struct _VIDMM_GLOBAL_ALLOC **)v9;
          v11 = (_QWORD **)((char *)v10 - 16);
          v12 = *v11;
          while ( v12 != v11 )
          {
            v13 = *(v12 - 4);
            v12 = (_QWORD *)*v12;
            VidSchMarkDeviceAsError(*(_QWORD *)(v13 + 32));
          }
        }
        while ( v9 != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 272) );
        v7 = (_QWORD *)((char *)a2 + 128);
      }
    }
    v14 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 15);
    *v7 = *((_QWORD *)a2 + 24);
    *(_WORD *)(*((_QWORD *)a2 + 67) + 6LL) = VIDMM_SEGMENT::DriverId(v14);
    *(_QWORD *)(*((_QWORD *)a2 + 67) + 32LL) = *v7 + *(_QWORD *)(*((_QWORD *)a2 + 15) + 24LL);
    *((_QWORD *)a2 + 25) = 0LL;
    *((_QWORD *)a2 + 23) = 0LL;
    if ( VIDMM_GLOBAL::IsTdrPending(this[1]) )
    {
      ExReleasePushLockExclusiveEx((char *)a2 + 504, 0LL);
      KeLeaveCriticalRegion();
      DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
      WdLogSingleEntry0(3LL);
      return 3221226166LL;
    }
    IsNonOverlappingResourceCB = VIDMM_SEGMENT::IsNonOverlappingResourceCB((_VIDMM_GLOBAL_ALLOC_NONPAGED **)a2);
    if ( IsNonOverlappingResourceCB )
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this[1], *((_DWORD *)a2 + 17) & 0x3F);
    if ( (**((_DWORD **)a2 + 67) & 0x10000) != 0 )
      VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)this[1], a2, 1u);
    if ( IsNonOverlappingResourceCB )
      VidSchiUpdateFlipQueueEntriesForMove(*(_QWORD *)(*((_QWORD *)this[1] + 2) + 744LL), a2);
    VIDMM_SEGMENT::UpdateVirtualAddressForNewResourceLocation((VIDMM_SEGMENT *)this, (VIDMM_SEGMENT **)a2);
    ExReleasePushLockExclusiveEx((char *)a2 + 504, 0LL);
    KeLeaveCriticalRegion();
    DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
  }
  return 0LL;
}
