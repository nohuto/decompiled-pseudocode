/*
 * XREFs of ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C00AC168
 * Callers:
 *     ?GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBWND@@_N@Z @ 0x1C0057F44 (-GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBW.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00AB408 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x1C00AC048 (-PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z.c)
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x1C00AC0C0 (-ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00AD9D0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z @ 0x1C0116FD4 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z.c)
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x1C016AFAE (-HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 *     ?CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01DB7F4 (-CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?ReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01DC1E4 (-ReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z @ 0x1C0221E14 (-CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall InputTraceLogging::IsMouseInputMessage(int a1)
{
  return (unsigned int)(a1 - 512) <= 0xE || (unsigned int)(a1 - 160) <= 0xD;
}
