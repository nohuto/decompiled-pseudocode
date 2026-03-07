__int64 __fastcall DxgkWslSignalSynchronizationObjectFromGpu2(
        const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2 *a1,
        void *a2,
        __int64 a3)
{
  return DxgkSignalSynchronizationObjectFromGpu2Impl(a1, a2, a3);
}
