/*
 * XREFs of IsPointerInputMessage @ 0x1C00E4CA2
 * Callers:
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z @ 0x1C01BCEB4 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C01C48FC (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C01CCC30 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C01DA82C (IsPointerInputMessageWithState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerInputMessage(int a1)
{
  return (unsigned int)(a1 - 577) <= 3 || (unsigned int)(a1 - 581) <= 0x12 && a1 != 589;
}
