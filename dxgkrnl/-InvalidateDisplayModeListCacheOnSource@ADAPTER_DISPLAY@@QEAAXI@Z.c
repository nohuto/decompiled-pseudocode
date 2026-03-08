/*
 * XREFs of ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C017597C
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016A260 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pquutttq_EtwWriteTransfer @ 0x1C0041730 (McTemplateK0pquutttq_EtwWriteTransfer.c)
 */

void __fastcall ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(PERESOURCE **this, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+30h] [rbp-38h]
  __int64 v12; // [rsp+38h] [rbp-30h]
  __int64 v13; // [rsp+40h] [rbp-28h]
  int v14; // [rsp+48h] [rbp-20h]
  int v15; // [rsp+50h] [rbp-18h]

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 2971LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 2971LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)v3 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 2972LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < GetNumVidPnSources()",
      2972LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = 500 * v3;
  if ( BYTE4(this[16][500 * v3 + 139]) )
  {
    v5 = v3 + 0x80000000;
    DxgkLogCodePointPacket(0x1Cu, v5, 0, 0, *(__int64 *)((char *)this[2] + 404));
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        v15 = 0;
        v14 = 0;
        LODWORD(v13) = 0;
        LODWORD(v12) = 0;
        LOBYTE(v11) = 0;
        LOBYTE(v10) = 0;
        LODWORD(v9) = v5;
        McTemplateK0pquutttq_EtwWriteTransfer(v7, v6, v8, this, v9, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  BYTE4(this[16][v4 + 139]) = 0;
  HIDWORD(this[16][v4 + 141]) = -1;
  LODWORD(this[16][v4 + 142]) = -1;
}
