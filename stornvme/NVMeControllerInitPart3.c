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
