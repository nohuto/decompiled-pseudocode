__int64 __fastcall DxgkCddSignalSynchronizationObjectFromGpu(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *a1,
        __int64 a2,
        __int64 a3)
{
  return DxgkSignalSynchronizationObjectFromGpuInternal(a1, 0, a3);
}
