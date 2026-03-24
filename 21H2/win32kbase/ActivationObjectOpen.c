/*
 * XREFs of ActivationObjectOpen @ 0x1C0127FA4
 * Callers:
 *     ActivationObjectCallout @ 0x1C00B1CFC (ActivationObjectCallout.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall ActivationObjectOpen(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // ebx
  int ProcessSessionId; // eax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  if ( ObGetObjectType(v1) != ExActivationObjectType )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 486);
  if ( !*(_QWORD *)(v1 + 48) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 488);
  if ( *(_WORD *)(a1 + 24) )
  {
    if ( !(unsigned __int8)PsIsSystemProcess(*(_QWORD *)(a1 + 8)) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(*(_QWORD *)(a1 + 8));
      if ( ProcessSessionId == -1 || ProcessSessionId != *(_DWORD *)v1 )
        return (unsigned int)-1073741790;
    }
  }
  return v3;
}
