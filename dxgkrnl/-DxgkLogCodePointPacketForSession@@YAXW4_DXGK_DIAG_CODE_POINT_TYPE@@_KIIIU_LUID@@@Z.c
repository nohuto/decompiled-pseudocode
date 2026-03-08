/*
 * XREFs of ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0002D10
 * Callers:
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01738D4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8400 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkRegisterDwmProcess @ 0x1C01D3F70 (DxgkRegisterDwmProcess.c)
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1C01D565C (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 *     _lambda_8317567312832b51b45aaef017a7684b_::operator() @ 0x1C01D5A20 (_lambda_8317567312832b51b45aaef017a7684b_--operator().c)
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01D5B30 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C02026C4 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     _lambda_cbfcde231c2a8d1b9d404329183532d4_::operator() @ 0x1C02EF778 (_lambda_cbfcde231c2a8d1b9d404329183532d4_--operator().c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EFC88 (DxgkIddHandleSetDisplayConfig.c)
 *     DxgkIddHandleSetDisplayConfig2 @ 0x1C02F0840 (DxgkIddHandleSetDisplayConfig2.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C0309FA0 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C03A9A98 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x1C03AD644 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C03AD86C (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DxgkLogCodePointPacketForSession(
        unsigned int a1,
        unsigned __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        __int64 a6)
{
  _QWORD v11[10]; // [rsp+20h] [rbp-60h] BYREF

  memset(v11, 0, 0x48uLL);
  if ( a6 )
  {
    memset(&v11[3], 0, 20);
    HIDWORD(v11[7]) = a5;
    v11[0] = 0x480000001ELL;
    v11[8] = a6;
  }
  else
  {
    v11[0] = 0x4000000006LL;
    memset(&v11[3], 0, 20);
    HIDWORD(v11[7]) = a5;
  }
  LODWORD(v11[7]) = a4;
  v11[6] = __PAIR64__(a3, a1);
  *(_OWORD *)&v11[1] = 0LL;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v11, a2);
}
