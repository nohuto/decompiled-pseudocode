__int64 __fastcall DxgkKernelModeWaitForSynchronizationObjectFromGpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *a1,
        __int64 a2,
        __int64 a3)
{
  LOBYTE(a3) = 1;
  return DxgkWaitForSynchronizationObjectFromGpuInternal(a1, 0, a3, 0LL, 1);
}
