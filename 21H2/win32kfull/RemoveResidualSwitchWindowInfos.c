/*
 * XREFs of RemoveResidualSwitchWindowInfos @ 0x1C0169590
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01F301C (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 */

struct tagSwitchWndInfo *RemoveResidualSwitchWindowInfos()
{
  struct tagSwitchWndInfo *result; // rax
  struct tagSwitchWndInfo *v1; // [rsp+30h] [rbp+8h] BYREF

  if ( gpswiFirst )
  {
    LODWORD(v1) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1220LL);
    while ( 1 )
    {
      result = gpswiFirst;
      if ( !gpswiFirst )
        break;
      v1 = gpswiFirst;
      gpswiFirst = *(struct tagSwitchWndInfo **)gpswiFirst;
      SwitchWndCleanup(&v1);
    }
  }
  return result;
}
