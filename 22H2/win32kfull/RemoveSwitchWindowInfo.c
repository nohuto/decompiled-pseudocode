/*
 * XREFs of RemoveSwitchWindowInfo @ 0x1C01CA0C0
 * Callers:
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 *     xxxNextWindow @ 0x1C01CA504 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01CACD8 (xxxOldNextWindow.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01C9428 (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
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
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTellMeIf", 0x20000, 1207);
  }
}
