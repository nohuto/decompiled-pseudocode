/*
 * XREFs of ?PinAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1C00B4340
 * Callers:
 *     VidMmPinAllocation @ 0x1C0017EF0 (VidMmPinAllocation.c)
 * Callees:
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@K_KPEA_K@Z @ 0x1C00B4384 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@K_KPEA_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PinAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        unsigned int *a4,
        union _LARGE_INTEGER *a5,
        unsigned __int64 *a6)
{
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    a5->QuadPart = 0LL;
  return VIDMM_GLOBAL::PinOneAllocation(this, a2, a3, 0, 0xFFFFFFFFFFFFFFFFuLL, a6);
}
