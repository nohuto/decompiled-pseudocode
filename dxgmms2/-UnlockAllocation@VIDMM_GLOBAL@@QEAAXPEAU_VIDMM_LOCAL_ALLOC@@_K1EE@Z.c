/*
 * XREFs of ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C0089DFC
 * Callers:
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C0087F7C (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0089D40 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00A1840 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00F7CE0 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00F8B10 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C00FA934 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     UnlockChildPages @ 0x1C002D0CC (UnlockChildPages.c)
 *     UnmapGpadl @ 0x1C002D118 (UnmapGpadl.c)
 *     ??1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ @ 0x1C0089B98 (--1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ.c)
 *     ?VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z @ 0x1C008A90C (-VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z.c)
 *     ?EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z @ 0x1C00E1FE4 (-EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UnlockAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        char a6)
{
  __int64 v7; // rsi
  bool v11; // zf
  _QWORD *v12; // rbp
  bool v13; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v15; // rbx
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rdx
  LARGE_INTEGER v19[2]; // [rsp+30h] [rbp-48h] BYREF
  bool v20; // [rsp+40h] [rbp-38h]

  v7 = *(_QWORD *)this;
  v11 = KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL);
  v12 = (_QWORD *)(*(_QWORD *)this + 312LL);
  v19[1].QuadPart = (LONGLONG)v12;
  v13 = v11;
  v20 = v11;
  if ( v11 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    ++*(_DWORD *)(v7 + 360);
    v15 = PerformanceCounter;
    v19[0] = PerformanceCounter;
  }
  else
  {
    v15 = v19[0];
  }
  v16 = *(_QWORD *)a2;
  v17 = *(_DWORD *)(*(_QWORD *)a2 + 72LL);
  if ( (v17 & 0x2000) != 0 )
    goto LABEL_8;
  if ( (v17 & 0x8000) != 0 )
  {
    if ( *(_QWORD *)(v16 + 552) )
    {
      if ( *(_DWORD *)(v16 + 584) )
      {
        UnlockChildPages(*(ADAPTER_DISPLAY **)(*((_QWORD *)a2 + 1) + 32LL));
        IoFreeMdl(*(PMDL *)(v16 + 552));
      }
      else
      {
        UnmapGpadl();
      }
      *(_QWORD *)(v16 + 552) = 0LL;
    }
    goto LABEL_8;
  }
  if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 2871LL) && a6 )
    VIDMM_GLOBAL::EnsureLockedPages(this, a2, a3, a4);
  v18 = *((_QWORD *)a2 + 3);
  if ( v18 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64, unsigned __int64, char))(**(_QWORD **)(*((_QWORD *)a2 + 1) + 24LL)
                                                                                      + 40LL))(
      *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL),
      v18,
      a3,
      a4,
      a5);
LABEL_8:
    VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR((VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v19);
    return;
  }
  if ( a5 )
  {
    VidMmiUnlockAllocation(*((struct _VIDMM_MDL **)a2 + 11));
    *((_QWORD *)a2 + 11) = 0LL;
    goto LABEL_8;
  }
  VidMmiUnlockAllocation(*((struct _VIDMM_MDL **)a2 + 10));
  *((_QWORD *)a2 + 10) = 0LL;
  if ( v13 )
    *v12 += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v15.QuadPart;
}
