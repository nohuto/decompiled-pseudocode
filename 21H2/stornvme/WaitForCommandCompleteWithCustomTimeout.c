/*
 * XREFs of WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC
 * Callers:
 *     NVMeHwStartIo @ 0x1C0003A70 (NVMeHwStartIo.c)
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
 *     NVMeSetPowerState @ 0x1C000A084 (NVMeSetPowerState.c)
 *     NVMeGetNamespaceIoCommandSetIdentify @ 0x1C000B0FC (NVMeGetNamespaceIoCommandSetIdentify.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C000CAF4 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetNamespaceMetadata @ 0x1C000CC64 (NVMeGetNamespaceMetadata.c)
 *     NVMeControllerSetHostIdentifier @ 0x1C0019314 (NVMeControllerSetHostIdentifier.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C001DC70 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C002230C (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C00223F4 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C0022584 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0022678 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C0022854 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0022948 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetControllerInitiatedTelemetryHeader @ 0x1C0022CC0 (NVMeGetControllerInitiatedTelemetryHeader.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1C0022DEC (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeIoCompletionQueueDelete @ 0x1C0023504 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0023810 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0023B84 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0023F2C (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSanitizeRecoverWorkItem @ 0x1C00242B0 (NVMeSanitizeRecoverWorkItem.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C002449C (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C0024584 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C002473C (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 *     NVMeSyncHostTime @ 0x1C002492C (NVMeSyncHostTime.c)
 *     WaitForCommandComplete @ 0x1C0025578 (WaitForCommandComplete.c)
 * Callees:
 *     RequestPendingCompletion @ 0x1C0001A30 (RequestPendingCompletion.c)
 *     ProcessCompletionQueues @ 0x1C0001AD0 (ProcessCompletionQueues.c)
 *     NVMeMapError @ 0x1C0001D84 (NVMeMapError.c)
 *     GetLunExtension @ 0x1C00035D4 (GetLunExtension.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     CheckDpcWatchdogTimerExpireSoon @ 0x1C000A3FC (CheckDpcWatchdogTimerExpireSoon.c)
 *     IsInternalSrb @ 0x1C000A4E4 (IsInternalSrb.c)
 *     GetLocalCommand @ 0x1C000A538 (GetLocalCommand.c)
 *     NVMeLogTelemetry @ 0x1C000A660 (NVMeLogTelemetry.c)
 *     _guard_dispatch_icall_nop @ 0x1C00106A0 (_guard_dispatch_icall_nop.c)
 *     NVMeRequestComplete @ 0x1C0019DF8 (NVMeRequestComplete.c)
 */

