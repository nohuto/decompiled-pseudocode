/*
 * XREFs of NVMeControllerInitPart3 @ 0x1C0005FFC
 * Callers:
 *     NVMeHwPassiveInitialize @ 0x1C0005F00 (NVMeHwPassiveInitialize.c)
 *     NVMeHwInitialize @ 0x1C000E6D0 (NVMeHwInitialize.c)
 *     NVMeControllerPowerUp @ 0x1C0018D60 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C001906C (NVMeControllerReset.c)
 *     NVMeControllerReinitialize @ 0x1C00220A4 (NVMeControllerReinitialize.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     NVMeEnableThrottling @ 0x1C00060DC (NVMeEnableThrottling.c)
 *     NVMeGetCommandEffectsLog @ 0x1C00088B0 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C0008A28 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetTemperatureThreshold @ 0x1C0009084 (NVMeGetTemperatureThreshold.c)
 *     NVMeConfigAsyncEvent @ 0x1C0009184 (NVMeConfigAsyncEvent.c)
 *     NVMeStartAsyncEventCommands @ 0x1C00093EC (NVMeStartAsyncEventCommands.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C0017B68 (NVMeControllerStartFailureEventLog.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C0019314 (NVMeControllerSetHostIdentifier.c)
 *     NVMeQueueWorkItem @ 0x1C001DF70 (NVMeQueueWorkItem.c)
 *     NVMeGetControllerInitiatedTelemetry @ 0x1C0022AC8 (NVMeGetControllerInitiatedTelemetry.c)
 *     NVMeSyncHostTime @ 0x1C002492C (NVMeSyncHostTime.c)
 */

char __fastcall NVMeControllerInitPart3(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  char result; // al
  void *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx

  NVMeGetCommandEffectsLog(a1);
  if ( (*(_DWORD *)(a1 + 64) & 4) == 0 )
    NVMeGetTemperatureThreshold(a1);
  NVMeConfigAsyncEvent(a1);
  NVMeStartAsyncEventCommands(a1);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    NVMeGetCloudSSDErrorRecoveryLog(a1);
    v2 = *(_QWORD *)(a1 + 4008);
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
  v3 = *(_QWORD *)(a1 + 1640);
  if ( (*(_BYTE *)(v3 + 520) & 0x40) != 0 )
  {
    NVMeSyncHostTime(a1);
    v3 = *(_QWORD *)(a1 + 1640);
  }
  if ( (*(_BYTE *)(v3 + 525) & 1) != 0 )
  {
    v4 = *(unsigned __int8 *)(a1 + 4036);
    if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    {
      v6 = *(void **)(a1 + 952);
      *(_BYTE *)(a1 + 867) = 0;
      memset(v6, 0, 0x10A0uLL);
      *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
      v7 = *(_QWORD *)(a1 + 952);
      *(_QWORD *)(a1 + 920) = v7;
      *(_DWORD *)(a1 + 856) = 1;
      *(_BYTE *)(v7 + 4253) |= 1u;
      *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) &= ~2u;
      *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) &= ~4u;
      *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
      v8 = *(_QWORD *)(a1 + 952);
      LODWORD(v7) = *(_DWORD *)(v8 + 4140) ^ v4;
      *(_BYTE *)(v8 + 4096) = 9;
      *(_DWORD *)(v8 + 4140) ^= v7 & 1;
      *(_BYTE *)(v8 + 4136) = 6;
      *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4224LL) = NVMeSetFeaturesCacheCompletion;
      ProcessCommand(a1, a1 + 864);
      WaitForCommandCompleteWithCustomTimeout(a1);
    }
  }
  NVMeEnableThrottling(a1);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1640) + 520LL) & 0x20) != 0 )
    NVMeControllerSetHostIdentifier(a1);
  *(_DWORD *)(a1 + 32) |= 0x201u;
  result = 1;
  *(_DWORD *)(a1 + 36) = 0;
  return result;
}
