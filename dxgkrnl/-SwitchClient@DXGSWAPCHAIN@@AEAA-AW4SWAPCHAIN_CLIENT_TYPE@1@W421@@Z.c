__int64 __fastcall DXGSWAPCHAIN::SwitchClient(__int64 a1, int a2)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d

  if ( !a2 )
    return 1LL;
  if ( a2 != 1 )
  {
    WdLogSingleEntry1(1LL, 457LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v4,
          v3,
          v5,
          0LL,
          2,
          -1,
          L"Owner == SWAPCHAIN_CLIENT_TYPE_CONSUMER",
          457LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return 0LL;
}
