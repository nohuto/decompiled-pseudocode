/*
 * XREFs of IsPointerInputMessage @ 0x1C00AC3A0
 * Callers:
 *     FreeQEntry @ 0x1C0002D54 (FreeQEntry.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1C0057600 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     ?GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBWND@@_N@Z @ 0x1C0057F44 (-GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBW.c)
 *     DelQEntry @ 0x1C005BE3C (DelQEntry.c)
 *     _PostThreadMessageEx @ 0x1C00AB0F8 (_PostThreadMessageEx.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00AB408 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x1C00AC048 (-PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z.c)
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x1C00AC0C0 (-ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C00AC37C (IsPointerInputMessageWithState.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z @ 0x1C0116FD4 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z.c)
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x1C016AFAE (-HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C016B120 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?FindNodeQueuedMessageWorker@@YAPEAUtagQMSG@@PEAUtagQ@@_KHPEAPEAU2@@Z @ 0x1C016D6B6 (-FindNodeQueuedMessageWorker@@YAPEAUtagQMSG@@PEAUtagQ@@_KHPEAPEAU2@@Z.c)
 *     ?CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01DB7F4 (-CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01DBF48 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?ReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01DC1E4 (-ReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     IsMiPPointerMessage @ 0x1C01DCE34 (IsMiPPointerMessage.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01E9DA0 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     NtUserfnPOINTERINPUT @ 0x1C0203880 (NtUserfnPOINTERINPUT.c)
 *     ?CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z @ 0x1C0221E14 (-CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerInputMessage(unsigned int a1)
{
  return a1 > 0x240 && a1 < 0x258 && a1 != 589;
}
