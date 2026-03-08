/*
 * XREFs of ?GetVidPnSourceId@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ @ 0x1C0046B84
 * Callers:
 *     DxgkSetIndependentFlipMode @ 0x1C02D71BC (DxgkSetIndependentFlipMode.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetVidPnSourceId(
        DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  if ( !*(_DWORD *)this )
  {
    WdLogSingleEntry1(1LL, 1878LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v3,
          v2,
          v4,
          0LL,
          2,
          -1,
          L"vidPnSourceMask != 0",
          1878LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return *((unsigned int *)this + 1);
}
