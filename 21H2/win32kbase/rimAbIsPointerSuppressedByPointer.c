/*
 * XREFs of rimAbIsPointerSuppressedByPointer @ 0x1C018724C
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0187010 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 * Callees:
 *     rimAbIsPointInPenDeadzone @ 0x1C0186DCC (rimAbIsPointInPenDeadzone.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall rimAbIsPointerSuppressedByPointer(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4, char a5)
{
  __int64 v9; // rdx
  int v10; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx

  if ( !gDeviceArbitrationType )
    return 0;
  v9 = *a2;
  v10 = *a4;
  if ( (_DWORD)v9 == *a4 )
    return 0;
  if ( (_DWORD)v9 != 5 )
  {
    if ( v10 == 5 )
      return 0;
    if ( (a2[3] & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v9, a3);
    if ( (a4[3] & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v9, a3);
    if ( *a2 - 2 > 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v9, a3);
    v12 = *a4;
    if ( *a4 != 3 && *a4 != 2 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v9, a3);
      v12 = *a4;
    }
    if ( *a2 == (_DWORD)v12 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v9, a3);
    v13 = (unsigned int)(gDeviceArbitrationType - 1);
    if ( gDeviceArbitrationType == 1 )
    {
      if ( *a2 != 2 )
      {
        if ( *a2 != 3 )
LABEL_43:
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v9, a3);
        return 0;
      }
      if ( *a4 != 3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v9, a3);
    }
    else
    {
      v13 = (unsigned int)(gDeviceArbitrationType - 2);
      if ( gDeviceArbitrationType != 2 )
      {
        if ( gDeviceArbitrationType != 3 )
          goto LABEL_43;
        if ( *a2 == 2 )
        {
          if ( *a4 != 3 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v9, a3);
          return (unsigned int)rimAbIsPointInPenDeadzone(a1, (__int64)a2, a3, (__int64)a4) != 0;
        }
        if ( *a2 != 3 )
          goto LABEL_43;
        return 0;
      }
      if ( *a2 != 2 )
      {
        if ( *a2 != 3 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v9, a3);
        if ( *a4 != 2 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v9, a3);
        if ( (a2[3] & 4) == 0 )
          return (unsigned int)rimAbIsPointInPenDeadzone(a3, (__int64)a4, a1, (__int64)a2) == 0;
        return 0;
      }
      if ( *a4 != 3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v9, a3);
      if ( (a4[3] & 4) == 0 )
        return (unsigned int)rimAbIsPointInPenDeadzone(a1, (__int64)a2, a3, (__int64)a4) != 0;
    }
    return 1;
  }
  if ( v10 == 5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v9, a3);
  return a5 ^ 1;
}
