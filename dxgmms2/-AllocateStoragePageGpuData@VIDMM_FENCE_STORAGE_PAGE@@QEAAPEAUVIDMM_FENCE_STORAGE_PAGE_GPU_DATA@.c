/*
 * XREFs of ?AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C00A640C
 * Callers:
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C00AB020 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 * Callees:
 *     ?SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z @ 0x1C00023F0 (-SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x1C002CA20 (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     ?RegisterFenceGpuData@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1C00A64DC (-RegisterFenceGpuData@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z.c)
 */

struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *__fastcall VIDMM_FENCE_STORAGE_PAGE::AllocateStoragePageGpuData(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2)
{
  __int64 Pool2; // rax
  _QWORD *v5; // rbx
  void **v6; // r9
  _QWORD *v7; // rax
  __int64 v8; // rax
  int LogicalMemory; // eax
  VIDMM_FENCE_STORAGE_PAGE **v10; // rcx
  __int64 v12; // rcx
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *v13; // rdx

  Pool2 = ExAllocatePool2(64LL, 80LL, 1700882774LL);
  v5 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    _InterlockedIncrement(&dword_1C00768E8);
    WdLogSingleEntry1(6LL, 707LL);
    DxgkLogInternalTriageEvent(v12, 262145LL);
    return 0LL;
  }
  *(_DWORD *)(Pool2 + 72) = 0;
  v6 = (void **)(Pool2 + 64);
  v7 = (_QWORD *)(Pool2 + 32);
  v5[6] = a2;
  v7[1] = v7;
  *v7 = v7;
  v8 = *((_QWORD *)this + 15);
  v5[7] = v8;
  LogicalMemory = SysMmAllocateLogicalMemory(
                    *(struct SYSMM_ADAPTER **)(*((_QWORD *)a2 + 3) + 224LL),
                    *(unsigned int *)(v8 + 40),
                    this,
                    v6);
  if ( LogicalMemory < 0
    || (LogicalMemory = VIDMM_GLOBAL::RegisterFenceGpuData(a2, (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)v5),
        LogicalMemory < 0) )
  {
    WdLogSingleEntry1(3LL, LogicalMemory);
    v13 = (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v5[8];
    if ( v13 )
      SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*((_QWORD *)a2 + 3) + 224LL), v13);
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  v10 = (VIDMM_FENCE_STORAGE_PAGE **)*((_QWORD *)this + 8);
  if ( *v10 != (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 56) )
    __fastfail(3u);
  *v5 = (char *)this + 56;
  v5[1] = v10;
  *v10 = (VIDMM_FENCE_STORAGE_PAGE *)v5;
  *((_QWORD *)this + 8) = v5;
  return (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)v5;
}
