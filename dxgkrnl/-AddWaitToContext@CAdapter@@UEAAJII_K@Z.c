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
