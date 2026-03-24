/*
 * XREFs of ?FillAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C00638A8
 * Callers:
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C0064460 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C00638EC (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        __int64 a4,
        struct VIDMM_SEGMENT *a5,
        union _LARGE_INTEGER *a6)
{
  struct _VIDMM_GLOBAL_ALLOC *v7; // r8
  unsigned int v8; // edx
  unsigned int v9; // [rsp+20h] [rbp-28h]

  v7 = a2;
  if ( a2 )
  {
    v8 = *((_DWORD *)a2 + 19) & 0x3F;
  }
  else
  {
    v7 = 0LL;
    v8 = 0;
  }
  VIDMM_GLOBAL::FillAllocationInternal(this, v8, v7, a3, v9, a5, a6);
}
