/*
 * XREFs of NVMeControllerInitPart3 @ 0x1C000DCDC
 * Callers:
 *     NVMeHwInitialize @ 0x1C00083B0 (NVMeHwInitialize.c)
 *     NVMeHwPassiveInitialize @ 0x1C0008480 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerPowerUp @ 0x1C000E0F4 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000E4D8 (NVMeControllerReset.c)
 *     NVMeControllerReinitialize @ 0x1C001C9A0 (NVMeControllerReinitialize.c)
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C0007C08 (NVMeControllerStartFailureEventLog.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C000E854 (NVMeControllerSetHostIdentifier.c)
 *     NVMeControllerSetWriteCacheEnable @ 0x1C000EAB4 (NVMeControllerSetWriteCacheEnable.c)
 *     NVMeEnableThrottling @ 0x1C000ECF4 (NVMeEnableThrottling.c)
 *     NVMeStartAsyncEventCommands @ 0x1C0010780 (NVMeStartAsyncEventCommands.c)
 *     NVMeQueueWorkItem @ 0x1C0016B88 (NVMeQueueWorkItem.c)
 *     NVMeConfigAsyncEvent @ 0x1C001C480 (NVMeConfigAsyncEvent.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C001D5EC (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C001D810 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetControllerInitiatedTelemetry @ 0x1C001D968 (NVMeGetControllerInitiatedTelemetry.c)
 *     NVMeGetHealthInfoLog @ 0x1C001E084 (NVMeGetHealthInfoLog.c)
 *     NVMeGetTemperatureThreshold @ 0x1C001EE74 (NVMeGetTemperatureThreshold.c)
 *     NVMeSyncHostTime @ 0x1C0024318 (NVMeSyncHostTime.c)
 */

char __fastcall NVMeControllerInitPart3(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r9

  NVMeGetCommandEffectsLog(a1);
  if ( (*(_DWORD *)(a1 + 64) & 0x2000) != 0
    && (*(_BYTE *)(*(_QWORD *)(a1 + 1840) + 76LL) & 0xF) == 2
    && (*(_DWORD *)(a1 + 4336) & 8) == 0 )
  {
    NVMeGetHealthInfoLog(a1);
  }
  if ( (*(_DWORD *)(a1 + 64) & 4) == 0 )
    NVMeGetTemperatureThreshold(a1);
  NVMeConfigAsyncEvent(a1);
  NVMeStartAsyncEventCommands(a1);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    NVMeGetCloudSSDErrorRecoveryLog(a1);
    v2 = *(_QWORD *)(a1 + 4208);
    if ( v2 )
    {
      if ( *(_DWORD *)(v2 + 4) )
      {
        if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 32), 0xCu) )
        {
          if ( (unsigned int)NVMeGetControllerInitiatedTelemetry(a1) )
            _interlockedbittestandreset((volatile signed __int32 *)(a1 + 32), 0xCu);
          else
            NVMeQueueWorkItem(a1, NVMeCaptureLiveDumpWorkItem);
        }
        *(_DWORD *)(a1 + 36) = 24;
        NVMeControllerStartFailureEventLog(a1);
        if ( *(_BYTE *)(a1 + 23) )
          StorPortExtendedFunction(86LL, a1, 0LL, 2LL);
      }
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1840) + 520LL) & 0x40) != 0 )
    NVMeSyncHostTime(a1);
  NVMeControllerSetWriteCacheEnable(a1);
  NVMeEnableThrottling(a1);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1840) + 520LL) & 0x20) != 0 )
    NVMeControllerSetHostIdentifier(a1);
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 32) |= 0x201u;
  if ( !*(_BYTE *)(a1 + 20) )
    StorPortExtendedFunction(118LL, a1, NVMeHwRegistryNotify, v3);
  return 1;
}
