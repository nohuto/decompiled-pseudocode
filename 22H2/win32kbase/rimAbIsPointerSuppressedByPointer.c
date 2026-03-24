/*
 * XREFs of rimAbIsPointerSuppressedByPointer @ 0x1C0158FF8
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0158D94 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C0158B14 (rimAbIsPointInPenDeadzone.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByPointer(__int128 *a1, int *a2, int *a3, int a4)
{
  unsigned int v4; // ebx
  int v9; // edx
  int v10; // eax
  bool v11; // zf
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int128 v19; // [rsp+20h] [rbp-10h] BYREF

  v4 = 0;
  if ( (a2[3] & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 196);
  if ( (a3[3] & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 197);
  if ( !gDeviceArbitrationType )
    return 0LL;
  v9 = *a2;
  v10 = *a3;
  if ( *a2 == *a3 )
    return 0LL;
  if ( v9 == 5 )
  {
    if ( v10 == 5 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 215);
    v11 = a4 == 0;
    goto LABEL_11;
  }
  if ( v10 == 5 )
    return 0LL;
  if ( v9 != 3 && v9 != 2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 229);
    v10 = *a3;
  }
  v13 = v10;
  if ( v10 != 3 && v10 != 2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 230);
    v13 = *a3;
  }
  if ( *a2 == v13 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 231);
  if ( gDeviceArbitrationType == 1 )
  {
    if ( *a2 != 2 )
    {
      if ( *a2 != 3 )
      {
        v14 = 245;
        goto LABEL_47;
      }
      return 0LL;
    }
    if ( *a3 != 3 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 240);
    return 1LL;
  }
  if ( gDeviceArbitrationType == 2 )
  {
    if ( *a2 != 2 )
    {
      if ( *a2 != 3 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 271);
      if ( *a3 != 2 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 272);
      if ( (a2[3] & 4) == 0 )
      {
        v17 = *((_QWORD *)a2 + 5);
        v18 = *((_QWORD *)a3 + 5);
        v19 = *a1;
        v11 = (unsigned int)rimAbIsPointInPenDeadzone(&v19, v18, v17) == 0;
LABEL_11:
        LOBYTE(v4) = v11;
        return v4;
      }
      return 0LL;
    }
    if ( *a3 != 3 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 254);
    if ( (a3[3] & 4) == 0 )
    {
LABEL_34:
      v15 = *((_QWORD *)a3 + 5);
      v16 = *((_QWORD *)a2 + 5);
      v19 = *a1;
      return rimAbIsPointInPenDeadzone(&v19, v16, v15);
    }
    return 1LL;
  }
  if ( gDeviceArbitrationType != 3 )
  {
    v14 = 311;
LABEL_47:
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, v14);
    return 0LL;
  }
  if ( *a2 == 2 )
  {
    if ( *a3 != 3 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 293);
    goto LABEL_34;
  }
  if ( *a2 != 3 )
  {
    v14 = 303;
    goto LABEL_47;
  }
  return 0LL;
}
