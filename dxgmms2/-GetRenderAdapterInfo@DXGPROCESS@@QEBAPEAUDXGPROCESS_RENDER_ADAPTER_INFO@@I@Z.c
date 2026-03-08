/*
 * XREFs of ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1C002FF08
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008E1D0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0090130 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     VidSchQueryProcessAdapterStatistics @ 0x1C00C4B90 (VidSchQueryProcessAdapterStatistics.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

struct DXGPROCESS_RENDER_ADAPTER_INFO *__fastcall DXGPROCESS::GetRenderAdapterInfo(DXGPROCESS *this, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  v3 = a2;
  v4 = ((__int64 (*)(void))DxgCoreInterface[3])();
  if ( (unsigned int)v3 >= ((unsigned int (__fastcall *)(__int64))DxgCoreInterface[5])(v4) )
    return 0LL;
  else
    return *(struct DXGPROCESS_RENDER_ADAPTER_INFO **)(*((_QWORD *)this + 6) + 8 * v3);
}
