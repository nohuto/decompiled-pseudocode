/*
 * XREFs of ?RemoveFenceGpuData@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1C00A6218
 * Callers:
 *     ?ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1C00A610C (-ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 * Callees:
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C0001754 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0011B70 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x1C0017980 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::RemoveFenceGpuData(VIDMM_GLOBAL *this, struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // r8
  _QWORD *v6; // rax
  struct _MDL *v7; // rbx
  unsigned __int64 LogicalAddress; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v9,
    (VIDMM_GLOBAL *)((char *)this + 3832));
  v4 = (_QWORD *)((char *)a2 + 16);
  v5 = *((_QWORD *)a2 + 2);
  if ( *(struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)(v5 + 8) != (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)((char *)a2 + 16)
    || (v6 = (_QWORD *)*((_QWORD *)a2 + 3), (_QWORD *)*v6 != v4) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  if ( *((_BYTE *)this + 40181) )
  {
    v7 = (struct _MDL *)*((_QWORD *)a2 + 7);
    LogicalAddress = SysMmGetLogicalAddress(*((void *const *)a2 + 8));
    SysMmUnmapIommuRange(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), LogicalAddress, v7, 0);
  }
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v9);
  *v4 = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
}
