/*
 * XREFs of rimAbIsPointerSuppressedByPointer @ 0x1C01A8E34
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C01A8B98 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C01A888C (rimAbIsPointInPenDeadzone.c)
 */

char __fastcall rimAbIsPointerSuppressedByPointer(__int64 a1, unsigned int *a2, __int64 a3, int *a4, char a5)
{
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  __int64 v15; // rax
  int v16; // r8d

  if ( !*(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 436) )
    return 0;
  v12 = *a2;
  v13 = *a4;
  if ( (_DWORD)v12 == *a4 )
    return 0;
  if ( (_DWORD)v12 != 5 )
  {
    if ( v13 == 5 )
      return 0;
    if ( (a2[3] & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 230);
    if ( (a4[3] & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 231);
    if ( *a2 - 2 > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 232);
    if ( (unsigned int)(*a4 - 2) > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 233);
    if ( *a2 == *a4 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 234);
    v15 = SGDGetUserSessionState(v9, v12, v10, v11);
    switch ( *(_DWORD *)(v15 + 436) )
    {
      case 1:
        if ( *a2 != 2 )
        {
          if ( *a2 != 3 )
          {
            v16 = 248;
            goto LABEL_44;
          }
          return 0;
        }
        if ( *a4 != 3 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 243);
        break;
      case 2:
        if ( *a2 != 2 )
        {
          if ( *a2 != 3 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 275);
          if ( *a4 != 2 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 276);
          if ( (a2[3] & 4) == 0 )
            return (unsigned int)rimAbIsPointInPenDeadzone(a3, (__int64)a4, a1, (__int64)a2) == 0;
          return 0;
        }
        if ( *a4 != 3 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 257);
        if ( (a4[3] & 4) == 0 )
          return (unsigned int)rimAbIsPointInPenDeadzone(a1, (__int64)a2, a3, (__int64)a4) != 0;
        break;
      case 3:
        if ( *a2 == 2 )
        {
          if ( *a4 != 3 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 298);
          return (unsigned int)rimAbIsPointInPenDeadzone(a1, (__int64)a2, a3, (__int64)a4) != 0;
        }
        if ( *a2 != 3 )
        {
          v16 = 309;
          goto LABEL_44;
        }
        return 0;
      default:
        v16 = 317;
LABEL_44:
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v16);
        return 0;
    }
    return 1;
  }
  if ( v13 == 5 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 216);
  return a5 ^ 1;
}
