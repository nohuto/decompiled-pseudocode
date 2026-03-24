/*
 * XREFs of ProcessCommand @ 0x1C0002C00
 * Callers:
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0004670 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0006C40 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C000778C (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C0014340 (NVMeFirmwareActivateCompletion.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0015360 (NVMeSetFeaturesCachePhase1Completion.c)
 *     NVMeSplitIoCommandCompletion @ 0x1C0015570 (NVMeSplitIoCommandCompletion.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C0015A60 (NVMeWriteBufferFirmwareActivateCompletion.c)
 *     ProtocolCommandCompletion @ 0x1C0015EE0 (ProtocolCommandCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C00167E0 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C00169A0 (QueryTemperatureThresholdCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0017780 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeBuildPollingConfiguration @ 0x1C0017E98 (NVMeBuildPollingConfiguration.c)
 *     NVMeConfigAsyncEvent @ 0x1C0018014 (NVMeConfigAsyncEvent.c)
 *     NVMeControllerIdentify @ 0x1C0018128 (NVMeControllerIdentify.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C001862C (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0018714 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C00188A4 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0018998 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C0018B74 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0018C68 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C0018DE8 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x1C0018FC8 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetCommandEffectsLog @ 0x1C0019218 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetLogPageCompletion @ 0x1C00193A0 (NVMeGetLogPageCompletion.c)
 *     NVMeGetTemperatureThreshold @ 0x1C0019654 (NVMeGetTemperatureThreshold.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0019790 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C0019BC4 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C0019EC0 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C001A2D4 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C001A3AC (NVMeIssueAsyncEventCommand.c)
 *     NVMeNameSpaceIdentify @ 0x1C001A730 (NVMeNameSpaceIdentify.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C001AD0C (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C001B080 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSetArbitration @ 0x1C001B3E4 (NVMeSetArbitration.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C001B504 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C001B5EC (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetInterruptCoalescing @ 0x1C001B7A4 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C001B8B8 (NVMeSetIoQueueCount.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C001BCD4 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 *     NVMeSetPowerState @ 0x1C001BEC4 (NVMeSetPowerState.c)
 *     NVMeSyncHostTime @ 0x1C001C0CC (NVMeSyncHostTime.c)
 *     ProcessMultipleCommands @ 0x1C001C4C4 (ProcessMultipleCommands.c)
 * Callees:
 *     ProcessCommandInSpecificQueue @ 0x1C0003830 (ProcessCommandInSpecificQueue.c)
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 *     NVMeRequestComplete @ 0x1C0010AB0 (NVMeRequestComplete.c)
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
    v7 = *(_WORD *)(a1 + 286);
    v8 = 136 * v6 + *(_QWORD *)(a1 + 776) - 136LL;
  }
  else
  {
    v7 = *(_WORD *)(a1 + 284);
    v8 = a1 + 296;
  }
  result = ProcessCommandInSpecificQueue(a1, v4, v8, v7);
  if ( (_BYTE)result )
    return result;
  if ( *(_BYTE *)(a2 + 3) != 5 )
    return NVMeRequestComplete(a1, a2, 0LL);
  if ( *(_WORD *)(v8 + 40) )
  {
    v11 = *(unsigned __int16 *)(a1 + 288);
    v12 = 0;
    *(_BYTE *)(SrbExtension + 4253) |= 0x10u;
    v13 = v11;
    if ( v11 )
    {
      while ( 1 )
      {
        v14 = 1;
        if ( ((unsigned int)*(unsigned __int16 *)(v8 + 40) + 1) % *(unsigned __int16 *)(a1 + 288) )
          v14 = ((unsigned int)*(unsigned __int16 *)(v8 + 40) + 1) % *(unsigned __int16 *)(a1 + 288);
        *(_WORD *)(SrbExtension + 4244) = v14;
        v8 = 136LL * v14 + *(_QWORD *)(a1 + 776) - 136LL;
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
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 832));
    result = ProcessCommandInSpecificQueue(a1, a2, v8, v7);
    if ( (_BYTE)result )
      break;
    if ( (unsigned int)++v15 >= 4 )
      return NVMeRequestComplete(a1, a2, 0LL);
  }
  return result;
}
