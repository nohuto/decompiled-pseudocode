/*
 * XREFs of IsPointerInputMessage @ 0x1C00F3132
 * Callers:
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z @ 0x1C01EBD78 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C01F375C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C01FBA30 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C02095DC (IsPointerInputMessageWithState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerInputMessage(int a1)
{
  return (unsigned int)(a1 - 577) <= 3 || (unsigned int)(a1 - 581) <= 0x12 && a1 != 589;
}
