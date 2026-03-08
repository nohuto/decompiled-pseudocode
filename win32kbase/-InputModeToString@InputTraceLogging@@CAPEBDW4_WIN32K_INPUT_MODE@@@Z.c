/*
 * XREFs of ?InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z @ 0x1C019FE1C
 * Callers:
 *     RIMSetDeviceInputMode @ 0x1C00BC07C (RIMSetDeviceInputMode.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C00BC24C (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     RIMSetSystemInputMode @ 0x1C00BD984 (RIMSetSystemInputMode.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::InputModeToString(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return "Enabled";
  v1 = a1 - 1;
  if ( !v1 )
    return "Suppressed";
  if ( v1 == 1 )
    return "Filtered";
  return "UNKNOWN";
}
