/*
 * XREFs of ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0002C44
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C01732D0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C01D7400 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall ADAPTER_DISPLAY::SetCddInterface(
        DXGADAPTER **this,
        unsigned int a2,
        const struct _CDDDXGK_INTERFACE *const a3)
{
  __int64 v4; // rdi
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 6220LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v7,
          v6,
          v8,
          0,
          2,
          -1,
          (__int64)L"IsCoreResourceSharedOwner()",
          76,
          0,
          0,
          0,
          0);
    }
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 6221LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v10,
          v9,
          v11,
          0,
          2,
          -1,
          (__int64)L"VidPnSourceId < m_NumVidPnSources",
          77,
          0,
          0,
          0,
          0);
    }
  }
  *((_QWORD *)this[16] + 500 * v4 + 10) = a3;
}
