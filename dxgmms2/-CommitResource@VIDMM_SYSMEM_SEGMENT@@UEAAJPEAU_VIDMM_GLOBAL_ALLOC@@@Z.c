__int64 __fastcall VIDMM_SYSMEM_SEGMENT::CommitResource(VIDMM_SYSMEM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD *v4; // rsi
  int v5; // r12d
  bool v6; // zf
  _QWORD *VaPagingHistoryEntry; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  char v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  VIDMM_GLOBAL *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  VIDMM_SYSMEM_SEGMENT *v20; // rax
  VIDMM_SYSMEM_SEGMENT **v21; // rdx
  unsigned int v22; // ebx
  int v23; // edx
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned int v34; // ecx
  unsigned int v35; // r8d
  __int64 v36; // rax
  __int64 v37; // rdx
  struct _VIDMM_GLOBAL_ALLOC *i; // r9
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v42; // r9d
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // r9
  __int64 v52; // rcx
  signed __int32 v53[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v54; // [rsp+20h] [rbp-68h]
  __int64 v55; // [rsp+28h] [rbp-60h]
  __int64 v56; // [rsp+30h] [rbp-58h]
  __int64 v57; // [rsp+38h] [rbp-50h]
  char v58; // [rsp+90h] [rbp+8h]
  unsigned int v59; // [rsp+A0h] [rbp+18h]
  __int64 v60; // [rsp+A8h] [rbp+20h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v43 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v43 + 24) = a2;
    *(_QWORD *)(v43 + 32) = *((int *)a2 + 91);
  }
  v4 = (_QWORD *)*((_QWORD *)this + 1);
  v5 = 0;
  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || v4[5123] )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v4 + 5125, 0LL);
    v6 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
    v4[5126] = KeGetCurrentThread();
    if ( v6 )
      VaPagingHistoryEntry = (_QWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(v4, 13LL, 32LL);
    else
      VaPagingHistoryEntry = operator new(32, (struct DXGK_LOG *)(v4 + 5128), 0xDu, 0);
    v8 = VaPagingHistoryEntry;
    if ( VaPagingHistoryEntry )
    {
      VaPagingHistoryEntry[1] = a2;
      if ( a2 )
        v9 = *(_QWORD *)(*((_QWORD *)a2 + 67) + 40LL);
      else
        v9 = 0LL;
      v8[2] = v9;
      v10 = *((_DWORD *)a2 + 17) & 0x3F;
      *((_BYTE *)v8 + 24) = 1;
      *(_DWORD *)v8 = v10;
    }
    v4[5126] = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 5125, 0LL);
    KeLeaveCriticalRegion();
  }
  v11 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(*(_QWORD *)(v11 + 24) + 2870LL) || *(_BYTE *)(*(_QWORD *)(v11 + 16) + 1025LL) )
  {
    WdLogSingleEntry1(4LL, a2);
    return 3221226166LL;
  }
  else
  {
    v12 = 0;
    v58 = 0;
    KeEnterCriticalRegion();
    if ( *((struct _KTHREAD **)a2 + 40) == KeGetCurrentThread() )
    {
      if ( *((int *)a2 + 82) <= 0 )
      {
        WdLogSingleEntry1(1LL, 491LL);
        v57 = 0LL;
        v56 = 0LL;
        v55 = 0LL;
        v54 = 491LL;
        DxgkLogInternalTriageEvent(v44, 262146LL);
      }
      ++*((_DWORD *)a2 + 82);
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)a2 + 304, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v42 = *((_DWORD *)a2 + 83);
          if ( v42 != -1 && (byte_1C00769C1 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer(v13, &EventBlockThread, v14, v42);
        }
        _InterlockedIncrement64((volatile signed __int64 *)a2 + 39);
        ExAcquirePushLockExclusiveEx((char *)a2 + 304, 0LL);
      }
      if ( *((_QWORD *)a2 + 40) )
      {
        WdLogSingleEntry1(1LL, 515LL);
        v57 = 0LL;
        v56 = 0LL;
        v55 = 0LL;
        v54 = 515LL;
        DxgkLogInternalTriageEvent(v45, 262146LL);
      }
      if ( *((_DWORD *)a2 + 82) )
      {
        WdLogSingleEntry1(1LL, 516LL);
        v57 = 0LL;
        v56 = 0LL;
        v55 = 0LL;
        v54 = 516LL;
        DxgkLogInternalTriageEvent(v46, 262146LL);
      }
      *((_QWORD *)a2 + 40) = KeGetCurrentThread();
      *((_DWORD *)a2 + 82) = 1;
    }
    if ( (*((_DWORD *)a2 + 19) & 2) != 0 )
    {
      v58 = 1;
    }
    else
    {
      LODWORD(v15) = VIDMM_SEGMENT::LockAllocationBackingStore(this, a2);
      if ( (int)v15 < 0 )
      {
LABEL_81:
        DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
        return (unsigned int)v15;
      }
      v12 = 1;
    }
    if ( (**((_DWORD **)a2 + 67) & 0x4000) != 0 && !*((_QWORD *)a2 + 49) )
    {
      v47 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 8LL) + 24LL)
                                                      + 112LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 8LL) + 24LL),
              *(_QWORD *)(*((_QWORD *)a2 + 11) + 24LL));
      if ( !v47 )
      {
        WdLogSingleEntry1(1LL, a2);
        v57 = 0LL;
        v56 = 0LL;
        v55 = 0LL;
        v54 = (__int64)a2;
        DxgkLogInternalTriageEvent(v48, 0x40000LL);
        LODWORD(v15) = -1073741801;
        goto LABEL_79;
      }
      *((_QWORD *)a2 + 49) = v47;
    }
    v16 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
    if ( *((_BYTE *)v16 + 40179) )
    {
      v49 = VIDMM_GLOBAL::IoMmuMapAllocation(v16, a2);
      v15 = v49;
      if ( v49 < 0 )
      {
        _InterlockedIncrement(&dword_1C00768F4);
        WdLogSingleEntry2(6LL, a2, v49);
        v57 = 0LL;
        v56 = 0LL;
        v55 = v15;
        v54 = (__int64)a2;
        DxgkLogInternalTriageEvent(v50, 262145LL);
LABEL_79:
        if ( v12 )
          VIDMM_SEGMENT::UnlockAllocationBackingStore(*((struct VIDMM_GLOBAL **)this + 1), a2, 0LL);
        goto LABEL_81;
      }
    }
    (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)this + 56LL))(this, a2);
    if ( (byte_1C00769C1 & 8) != 0 )
    {
      v51 = *((_QWORD *)this + 1);
      LODWORD(v55) = *((_DWORD *)this + 4) + 1;
      McTemplateK0ppq_EtwWriteTransfer(v17, &EventPagingOpSysmemCommit, v18, *(_QWORD *)(v51 + 24), a2, v55);
    }
    v19 = *((_QWORD *)a2 + 25);
    *((_DWORD *)a2 + 19) &= ~8u;
    *((_QWORD *)a2 + 15) = v19;
    *((_QWORD *)a2 + 16) = *((_QWORD *)a2 + 24);
    *((_QWORD *)a2 + 17) = *((_QWORD *)a2 + 23);
    v20 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 408);
    *((_DWORD *)a2 + 28) = 2;
    *((_QWORD *)a2 + 25) = 0LL;
    *((_QWORD *)a2 + 24) = 0LL;
    *((_QWORD *)a2 + 23) = 0LL;
    *((_BYTE *)a2 + 82) = 1;
    v21 = (VIDMM_SYSMEM_SEGMENT **)*((_QWORD *)this + 21);
    if ( *v21 != (VIDMM_SYSMEM_SEGMENT *)((char *)this + 160) )
      __fastfail(3u);
    *(_QWORD *)v20 = (char *)this + 160;
    *((_QWORD *)a2 + 52) = v21;
    *v21 = v20;
    *((_QWORD *)this + 21) = v20;
    v22 = *((_DWORD *)a2 + 16);
    if ( !v22
      || ((*((_DWORD *)this + 20) & 0x1000) == 0 ? (v23 = *((_DWORD *)this + 4) + 1) : (v23 = 0),
          (*((_DWORD *)a2 + 16) & 0x1F) == v23
       || ((*((_DWORD *)this + 20) & 0x1000) == 0 ? (v24 = *((_DWORD *)this + 4) + 1) : (v24 = 0),
           ((v22 >> 6) & 0x1F) == v24)) )
    {
      v25 = 0x1000000;
    }
    else
    {
      v25 = 0;
    }
    v26 = *((_QWORD *)a2 + 11);
    *((_DWORD *)a2 + 17) = v25 | *((_DWORD *)a2 + 17) & 0xFEFFFFFF;
    if ( v26 )
    {
      v27 = *(_QWORD *)(v26 + 8);
      if ( v27 )
      {
        v60 = *((_QWORD *)a2 + 2);
        v59 = *((_DWORD *)this + 5);
        v28 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 240LL);
        if ( (*((_DWORD *)this + 20) & 0x1000) == 0 )
          v5 = *((_DWORD *)this + 4) + 1;
        v29 = 8 * v28;
        v30 = *(_QWORD *)(8 * v28 + *(_QWORD *)(v27 + 16));
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v30 + 440, 0LL);
        v31 = *(_QWORD *)(v29 + *(_QWORD *)(*(_QWORD *)(v26 + 8) + 16LL));
        if ( v31 )
          v32 = *(_QWORD *)(v31 + 16) + 184LL * v59;
        else
          v32 = 0LL;
        v33 = v32 + 56;
        if ( !v22 || (v22 & 0x1F) == v5 )
        {
          ++*(_DWORD *)(v32 + 64);
          *(_QWORD *)(v32 + 72) += v60;
        }
        else
        {
          v34 = 6;
          v35 = 1;
          do
          {
            if ( ((v22 >> v34) & 0x1F) == v5 )
            {
              v36 = 2LL * v35;
              *(_QWORD *)(v33 + 8 * v36 + 16) += v60;
              ++*(_DWORD *)(v33 + 8 * v36 + 8);
              goto LABEL_47;
            }
            ++v35;
            v34 += 6;
          }
          while ( v34 < 0x1E );
          *(_QWORD *)(v32 + 152) += v60;
          ++*(_DWORD *)(v32 + 144);
        }
