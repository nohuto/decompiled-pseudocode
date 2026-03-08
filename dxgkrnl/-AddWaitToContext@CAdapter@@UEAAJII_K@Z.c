/*
 * XREFs of ?AddWaitToContext@CAdapter@@UEAAJII_K@Z @ 0x1C0078180
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 *     DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x1C034FE90 (DxgkKernelModeWaitForSynchronizationObjectFromGpu.c)
 */

__int64 __fastcall CAdapter::AddWaitToContext(CAdapter *this, unsigned int a2, int a3, __int64 a4)
{
  _QWORD v7[11]; // [rsp+20h] [rbp-58h] BYREF
  int v8; // [rsp+90h] [rbp+18h] BYREF

  v8 = a3;
  memset(v7, 0, 0x50uLL);
  v7[0] = a2 | 0x100000000LL;
  v7[1] = &v8;
  v7[2] = a4;
  return DxgkKernelModeWaitForSynchronizationObjectFromGpu(v7);
}
