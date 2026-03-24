/*
 * XREFs of NVMeControllerInitPart3 @ 0x1C000E014
 * Callers:
 *     NVMeHwInitialize @ 0x1C000AD80 (NVMeHwInitialize.c)
 *     NVMeHwPassiveInitialize @ 0x1C000AE40 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerPowerUp @ 0x1C000E398 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000E684 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0018290 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C000A6FC (NVMeControllerStartFailureEventLog.c)
 *     NVMeEnableThrottling @ 0x1C000E9A8 (NVMeEnableThrottling.c)
 *     NVMeLogEtwControllerInfo @ 0x1C000F098 (NVMeLogEtwControllerInfo.c)
 *     NVMeLogTelemetryControllerInfo @ 0x1C000F6F0 (NVMeLogTelemetryControllerInfo.c)
 *     NVMeStartAsyncEventCommands @ 0x1C0010C18 (NVMeStartAsyncEventCommands.c)
 *     NVMeConfigAsyncEvent @ 0x1C0018014 (NVMeConfigAsyncEvent.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C0018FC8 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C0019218 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetTemperatureThreshold @ 0x1C0019654 (NVMeGetTemperatureThreshold.c)
 *     NVMeSyncHostTime @ 0x1C001C0CC (NVMeSyncHostTime.c)
 */

char __fastcall NVMeControllerInitPart3(__int64 a1)
{
  __int64 v2; // rax
  char result; // al

  NVMeGetCommandEffectsLog(a1);
  if ( (*(_DWORD *)(a1 + 56) & 4) == 0 )
    NVMeGetTemperatureThreshold(a1);
  NVMeConfigAsyncEvent(a1);
  NVMeStartAsyncEventCommands(a1);
  if ( !*(_BYTE *)(a1 + 16) )
  {
    NVMeGetCloudSSDErrorRecoveryLog(a1);
    v2 = *(_QWORD *)(a1 + 3992);
    if ( v2 )
    {
      if ( *(_DWORD *)(v2 + 4) )
      {
        *(_DWORD *)(a1 + 28) = 24;
        NVMeControllerStartFailureEventLog(a1);
        StorPortExtendedFunction(86LL, a1, 0LL, 2LL);
      }
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1624) + 520LL) & 0x40) != 0 )
    NVMeSyncHostTime(a1);
  NVMeLogEtwControllerInfo(a1);
  NVMeLogTelemetryControllerInfo(a1);
  NVMeEnableThrottling(a1);
  *(_DWORD *)(a1 + 28) = 0;
  result = 1;
  *(_DWORD *)(a1 + 24) |= 0x201u;
  return result;
}
