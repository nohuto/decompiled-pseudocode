/*
 * XREFs of WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C
 * Callers:
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
 *     NVMeGetTemperatureThreshold @ 0x1C0019654 (NVMeGetTemperatureThreshold.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0019790 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C0019BC4 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C0019EC0 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C001A2D4 (NVMeIoSubmissionQueueDelete.c)
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
 *     WaitForCommandComplete @ 0x1C001CC00 (WaitForCommandComplete.c)
 * Callees:
 *     NVMeMapError @ 0x1C00010FC (NVMeMapError.c)
 *     GetLunExtension @ 0x1C0004630 (GetLunExtension.c)
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 *     RequestPendingCompletion @ 0x1C0005FE0 (RequestPendingCompletion.c)
 *     RoundUp32 @ 0x1C0007BE8 (RoundUp32.c)
 *     IsInternalSrb @ 0x1C000A6A8 (IsInternalSrb.c)
 *     GetLocalCommand @ 0x1C000B8A8 (GetLocalCommand.c)
 *     NVMeRequestComplete @ 0x1C0010AB0 (NVMeRequestComplete.c)
 *     NVMeLogTelemetryWaitForCmdComplete @ 0x1C001A52C (NVMeLogTelemetryWaitForCmdComplete.c)
 *     ProcessCompletionQueues @ 0x1C001C2B0 (ProcessCompletionQueues.c)
 */

__int64 __fastcall WaitForCommandCompleteWithCustomTimeout(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  unsigned int v7; // edi
  char v8; // bp
  unsigned int v9; // r9d
  char v10; // r8
  __int64 v11; // r9
  bool v12; // r10
  unsigned int v13; // r15d
  char v14; // r13
  unsigned int v15; // r14d
  _DWORD *LocalCommand; // rax
  char v17; // al
  __int64 LunExtension; // rax
  __int64 result; // rax
  unsigned int v20; // [rsp+90h] [rbp-88h]
  __int64 SrbExtension; // [rsp+98h] [rbp-80h]

  v7 = 0;
  SrbExtension = GetSrbExtension(a2);
  v8 = 0;
  v20 = RoundUp32(v9);
  v13 = v20 / 0xA;
  if ( v20 / 0xA > 0x3E8 )
    v13 = 1000;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 160) + 40LL) == -1LL )
  {
    *(_BYTE *)(a2 + 3) = 8;
    v14 = v10;
  }
  else
  {
    v15 = v13;
    if ( v13 > 0x32 )
      v15 = 50;
    do
    {
      if ( !v12 )
        break;
      StorPortExtendedFunction(81LL, a1, v15, v11);
      if ( a3 && RequestPendingCompletion(a1, 0) )
        ProcessCompletionQueues(a1, 0, a3);
      if ( IsInternalSrb(a1, a2) )
      {
        LocalCommand = (_DWORD *)GetLocalCommand(a1, a2);
        v12 = LocalCommand && *LocalCommand == 1;
      }
      else
      {
        v12 = (*(_BYTE *)(SrbExtension + 4253) & 8) == 0;
      }
      if ( v7 > v20 )
        v8 = 1;
      v7 += v15;
      v15 = v13;
    }
    while ( !v8 );
    v14 = 0;
    if ( v8 )
    {
      v17 = RequestPendingCompletion(a1, 0);
      if ( !a3 && v17 )
      {
        LunExtension = GetLunExtension(a1, HIDWORD(*(_QWORD *)(SrbExtension + 4096)));
        StorPortExtendedFunction(86LL, a1, LunExtension, 1LL);
      }
      v14 = 1;
      *(_BYTE *)(a2 + 3) = (*(_QWORD *)(*(_QWORD *)(a1 + 160) + 40LL) != -1LL) + 8;
    }
  }
  result = NVMeLogTelemetryWaitForCmdComplete(a1, a2, a4 / 0x3E8, v7 / 0x3E8);
  if ( v14 )
  {
    NVMeMapError(a1, a2, 1, v8 != 0 ? v7 - v13 : 0);
    return NVMeRequestComplete(a1, a2, 0);
  }
  return result;
}
