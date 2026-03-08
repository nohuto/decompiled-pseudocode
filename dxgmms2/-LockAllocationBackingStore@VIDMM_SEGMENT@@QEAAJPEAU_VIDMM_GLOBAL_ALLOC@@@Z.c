/*
 * XREFs of ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0092410
 * Callers:
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0087210 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008F690 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00FB3F8 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     LockChildPages @ 0x1C002CFB4 (LockChildPages.c)
 *     MapGpadl @ 0x1C002D074 (MapGpadl.c)
 *     UnmapGpadl @ 0x1C002D118 (UnmapGpadl.c)
 *     McTemplateK0xxqXR2_EtwWriteTransfer @ 0x1C0032EF8 (McTemplateK0xxqXR2_EtwWriteTransfer.c)
 *     ??1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ @ 0x1C0089B98 (--1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0095330 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 */

__int64 __fastcall VIDMM_SEGMENT::LockAllocationBackingStore(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // rax
  int v5; // eax
  unsigned __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rdi
  char v9; // r12
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v11; // rbx
  int v12; // ebx
  unsigned __int64 ByteCount; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  PMDL *v16; // r14
  __int64 v17; // r15
  PMDL v18; // rdi
  _QWORD *v19; // rax
  __int64 v20; // rbx
  __int64 i; // rbp
  unsigned int v22; // r14d
  __int64 *v23; // rax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 result; // rax
  enum _LOCK_OPERATION v27; // r9d
  struct _VIDMM_MDL *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rbx
  PRKPROCESS *v31; // rcx
  __int64 v32; // rax
  ADAPTER_DISPLAY *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  PMDL Mdl; // rax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rcx
  struct _VIDMM_LOCAL_ALLOC *v41; // [rsp+28h] [rbp-2F0h]
  _QWORD v42[2]; // [rsp+50h] [rbp-2C8h] BYREF
  char v43; // [rsp+60h] [rbp-2B8h]
  struct _KAPC_STATE v44; // [rsp+70h] [rbp-2A8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-278h] BYREF
  _BYTE v46[512]; // [rsp+D0h] [rbp-248h] BYREF

  v2 = *((_QWORD *)this + 1);
  memset(&ApcState, 0, sizeof(ApcState));
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 24) + 436LL) & 4) != 0 && (**((_DWORD **)a2 + 67) & 0x4000) == 0
    || (v5 = *((_DWORD *)a2 + 18), (v5 & 0x2000) != 0) )
  {
    v30 = *((_QWORD *)a2 + 11);
    if ( v30 && *(_QWORD *)(v30 + 24) )
    {
      v31 = *(PRKPROCESS **)(v30 + 8);
      memset(&v44, 0, sizeof(v44));
      KeStackAttachProcess(*v31, &v44);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v30 + 8) + 24LL) + 152LL))(
        *(_QWORD *)(*(_QWORD *)(v30 + 8) + 24LL),
        *(_QWORD *)(v30 + 24));
      KeUnstackDetachProcess(&v44);
    }
    return 0LL;
  }
  if ( *((_DWORD *)a2 + 91) )
  {
LABEL_30:
    if ( (int)++*((_DWORD *)a2 + 91) > 2 )
    {
      LOBYTE(v41) = 1;
      DxgCreateLiveDumpWithWdLogs(403LL, 2072LL, a2, 0LL, 0LL, (_DWORD)v41);
    }
    return 0LL;
  }
  if ( (v5 & 0x8000) == 0 )
  {
    if ( (**((_DWORD **)a2 + 67) & 8) == 0 )
      KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 11) + 8LL), &ApcState);
    v6 = *((_QWORD *)a2 + 1);
    v7 = *((_QWORD *)a2 + 11);
    v8 = **((_QWORD **)this + 1);
    v42[1] = v8 + 304;
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v8 + 8) )
    {
      v9 = 1;
      v43 = 1;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      ++*(_DWORD *)(v8 + 356);
      v11 = PerformanceCounter;
      v42[0] = PerformanceCounter.QuadPart;
    }
    else
    {
      v11 = (LARGE_INTEGER)v42[0];
      v9 = 0;
      v43 = 0;
    }
    if ( *(_QWORD *)(v7 + 24) )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, unsigned __int64, int, VIDMM_SEGMENT *, _BYTE))(**(_QWORD **)(*(_QWORD *)(v7 + 8) + 24LL) + 32LL))(
              *(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL),
              a2,
              0LL,
              v6,
              2,
              this,
              0);
      VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR((VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v42);
    }
    else
    {
      if ( (*((_DWORD *)a2 + 17) & 0x1000) != 0 )
        v27 = IoReadAccess;
      else
        v27 = IoModifyAccess;
      v28 = VidMmiProbeAndLockAllocation(a2, 0LL, v6, v27, this, (struct _VIDMM_LOCAL_ALLOC *)v7);
      if ( v28 )
      {
        *(_QWORD *)(v7 + 80) = v28;
        if ( v9 )
          *(_QWORD *)(v8 + 304) += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v11.QuadPart;
        v12 = 0;
      }
      else
      {
        VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR((VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v42);
        v12 = -1071775487;
      }
    }
    v15 = **((unsigned int **)a2 + 67);
    if ( (v15 & 8) == 0 )
      KeUnstackDetachProcess(&ApcState);
    if ( v12 < 0 )
    {
      _InterlockedIncrement(&dword_1C0076784);
      WdLogSingleEntry2(6LL, a2, *((_QWORD *)a2 + 1));
      DxgkLogInternalTriageEvent(*((_QWORD *)a2 + 1), 262145LL);
      return 3223191809LL;
    }
    v16 = (PMDL *)((char *)a2 + 552);
    goto LABEL_15;
  }
  v32 = *((unsigned int *)a2 + 146);
  v33 = *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 8LL) + 32LL);
  if ( (_DWORD)v32 )
  {
    v34 = *((_QWORD *)a2 + 1);
    if ( v32 != *((_QWORD *)a2 + 1) >> 12 )
    {
      WdLogSingleEntry1(1LL, 2941LL);
      DxgkLogInternalTriageEvent(v35, 0x40000LL);
      return 3221225485LL;
    }
    Mdl = IoAllocateMdl(0LL, v34, 0, 0, 0LL);
    v16 = (PMDL *)((char *)a2 + 552);
    *((_QWORD *)a2 + 69) = Mdl;
    if ( !Mdl )
    {
      WdLogSingleEntry1(1LL, 2947LL);
      DxgkLogInternalTriageEvent(v37, 0x40000LL);
      return 3221225495LL;
    }
    v38 = LockChildPages(v33);
    if ( v38 < 0 )
    {
      WdLogSingleEntry1(1LL, v38);
      DxgkLogInternalTriageEvent(v39, 0x40000LL);
      IoFreeMdl(*v16);
      result = 3221225473LL;
      *v16 = 0LL;
      return result;
    }
LABEL_15:
    v17 = 0LL;
    if ( bTracingEnabled )
    {
      v18 = 0LL;
      if ( (*((_DWORD *)a2 + 18) & 0xA000) != 0 )
      {
        v18 = *v16;
      }
      else
      {
        v19 = (_QWORD *)*((_QWORD *)a2 + 11);
        if ( v19 )
        {
          ByteCount = v19[3];
          if ( ByteCount )
          {
            v18 = (PMDL)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v19[1] + 24LL) + 88LL))(*(_QWORD *)(v19[1] + 24LL));
          }
          else
          {
            v29 = v19[10];
            if ( v29 )
              v18 = *(PMDL *)(v29 + 8);
          }
          v15 = *(_QWORD *)(*((_QWORD *)a2 + 11) + 8LL);
          v17 = *(_QWORD *)(v15 + 8);
        }
        else
        {
          v18 = *(PMDL *)(*((_QWORD *)a2 + 12) + 8LL);
        }
      }
      if ( v18 )
      {
        v20 = 0LL;
        for ( i = *((_QWORD *)a2 + 1) >> 12; (_DWORD)i; LODWORD(i) = i - v22 )
        {
          if ( (unsigned int)i >= 0x40 )
            v22 = 64;
          else
            v22 = i;
          v23 = (__int64 *)v46;
          v24 = v22;
          do
          {
            v25 = *((_QWORD *)&v18[1].Next + v20);
            v20 = (unsigned int)(v20 + 1);
            *v23++ = v25;
            --v24;
          }
          while ( v24 );
          if ( (byte_1C00769C1 & 0x10) != 0 )
          {
            LODWORD(v41) = v22;
            McTemplateK0xxqXR2_EtwWriteTransfer(v15, v25, 0LL, v17, a2, v41, v46);
          }
        }
      }
      else if ( (byte_1C00769C1 & 0x10) != 0 )
      {
        LODWORD(v41) = 0;
        McTemplateK0xxqXR2_EtwWriteTransfer(v15, ByteCount, v14, v17, a2, v41, 0LL);
      }
    }
    goto LABEL_30;
  }
  if ( !*((_QWORD *)a2 + 72) )
  {
    WdLogSingleEntry1(1LL, 2965LL);
    DxgkLogInternalTriageEvent(v40, 0x40000LL);
    return 3221225485LL;
  }
  v16 = (PMDL *)((char *)a2 + 552);
  result = MapGpadl();
  if ( (int)result >= 0 )
  {
    v14 = *((_QWORD *)a2 + 1);
    ByteCount = (*v16)->ByteCount;
    if ( ByteCount < v14 )
    {
      WdLogSingleEntry2(1LL, ByteCount, v14);
      DxgkLogInternalTriageEvent((*v16)->ByteCount, 0x40000LL);
      UnmapGpadl();
      result = 3221225485LL;
      *v16 = 0LL;
      return result;
    }
    goto LABEL_15;
  }
  return result;
}
