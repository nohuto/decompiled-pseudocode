// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_SYSMEM_SEGMENT::EvictResource(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3,
        char a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  _QWORD *v10; // rsi
  bool v11; // zf
  _QWORD *VaPagingHistoryEntry; // rax
  _QWORD *v13; // rcx
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rcx
  struct _VIDMM_LOCAL_ALLOC *v17; // r13
  VIDMM_GLOBAL *v18; // rcx
  VIDMM_GLOBAL *v19; // rbx
  __int64 v20; // rax
  const unsigned __int64 *v21; // rsi
  struct _VIDSCH_SYNC_OBJECT **v22; // rbp
  __int64 v23; // rbx
  struct _VIDMM_GLOBAL_ALLOC *i; // rsi
  _QWORD *j; // r14
  unsigned int k; // esi
  __int64 v27; // rax
  const unsigned __int64 *v28; // rsi
  struct _VIDSCH_SYNC_OBJECT **v29; // rbp
  __int64 v30; // rcx
  __int64 v31; // rax
  __int16 v32; // bx
  _DWORD *v33; // rdx
  VIDMM_GLOBAL *v34; // r12
  struct _VIDMM_LOCAL_ALLOC *v35; // rsi
  __int64 v37; // rbp
  unsigned __int64 v38; // r8
  _QWORD *v39; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v41; // rbx
  __int64 v42; // rbp
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  _QWORD *v48; // rax
  __int64 v49; // rdx
  _QWORD *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r12
  __int64 v53; // r8
  int v54; // ebp
  __int64 v55; // r14
  unsigned int v56; // ebx
  __int64 v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned int v61; // ecx
  unsigned int v62; // r8d
  __int64 v63; // rax
  unsigned int v64; // eax
  __int64 v65; // r8
  __int64 v66; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v67; // rbx
  struct _VIDMM_GLOBAL_ALLOC *v68; // r9
  struct _VIDMM_GLOBAL_ALLOC *v69; // rcx
  __int64 v70; // r11
  __int64 v71; // r10
  int v72; // ecx
  __int64 v73; // rdx
  __int64 v74; // rdx
  struct _VIDMM_GLOBAL_ALLOC *m; // r9
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rcx
  __int64 v80; // rcx
  int v81; // ecx
  int v82; // ecx
  __int64 v83; // rax
  __int64 v84; // rcx
  int v85; // r9d
  __int64 v86; // rcx
  __int64 v87; // rcx
  _QWORD *v88; // rax
  __int64 v89; // rcx
  __int64 v90; // r9
  signed __int32 v91[8]; // [rsp+0h] [rbp-C8h] BYREF
  void *v92; // [rsp+20h] [rbp-A8h]
  unsigned __int8 v93[8]; // [rsp+28h] [rbp-A0h]
  unsigned __int8 v94[8]; // [rsp+30h] [rbp-98h]
  __int64 v95; // [rsp+38h] [rbp-90h]
  _QWORD v96[2]; // [rsp+50h] [rbp-78h] BYREF
  char v97; // [rsp+60h] [rbp-68h]
  __int128 v98; // [rsp+68h] [rbp-60h]
  __int128 v99; // [rsp+78h] [rbp-50h]
  __int128 v100; // [rsp+88h] [rbp-40h]
  unsigned __int64 v101; // [rsp+D0h] [rbp+8h]
  char v102; // [rsp+F8h] [rbp+30h]
  struct _VIDMM_LOCAL_ALLOC *v103; // [rsp+F8h] [rbp+30h]

  v98 = 0LL;
  v99 = 0LL;
  v100 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v83 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v83 + 24) = a2;
    *(_QWORD *)(v83 + 32) = *((int *)a2 + 91);
  }
  if ( *((_DWORD *)a2 + 36) && (*((_DWORD *)a2 + 17) & 0x40000000) == 0 && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
  }
  v10 = (_QWORD *)*((_QWORD *)this + 1);
  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || v10[5123] )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10 + 5125, 0LL);
    v11 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
    v10[5126] = KeGetCurrentThread();
    if ( v11 )
      VaPagingHistoryEntry = (_QWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(v10, 13LL, 32LL);
    else
      VaPagingHistoryEntry = operator new(32, (struct DXGK_LOG *)(v10 + 5128), 0xDu, 0);
    v13 = VaPagingHistoryEntry;
    if ( VaPagingHistoryEntry )
    {
      VaPagingHistoryEntry[1] = a2;
      VaPagingHistoryEntry[2] = *(_QWORD *)(*((_QWORD *)a2 + 67) + 40LL);
      v14 = *((_DWORD *)a2 + 17) & 0x3F;
      *((_BYTE *)v13 + 24) = 0;
      *(_DWORD *)v13 = v14;
    }
    v10[5126] = 0LL;
    ExReleasePushLockExclusiveEx(v10 + 5125, 0LL);
    KeLeaveCriticalRegion();
  }
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)a2 + 40) == KeGetCurrentThread() )
  {
    if ( *((int *)a2 + 82) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      v95 = 0LL;
      *(_QWORD *)v94 = 0LL;
      *(_QWORD *)v93 = 0LL;
      v92 = (void *)491;
      DxgkLogInternalTriageEvent(v84, 262146LL);
    }
    ++*((_DWORD *)a2 + 82);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)a2 + 304, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v85 = *((_DWORD *)a2 + 83);
        if ( v85 != -1 && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v16, &EventBlockThread, v15, v85);
      }
      _InterlockedIncrement64((volatile signed __int64 *)a2 + 39);
      ExAcquirePushLockExclusiveEx((char *)a2 + 304, 0LL);
    }
    if ( *((_QWORD *)a2 + 40) )
    {
      WdLogSingleEntry1(1LL, 515LL);
      v95 = 0LL;
      *(_QWORD *)v94 = 0LL;
      *(_QWORD *)v93 = 0LL;
      v92 = (void *)515;
      DxgkLogInternalTriageEvent(v86, 262146LL);
    }
    if ( *((_DWORD *)a2 + 82) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      v95 = 0LL;
      *(_QWORD *)v94 = 0LL;
      *(_QWORD *)v93 = 0LL;
      v92 = (void *)516;
      DxgkLogInternalTriageEvent(v87, 262146LL);
    }
    *((_QWORD *)a2 + 40) = KeGetCurrentThread();
    *((_DWORD *)a2 + 82) = 1;
  }
  v17 = a6;
  if ( !a6 )
    v17 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 11);
  v18 = (VIDMM_GLOBAL *)*((unsigned int *)a2 + 17);
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 40168LL) )
  {
    if ( ((unsigned int)v18 & 0x10000000) != 0 )
      VIDMM_GLOBAL::NotifyContextAllocationEviction(v18, a2);
    if ( a3 )
      (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)this + 64LL))(this, a2);
    v19 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
    v20 = *((_DWORD *)a2 + 17) & 0x3F;
    v21 = (const unsigned __int64 *)((char *)v19 + 8 * v20 + 5480);
    v22 = (struct _VIDSCH_SYNC_OBJECT **)((char *)v19 + 8 * v20 + 5992);
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)v19 + 8LL) )
      VIDMM_GLOBAL::FlushPagingBufferInternal(v19, *((_DWORD *)a2 + 17) & 0x3F, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForFences(v19, v22, (const unsigned __int64 *)a2 + 20, 1u, v21);
    if ( a4 )
    {
      DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
      return;
    }
  }
  else
  {
    *((_DWORD *)a2 + 17) = (unsigned int)v18 | 0x200000;
  }
  v23 = *((_QWORD *)this + 1);
  if ( (*(_BYTE *)(v23 + 40936) & 4) != 0 )
  {
    for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 34);
          i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 272);
          i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
    {
      for ( j = (_QWORD *)*((_QWORD *)i - 2); j != (_QWORD *)((char *)i - 16); j = (_QWORD *)*j )
        VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident((VIDMM_GLOBAL *)v23, (struct VIDMM_ALLOC *)(j - 5));
    }
    for ( k = 0; k < *(_DWORD *)(v23 + 7016); ++k )
      VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)v23, k, 0, 0LL, 0LL, 0, 0);
    v27 = *((_DWORD *)a2 + 17) & 0x3F;
    v28 = (const unsigned __int64 *)(v23 + 5480 + 8 * v27);
    v29 = (struct _VIDSCH_SYNC_OBJECT **)(v23 + 8 * (v27 + 749));
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)v23 + 8LL) )
      VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)v23, *((_DWORD *)a2 + 17) & 0x3F, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForFences((VIDMM_GLOBAL *)v23, v29, (const unsigned __int64 *)a2 + 20, 1u, v28);
  }
  v30 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v30 + 40179) )
    VIDMM_GLOBAL::IoMmuUnmapAllocation((VIDMM_GLOBAL *)v30, a2, v17);
  v31 = *((_QWORD *)a2 + 67);
  v32 = *(_WORD *)(v31 + 4);
  if ( (*(_DWORD *)v31 & 0x8000000) == 0 )
    goto LABEL_40;
  if ( (*((_DWORD *)a2 + 19) & 2) == 0 )
  {
    if ( (int)VIDMM_GLOBAL::ChargePinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1)) < 0 )
      goto LABEL_40;
    *((_DWORD *)a2 + 19) |= 2u;
  }
  if ( v32 == 2 )
  {
LABEL_40:
    v33 = (_DWORD *)*((_QWORD *)a2 + 67);
    if ( (*v33 & 0x4000) != 0 )
      *((_QWORD *)a2 + 49) = 0LL;
    v34 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
    v30 = *(unsigned int *)(*((_QWORD *)v34 + 3) + 436LL);
    if ( (v30 & 4) != 0 && (*v33 & 0x4000) == 0 || (*((_DWORD *)a2 + 18) & 0x2400) != 0 )
      goto LABEL_70;
    if ( v17 )
      v35 = v17;
    else
      v35 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 11);
    v30 = *((_QWORD *)a2 + 12);
    if ( v30 )
    {
      VidMmiUnlockAllocation((PMDL *)v30, (__int64)v33, v15);
      *((_QWORD *)a2 + 12) = 0LL;
    }
    if ( --*((_DWORD *)a2 + 91) < 0 )
    {
      v93[0] = 1;
      DxgCreateLiveDumpWithWdLogs(403LL, 2072LL, a2, 0LL, 0LL, *(_DWORD *)v93);
    }
    if ( *((_DWORD *)a2 + 91) )
      goto LABEL_70;
    v37 = *(_QWORD *)v34;
    v38 = *((_QWORD *)a2 + 1);
    v101 = v38;
    v39 = (_QWORD *)(*(_QWORD *)v34 + 312LL);
    v96[1] = v39;
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v37 + 8) )
    {
      v102 = 1;
      v97 = 1;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      ++*(_DWORD *)(v37 + 360);
      v41 = PerformanceCounter;
      v38 = v101;
      v96[0] = PerformanceCounter.QuadPart;
    }
    else
    {
      v41 = (LARGE_INTEGER)v96[0];
      v102 = 0;
      v97 = 0;
    }
    v42 = *(_QWORD *)v35;
    v43 = *(_DWORD *)(*(_QWORD *)v35 + 72LL);
    if ( (v43 & 0x2000) == 0 )
    {
      if ( (v43 & 0x8000) != 0 )
      {
        if ( *(_QWORD *)(v42 + 552) )
        {
          if ( *(_DWORD *)(v42 + 584) )
          {
            UnlockChildPages(*(ADAPTER_DISPLAY **)(*((_QWORD *)v35 + 1) + 32LL));
            IoFreeMdl(*(PMDL *)(v42 + 552));
          }
          else
          {
            UnmapGpadl();
          }
          *(_QWORD *)(v42 + 552) = 0LL;
        }
      }
      else
      {
        if ( !*(_BYTE *)(*((_QWORD *)v34 + 3) + 2871LL) )
        {
          VIDMM_GLOBAL::EnsureLockedPages(v34, v35, 0LL, v38);
          v38 = v101;
        }
        v44 = *((_QWORD *)v35 + 3);
        if ( !v44 )
        {
          VidMmiUnlockAllocation(*((PMDL **)v35 + 10), 0LL, v38);
          *((_QWORD *)v35 + 10) = 0LL;
          if ( v102 )
            *v39 += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v41.QuadPart;
          goto LABEL_67;
        }
        v45 = *((_QWORD *)v35 + 1);
        LOBYTE(v92) = 0;
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, unsigned __int64, void *, _QWORD, _QWORD, __int64))(**(_QWORD **)(v45 + 24) + 40LL))(
          *(_QWORD *)(v45 + 24),
          v44,
          0LL,
          v38,
          v92,
          *(_QWORD *)v93,
          *(_QWORD *)v94,
          v95);
      }
    }
    VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR((VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v96);
LABEL_67:
    if ( bTracingEnabled && (byte_1C00769C1 & 0x10) != 0 )
      McTemplateK0x_EtwWriteTransfer(v30, v46, v47, a2);
LABEL_70:
    if ( (*((_DWORD *)a2 + 19) & 2) != 0 )
    {
      VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
      *((_DWORD *)a2 + 19) &= ~2u;
    }
  }
  if ( *((_QWORD *)a2 + 17) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v88 = (_QWORD *)WdLogNewEntry5_WdTrace(v30);
      v88[3] = *((_QWORD *)a2 + 17);
      v88[4] = *((int *)a2 + 33);
      v88[5] = *((unsigned int *)a2 + 32);
    }
    (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 24LL))(
      this,
      a2,
      *((_QWORD *)a2 + 17),
      *((_QWORD *)a2 + 2),
      **((_QWORD **)a2 + 64));
    *((_QWORD *)a2 + 17) = 0LL;
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v30);
  }
  v48 = (_QWORD *)((char *)a2 + 408);
  v49 = *((_QWORD *)a2 + 51);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v49 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 408)
    || (v50 = (_QWORD *)*((_QWORD *)a2 + 52), (_QWORD *)*v50 != v48) )
  {
    __fastfail(3u);
  }
  *v50 = v49;
  *(_QWORD *)(v49 + 8) = v50;
  *v48 = 0LL;
  *((_QWORD *)a2 + 52) = 0LL;
  if ( v17 )
  {
    v51 = *((_QWORD *)v17 + 1);
    if ( v51 )
    {
      v52 = *((unsigned int *)this + 5);
      v103 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 2);
      v53 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 240LL);
      if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
        v54 = 0;
      else
        v54 = *((_DWORD *)this + 4) + 1;
      v55 = 8 * v53;
      v56 = *((_DWORD *)a2 + 16);
      v57 = *(_QWORD *)(8 * v53 + *(_QWORD *)(v51 + 16));
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v57 + 440, 0LL);
      v58 = *(_QWORD *)(v55 + *(_QWORD *)(*((_QWORD *)v17 + 1) + 16LL));
      if ( v58 )
        v59 = *(_QWORD *)(v58 + 16) + 184 * v52;
      else
        v59 = 0LL;
      v60 = v59 + 56;
      if ( !v56 || (v56 & 0x1F) == v54 )
      {
        --*(_DWORD *)(v59 + 64);
        *(_QWORD *)(v59 + 72) -= v103;
      }
      else
      {
        v61 = 6;
        v62 = 1;
        do
        {
          if ( ((v56 >> v61) & 0x1F) == v54 )
          {
            v63 = 2LL * v62;
            *(_QWORD *)(v60 + 8 * v63 + 16) -= v103;
            --*(_DWORD *)(v60 + 8 * v63 + 8);
            goto LABEL_89;
          }
          ++v62;
          v61 += 6;
        }
        while ( v61 < 0x1E );
        *(_QWORD *)(v59 + 152) -= v103;
        --*(_DWORD *)(v59 + 144);
      }
