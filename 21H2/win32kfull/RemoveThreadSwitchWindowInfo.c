/*
 * XREFs of RemoveThreadSwitchWindowInfo @ 0x1C0103E60
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01ED880 (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 */

struct tagSwitchWndInfo *__fastcall RemoveThreadSwitchWindowInfo(__int64 a1)
{
  struct tagSwitchWndInfo *result; // rax
  struct tagSwitchWndInfo *v2; // [rsp+38h] [rbp+10h] BYREF

  if ( gpswiFirst )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    while ( 1 )
    {
      result = gpswiFirst;
      if ( !gpswiFirst )
        break;
      v2 = gpswiFirst;
      gpswiFirst = *(struct tagSwitchWndInfo **)gpswiFirst;
      SwitchWndCleanup(&v2);
    }
  }
  return result;
}
