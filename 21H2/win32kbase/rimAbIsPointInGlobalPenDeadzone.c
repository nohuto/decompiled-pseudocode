/*
 * XREFs of rimAbIsPointInGlobalPenDeadzone @ 0x1C0186CF0
 * Callers:
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1C0186EA0 (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0187FE0 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1C01A243C (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 *     ApiSetGetUserHandedness @ 0x1C020DA34 (ApiSetGetUserHandedness.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbIsPointInGlobalPenDeadzone(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int UserHandedness; // eax
  __int64 v11; // rcx

  v3 = 0;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *(_DWORD *)(a1 + 516) )
  {
    RIMLockExclusive((__int64)&gDeadzoneLock);
    if ( gDeviceArbitrationType == 1 )
    {
      v3 = 1;
    }
    else if ( RIMDeadzone::s_pRimDeadzoneInstance )
    {
      if ( *((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 2) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
      UserHandedness = ApiSetGetUserHandedness();
      v3 = RIMDeadzone::IsInDeadzone(v11, a2, a3, a1 + 520, a1 + 632, UserHandedness);
    }
    qword_1C029A168 = 0LL;
    ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
    KeLeaveCriticalRegion();
  }
  return v3;
}
