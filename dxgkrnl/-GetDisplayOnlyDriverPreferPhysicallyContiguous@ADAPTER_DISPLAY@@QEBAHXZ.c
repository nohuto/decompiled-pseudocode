/*
 * XREFs of ?GetDisplayOnlyDriverPreferPhysicallyContiguous@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C00459FC
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018DC00 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDisplayOnlyDriverPreferPhysicallyContiguous(ADAPTER_DISPLAY *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 2928LL) )
  {
    WdLogSingleEntry1(1LL, 6822LL);
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
          L"GetAdapter()->IsDisplayOnlyAdapter()",
          6822LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return *((unsigned int *)this + 109);
}
