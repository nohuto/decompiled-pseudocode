/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C0192480
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkSignalSynchronizationObjectFromGpu2Impl@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2@@PEAX@Z @ 0x1C01924A0 (-DxgkSignalSynchronizationObjectFromGpu2Impl@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpu2(
        const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2 *a1)
{
  return DxgkSignalSynchronizationObjectFromGpu2Impl(a1, 0LL);
}
