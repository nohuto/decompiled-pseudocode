/*
 * XREFs of ?GetDisplayOnlyDriverPrecisePresentRegionPreference@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0045964
 * Callers:
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01A4B90 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDisplayOnlyDriverPrecisePresentRegionPreference(ADAPTER_DISPLAY *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 2928LL) )
  {
    WdLogSingleEntry1(1LL, 6810LL);
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
          6810LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return *((unsigned int *)this + 105);
}
