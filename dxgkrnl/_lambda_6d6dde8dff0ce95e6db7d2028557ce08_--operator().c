char __fastcall lambda_6d6dde8dff0ce95e6db7d2028557ce08_::operator()(__int64 a1, struct DXGSWAPCHAIN **a2)
{
  struct DXGSWAPCHAIN *v3; // rcx
  __int64 v4; // rdi
  char result; // al
  struct _D3DKMT_RELEASESWAPCHAIN v6; // [rsp+50h] [rbp-48h] BYREF

  memset(&v6, 0, 0x40uLL);
  v3 = *a2;
  v6.bProducer = 1;
  v4 = (int)SwapChainReleaseInternal(v3, &v6, 0LL, 0, 1);
  result = ObfDereferenceObject(a2);
  if ( (int)v4 < 0 )
  {
    WdLogSingleEntry1(2LL, v4);
    return DxgkLogInternalTriageEvent(
             0LL,
             0x40000,
             -1,
             (__int64)L"Indirect display present failed to release a buffer with status: 0x%I64x",
             v4,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
