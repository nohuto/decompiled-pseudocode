/*
 * XREFs of ?GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C006A9FC
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016F270 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?SupportHWVSync@DXGADAPTER@@QEBAEXZ @ 0x1C00017B8 (-SupportHWVSync@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDisplayOnlyDriverIgnoreMonitorFreqCheck(ADAPTER_DISPLAY *this)
{
  unsigned int v1; // ebx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  DXGADAPTER *v6; // rcx

  v1 = 0;
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 2928LL) )
  {
    WdLogSingleEntry1(1LL, 6834LL);
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
          L"GetAdapter()->IsDisplayOnlyAdapter()",
          6834LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_DWORD *)this + 108) )
    return 1LL;
  v6 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( (*((_DWORD *)v6 + 109) & 0x100) != 0 )
    return 0LL;
  LOBYTE(v1) = !DXGADAPTER::SupportHWVSync(v6);
  return v1;
}
