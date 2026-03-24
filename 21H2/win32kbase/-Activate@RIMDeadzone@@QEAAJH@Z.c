/*
 * XREFs of ?Activate@RIMDeadzone@@QEAAJH@Z @ 0x1C016DF68
 * Callers:
 *     RIMActivatePointerDeviceDeadzone @ 0x1C015A320 (RIMActivatePointerDeviceDeadzone.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMDeadzone::Activate(RIMDeadzone *this, int a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *((_DWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 510);
  if ( *((_DWORD *)this + 4) )
    *((_DWORD *)this + 10) = a2;
  else
    return (unsigned int)-1073741823;
  return v2;
}
