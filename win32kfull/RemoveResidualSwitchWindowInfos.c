/*
 * XREFs of RemoveResidualSwitchWindowInfos @ 0x1C012E7C0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01CA528 (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 */

struct tagSwitchWndInfo *RemoveResidualSwitchWindowInfos()
{
  struct tagSwitchWndInfo *result; // rax
  struct tagSwitchWndInfo *v1; // [rsp+30h] [rbp+8h] BYREF

  if ( gpswiFirst )
  {
    LODWORD(v1) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1221LL);
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
