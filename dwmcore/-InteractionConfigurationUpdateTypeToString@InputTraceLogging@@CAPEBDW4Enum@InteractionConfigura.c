/*
 * XREFs of ?InteractionConfigurationUpdateTypeToString@InputTraceLogging@@CAPEBDW4Enum@InteractionConfigurationUpdateType@@@Z @ 0x18019AE0C
 * Callers:
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180035EC0 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 *     ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18019EB2C (-TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionU.c)
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
