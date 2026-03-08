/*
 * XREFs of DxgkWslSignalSynchronizationObjectFromGpu2 @ 0x1C034FEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkSignalSynchronizationObjectFromGpu2Impl@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2@@PEAX@Z @ 0x1C01924A0 (-DxgkSignalSynchronizationObjectFromGpu2Impl@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2.c)
 */

__int64 __fastcall DxgkWslSignalSynchronizationObjectFromGpu2(
        const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2 *a1,
        void *a2,
        __int64 a3)
{
  return DxgkSignalSynchronizationObjectFromGpu2Impl(a1, a2, a3);
}
