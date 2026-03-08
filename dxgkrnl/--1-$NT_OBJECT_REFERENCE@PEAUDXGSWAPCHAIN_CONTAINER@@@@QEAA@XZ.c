/*
 * XREFs of ??1?$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ @ 0x1C01D59EC
 * Callers:
 *     DxgkDispMgrOperation @ 0x1C01D5490 (DxgkDispMgrOperation.c)
 *     ?GetClientSurfacePhysicalAddress@DXGSWAPCHAIN@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C03532FC (-GetClientSurfacePhysicalAddress@DXGSWAPCHAIN@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     DxgkGetSwapChainSurfacePhysicalAddress @ 0x1C0357700 (DxgkGetSwapChainSurfacePhysicalAddress.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(
        void **a1)
{
  void *v2; // rcx
  LONG_PTR result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = ObfDereferenceObjectWithTag(v2, 0x4B677844u);
    *a1 = 0LL;
  }
  return result;
}
