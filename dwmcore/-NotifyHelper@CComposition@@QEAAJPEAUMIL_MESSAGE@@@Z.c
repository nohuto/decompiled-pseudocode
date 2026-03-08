/*
 * XREFs of ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800EB548
 * Callers:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x1800508A8 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?ProcessRoundTripRequest@CComposition@@AEAA_NXZ @ 0x1800536A4 (-ProcessRoundTripRequest@CComposition@@AEAA_NXZ.c)
 *     ?Reset@CComposition@@UEAAXXZ @ 0x1800EB320 (-Reset@CComposition@@UEAAXXZ.c)
 *     ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x1800EB3D8 (-Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1801EC0A4 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800EB7CC (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 */

__int64 __fastcall CComposition::NotifyHelper(CComposition *this, struct MIL_MESSAGE *a2)
{
  unsigned int v2; // eax
  int v3; // ebx
  __int64 v6; // rsi
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rcx
  int v10; // edi

  v2 = *((_DWORD *)this + 142);
  v3 = 0;
  if ( v2 )
  {
    v6 = 0LL;
    v7 = v2;
    do
    {
      v8 = CChannelContext::PostMessageToChannel(*(CChannelContext **)(v6 + *((_QWORD *)this + 68)), a2);
      v10 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x8D6u, 0LL);
      if ( !v3 || v3 >= 0 && v10 < 0 )
        v3 = v10;
      v6 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  return (unsigned int)v3;
}
