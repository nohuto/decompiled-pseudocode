/*
 * XREFs of ?InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z @ 0x18019E480
 * Callers:
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x18003235C (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 *     ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x1801A1564 (-SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x1801A6A1C (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 *     ?InputTransparencyEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x1801B110C (-InputTransparencyEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     ?MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x1801B12CC (-MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     ?BlockInteractionResolution@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@_K@Z @ 0x18020BC20 (-BlockInteractionResolution@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@_K@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall InputTraceLogging::InteractionInputSink(const struct CInteraction *a1)
{
  void *result; // rax
  __int64 v2; // rdx

  result = 0LL;
  if ( a1 )
  {
    v2 = *((_QWORD *)a1 + 13);
    if ( v2 )
      return *(void **)(v2 + 64);
  }
  return result;
}
