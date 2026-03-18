/*
 * XREFs of NVMeControllerInitPart3 @ 0x1C000DD8C
 * Callers:
 *     NVMeHwInitialize @ 0x1C0008470 (NVMeHwInitialize.c)
 *     NVMeHwPassiveInitialize @ 0x1C0008540 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerPowerUp @ 0x1C000E1A4 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000E580 (NVMeControllerReset.c)
 *     NVMeControllerReinitialize @ 0x1C001CA10 (NVMeControllerReinitialize.c)
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C0007D4C (NVMeControllerStartFailureEventLog.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C000E8FC (NVMeControllerSetHostIdentifier.c)
 *     NVMeControllerSetWriteCacheEnable @ 0x1C000EB5C (NVMeControllerSetWriteCacheEnable.c)
 *     NVMeEnableThrottling @ 0x1C000ED9C (NVMeEnableThrottling.c)
 *     NVMeStartAsyncEventCommands @ 0x1C00107F0 (NVMeStartAsyncEventCommands.c)
 *     NVMeQueueWorkItem @ 0x1C0016BF8 (NVMeQueueWorkItem.c)
 *     NVMeConfigAsyncEvent @ 0x1C001C4F0 (NVMeConfigAsyncEvent.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C001D65C (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C001D880 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetControllerInitiatedTelemetry @ 0x1C001D9D8 (NVMeGetControllerInitiatedTelemetry.c)
 *     NVMeGetHealthInfoLog @ 0x1C001E0F4 (NVMeGetHealthInfoLog.c)
 *     NVMeGetTemperatureThreshold @ 0x1C001EEE4 (NVMeGetTemperatureThreshold.c)
 *     NVMeSyncHostTime @ 0x1C00242D8 (NVMeSyncHostTime.c)
 */

char __fastcall NVMeControllerInitPart3(__int64 a1)
{
  __int64 v2; // rax

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
          StorPortExtendedFunction(86LL, a1, 0LL);
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
    StorPortExtendedFunction(118LL, a1, NVMeHwRegistryNotify);
  return 1;
}
