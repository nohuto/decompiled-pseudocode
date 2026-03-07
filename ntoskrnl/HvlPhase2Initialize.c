NTSTATUS __fastcall HvlPhase2Initialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r12
  NTSTATUS result; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  int *v37; // rcx
  int *v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  unsigned int v41; // ecx
  UNICODE_STRING EventName; // [rsp+28h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v44[6]; // [rsp+48h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+7h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+D8h] [rbp+67h] BYREF

  *(_QWORD *)&EventName.Length = 4456514LL;
  EventName.Buffer = L"\\KernelObjects\\HvlWithdrawAllowed";
  v4 = *(_QWORD **)(a1 + 240);
  DestinationString = 0LL;
  v5 = a1;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v6 = v4[316];
  v7 = v4[317];
  v8 = v4[318];
  v9 = v4[319];
  v10 = v4[320];
  if ( v6 )
  {
    HvlpEtwRegister(a1, a2, a3, a4);
    v44[0] = v6;
    v44[1] = v7;
    v44[2] = v8;
    v44[3] = v9;
    v44[4] = v10;
    HvlpLogHypervisorLaunchError(v44);
    EtwUnregister(HvlGlobalSystemEventsHandle);
    HvlGlobalSystemEventsHandle = 0LL;
  }
  if ( !HvlHypervisorConnected )
    return 0;
  if ( (HvlpFlags & 2) == 0 )
    goto LABEL_12;
  HvlpDiscoverTopologyComplete(a1, a2, a3, a4);
  HvlpSchedulerType = HvlpQueryHypervisorSchedulerType(v13, v12, v14, v15);
  if ( HvlpSchedulerType == 4 )
    HvlpRootSchedulerEnabled = 1;
  if ( !HvlpRootSchedulerEnabled
    || (result = HvlpInitializeSvmIommuSupport(a1, a2, a3, a4), a2 = 0x80000000LL, a1 = result + 0x80000000, (int)a1 < 0)
    || result == -1073741637 )
  {
LABEL_12:
    HvlpInitializeHvCrashdumpPhase2(a1, a2, a3, a4);
    if ( (HvlpRootFlags & 1) == 0 )
      goto LABEL_21;
    HvlpEtwRegister(v17, v16, v18, v19);
    HvlpWriteEventLog(&HV_EVENTLOG_START_SUCCEEDED, 0, 0LL);
    HvlpLogHypervisorSchedulerType(v21, v20, v22, v23);
    HvlpCheckTscSync(v25, v24, v26, v27);
    HvlpLogIommuInitStatus(v29, v28, v30, v31);
    HvlpLogGuestStateScrubbingStatus(v33, v32, v34, v35);
    if ( (unsigned int)HvlpLogicalProcessorCount < 0x400 )
    {
      v37 = &HvlpLogicalProcessorRegions[30 * (unsigned int)HvlpLogicalProcessorCount];
      if ( !*v37 )
      {
        v38 = v37 + 14;
        if ( *((_WORD *)v37 + 28) )
          HvlpLogProcessorStartupFailure((unsigned int)v37[2], *((unsigned __int16 *)v37 + 28));
      }
    }
    HvlpLogMicrocodeUpdateStatus(v37, v36, v38, v39);
    if ( HvlpMinrootConfigurationError )
      HvlpWriteEventLog(&HV_EVENTLOG_CORE_SCHEDULER_PROCESSOR_CONFIGURATION_WARNING, 0, 0LL);
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 80;
    CallbackObject = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
    if ( result >= 0 )
    {
      ExRegisterCallback(CallbackObject, HvlpPowerStateCallback, 0LL);
LABEL_21:
      v40 = ExCbEnlightenmentState;
      if ( ExCbEnlightenmentState )
        ExNotifyWithProcessing(ExCbEnlightenmentState, 0LL, 0LL, 0LL);
      HvlpRegisterPowerPolicyCallbacks(v40, v16, v18, v19);
      HvlpBootPagesInfo = 0LL;
      qword_140C5F0B0 = IoCreateNotificationEvent(&EventName, &EventHandle);
      if ( *(_DWORD *)(*(_QWORD *)(v5 + 240) + 2552LL) )
      {
        byte_140C5F0A8 = 1;
        qword_140C5F0C0 = (PVOID)ExAllocatePool2(
                                   256LL,
                                   (unsigned int)(8 * *(_DWORD *)(*(_QWORD *)(v5 + 240) + 2552LL) + 8),
                                   541873736LL);
        if ( !qword_140C5F0C0 )
          return -1073741670;
        v41 = *(_DWORD *)(*(_QWORD *)(v5 + 240) + 2552LL);
        *(_DWORD *)qword_140C5F0C0 = v41;
        memmove((char *)qword_140C5F0C0 + 8, *(const void **)(*(_QWORD *)(v5 + 240) + 2544LL), 8LL * v41);
        KeResetEvent(qword_140C5F0B0);
      }
      return 0;
    }
  }
  return result;
}
