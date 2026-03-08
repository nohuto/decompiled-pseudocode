/*
 * XREFs of ?AllocateWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAU_LOOKASIDE_LIST_EX@@PEAPEAXPEAI@Z @ 0x1C000206C
 * Callers:
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C0096738 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0099DF0 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C00A956C (-CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 * Callees:
 *     Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage @ 0x1C001A5BC (Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage.c)
 */

PVOID __fastcall VIDMM_RECYCLE_HEAP_MGR::AllocateWithStore(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _LOOKASIDE_LIST_EX *a2,
        void **a3,
        unsigned int *a4)
{
  __int64 v5; // rax
  PVOID v6; // rbx

  if ( *a4 )
  {
    v5 = *a4 - 1;
    v6 = a3[v5];
    a3[v5] = 0LL;
    --*a4;
  }
  else
  {
    v6 = ExAllocateFromLookasideListEx(a2);
  }
  if ( (unsigned int)Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage(this, a2) && v6 )
    ++*((_DWORD *)this + 422);
  return v6;
}
