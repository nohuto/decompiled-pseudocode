/*
 * XREFs of rimAbIsPointInGlobalPenDeadzone @ 0x1C01A8710
 * Callers:
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1C01A89E4 (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C01A9D04 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1C01C9370 (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 *     ApiSetGetUserHandedness @ 0x1C0244CA8 (ApiSetGetUserHandedness.c)
 */

__int64 __fastcall rimAbIsPointInGlobalPenDeadzone(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int UserHandedness; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax

  v5 = 0;
  if ( !*(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 436) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 77);
  if ( *(_DWORD *)(a1 + 492) )
  {
    v12 = SGDGetUserSessionState(v9, v8, v10, v11);
    RIMLockExclusive(v12 + 224);
    if ( *(_DWORD *)(SGDGetUserSessionState(v14, v13, v15, v16) + 436) == 1 )
    {
      v5 = 1;
    }
    else if ( *(_QWORD *)(SGDGetUserSessionState(v18, v17, v19, v20) + 448) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(SGDGetUserSessionState(v18, v17, v19, v20) + 448) + 8LL) != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 90);
      UserHandedness = ApiSetGetUserHandedness();
      v26 = SGDGetUserSessionState(v23, v22, v24, v25);
      v5 = RIMDeadzone::IsInDeadzone(*(_QWORD *)(v26 + 448), a2, a3, a1 + 496, a1 + 608, UserHandedness);
    }
    v27 = SGDGetUserSessionState(v18, v17, v19, v20);
    *(_QWORD *)(v27 + 232) = 0LL;
    ExReleasePushLockExclusiveEx(v27 + 224, 0LL);
    KeLeaveCriticalRegion();
  }
  return v5;
}
