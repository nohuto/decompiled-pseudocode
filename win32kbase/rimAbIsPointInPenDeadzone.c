/*
 * XREFs of rimAbIsPointInPenDeadzone @ 0x1C01A888C
 * Callers:
 *     rimAbIsPointerSuppressedByPointer @ 0x1C01A8E34 (rimAbIsPointerSuppressedByPointer.c)
 *     RIMIsPointInPenDeadzone @ 0x1C01AADC0 (RIMIsPointInPenDeadzone.c)
 *     ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@@Z @ 0x1C02065D0 (-SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAXAEBUDEVICE_OUTPUT_CONFIG.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1C01C9370 (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 *     ApiSetGetUserHandedness @ 0x1C0244CA8 (ApiSetGetUserHandedness.c)
 */

__int64 __fastcall rimAbIsPointInPenDeadzone(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r11d
  int v14; // r11d
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  int UserHandedness; // eax
  __int64 v30; // rax

  v5 = 0;
  v13 = *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 436);
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( (unsigned int)(v14 - 1) <= 1 )
      {
        v15 = SGDGetUserSessionState(v10, v9, v11, v12);
        RIMLockExclusive(v15 + 224);
        if ( *(_QWORD *)(SGDGetUserSessionState(v17, v16, v18, v19) + 448) )
        {
          v25 = *(_QWORD *)(SGDGetUserSessionState(v21, v20, v22, v23) + 448);
          if ( *(_DWORD *)(v25 + 8) != 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 39);
          v28 = *(_QWORD *)(SGDGetUserSessionState(v25, v24, v26, v27) + 448);
          UserHandedness = ApiSetGetUserHandedness();
          v5 = RIMDeadzone::IsInDeadzone(v28, a1, a2, a3, a4, UserHandedness);
        }
        v30 = SGDGetUserSessionState(v21, v20, v22, v23);
        *(_QWORD *)(v30 + 232) = 0LL;
        ExReleasePushLockExclusiveEx(v30 + 224, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      return 1;
    }
  }
  return v5;
}