LABEL_47:
        ExReleasePushLockExclusiveEx(v30 + 440, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    v37 = 1616LL * (*((_DWORD *)a2 + 17) & 0x3F);
    *(_QWORD *)(v37 + *(_QWORD *)(*((_QWORD *)this + 1) + 40224LL) + 1600) += *((_QWORD *)a2 + 2);
    for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 34);
          i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 272);
          i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
    {
      v39 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)i - 6) + 16LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 240LL))
                      + 48LL)
          + 296LL * (*((_DWORD *)a2 + 17) & 0x3F);
      *(_QWORD *)(v39 + 240) += *((_QWORD *)a2 + 2);
    }
    if ( v58 )
    {
      VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
      *((_DWORD *)a2 + 19) &= ~2u;
    }
    if ( *((struct _KTHREAD **)a2 + 40) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a2 + 296, 0LL, 0LL);
    if ( *((int *)a2 + 82) <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      v57 = 0LL;
      v56 = 0LL;
      v55 = 0LL;
      v54 = 535LL;
      DxgkLogInternalTriageEvent(v52, 262146LL);
    }
    v6 = (*((_DWORD *)a2 + 82))-- == 1;
    if ( v6 )
    {
      *((_QWORD *)a2 + 40) = 0LL;
      ExReleasePushLockExclusiveEx((char *)a2 + 304, 0LL);
    }
    KeLeaveCriticalRegion();
    v40 = *((_QWORD *)this + 1);
    _InterlockedOr(v53, 0);
    ++*(_QWORD *)(v40 + 40);
    return 0LL;
  }
}
