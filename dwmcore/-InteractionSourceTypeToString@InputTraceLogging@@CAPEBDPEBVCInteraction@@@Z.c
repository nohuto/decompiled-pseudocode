/*
 * XREFs of ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18019AF34
 * Callers:
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x18003226C (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18003263C (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180035EC0 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 *     ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x18019DF94 (-SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z.c)
 *     ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18019EB2C (-TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionU.c)
 *     ?UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18019F074 (-UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x1801A343C (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 *     ?InputTransparencyEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x1801ADF1C (-InputTransparencyEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     ?MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x1801AE0CC (-MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     ?BlockInteractionResolution@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@_K@Z @ 0x1802088A0 (-BlockInteractionResolution@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@_K@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::InteractionSourceTypeToString(const struct CInteraction *a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
    return word_180338FC0;
  v2 = *((_DWORD *)a1 + 49);
  if ( !v2 )
    return "None";
  v3 = v2 - 1;
  if ( !v3 )
    return "Dmanip";
  v4 = v3 - 1;
  if ( !v4 )
    return "VisualInteractionSource";
  if ( v4 == 2 )
    return "Other";
  return "UNKNOWN";
}
