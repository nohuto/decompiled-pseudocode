/*
 * XREFs of ?FreeWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAU_LOOKASIDE_LIST_EX@@PEAXPEAPEAXPEAI@Z @ 0x1C000201C
 * Callers:
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0099D0C (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00B3404 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 * Callees:
 *     Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage @ 0x1C001A5BC (Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::FreeWithStore(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _LOOKASIDE_LIST_EX *a2,
        void *a3,
        void **a4,
        unsigned int *a5)
{
  __int64 v6; // rax

  v6 = *a5;
  if ( (unsigned int)v6 >= 4 )
  {
    ExFreeToLookasideListEx(a2, a3);
  }
  else
  {
    a4[v6] = a3;
    ++*a5;
  }
  if ( (unsigned int)Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage() )
    --*((_DWORD *)this + 422);
}
