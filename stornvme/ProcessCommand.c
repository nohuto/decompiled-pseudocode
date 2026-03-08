/*
 * XREFs of ProcessCommand @ 0x1C0001E60
 * Callers:
 *     NVMeSplitIoCommandCompletion @ 0x1C0001AE0 (NVMeSplitIoCommandCompletion.c)
 *     NVMeHwStartIo @ 0x1C0001DD0 (NVMeHwStartIo.c)
 *     NVMeControllerGetFeaturesSupportedCacheCapabilities @ 0x1C000D694 (NVMeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C000E854 (NVMeControllerSetHostIdentifier.c)
 *     NVMeControllerSetWriteCacheEnable @ 0x1C000EAB4 (NVMeControllerSetWriteCacheEnable.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C0015020 (NVMeFirmwareActivateCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0016120 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C0016690 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0016990 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeReservationReportStatusCompletion @ 0x1C00176E0 (NVMeReservationReportStatusCompletion.c)
 *     NVMeSanitizeRecoverCompletionRoutine @ 0x1C0017DD0 (NVMeSanitizeRecoverCompletionRoutine.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C00181D0 (NVMeWriteBufferFirmwareActivateCompletion.c)
 *     ProtocolCommandCompletion @ 0x1C0018650 (ProtocolCommandCompletion.c)
 *     QueryProtocolInfoCompletion @ 0x1C0018B80 (QueryProtocolInfoCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0019910 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0019AE0 (QueryTemperatureThresholdCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C001BA00 (NVMeAsyncEventRequestCompletion.c)
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
 *     NVMeGetLogPageCompletion @ 0x1C001E210 (NVMeGetLogPageCompletion.c)
 *     NVMeGetNVMSetAttributeList @ 0x1C001E5F8 (NVMeGetNVMSetAttributeList.c)
 *     NVMeGetNamespaceDescriptorListIdentify @ 0x1C001E7AC (NVMeGetNamespaceDescriptorListIdentify.c)
 *     NVMeGetNamespaceIoCommandSetIdentify @ 0x1C001E908 (NVMeGetNamespaceIoCommandSetIdentify.c)
 *     NVMeGetNamespaceMetadata @ 0x1C001EAFC (NVMeGetNamespaceMetadata.c)
 *     NVMeGetTemperatureThreshold @ 0x1C001EE74 (NVMeGetTemperatureThreshold.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C001EF80 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C001F3A4 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C001F6B0 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C001FAB4 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C001FB54 (NVMeIssueAsyncEventCommand.c)
 *     NVMeNameSpaceIdentify @ 0x1C002108C (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0021CA0 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C0022838 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0022D64 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0023104 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSanitizeRecoverWorkItem @ 0x1C0023470 (NVMeSanitizeRecoverWorkItem.c)
 *     NVMeSetArbitration @ 0x1C002362C (NVMeSetArbitration.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C0023724 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C00237E0 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetInterruptCoalescing @ 0x1C0023968 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C0023A50 (NVMeSetIoQueueCount.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C0023ED4 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 *     NVMeSetPowerState @ 0x1C002413C (NVMeSetPowerState.c)
 *     NVMeSyncHostTime @ 0x1C0024318 (NVMeSyncHostTime.c)
 *     ProcessMultipleCommands @ 0x1C0024780 (ProcessMultipleCommands.c)
 * Callees:
 *     ProcessCommandInSpecificQueue @ 0x1C0001F20 (ProcessCommandInSpecificQueue.c)
 *     NVMeRequestComplete @ 0x1C000318C (NVMeRequestComplete.c)
 */

__int64 __fastcall ProcessCommand(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v7; // r12
  unsigned __int16 v8; // r15
  __int64 v9; // r14
  __int64 result; // rax
  __int64 v11; // r9
  unsigned int v12; // eax
  unsigned int v13; // r13d
  unsigned int v14; // eax
  unsigned int v15; // edx
  char v16; // cl
  __int64 v17; // rdx
  unsigned int v18; // r8d

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  v5 = *(unsigned __int16 *)(v4 + 4244);
  v6 = 0;
  v7 = 0LL;
  if ( (_WORD)v5 )
  {
    v8 = *(_WORD *)(a1 + 334);
    v9 = 136 * v5 + *(_QWORD *)(a1 + 872) - 136LL;
  }
  else
  {
    v8 = *(_WORD *)(a1 + 332);
    v9 = a1 + 344;
  }
  if ( g_HeteroSystem && (*(_BYTE *)(a1 + 4336) & 0x10) == 0 )
    v7 = v9;
  result = ProcessCommandInSpecificQueue(a1, a2, v9, v8);
  if ( (_BYTE)result )
    return result;
  if ( *(_BYTE *)(a2 + 3) != 5 )
    return NVMeRequestComplete(a1, a2, 0LL);
  if ( !*(_WORD *)(v9 + 40) )
    goto LABEL_36;
  v12 = *(unsigned __int16 *)(a1 + 336);
  if ( v12 > 1 )
  {
    *(_BYTE *)(v4 + 4253) |= 0x10u;
    v13 = v12;
    do
    {
      v14 = *(unsigned __int16 *)(a1 + 336);
      LOWORD(v15) = *(_WORD *)(v9 + 40) + 1;
      if ( (unsigned __int16)v15 > (unsigned __int16)v14 )
        v15 = (unsigned __int16)v15 % v14;
      *(_WORD *)(v4 + 4244) = v15;
      v9 = 136LL * (unsigned __int16)v15 + *(_QWORD *)(a1 + 872) - 136LL;
      result = ProcessCommandInSpecificQueue(a1, a2, v9, v8);
      v16 = result;
      if ( (_BYTE)result )
        break;
      if ( *(_BYTE *)(a2 + 3) != 5 )
        break;
      ++v6;
    }
    while ( v6 < v13 );
    if ( !g_HeteroSystem || (result = *(unsigned int *)(a1 + 4336), (result & 0x10) != 0) )
    {
      if ( v16 )
        return result;
    }
    else if ( v16 )
    {
      if ( v6 < v13 )
      {
        v17 = *(_QWORD *)(a1 + 880);
        v18 = *(_DWORD *)(392LL * *(unsigned __int16 *)(v7 + 50) + v17 - 148) & 0xF;
        result = *(_DWORD *)(392LL * *(unsigned __int16 *)(v9 + 50) + v17 - 148) & 0xF;
        if ( (_DWORD)result == v18 )
        {
          ++*(_DWORD *)(a1 + 4392);
        }
        else if ( (unsigned int)result >= v18 )
        {
          ++*(_DWORD *)(a1 + 4400);
        }
        else
        {
          ++*(_DWORD *)(a1 + 4396);
        }
      }
      return result;
    }
    return NVMeRequestComplete(a1, a2, 0LL);
  }
  if ( *(_WORD *)(v9 + 40) )
    return NVMeRequestComplete(a1, a2, 0LL);
LABEL_36:
  while ( 1 )
  {
    StorPortExtendedFunction(81LL, a1, 1000LL, v11);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 928));
    result = ProcessCommandInSpecificQueue(a1, a2, v9, v8);
    if ( (_BYTE)result )
      break;
    if ( ++v6 >= 4 )
      return NVMeRequestComplete(a1, a2, 0LL);
  }
  return result;
}
