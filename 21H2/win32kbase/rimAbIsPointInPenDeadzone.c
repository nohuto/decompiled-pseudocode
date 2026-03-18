/*
 * XREFs of rimAbIsPointInPenDeadzone @ 0x1C0186DCC
 * Callers:
 *     ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@@Z @ 0x1C00DC800 (-SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAXAEBUDEVICE_OUTPUT_CONFIG.c)
 *     rimAbIsPointerSuppressedByPointer @ 0x1C018724C (rimAbIsPointerSuppressedByPointer.c)
 *     RIMIsPointInPenDeadzone @ 0x1C0188E60 (RIMIsPointInPenDeadzone.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1C01A243C (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 *     ApiSetGetUserHandedness @ 0x1C020DA34 (ApiSetGetUserHandedness.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbIsPointInPenDeadzone(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int UserHandedness; // eax
  __int64 v13; // rcx

  v4 = 0;
  if ( gDeviceArbitrationType )
  {
    if ( gDeviceArbitrationType == 1 )
    {
      return 1;
    }
    else if ( (unsigned int)(gDeviceArbitrationType - 2) <= 1 )
    {
      RIMLockExclusive((__int64)&gDeadzoneLock);
      if ( RIMDeadzone::s_pRimDeadzoneInstance )
      {
        if ( *((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 2) != 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
        UserHandedness = ApiSetGetUserHandedness();
        v4 = RIMDeadzone::IsInDeadzone(v13, a1, a2, a3, a4, UserHandedness);
      }
      qword_1C029A168 = 0LL;
      ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  return v4;
}