LABEL_89:
      ExReleasePushLockExclusiveEx(v57 + 440, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  *(_QWORD *)(*((_QWORD *)a2 + 15) + 312LL) += *((_QWORD *)a2 + 2);
  v64 = *((_DWORD *)a2 + 100);
  v65 = *((_QWORD *)a2 + 15);
  if ( v64 >= 0xC8000000 )
  {
    v66 = 360LL;
  }
  else if ( v64 >= 0xA0000000 )
  {
    v66 = 352LL;
  }
  else if ( v64 < 0x78000000 )
  {
    v66 = 328LL;
    if ( v64 >= 0x50000000 )
      v66 = 336LL;
  }
  else
  {
    v66 = 344LL;
  }
  *(_QWORD *)(v66 + v65) += *((_QWORD *)a2 + 2);
  v67 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 272);
  v68 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 34);
  if ( v68 != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 272) )
  {
    do
    {
      v65 = *((_QWORD *)this + 1);
      v69 = v68;
      v68 = *(struct _VIDMM_GLOBAL_ALLOC **)v68;
      v70 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v69 - 6) + 16LL) + 8LL
                                                                 * *(unsigned int *)(*(_QWORD *)(v65 + 24) + 240LL));
      if ( v70 )
        v71 = *(_QWORD *)(v70 + 16) + 184LL * *((unsigned int *)this + 5);
      else
        v71 = 0LL;
      v72 = *(_DWORD *)(v65 + 8);
      v73 = *((_QWORD *)a2 + 2);
      *(_QWORD *)(v65 + 7464) += v73;
      ++*(_DWORD *)(v65 + 7456);
      if ( v72 == 200 )
      {
        ++*(_DWORD *)(v65 + 7504);
        *(_QWORD *)(v65 + 7512) += v73;
      }
      else
      {
        v81 = v72 - 102;
        if ( v81 )
        {
          v82 = v81 - 8;
          if ( v82 )
          {
            if ( v82 == 97 )
            {
              ++*(_DWORD *)(v65 + 7472);
              *(_QWORD *)(v65 + 7480) += v73;
              *(_QWORD *)(v71 + 160) += v73;
            }
          }
          else
          {
            ++*(_DWORD *)(v65 + 7536);
            *(_QWORD *)(v65 + 7544) += v73;
          }
        }
        else
        {
          ++*(_DWORD *)(v65 + 7520);
          *(_QWORD *)(v65 + 7528) += v73;
        }
      }
    }
    while ( v68 != v67 );
  }
  *((_DWORD *)a2 + 17) &= ~0x1000000u;
  *((_QWORD *)a2 + 15) = 0LL;
  *((_DWORD *)a2 + 28) = 0;
  if ( !a5 && (*(_DWORD *)(*((_QWORD *)this + 1) + 7056LL) & 0x10) == 0 )
  {
    v80 = *((_QWORD *)a2 + 67);
    if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v80 + 4), 3, 2) == 2 )
    {
      if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
        McTemplateK0p_EtwWriteTransfer(v80, &EventDiscardAllocation, v65, a2);
      VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
      *((_DWORD *)a2 + 19) |= 0x10u;
      *((_QWORD *)a2 + 58) = *(_QWORD *)(*((_QWORD *)this + 1) + 4632LL);
    }
  }
  v74 = 1616LL * (*((_DWORD *)a2 + 17) & 0x3F);
  *(_QWORD *)(v74 + *(_QWORD *)(*((_QWORD *)this + 1) + 40224LL) + 1600) -= *((_QWORD *)a2 + 2);
  for ( m = *(struct _VIDMM_GLOBAL_ALLOC **)v67; m != v67; m = *(struct _VIDMM_GLOBAL_ALLOC **)m )
  {
    v76 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)m - 6) + 16LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 240LL))
                    + 48LL)
        + 296LL * (*((_DWORD *)a2 + 17) & 0x3F);
    *(_QWORD *)(v76 + 240) -= *((_QWORD *)a2 + 2);
  }
  if ( *((struct _KTHREAD **)a2 + 40) != KeGetCurrentThread() )
    WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a2 + 296, 0LL, 0LL);
  if ( *((int *)a2 + 82) <= 0 )
  {
    WdLogSingleEntry1(1LL, 535LL);
    v95 = 0LL;
    *(_QWORD *)v94 = 0LL;
    *(_QWORD *)v93 = 0LL;
    v92 = (void *)535;
    DxgkLogInternalTriageEvent(v89, 262146LL);
  }
  v11 = (*((_DWORD *)a2 + 82))-- == 1;
  if ( v11 )
  {
    *((_QWORD *)a2 + 40) = 0LL;
    ExReleasePushLockExclusiveEx((char *)a2 + 304, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( (byte_1C00769C1 & 8) != 0 )
  {
    v90 = *((_QWORD *)this + 1);
    *(_DWORD *)v93 = *((_DWORD *)this + 4) + 1;
    McTemplateK0ppq_EtwWriteTransfer(v77, &EventPagingOpSysmemUncommit, v78, *(_QWORD *)(v90 + 24), a2, *(_QWORD *)v93);
  }
  v79 = *((_QWORD *)this + 1);
  _InterlockedOr(v91, 0);
  ++*(_QWORD *)(v79 + 40);
}
