/*
 * XREFs of WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560
 * Callers:
 *     NVMeHwStartIo @ 0x1C0001DD0 (NVMeHwStartIo.c)
 *     NVMeControllerGetFeaturesSupportedCacheCapabilities @ 0x1C000D694 (NVMeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C000E854 (NVMeControllerSetHostIdentifier.c)
 *     NVMeControllerSetWriteCacheEnable @ 0x1C000EAB4 (NVMeControllerSetWriteCacheEnable.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C0016690 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeBuildPollingConfiguration @ 0x1C001C338 (NVMeBuildPollingConfiguration.c)
 *     NVMeConfigAsyncEvent @ 0x1C001C480 (NVMeConfigAsyncEvent.c)
 *     NVMeControllerIdentify @ 0x1C001C564 (NVMeControllerIdentify.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C001CC08 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C001CCC0 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C001CE24 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C001CEE4 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C001D090 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C001D150 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetActiveNameSpaceIdList @ 0x1C001D32C (NVMeGetActiveNameSpaceIdList.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C001D454 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C001D5EC (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C001D810 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetControllerInitiatedTelemetryHeader @ 0x1C001DB60 (NVMeGetControllerInitiatedTelemetryHeader.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C001DC54 (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetControllerIoCommandSetIdentify @ 0x1C001DF88 (NVMeGetControllerIoCommandSetIdentify.c)
 *     NVMeGetHealthInfoLog @ 0x1C001E084 (NVMeGetHealthInfoLog.c)
 *     NVMeGetNVMSetAttributeList @ 0x1C001E5F8 (NVMeGetNVMSetAttributeList.c)
 *     NVMeGetNamespaceDescriptorListIdentify @ 0x1C001E7AC (NVMeGetNamespaceDescriptorListIdentify.c)
 *     NVMeGetNamespaceIoCommandSetIdentify @ 0x1C001E908 (NVMeGetNamespaceIoCommandSetIdentify.c)
 *     NVMeGetNamespaceMetadata @ 0x1C001EAFC (NVMeGetNamespaceMetadata.c)
 *     NVMeGetTemperatureThreshold @ 0x1C001EE74 (NVMeGetTemperatureThreshold.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C001EF80 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C001F3A4 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C001F6B0 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C001FAB4 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeNameSpaceIdentify @ 0x1C002108C (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0021CA0 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0022D64 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0023104 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSanitizeRecoverWorkItem @ 0x1C0023470 (NVMeSanitizeRecoverWorkItem.c)
 *     NVMeSetArbitration @ 0x1C002362C (NVMeSetArbitration.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C0023724 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C00237E0 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetInterruptCoalescing @ 0x1C0023968 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C0023A50 (NVMeSetIoQueueCount.c)
 *     NVMeSetPowerState @ 0x1C002413C (NVMeSetPowerState.c)
 *     NVMeSyncHostTime @ 0x1C0024318 (NVMeSyncHostTime.c)
 *     WaitForCommandComplete @ 0x1C0025544 (WaitForCommandComplete.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     RequestPendingCompletion @ 0x1C0002EA0 (RequestPendingCompletion.c)
 *     ProcessCompletionQueues @ 0x1C0002F50 (ProcessCompletionQueues.c)
 *     NVMeRequestComplete @ 0x1C000318C (NVMeRequestComplete.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004200 (_guard_dispatch_icall_nop.c)
 *     IsInternalSrb @ 0x1C0007BB8 (IsInternalSrb.c)
 *     GetLocalCommand @ 0x1C0009C80 (GetLocalCommand.c)
 *     GetLunExtension @ 0x1C001B754 (GetLunExtension.c)
 *     NVMeLogTelemetryWaitForCmdComplete @ 0x1C001FED4 (NVMeLogTelemetryWaitForCmdComplete.c)
 *     NVMeMapError @ 0x1C00200A8 (NVMeMapError.c)
 *     CheckDpcWatchdogTimerExpireSoon @ 0x1C0025AB8 (CheckDpcWatchdogTimerExpireSoon.c)
 */

