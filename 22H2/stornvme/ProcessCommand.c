/*
 * XREFs of ProcessCommand @ 0x1C0002360
 * Callers:
 *     NVMeSplitIoCommandCompletion @ 0x1C0001FE0 (NVMeSplitIoCommandCompletion.c)
 *     NVMeHwStartIo @ 0x1C00022D0 (NVMeHwStartIo.c)
 *     NVMeControllerGetFeaturesSupportedCacheCapabilities @ 0x1C000D744 (NVMeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C000E8FC (NVMeControllerSetHostIdentifier.c)
 *     NVMeControllerSetWriteCacheEnable @ 0x1C000EB5C (NVMeControllerSetWriteCacheEnable.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C0015090 (NVMeFirmwareActivateCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0016190 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C0016700 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0016A00 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeReservationReportStatusCompletion @ 0x1C0017750 (NVMeReservationReportStatusCompletion.c)
 *     NVMeSanitizeRecoverCompletionRoutine @ 0x1C0017E40 (NVMeSanitizeRecoverCompletionRoutine.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C0018240 (NVMeWriteBufferFirmwareActivateCompletion.c)
 *     ProtocolCommandCompletion @ 0x1C00186C0 (ProtocolCommandCompletion.c)
 *     QueryProtocolInfoCompletion @ 0x1C0018BF0 (QueryProtocolInfoCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0019980 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0019B50 (QueryTemperatureThresholdCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C001BA70 (NVMeAsyncEventRequestCompletion.c)
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
 *     NVMeGetLogPageCompletion @ 0x1C001E280 (NVMeGetLogPageCompletion.c)
 *     NVMeGetNVMSetAttributeList @ 0x1C001E668 (NVMeGetNVMSetAttributeList.c)
 *     NVMeGetNamespaceDescriptorListIdentify @ 0x1C001E81C (NVMeGetNamespaceDescriptorListIdentify.c)
 *     NVMeGetNamespaceIoCommandSetIdentify @ 0x1C001E978 (NVMeGetNamespaceIoCommandSetIdentify.c)
 *     NVMeGetNamespaceMetadata @ 0x1C001EB6C (NVMeGetNamespaceMetadata.c)
 *     NVMeGetTemperatureThreshold @ 0x1C001EEE4 (NVMeGetTemperatureThreshold.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C001EFF0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C001F414 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C001F720 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C001FB24 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C001FBC4 (NVMeIssueAsyncEventCommand.c)
 *     NVMeNameSpaceIdentify @ 0x1C00210FC (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0021D10 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C00228A8 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
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
 *     ProcessMultipleCommands @ 0x1C0024740 (ProcessMultipleCommands.c)
 * Callees:
 *     ProcessCommandInSpecificQueue @ 0x1C0002420 (ProcessCommandInSpecificQueue.c)
 *     NVMeRequestComplete @ 0x1C000368C (NVMeRequestComplete.c)
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
  unsigned int v11; // eax
  unsigned int v12; // r13d
  unsigned int v13; // eax
  unsigned int v14; // edx
  char v15; // cl
  __int64 v16; // rdx
  unsigned int v17; // r8d

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
  v11 = *(unsigned __int16 *)(a1 + 336);
  if ( v11 > 1 )
  {
    *(_BYTE *)(v4 + 4253) |= 0x10u;
    v12 = v11;
    do
    {
      v13 = *(unsigned __int16 *)(a1 + 336);
      LOWORD(v14) = *(_WORD *)(v9 + 40) + 1;
      if ( (unsigned __int16)v14 > (unsigned __int16)v13 )
        v14 = (unsigned __int16)v14 % v13;
      *(_WORD *)(v4 + 4244) = v14;
      v9 = 136LL * (unsigned __int16)v14 + *(_QWORD *)(a1 + 872) - 136LL;
      result = ProcessCommandInSpecificQueue(a1, a2, v9, v8);
      v15 = result;
      if ( (_BYTE)result )
        break;
      if ( *(_BYTE *)(a2 + 3) != 5 )
        break;
      ++v6;
    }
    while ( v6 < v12 );
    if ( !g_HeteroSystem || (result = *(unsigned int *)(a1 + 4336), (result & 0x10) != 0) )
    {
      if ( v15 )
        return result;
    }
    else if ( v15 )
    {
      if ( v6 < v12 )
      {
        v16 = *(_QWORD *)(a1 + 880);
        v17 = *(_DWORD *)(392LL * *(unsigned __int16 *)(v7 + 50) + v16 - 148) & 0xF;
        result = *(_DWORD *)(392LL * *(unsigned __int16 *)(v9 + 50) + v16 - 148) & 0xF;
        if ( (_DWORD)result == v17 )
        {
          ++*(_DWORD *)(a1 + 4392);
        }
        else if ( (unsigned int)result >= v17 )
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
    StorPortExtendedFunction(81LL, a1, 1000LL);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 928));
    result = ProcessCommandInSpecificQueue(a1, a2, v9, v8);
    if ( (_BYTE)result )
      break;
    if ( ++v6 >= 4 )
      return NVMeRequestComplete(a1, a2, 0LL);
  }
  return result;
}
