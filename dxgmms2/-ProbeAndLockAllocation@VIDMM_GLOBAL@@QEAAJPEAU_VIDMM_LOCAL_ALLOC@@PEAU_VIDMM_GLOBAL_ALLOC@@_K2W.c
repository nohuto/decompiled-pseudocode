/*
 * XREFs of ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0088014
 * Callers:
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C0087F7C (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0098120 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEA.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00A1840 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00F7700 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00F8190 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ??0VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@PEAT_LARGE_INTEGER@@PEAI_N@Z @ 0x1C00880DC (--0VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@PEAT_LARGE_INTEGER@@PEAI_N@Z.c)
 *     ??1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ @ 0x1C0089B98 (--1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0095330 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProbeAndLockAllocation(
        union _LARGE_INTEGER **this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        enum _LOCK_OPERATION a6,
        struct VIDMM_SEGMENT *a7,
        unsigned __int8 a8)
{
  struct _VIDMM_MDL *v11; // rax
  unsigned int v12; // ebx
  _BYTE v14[40]; // [rsp+40h] [rbp-28h] BYREF

  VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR(
    (VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v14,
    *this + 38,
    (unsigned int *)&(*this)[44].HighPart,
    KeGetCurrentThread() == (struct _KTHREAD *)(*this)[1].QuadPart);
  if ( *((_QWORD *)a2 + 3) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, int, struct VIDMM_SEGMENT *, unsigned __int8))(**(_QWORD **)(*((_QWORD *)a2 + 1) + 24LL) + 32LL))(
            *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL),
            a3,
            a4,
            a5,
            2,
            a7,
            a8);
  }
  else
  {
    v11 = VidMmiProbeAndLockAllocation(
            a3,
            a4,
            a5,
            (enum _LOCK_OPERATION)(~(unsigned __int8)(*((_DWORD *)a3 + 17) >> 11) & 2),
            a7,
            a2);
    if ( v11 )
    {
      if ( a8 )
        *((_QWORD *)a2 + 11) = v11;
      else
        *((_QWORD *)a2 + 10) = v11;
      v12 = 0;
    }
    else
    {
      v12 = -1071775487;
    }
  }
  VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR((VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v14);
  return v12;
}
