__int64 __fastcall DxgkWslWaitForSynchronizationObjectFromCpu(
        struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        void *a2)
{
  return DxgkWaitForSynchronizationObjectFromCpuInternal(a1, 1, 0LL, a2);
}
