/*
 * XREFs of VidMmReserveGpuVirtualAddress @ 0x1C0011950
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C00A66D8 (-VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEA.c)
 */

__int64 __fastcall VidMmReserveGpuVirtualAddress(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct D3DDDI_RESERVEGPUVIRTUALADDRESS *a4)
{
  __int64 v4; // rax
  struct VIDMM_PROCESS *v5; // rdx

  v4 = *(_QWORD *)(a2 + 64);
  v5 = 0LL;
  if ( v4 )
    v5 = *(struct VIDMM_PROCESS **)(v4 + 8);
  return VIDMM_GLOBAL::VidMmReserveGpuVirtualAddress(a1, v5, a3, a4);
}
