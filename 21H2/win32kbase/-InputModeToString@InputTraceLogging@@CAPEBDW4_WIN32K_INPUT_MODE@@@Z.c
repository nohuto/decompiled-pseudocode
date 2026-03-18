/*
 * XREFs of ?InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z @ 0x1C017E4CC
 * Callers:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C00A2060 (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     RIMSetSystemInputMode @ 0x1C00D1C3C (RIMSetSystemInputMode.c)
 *     RIMSetDeviceInputMode @ 0x1C00D2D38 (RIMSetDeviceInputMode.c)
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
