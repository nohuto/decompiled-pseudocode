/*
 * XREFs of WaitForCommandCompleteWithCustomTimeout @ 0x1C0025504
 * Callers:
 *     NVMeHwStartIo @ 0x1C00022D0 (NVMeHwStartIo.c)
 *     NVMeControllerGetFeaturesSupportedCacheCapabilities @ 0x1C000D744 (NVMeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C000E8FC (NVMeControllerSetHostIdentifier.c)
 *     NVMeControllerSetWriteCacheEnable @ 0x1C000EB5C (NVMeControllerSetWriteCacheEnable.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C0016700 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeBuildPollingConfiguration @ 0x1C001C3A8 (NVMeBuildPollingConfiguration.c)
 *     NVMeConfigAsyncEvent @ 0x1C001C4F0 (NVMeConfigAsyncEvent.c)
 *     NVMeControllerIdentify @ 0x1C001C5D4 (NVMeControllerIdentify.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C001CC78 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C001CD30 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C001CE94 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C001CF54 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C001D100 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C001D1C0 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetActiveNameSpaceIdList @ 0x1C001D39C (NVMeGetActiveNameSpaceIdList.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C001D4C4 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C001D65C (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C001D880 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetControllerInitiatedTelemetryHeader @ 0x1C001DBD0 (NVMeGetControllerInitiatedTelemetryHeader.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C001DCC4 (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetControllerIoCommandSetIdentify @ 0x1C001DFF8 (NVMeGetControllerIoCommandSetIdentify.c)
 *     NVMeGetHealthInfoLog @ 0x1C001E0F4 (NVMeGetHealthInfoLog.c)
 *     NVMeGetNVMSetAttributeList @ 0x1C001E668 (NVMeGetNVMSetAttributeList.c)
 *     NVMeGetNamespaceDescriptorListIdentify @ 0x1C001E81C (NVMeGetNamespaceDescriptorListIdentify.c)
 *     NVMeGetNamespaceIoCommandSetIdentify @ 0x1C001E978 (NVMeGetNamespaceIoCommandSetIdentify.c)
 *     NVMeGetNamespaceMetadata @ 0x1C001EB6C (NVMeGetNamespaceMetadata.c)
 *     NVMeGetTemperatureThreshold @ 0x1C001EEE4 (NVMeGetTemperatureThreshold.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C001EFF0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C001F414 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C001F720 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C001FB24 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeNameSpaceIdentify @ 0x1C00210FC (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0021D10 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0022DD4 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0023174 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSanitizeRecoverWorkItem @ 0x1C00234E0 (NVMeSanitizeRecoverWorkItem.c)
 *     NVMeSetArbitration @ 0x1C002369C (NVMeSetArbitration.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C0023794 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C0023850 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetInterruptCoalescing @ 0x1C00239D8 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C0023AC0 (NVMeSetIoQueueCount.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C0023F44 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 *     NVMeSetPowerState @ 0x1C00240FC (NVMeSetPowerState.c)
 *     NVMeSyncHostTime @ 0x1C00242D8 (NVMeSyncHostTime.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0002298 (GetSrbExtension.c)
 *     RequestPendingCompletion @ 0x1C00033A0 (RequestPendingCompletion.c)
 *     ProcessCompletionQueues @ 0x1C0003450 (ProcessCompletionQueues.c)
 *     NVMeRequestComplete @ 0x1C000368C (NVMeRequestComplete.c)
 *     _guard_dispatch_icall_nop @ 0x1C00047E0 (_guard_dispatch_icall_nop.c)
 *     IsInternalSrb @ 0x1C0007CFC (IsInternalSrb.c)
 *     GetLocalCommand @ 0x1C0009D40 (GetLocalCommand.c)
 *     GetLunExtension @ 0x1C001B7C4 (GetLunExtension.c)
 *     NVMeLogTelemetryWaitForCmdComplete @ 0x1C001FF44 (NVMeLogTelemetryWaitForCmdComplete.c)
 *     NVMeMapError @ 0x1C0020118 (NVMeMapError.c)
 *     CheckDpcWatchdogTimerExpireSoon @ 0x1C0025A5C (CheckDpcWatchdogTimerExpireSoon.c)
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
  unsigned int v13; // r9d
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
  if ( v11 / 0xA > 0x3E8 )
    v13 = 1000;
  v25 = v13;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 184) + 40LL) != -1LL )
  {
    v14 = v13;
    if ( v13 > 0x32 )
      v14 = 50;
    while ( 1 )
    {
      if ( !v9 )
        goto LABEL_31;
      StorPortExtendedFunction(81LL, a1, v14);
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
          StorPortExtendedFunction(86LL, a1, LunExtension);
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
        NVMeRequestComplete(a1);
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
        result = NVMeRequestComplete(a1);
      }
      if ( *(_BYTE *)(a1 + 22) )
        return StorPortExtendedFunction(85LL, a1, 0LL);
    }
    else
    {
      result = NVMeRequestComplete(a1);
      if ( *(_BYTE *)(a1 + 24) )
        return StorPortExtendedFunction(86LL, a1, 0LL);
    }
  }
  return result;
}