__int64 __fastcall WaitForCommandCompleteWithCustomTimeout(__int64 a1, __int64 a2, char a3, int a4)
{
  unsigned int v5; // ebp
  __int64 v7; // r9
  char v8; // r11
  __int64 SrbExtension; // r14
  bool v10; // bl
  char v11; // r12
  unsigned int v12; // r8d
  unsigned int v13; // edx
  unsigned int v14; // r13d
  unsigned int v15; // r15d
  _DWORD *LocalCommand; // rax
  char v17; // al
  __int64 v18; // rax
  unsigned int v19; // r8d
  unsigned int v20; // ebx
  unsigned int v21; // r11d
  __int64 v22; // rdx
  __int64 v23; // r10
  unsigned __int8 v24; // r15
  unsigned int v25; // r11d
  __int64 result; // rax
  char v27; // bl
  char v28; // al
  __int64 LunExtension; // r8
  int v30; // r11d
  int v31; // eax
  unsigned int v32; // ebp
  __int64 v33; // r8
  __int64 v34; // rdx
  void (__fastcall *v35)(__int64, __int64, _QWORD); // rax
  const wchar_t *v36; // [rsp+28h] [rbp-150h]
  int v37; // [rsp+30h] [rbp-148h]
  int v38; // [rsp+38h] [rbp-140h]
  int v39; // [rsp+40h] [rbp-138h]
  unsigned int v40; // [rsp+D4h] [rbp-A4h]
  int v41; // [rsp+E0h] [rbp-98h]
  char v42; // [rsp+180h] [rbp+8h]
  unsigned int v43; // [rsp+188h] [rbp+10h]
  unsigned int v44; // [rsp+188h] [rbp+10h]
  unsigned __int8 v47; // [rsp+198h] [rbp+20h]

  v5 = 0;
  SrbExtension = GetSrbExtension(a2);
  v42 = v8;
  v43 = v7;
  v10 = 1;
  v11 = v8;
  v12 = v7;
  v13 = 10 * ((unsigned int)v7 / 0xA);
  if ( (_DWORD)v7 != v13 )
  {
    v12 = v13 + 10;
    v43 = v13 + 10;
  }
  v14 = v12 / 0xA;
  if ( v12 / 0xA > 0x3E8 )
    v14 = 1000;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 176) + 40LL) == -1LL )
  {
    *(_BYTE *)(a2 + 3) = 8;
    v42 = 1;
  }
  else
  {
    v15 = v14;
    if ( v14 > 0x32 )
      v15 = 50;
    while ( 1 )
    {
      v11 = v8;
      if ( !v10 )
        break;
      StorPortExtendedFunction(81LL, a1, v15, v7);
      if ( a3 && RequestPendingCompletion(a1, 0) )
        ProcessCompletionQueues(a1, 0, a3);
      if ( (unsigned __int8)IsInternalSrb(a1, a2) )
      {
        LocalCommand = (_DWORD *)GetLocalCommand(a1, a2);
        v10 = LocalCommand && *LocalCommand == 1;
      }
      else
      {
        v10 = (*(_BYTE *)(SrbExtension + 4253) & 8) == 0;
      }
      if ( v5 > v43 )
      {
        v5 += v15;
        v11 = 1;
        v27 = 0;
LABEL_27:
        v28 = RequestPendingCompletion(a1, 0);
        if ( !a3 )
        {
          if ( v28 )
          {
            LunExtension = GetLunExtension(a1, HIDWORD(*(_QWORD *)(SrbExtension + 4096)));
            if ( *(_BYTE *)(a1 + 22) != (_BYTE)v30 )
            {
              v39 = v30;
              v38 = 2;
              v37 = 64;
              v36 = L"Timeout on Interrupt Fail";
              StorPortExtendedFunction((unsigned int)(v30 + 86), a1, LunExtension, (unsigned int)(v30 + 1));
            }
          }
        }
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 176) + 40LL) == -1LL )
          *(_BYTE *)(a2 + 3) = 8;
        else
          *(_BYTE *)(a2 + 3) = v27 != 0 ? 5 : 9;
        v42 = 1;
        break;
      }
      v5 += v15;
      v15 = v14;
      v17 = CheckDpcWatchdogTimerExpireSoon(a1, 0LL);
      v8 = 0;
      if ( v17 )
      {
        v27 = 1;
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 4084));
        v11 = 0;
        goto LABEL_27;
      }
    }
    LODWORD(v7) = a4;
  }
  v40 = (unsigned int)v7 / 0x3E8;
  v18 = GetSrbExtension(a2);
  v41 = 0;
  v20 = -1;
  v22 = v21;
  v23 = v18;
  v24 = v21;
  v47 = *(_BYTE *)(a2 + 3);
  v25 = -1;
  result = 0xFFFFFFFFLL;
  v44 = v22;
  if ( v19 >= 0xFA )
  {
    if ( v23 )
    {
      v20 = (unsigned __int8)*(_DWORD *)(v23 + 4096);
      v24 = *(_BYTE *)(v23 + 4253) & 1;
      if ( v24 && (v20 == 2 || v20 - 9 <= 1) )
        v44 = (unsigned __int8)*(_DWORD *)(v23 + 4136);
      v31 = GetLunExtension(a1, *(_DWORD *)(v23 + 4100));
      v19 = v5 / 0x3E8;
      v22 = v44;
      v41 = v31;
      result = 0xFFFFFFFFLL;
    }
    if ( v19 < v40 )
    {
      if ( v23 )
      {
        v25 = (*(unsigned __int16 *)(v23 + 4250) >> 9) & 7;
        result = (unsigned __int8)(*(unsigned __int16 *)(v23 + 4250) >> 1);
      }
    }
    else
    {
      v47 = 9;
    }
    result = NVMeLogTelemetry(
               a1,
               v41,
               0,
               1,
               "WaitForCmdComplete",
               (int)v36,
               v37,
               v38,
               v39,
               "TimeoutInMS",
               v40,
               "TotalWaitTimeInMS",
               v5 / 0x3E8,
               "SrbStatus",
               v47,
               "IsAdminCmd",
               v24,
               "CmdOpCode",
               v20,
               (__int64)"CmdExtra",
               v22,
               (__int64)"StatusCodeType",
               v25,
               (__int64)"StatusCode",
               result);
  }
  if ( v42 )
  {
    if ( v11 )
      v32 = v5 - v14;
    else
      v32 = 0;
    NVMeMapError(a1, a2, 1, v32);
    if ( *(_BYTE *)(a2 + 3) == 8
      && !*(_WORD *)(SrbExtension + 4244)
      && (*(_BYTE *)(SrbExtension + 4253) & 1) != 0
      && (v34 = *(_QWORD *)(a1 + 344), *(_QWORD *)(v34 + 16LL * *(unsigned __int16 *)(SrbExtension + 4246)) == a2) )
    {
      _InterlockedExchange64((volatile __int64 *)(v34 + 16LL * *(unsigned __int16 *)(SrbExtension + 4246)), 0LL);
      v35 = *(void (__fastcall **)(__int64, __int64, _QWORD))(SrbExtension + 4224);
      if ( v35 )
        v35(a1, a2, 0LL);
      LOBYTE(v33) = 1;
      NVMeRequestComplete(a1, a2, v33);
      ++*(_DWORD *)(a1 + 444);
      result = -1LL;
      _InterlockedAdd16((volatile signed __int16 *)(a1 + 440), 0xFFFFu);
    }
    else
    {
      return NVMeRequestComplete(a1, a2, 0LL);
    }
  }
  return result;
}
