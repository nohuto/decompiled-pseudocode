/*
 * XREFs of ?FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C02363A8
 * Callers:
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00F6110 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C02377B8 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ShellWindowPos::FreePositionEvent(ShellWindowPos *this, struct tagQMSG *a2)
{
  __int64 v2; // rcx

  if ( *((_DWORD *)this + 8) < 2u )
  {
    v2 = *((_QWORD *)this + 5);
    if ( v2 )
      Win32FreePool(v2);
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
}
