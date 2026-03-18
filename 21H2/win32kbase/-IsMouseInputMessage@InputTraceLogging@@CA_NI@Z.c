/*
 * XREFs of ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C0001BAC
 * Callers:
 *     ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C000187C (-UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z @ 0x1C01C0928 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall InputTraceLogging::IsMouseInputMessage(int a1)
{
  return (unsigned int)(a1 - 512) <= 0xE || (unsigned int)(a1 - 160) <= 0xD;
}
