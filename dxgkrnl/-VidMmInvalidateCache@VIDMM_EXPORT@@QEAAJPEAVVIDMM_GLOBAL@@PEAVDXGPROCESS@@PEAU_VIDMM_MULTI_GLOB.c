/*
 * XREFs of ?VidMmInvalidateCache@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_VIDMM_MULTI_ALLOC@@_K4@Z @ 0x1C004745C
 * Callers:
 *     ?GetAllocationPhysicalAddress@DXGDEVICE@@QEAAJPEBVDXGADAPTERALLOCATION@@PEAT_LARGE_INTEGER@@@Z @ 0x1C02E628C (-GetAllocationPhysicalAddress@DXGDEVICE@@QEAAJPEBVDXGADAPTERALLOCATION@@PEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmInvalidateCache(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct DXGPROCESS *a3,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a4,
        struct _VIDMM_MULTI_ALLOC *a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  __int64 v8; // rdx
  __int64 v9; // r8

  v8 = 0LL;
  if ( a3 )
  {
    v9 = *((_QWORD *)a3 + 8);
    if ( v9 )
      v8 = *(_QWORD *)(v9 + 8LL * (unsigned int)(*(_DWORD *)this - 1));
  }
  return (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, __int64, struct _VIDMM_MULTI_GLOBAL_ALLOC *, struct _VIDMM_MULTI_ALLOC *, unsigned __int64, unsigned __int64))(*((_QWORD *)this + 1) + 1056LL))(
           a2,
           v8,
           a4,
           a5,
           a6,
           a7);
}
