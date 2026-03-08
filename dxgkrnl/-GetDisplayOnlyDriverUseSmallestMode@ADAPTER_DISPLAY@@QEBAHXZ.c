/*
 * XREFs of ?GetDisplayOnlyDriverUseSmallestMode@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C006AAC0
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016F270 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDisplayOnlyDriverUseSmallestMode(ADAPTER_DISPLAY *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 2928LL) )
  {
    WdLogSingleEntry1(1LL, 6816LL);
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
          6816LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return *((unsigned int *)this + 106);
}
