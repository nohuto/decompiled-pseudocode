/*
 * XREFs of ?DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@Keyboard@1@@Z @ 0x1C01A1F98
 * Callers:
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01A1F34 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::DropReasonToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  if ( a1 <= 5 )
  {
    if ( a1 == 5 )
      return "RawInputMode";
    if ( !a1 )
      return "UIPI";
    v1 = a1 - 1;
    if ( !v1 )
      return "InputSuppressed";
    v2 = v1 - 1;
    if ( !v2 )
      return "InputBlocked";
    v3 = v2 - 1;
    if ( !v3 )
      return "KeyboardHook";
    if ( v3 == 1 )
      return "AltTabCancel";
    return "UNKNOWN";
  }
  v5 = a1 - 6;
  if ( !v5 )
    return "SAS";
  v6 = v5 - 1;
  if ( !v6 )
    return "Beep";
  v7 = v6 - 1;
  if ( !v7 )
    return "MapScancode";
  v8 = v7 - 1;
  if ( !v8 )
    return "NoVKey";
  if ( v8 != 1 )
    return "UNKNOWN";
  return "RemoteWinKey";
}
