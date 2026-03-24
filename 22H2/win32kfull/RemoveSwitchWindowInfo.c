/*
 * XREFs of RemoveSwitchWindowInfo @ 0x1C01F3720
 * Callers:
 *     xxxFreeWindow @ 0x1C007A720 (xxxFreeWindow.c)
 *     xxxNextWindow @ 0x1C01F3B6C (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F43B0 (xxxOldNextWindow.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01F2A5C (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 */

void __fastcall RemoveSwitchWindowInfo(struct tagBWL ***a1)
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
      if ( v1 == (struct tagSwitchWndInfo *)*a1 )
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
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 1205);
  }
}
