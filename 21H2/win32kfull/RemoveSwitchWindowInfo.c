/*
 * XREFs of RemoveSwitchWindowInfo @ 0x1C01EE4E0
 * Callers:
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     xxxNextWindow @ 0x1C01EE910 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01EF0A8 (xxxOldNextWindow.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01ED880 (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 */

void __fastcall RemoveSwitchWindowInfo(struct tagSwitchWndInfo **a1)
{
  struct tagSwitchWndInfo *v1; // rdx
  struct tagSwitchWndInfo **v2; // r8
  struct tagSwitchWndInfo *v3; // rax

  v1 = gpswiFirst;
  v2 = &gpswiFirst;
  if ( gpswiFirst )
  {
    while ( 1 )
    {
      v3 = *(struct tagSwitchWndInfo **)v1;
      if ( v1 == *a1 )
        break;
      v2 = (struct tagSwitchWndInfo **)v1;
      v1 = *(struct tagSwitchWndInfo **)v1;
      if ( !v3 )
        goto LABEL_4;
    }
    *v2 = v3;
    SwitchWndCleanup(a1);
  }
  else
  {
LABEL_4:
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
}
