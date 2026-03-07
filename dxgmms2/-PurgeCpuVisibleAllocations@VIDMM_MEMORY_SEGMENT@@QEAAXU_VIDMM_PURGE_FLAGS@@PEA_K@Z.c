// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r13
  _QWORD *v6; // rsi
  struct _VIDMM_GLOBAL_ALLOC *v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // r14
  struct _VIDMM_GLOBAL_ALLOC *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r13
  int v15; // eax
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-60h] BYREF

  v3 = a3;
  if ( (*(_DWORD *)(a1 + 80) & 0x6004) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a1;
    v6 = *(_QWORD **)(a1 + 160);
    while ( v6 != (_QWORD *)(a1 + 160) )
    {
      v7 = (struct _VIDMM_GLOBAL_ALLOC *)(v6 - 51);
      v6 = (_QWORD *)*v6;
      v8 = *((_QWORD *)v7 + 11);
      if ( v8 && (*(_BYTE *)(v8 + 32) & 1) != 0 )
        VIDMM_WORKER_THREAD::SuspendAccessToAllocation(**(VIDMM_WORKER_THREAD ***)(a1 + 8), v7);
    }
    v9 = *(_QWORD **)(a1 + 176);
    while ( v9 != (_QWORD *)(a1 + 176) )
    {
      v10 = (struct _VIDMM_GLOBAL_ALLOC *)(v9 - 51);
      v9 = (_QWORD *)*v9;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v10 + 504, 0LL);
      if ( *((int *)v10 + 90) <= 0 )
      {
        v13 = *((_QWORD *)v10 + 11);
        if ( v13 && (*(_BYTE *)(v13 + 32) & 1) != 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = v10;
          v14 = *((_QWORD *)v10 + 11);
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(**(PRKPROCESS **)(v14 + 8), &ApcState);
          v15 = VIDMM_GLOBAL::Rotate(
                  *(_QWORD *)(a1 + 8),
                  *(_QWORD *)(*(_QWORD *)(v14 + 8) + 24LL),
                  *(_QWORD *)(v14 + 24),
                  3LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  1,
                  v10);
          if ( (int)(v15 + 0x80000000) >= 0 && v15 != -1073741558 )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v15, 0LL);
          }
          *(_BYTE *)(v14 + 32) &= ~1u;
          KeUnstackDetachProcess(&ApcState);
          if ( *((_QWORD *)v10 + 59) )
          {
            VIDMM_CPU_HOST_APERTURE::UnmapRange(*(VIDMM_CPU_HOST_APERTURE **)(a1 + 504), v10);
            VIDMM_CPU_HOST_APERTURE::ReleaseRange(*(VIDMM_CPU_HOST_APERTURE **)(a1 + 504), v10);
          }
          v3 = a3;
        }
        ExReleasePushLockExclusiveEx((char *)v10 + 504, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        ExReleasePushLockExclusiveEx((char *)v10 + 504, 0LL);
        KeLeaveCriticalRegion();
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v12) + 24) = v10;
        if ( (*((_DWORD *)v10 + 17) & 0x100) != 0 )
        {
          if ( g_IsInternalRelease )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
          }
        }
        VIDMM_GLOBAL::PurgeAllocation(*(_QWORD *)(a1 + 8), v10, a2, v3);
      }
    }
  }
}
