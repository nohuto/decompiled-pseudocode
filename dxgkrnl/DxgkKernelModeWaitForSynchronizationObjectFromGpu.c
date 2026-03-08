/*
 * XREFs of DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x1C034FE90
 * Callers:
 *     ?AddWaitToContext@CAdapter@@UEAAJII_K@Z @ 0x1C0078180 (-AddWaitToContext@CAdapter@@UEAAJII_K@Z.c)
 *     ?EnsureRenderFenceWait@CAdapter@@AEAAJAEA_K@Z @ 0x1C00784EC (-EnsureRenderFenceWait@CAdapter@@AEAAJAEA_K@Z.c)
 * Callees:
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C01A6278 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

__int64 __fastcall DxgkKernelModeWaitForSynchronizationObjectFromGpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *a1,
        __int64 a2,
        __int64 a3)
{
  LOBYTE(a3) = 1;
  return DxgkWaitForSynchronizationObjectFromGpuInternal(a1, 0, a3, 0LL, 1);
}