__int64 __fastcall WaitForCommandCompleteWithCustomTimeout(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  unsigned int v5; // ebp
  __int64 SrbExtension; // rsi
  unsigned int v8; // r9d
  bool v9; // r14
  char v10; // r13
  unsigned int v11; // r8d
  unsigned int v12; // edx
  __int64 v13; // r9
  unsigned int v14; // r15d
  __int64 v15; // r8
  __int64 v16; // rdx
  _BYTE *LocalCommand; // rax
  char v18; // r14
  char v19; // al
  __int64 LunExtension; // r8
  __int64 result; // rax
  __int64 v22; // rdx
  char v23; // al
  void (__fastcall *v24)(__int64, __int64, _QWORD); // rax
  unsigned int v25; // [rsp+90h] [rbp-88h]
  unsigned int v26; // [rsp+120h] [rbp+8h]

  v5 = 0;
  SrbExtension = GetSrbExtension(a2);
  v26 = v8;
  v9 = 1;
  v10 = 0;
  v11 = v8;
  v12 = 10 * (v8 / 0xA);
  if ( v8 != v12 )
  {
    v11 = v12 + 10;
    v26 = v12 + 10;
  }
  v13 = v11 / 0xA;
  if ( (unsigned int)v13 > 0x3E8 )
    v13 = 1000LL;
  v25 = v13;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 184) + 40LL) != -1LL )
  {
    v14 = v13;
    if ( (unsigned int)v13 > 0x32 )
      v14 = 50;
    while ( 1 )
    {
      if ( !v9 )
        goto LABEL_31;
      StorPortExtendedFunction(81LL, a1, v14, v13);
      if ( a3 && RequestPendingCompletion(a1, 0) )
      {
        LOBYTE(v15) = a3;
        ProcessCompletionQueues(a1, 0, v15);
      }
      if ( IsInternalSrb(a1, a2) )
      {
        LocalCommand = (_BYTE *)GetLocalCommand(a1, v16);
        v9 = LocalCommand && *LocalCommand == 1;
      }
      else
      {
        v9 = (*(_BYTE *)(SrbExtension + 4253) & 8) == 0;
      }
      if ( v5 > v26 )
        break;
      v5 += v14;
      v14 = v25;
      if ( (unsigned __int8)CheckDpcWatchdogTimerExpireSoon(a1, 0LL) )
      {
        v18 = 1;
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 4284));
        goto LABEL_23;
      }
    }
    v5 += v14;
    v18 = 0;
LABEL_23:
    v19 = RequestPendingCompletion(a1, 0);
    if ( !a3 )
    {
      if ( v19 )
      {
        LunExtension = GetLunExtension(a1, HIDWORD(*(_QWORD *)(SrbExtension + 4096)));
        if ( *(_BYTE *)(a1 + 22) )
          StorPortExtendedFunction(86LL, a1, LunExtension, 1LL);
      }
    }
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 184) + 40LL) == -1LL )
      *(_BYTE *)(a2 + 3) = 8;
    else
      *(_BYTE *)(a2 + 3) = v18 != 0 ? 5 : 9;
    v10 = 1;
    goto LABEL_31;
  }
  *(_BYTE *)(a2 + 3) = 8;
  v10 = 1;
LABEL_31:
  result = NVMeLogTelemetryWaitForCmdComplete(a1, a2, a4 / 0x3E8, v5 / 0x3E8);
  if ( v10 )
  {
    NVMeMapError(a1, a2, 1);
    if ( !*(_WORD *)(SrbExtension + 4244)
      && (*(_BYTE *)(SrbExtension + 4253) & 1) != 0
      && (v22 = *(_QWORD *)(a1 + 376), *(_QWORD *)(v22 + 16LL * *(unsigned __int16 *)(SrbExtension + 4246)) == a2) )
    {
      v23 = *(_BYTE *)(a2 + 3);
      if ( v23 == 8 )
      {
        _InterlockedExchange64((volatile __int64 *)(v22 + 16LL * *(unsigned __int16 *)(SrbExtension + 4246)), 0LL);
        v24 = *(void (__fastcall **)(__int64, __int64, _QWORD))(SrbExtension + 4224);
        if ( v24 )
          v24(a1, a2, 0LL);
        NVMeRequestComplete(a1, a2);
        ++*(_DWORD *)(a1 + 476);
        result = -1LL;
        _InterlockedAdd16((volatile signed __int16 *)(a1 + 472), 0xFFFFu);
      }
      else
      {
        if ( v23 == 5 )
        {
          _interlockedbittestandset(
            (volatile signed __int32 *)(v22 + 16LL * *(unsigned __int16 *)(SrbExtension + 4246) + 8),
            2u);
          ++*(_DWORD *)(a1 + 4496);
        }
        else if ( v23 == 9 )
        {
          _interlockedbittestandset(
            (volatile signed __int32 *)(v22 + 16LL * *(unsigned __int16 *)(SrbExtension + 4246) + 8),
            1u);
          ++*(_DWORD *)(a1 + 4500);
        }
        _interlockedbittestandset(
          (volatile signed __int32 *)(*(_QWORD *)(a1 + 376) + 16LL * *(unsigned __int16 *)(SrbExtension + 4246) + 8),
          0);
        result = (__int64)NVMeRequestComplete(a1, a2);
      }
      if ( *(_BYTE *)(a1 + 22) )
        return StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
    }
    else
    {
      result = (__int64)NVMeRequestComplete(a1, a2);
      if ( *(_BYTE *)(a1 + 24) )
        return StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
    }
  }
  return result;
}
