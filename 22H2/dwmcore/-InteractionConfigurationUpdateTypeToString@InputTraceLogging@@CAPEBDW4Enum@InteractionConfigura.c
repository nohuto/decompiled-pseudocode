/*
 * XREFs of ?InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigurationUpdateType@@@Z @ 0x18019E3E8
 * Callers:
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180035FB0 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 *     ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1801A2100 (-TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionU.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::InteractionConfigurationUpdateTypeToString(int a1)
{
  if ( !a1 )
    return "SupportedConfigurations";
  if ( a1 == 1 )
    return "ProhibitedDescendantConfigurations";
  return "UNKNOWN";
}
