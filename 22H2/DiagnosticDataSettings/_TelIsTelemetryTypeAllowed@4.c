/*
 * XREFs of _TelIsTelemetryTypeAllowed@4 @ 0x10002320
 * Callers:
 *     <none>
 * Callees:
 *     _TelGetAllAllowedTelemetryTypes@4 @ 0x10002360 (_TelGetAllAllowedTelemetryTypes@4.c)
 */

BOOL __stdcall TelIsTelemetryTypeAllowed(int a1)
{
  int AllAllowedTelemetryTypes; // ecx
  int v3; // [esp+0h] [ebp-4h] BYREF

  v3 = 0;
  AllAllowedTelemetryTypes = TelGetAllAllowedTelemetryTypes(&v3);
  if ( AllAllowedTelemetryTypes >= 0 )
    return (a1 & v3) != a1;
  return AllAllowedTelemetryTypes;
}
