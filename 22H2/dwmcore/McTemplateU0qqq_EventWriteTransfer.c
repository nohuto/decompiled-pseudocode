/*
 * XREFs of McTemplateU0qqq_EventWriteTransfer @ 0x18012DF20
 * Callers:
 *     ?ProcessBatches@CComposition@@IEAAJXZ @ 0x18004FCE0 (-ProcessBatches@CComposition@@IEAAJXZ.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x180050DFC (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x1800CE198 (-UpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 *     ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x180101798 (-Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUta.c)
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x18010A9E0 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x1801DD1F4 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z.c)
 *     ?CheckCustomPresentDuration@CDirectFlipInfo@@IEAA_NXZ @ 0x1801F6EF0 (-CheckCustomPresentDuration@CDirectFlipInfo@@IEAA_NXZ.c)
 *     ?Present@CLegacyStereoSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1802A0350 (-Present@CLegacyStereoSwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std.c)
 * Callees:
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A28E4 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0qqq_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _BYTE v6[16]; // [rsp+30h] [rbp-50h] BYREF
  int *v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  int *v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  char *v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+A0h] [rbp+20h] BYREF
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v13 = a3;
  v7 = &v13;
  v8 = 4LL;
  v9 = &v14;
  v11 = &a5;
  v10 = 4LL;
  v12 = 4LL;
  return McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, a2, a3, 4LL, v6);
}
