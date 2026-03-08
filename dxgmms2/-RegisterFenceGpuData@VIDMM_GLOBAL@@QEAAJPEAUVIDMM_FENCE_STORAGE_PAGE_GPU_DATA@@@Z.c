/*
 * XREFs of ?RegisterFenceGpuData@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1C00A64DC
 * Callers:
 *     ?AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C00A640C (-AllocateStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 * Callees:
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C0001754 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0011B70 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x1C0017980 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::RegisterFenceGpuData(VIDMM_GLOBAL *this, struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *a2)
{
  VIDMM_GLOBAL **v4; // rdx
  VIDMM_GLOBAL *v5; // rax
  struct _MDL *v7; // rbx
  unsigned __int64 LogicalAddress; // rax
  int v9; // eax
  unsigned int v10; // ebx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v11,
    (VIDMM_GLOBAL *)((char *)this + 3832));
  if ( *((_BYTE *)this + 40181)
    && (v7 = (struct _MDL *)*((_QWORD *)a2 + 7),
        LogicalAddress = SysMmGetLogicalAddress(*((void *const *)a2 + 8)),
        v9 = SysMmMapIommuRange(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), LogicalAddress, v7, 0),
        v10 = v9,
        v9 < 0) )
  {
    WdLogSingleEntry1(3LL, v9);
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v11);
    return v10;
  }
  else
  {
    v4 = (VIDMM_GLOBAL **)*((_QWORD *)this + 476);
    v5 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)((char *)a2 + 16);
    if ( *v4 != (VIDMM_GLOBAL *)((char *)this + 3800) )
      __fastfail(3u);
    *(_QWORD *)v5 = (char *)this + 3800;
    *((_QWORD *)a2 + 3) = v4;
    *v4 = v5;
    *((_QWORD *)this + 476) = v5;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v11);
    return 0LL;
  }
}
