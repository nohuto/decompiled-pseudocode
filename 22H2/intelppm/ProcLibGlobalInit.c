/*
 * XREFs of ProcLibGlobalInit @ 0x1C003C8F0
 * Callers:
 *     DriverEntry @ 0x1C003C174 (DriverEntry.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1C0001C68 (HviIsAnyHypervisorPresent.c)
 *     InitDevExts @ 0x1C0001CB4 (InitDevExts.c)
 *     DisplayPPMFlags @ 0x1C0002788 (DisplayPPMFlags.c)
 *     WPP_RECORDER_SF_s @ 0x1C000356C (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00044F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004AC0 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0009C90 (WPP_RECORDER_SF_dd.c)
 *     GetRegistryQwordValue @ 0x1C0021B8C (GetRegistryQwordValue.c)
 *     GetRegistryDwordValue @ 0x1C0021C50 (GetRegistryDwordValue.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C002D0E0 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C002D160 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C002D660 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C002E4E8 (ProcLibTraceThrottleStatesErrata.c)
 *     GetHiddenProcessorPresence @ 0x1C0030AD4 (GetHiddenProcessorPresence.c)
 *     GetHvPpmCapabilities @ 0x1C0030C50 (GetHvPpmCapabilities.c)
 *     ProcLibRegisterEtw @ 0x1C003C304 (ProcLibRegisterEtw.c)
 *     CollectAcpiBiosInfo @ 0x1C003C34C (CollectAcpiBiosInfo.c)
 *     InitDriver @ 0x1C003C44C (InitDriver.c)
 *     PopulateEnergyEstimationModel @ 0x1C003C728 (PopulateEnergyEstimationModel.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  int inited; // eax
  unsigned int v3; // edi
  unsigned __int16 v4; // r9
  unsigned int v5; // r8d
  int v6; // eax
  unsigned __int16 v7; // r9
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // edi
  char v12; // si
  void *v23; // rax
  __int64 v24; // rdx
  ULONG v25; // ecx
  const CHAR *v26; // r8
  const CHAR *v27; // r9
  bool v28; // zf
  unsigned int v29; // ebx
  __int64 v30; // r14
  __int64 v31; // rax
  int *v32; // rdi
  unsigned __int8 i; // bl
  int v34; // eax
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  const char *v37; // rax
  int v39; // [rsp+30h] [rbp-49h]
  char v40; // [rsp+40h] [rbp-39h] BYREF
  bool v41; // [rsp+41h] [rbp-38h] BYREF
  int v42; // [rsp+44h] [rbp-35h] BYREF
  int v43; // [rsp+48h] [rbp-31h] BYREF
  int v44; // [rsp+4Ch] [rbp-2Dh] BYREF
  int v45; // [rsp+50h] [rbp-29h] BYREF
  __int128 v46; // [rsp+58h] [rbp-21h] BYREF
  __int128 v47; // [rsp+68h] [rbp-11h]
  __int64 v48; // [rsp+78h] [rbp-1h]
  __int128 v49; // [rsp+80h] [rbp+7h] BYREF
  __int128 InputBuffer; // [rsp+90h] [rbp+17h] BYREF

  v45 = 0;
  v43 = 0;
  v44 = 0;
  v41 = 0;
  v40 = 0;
  v48 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  inited = ZwPowerInformation(ProcessorStateHandler, 0LL, 0, &dword_1C001C5F8, 0x110u);
  v3 = inited;
  if ( inited >= 0 )
  {
    v6 = dword_1C001C5F8;
    if ( dword_1C001C5F8 != 62 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741735;
      v7 = 11;
      v39 = 62;
LABEL_9:
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        v7,
        (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
        v6,
        v39);
      return (unsigned int)-1073741735;
    }
    inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
               WdfDriverGlobals,
               0LL,
               &qword_1C001C3E8);
    v3 = inited;
    if ( inited < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v3;
      v4 = 12;
      goto LABEL_14;
    }
    inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
               WdfDriverGlobals,
               0LL,
               &qword_1C001C3F8);
    v3 = inited;
    if ( inited < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v3;
      v4 = 13;
      goto LABEL_14;
    }
    inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
               WdfDriverGlobals,
               0LL,
               &qword_1C001C3F0);
    v3 = inited;
    if ( inited < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v3;
      v4 = 14;
      goto LABEL_14;
    }
    inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
               WdfDriverGlobals,
               0LL,
               &qword_1C001C938);
    v3 = inited;
    if ( inited < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v3;
      v4 = 15;
      goto LABEL_14;
    }
    inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
               WdfDriverGlobals,
               0LL,
               &qword_1C001C958);
    v3 = inited;
    if ( inited < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v3;
      v4 = 16;
      goto LABEL_14;
    }
    inited = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
               WdfDriverGlobals,
               0LL,
               &qword_1C001C930);
    v3 = inited;
    if ( inited < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v3;
      v4 = 17;
LABEL_14:
      v5 = 4;
      goto LABEL_5;
    }
    KeInitializeEvent(&Event, NotificationEvent, 1u);
    WorkItem = IoAllocateWorkItem(DeviceObject);
    word_1C001C96C = 0;
    qword_1C001C960 = WorkItem;
    qword_1C001C408 = (__int64)&qword_1C001C400;
    qword_1C001C400 = (__int64)&qword_1C001C400;
    qword_1C001C418 = (__int64)&qword_1C001C410;
    qword_1C001C410 = (__int64)&qword_1C001C410;
    qword_1C001C428 = (__int64)&qword_1C001C420;
    qword_1C001C420 = (__int64)&qword_1C001C420;
    qword_1C001C438 = (__int64)&qword_1C001C430;
    qword_1C001C430 = (__int64)&qword_1C001C430;
    qword_1C001C448 = (__int64)&qword_1C001C440;
    qword_1C001C440 = (__int64)&qword_1C001C440;
    qword_1C001C948 = (__int64)&qword_1C001C940;
    qword_1C001C940 = (__int64)&qword_1C001C940;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"AllowPepPerfStates",
      &v45);
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"Overrides",
      &dword_1C001C3E0);
    GetRegistryQwordValue(v10, v9, &qword_1C001C3D8);
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"DisableAsserts",
      &v43);
    if ( v43 )
      byte_1C001C988 = 1;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
      (__int64)L"PerfEnablePackageIdle",
      &v44);
    qword_1C001C7B0 = (__int64)RegisterKernelIdleStates;
    v11 = 1280;
    byte_1C001CC01 = 0;
    qword_1C001C820 = (__int64)RegisterHiddenIdleStates;
    byte_1C001C828 = v44 == 0;
    dword_1C001C82C = 0;
    qword_1C001C7B8 = (__int64)RegisterKernelPerfStates;
    v12 = 0;
    qword_1C001C7C8 = (__int64)RegisterKernelPerfFeedback;
    qword_1C001C7D0 = (__int64)RegisterKernelLegacyPcc;
    qword_1C001C7C0 = (__int64)RegisterKernelCap;
    qword_1C001C7D8 = (__int64)RegisterKernelCpc;
    qword_1C001C7E0 = (__int64)RegisterKernelPepPerf;
    qword_1C001C7E8 = (__int64)GetNtProcessorNumber;
    qword_1C001C7F0 = (__int64)RegisterKernelPackage;
    qword_1C001C7F8 = (__int64)&PPM_ETW_SUMMARY2;
    qword_1C001C800 = (__int64)&PPM_ETW_IDLE_STATES_ERROR;
    qword_1C001C808 = (__int64)&PPM_ETW_PERF_STATES_ERROR;
    qword_1C001C810 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR;
    qword_1C001C818 = (__int64)&PPM_ETW_LONG_CAP_INFO;
    if ( !HviIsAnyHypervisorPresent() )
    {
      if ( (int)HalPrivateDispatchTable[143]((__int64)&v46) >= 0 )
      {
        v6 = v46;
        if ( (_DWORD)v46 != 1 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)-1073741735;
          v7 = 18;
          v39 = 1;
          goto LABEL_9;
        }
        qword_1C001C6D8 = *((_QWORD *)&v46 + 1);
        xmmword_1C001C6E0 = v47;
        qword_1C001C6F0 = v48;
      }
      dword_1C001CBFC = dword_1C001C3E4 + HalPrivateDispatchTable[145](0xFFFFFFFFLL);
      dword_1C001CBF8 = 2;
LABEL_53:
      inited = InitDevExts(v11);
      v3 = inited;
      if ( inited < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v3;
        v4 = 19;
        goto LABEL_4;
      }
      inited = ProcLibRegisterEtw();
      v3 = inited;
      if ( inited < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v3;
        v4 = 20;
        goto LABEL_4;
      }
      *((_QWORD *)&InputBuffer + 1) = 0LL;
      *(_QWORD *)&InputBuffer = ProcessSystemSleepStateNotify;
      inited = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, 0x10u, 0LL, 0);
      v3 = inited;
      if ( inited < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v3;
        v4 = 21;
        goto LABEL_4;
      }
      inited = CollectAcpiBiosInfo(v25, v24, v26, v27);
      v3 = inited;
      if ( inited < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v3;
        v4 = 22;
        goto LABEL_4;
      }
      v42 = 1;
      EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v42);
      v28 = v42 == 2;
      v42 = 1;
      v29 = 0;
      if ( v28 )
        v29 = 1879048192;
      EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v42);
      if ( v42 == 2 )
        v29 |= 2u;
      v42 = 1;
      EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v42);
      if ( v42 == 2 )
        v29 |= 0x3300000u;
      v42 = 1;
      EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v42);
      if ( v42 == 2 )
        v29 |= 0x80000000;
      v30 = v29;
      v31 = 0x180099900377LL;
      qword_1C001C3D8 = v29 | (unsigned __int64)qword_1C001C3D8;
      dword_1C001C890 = v29;
      dword_1C001C4F8 = 1;
      dword_1C001C4FC = 256;
      if ( v45 )
        v31 = 0x181099D00377LL;
      Globals[0] = v31 | 0x10400000400LL;
      if ( (unsigned __int8)PoEnergyEstimationEnabled() )
      {
        v32 = dword_1C001C9E0;
        Globals[0] |= 0x2000000000uLL;
        for ( i = 0; i < 2u; ++i )
        {
          PopulateEnergyEstimationModel(i, v32);
          v32 += 64;
        }
      }
      *(_QWORD *)&v49 = 0LL;
      v34 = InitDriver((__int64)&dword_1C001C4F8, &v49);
      v3 = v34;
      if ( v34 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x17u,
            (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
            v34);
        memset(&dword_1C001C4F8, 0, 0x100uLL);
        return v3;
      }
      v35 = v49 | Globals[0];
      Globals[0] |= v49;
      if ( dword_1C001C82C == 1 )
      {
        qword_1C001C520 = 0LL;
        v36 = 0xFFFFDFFCF7FFFEFFuLL;
        qword_1C001C538 = 0LL;
        qword_1C001C540 = 0LL;
        qword_1C001C548 = 0LL;
        qword_1C001C568 = 0LL;
        qword_1C001C550 = 0LL;
        qword_1C001C558 = 0LL;
        qword_1C001C570 = 0LL;
        qword_1C001C578 = 0LL;
        qword_1C001C580 = 0LL;
        qword_1C001C588 = 0LL;
        qword_1C001C5B8 = 0LL;
        qword_1C001C5C0 = 0LL;
      }
      else
      {
        if ( dword_1C001C82C != 2 )
        {
LABEL_87:
          if ( v12 )
          {
            qword_1C001C5B8 = 0LL;
            qword_1C001C5C0 = 0LL;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v37 = "Disabled";
            if ( dword_1C001C82C )
              v37 = "Enabled";
            WPP_RECORDER_SF_s(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              2u,
              0x18u,
              (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
              v37);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0x19u,
                  (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0x1Au,
                  (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids);
              }
            }
          }
          DisplayPPMFlags(Globals[0], 5u);
          if ( (v30 & Globals[0] & 0x7F077) != 0 )
            ProcLibTraceIdleStatesErrata(0);
          if ( (v30 & Globals[0] & 0x70000000) != 0 )
            ProcLibTracePerfStatesErrata(0);
          if ( (v30 & Globals[0] & 0x3300000) != 0 )
            ProcLibTraceThrottleStatesErrata(0);
          if ( (v30 & Globals[0] & 0x80000000LL) != 0 )
            ProcLibTracePccErrata(0);
          if ( qword_1C001C3D8 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x1Bu,
                (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids);
            }
            DisplayPPMFlags(~qword_1C001C3D8, 5u);
            Globals[0] &= ~qword_1C001C3D8;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              2u,
              0x1Cu,
              (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids);
          DisplayPPMFlags(Globals[0], 4u);
          if ( qword_1C001C538 && (dword_1C001C3E0 & 0x70000000) != 0 )
            qword_1C001C538 = 0LL;
          return v3;
        }
        v36 = 0xFFFFFFFCFFFFFEFFuLL;
      }
      Globals[0] = v36 & v35;
      goto LABEL_87;
    }
    byte_1C001CC01 = 1;
    v49 = 0LL;
    InputBuffer = 0LL;
    if ( HviIsAnyHypervisorPresent() )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      *(_QWORD *)((char *)&InputBuffer + 4) = __PAIR64__(_RCX, _RBX);
      HIDWORD(InputBuffer) = _RDX;
    }
    else
    {
      LODWORD(_RAX) = InputBuffer;
    }
    if ( (_DWORD)_RAX == 824407624 )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      *(_QWORD *)&v49 = __PAIR64__(_RBX, _RAX);
      *((_QWORD *)&v49 + 1) = __PAIR64__(_RDX, _RCX);
    }
    if ( (v49 & 0x100000000000LL) != 0 )
    {
      GetHvPpmCapabilities(&v41, &v40, 0LL);
      if ( v40 )
      {
        dword_1C001C82C = 2;
        qword_1C001C7B8 = (__int64)RegisterHvPerfStatesCounters;
        qword_1C001C7C8 = (__int64)RegisterHvPerfFeedbackCounters;
        qword_1C001C7D0 = (__int64)RegisterHvLegacyPccCounters;
        qword_1C001C7D8 = (__int64)RegisterHvCpcCounters;
        qword_1C001C820 = (__int64)RegisterHvIdleStates;
      }
      else
      {
        if ( !v41 )
        {
LABEL_46:
          dword_1C001CBF8 = GetHiddenProcessorPresence();
          goto LABEL_53;
        }
        dword_1C001C82C = 1;
        qword_1C001C7B8 = (__int64)RegisterHvPerfStates;
        qword_1C001C7D0 = (__int64)RegisterHvLegacyPcc;
        qword_1C001C7C8 = (__int64)RegisterNoop;
        qword_1C001C7E0 = (__int64)RegisterNoop;
        qword_1C001C7F8 = (__int64)&PPM_ETW_SUMMARY2_MINROOT_HV;
        qword_1C001C808 = (__int64)&PPM_ETW_PERF_STATES_ERROR_MINROOT_HV;
        qword_1C001C810 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_MINROOT_HV;
        qword_1C001C7C0 = (__int64)RegisterHvCap;
        qword_1C001C818 = (__int64)"%";
        qword_1C001C7D8 = (__int64)RegisterHvCpc;
      }
      qword_1C001C7B0 = (__int64)RegisterHvIdleStates;
      qword_1C001C800 = (__int64)&PPM_ETW_IDLE_STATES_ERROR_MINROOT_HV;
      v11 = 1024;
      qword_1C001C7E8 = (__int64)GetLpIndex;
      v23 = RegisterHvPackage;
    }
    else
    {
      v12 = 1;
      qword_1C001C7B0 = (__int64)RegisterGuestIdleStates;
      v23 = RegisterNoop;
      qword_1C001C7B8 = (__int64)RegisterNoop;
      qword_1C001C7C8 = (__int64)RegisterNoop;
      qword_1C001C7D0 = (__int64)RegisterNoop;
      qword_1C001C7C0 = (__int64)RegisterNoop;
      qword_1C001C7D8 = (__int64)RegisterNoop;
      qword_1C001C7E0 = (__int64)RegisterNoop;
    }
    qword_1C001C7F0 = (__int64)v23;
    goto LABEL_46;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 10;
LABEL_4:
    v5 = 3;
LABEL_5:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v5,
      v4,
      (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
      inited);
  }
  return v3;
}
