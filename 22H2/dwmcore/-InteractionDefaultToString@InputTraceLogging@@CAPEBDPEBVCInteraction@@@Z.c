/*
 * XREFs of ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18019E414
 * Callers:
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x18003235C (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18003272C (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180035FB0 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 *     ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x1801A1564 (-SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z.c)
 *     ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801A2100 (-TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionU.c)
 *     ?UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801A2654 (-UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x1801A6A1C (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 *     ?InputTransparencyEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x1801B110C (-InputTransparencyEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     ?MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x1801B12CC (-MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     ?BlockInteractionResolution@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@_K@Z @ 0x18020BC20 (-BlockInteractionResolution@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@_K@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::InteractionDefaultToString(const struct CInteraction *a1)
{
  const char *result; // rax
  unsigned __int8 v2; // cl
  bool v3; // zf
  const char *v4; // rcx

  if ( !a1 )
    return word_18033C020;
  v2 = *((_BYTE *)a1 + 192);
  if ( ((v2 ^ (v2 >> 1)) & 0x10) != 0 )
  {
    v3 = (v2 & 0x20) == 0;
    result = "DefaultOverride";
    v4 = "NonDefaultOverride";
  }
  else
  {
    v3 = (v2 & 0x10) == 0;
    result = "Default";
    v4 = "NonDefault";
  }
  if ( v3 )
    return v4;
  return result;
}
