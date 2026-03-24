/*
 * XREFs of ?InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z @ 0x1C01663C8
 * Callers:
 *     RIMSetDeviceInputMode @ 0x1C00AD280 (RIMSetDeviceInputMode.c)
 *     RIMSetSystemInputMode @ 0x1C00C2190 (RIMSetSystemInputMode.c)
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
