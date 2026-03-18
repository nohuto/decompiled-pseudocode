/*
 * XREFs of ProcessCommand @ 0x1C00039C8
 * Callers:
 *     NVMeSplitIoCommandCompletion @ 0x1C0001010 (NVMeSplitIoCommandCompletion.c)
 *     QueryProtocolInfoCompletion @ 0x1C0001720 (QueryProtocolInfoCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0003610 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeControllerInitPart3 @ 0x1C0005FFC (NVMeControllerInitPart3.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C00069E8 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0006C38 (NVMeIoCompletionQueueCreate.c)
 *     NVMeGetNVMSetAttributeList @ 0x1C00071B8 (NVMeGetNVMSetAttributeList.c)
 *     NVMeControllerGetFeaturesSupportedCacheCapabilities @ 0x1C000793C (NVMeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     NVMeControllerIdentify @ 0x1C0007C08 (NVMeControllerIdentify.c)
 *     NVMeGetControllerIoCommandSetIdentify @ 0x1C0007D08 (NVMeGetControllerIoCommandSetIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C0007F68 (NVMeNameSpaceIdentify.c)
 *     NVMeGetNamespaceDescriptorListIdentify @ 0x1C0008768 (NVMeGetNamespaceDescriptorListIdentify.c)
 *     NVMeGetCommandEffectsLog @ 0x1C00088B0 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C0008A28 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeSetIoQueueCount @ 0x1C0008B98 (NVMeSetIoQueueCount.c)
 *     NVMeBuildPollingConfiguration @ 0x1C0008D3C (NVMeBuildPollingConfiguration.c)
 *     NVMeSetInterruptCoalescing @ 0x1C0008E58 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetArbitration @ 0x1C0008F6C (NVMeSetArbitration.c)
 *     NVMeGetTemperatureThreshold @ 0x1C0009084 (NVMeGetTemperatureThreshold.c)
 *     NVMeConfigAsyncEvent @ 0x1C0009184 (NVMeConfigAsyncEvent.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C0009474 (NVMeIssueAsyncEventCommand.c)
 *     NVMeSetPowerState @ 0x1C000A084 (NVMeSetPowerState.c)
 *     NVMeGetNamespaceIoCommandSetIdentify @ 0x1C000B0FC (NVMeGetNamespaceIoCommandSetIdentify.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000CAF4 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetNamespaceMetadata @ 0x1C000CC64 (NVMeGetNamespaceMetadata.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C000EC00 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C000F748 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C0019314 (NVMeControllerSetHostIdentifier.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C001CB60 (NVMeFirmwareActivateCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C001D870 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C001DC70 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeReservationReportStatusCompletion @ 0x1C001E9E0 (NVMeReservationReportStatusCompletion.c)
 *     NVMeSanitizeRecoverCompletionRoutine @ 0x1C001F0E0 (NVMeSanitizeRecoverCompletionRoutine.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C001F4D0 (NVMeWriteBufferFirmwareActivateCompletion.c)
 *     ProtocolCommandCompletion @ 0x1C001F950 (ProtocolCommandCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0020390 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0020570 (QueryTemperatureThresholdCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00215A0 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C002230C (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C00223F4 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C0022584 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0022678 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C0022854 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0022948 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetControllerInitiatedTelemetryHeader @ 0x1C0022CC0 (NVMeGetControllerInitiatedTelemetryHeader.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C0022DEC (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetLogPageCompletion @ 0x1C0023180 (NVMeGetLogPageCompletion.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C0023504 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0023810 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0023B84 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0023F2C (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSanitizeRecoverWorkItem @ 0x1C00242B0 (NVMeSanitizeRecoverWorkItem.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C002449C (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C0024584 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C002473C (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 *     NVMeSyncHostTime @ 0x1C002492C (NVMeSyncHostTime.c)
 *     ProcessMultipleCommands @ 0x1C0024B10 (ProcessMultipleCommands.c)
 * Callees:
 *     ProcessCommandInSpecificQueue @ 0x1C0003C20 (ProcessCommandInSpecificQueue.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeRequestComplete @ 0x1C0019DF8 (NVMeRequestComplete.c)
 */

__int64 __fastcall ProcessCommand(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 SrbExtension; // rbp
  __int64 v6; // rax
  unsigned __int16 v7; // r14
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // r9
  unsigned int v11; // eax
  int v12; // r15d
  unsigned int v13; // r12d
  unsigned __int16 v14; // ax
  int v15; // ebp

  SrbExtension = GetSrbExtension(a2);
  v6 = *(unsigned __int16 *)(SrbExtension + 4244);
  if ( (_WORD)v6 )
  {
    v7 = *(_WORD *)(a1 + 302);
    v8 = 136 * v6 + *(_QWORD *)(a1 + 792) - 136LL;
  }
  else
  {
    v7 = *(_WORD *)(a1 + 300);
    v8 = a1 + 312;
  }
  result = ProcessCommandInSpecificQueue(a1, v4, v8, v7);
  if ( (_BYTE)result )
    return result;
  if ( *(_BYTE *)(a2 + 3) != 5 )
    return NVMeRequestComplete(a1, a2, 0LL);
  if ( *(_WORD *)(v8 + 40) )
  {
    v11 = *(unsigned __int16 *)(a1 + 304);
    v12 = 0;
    *(_BYTE *)(SrbExtension + 4253) |= 0x10u;
    v13 = v11;
    if ( v11 )
    {
      while ( 1 )
      {
        v14 = 1;
        if ( ((unsigned int)*(unsigned __int16 *)(v8 + 40) + 1) % *(unsigned __int16 *)(a1 + 304) )
          v14 = ((unsigned int)*(unsigned __int16 *)(v8 + 40) + 1) % *(unsigned __int16 *)(a1 + 304);
        *(_WORD *)(SrbExtension + 4244) = v14;
        v8 = 136LL * v14 + *(_QWORD *)(a1 + 792) - 136LL;
        result = ProcessCommandInSpecificQueue(a1, a2, v8, v7);
        if ( (_BYTE)result )
          break;
        if ( *(_BYTE *)(a2 + 3) == 5 && ++v12 < v13 )
          continue;
        return NVMeRequestComplete(a1, a2, 0LL);
      }
      return result;
    }
    return NVMeRequestComplete(a1, a2, 0LL);
  }
  v15 = 0;
  while ( 1 )
  {
    StorPortExtendedFunction(81LL, a1, 1000LL, v10);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 848));
    result = ProcessCommandInSpecificQueue(a1, a2, v8, v7);
    if ( (_BYTE)result )
      break;
    if ( (unsigned int)++v15 >= 4 )
      return NVMeRequestComplete(a1, a2, 0LL);
  }
  return result;
}
