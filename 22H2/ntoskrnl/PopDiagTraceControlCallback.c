/*
 * XREFs of PopDiagTraceControlCallback @ 0x140862C00
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     EtwWrite @ 0x140257780 (EtwWrite.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x14032C2CC (PopDiagTraceSystemLatencyUpdate.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     PopDiagTraceFxRundown @ 0x140588968 (PopDiagTraceFxRundown.c)
 *     PopThermalTraceRundownEvents @ 0x140590104 (PopThermalTraceRundownEvents.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x140592754 (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopPlTraceLogPowerPlane @ 0x1405A1AD0 (PopPlTraceLogPowerPlane.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A73E4 (PopAcquirePowerRequestPushLock.c)
 *     PopDiagTracePowerRequestCreate @ 0x1407A7E10 (PopDiagTracePowerRequestCreate.c)
 *     PopDiagTracePowerSetting @ 0x1407DECB0 (PopDiagTracePowerSetting.c)
 *     PopTransitionTelemetryOsState @ 0x1408037CC (PopTransitionTelemetryOsState.c)
 *     PopLoggingInformation @ 0x140980E94 (PopLoggingInformation.c)
 *     PopRundownThermalRequests @ 0x1409834A0 (PopRundownThermalRequests.c)
 *     PopDiagTraceDeviceComplianceRundown @ 0x14098E3D8 (PopDiagTraceDeviceComplianceRundown.c)
 *     PopDiagTraceDynamicTickStatusRundown @ 0x14098EC38 (PopDiagTraceDynamicTickStatusRundown.c)
 *     PopDiagTracePlatformRoleRundown @ 0x14099083C (PopDiagTracePlatformRoleRundown.c)
 *     PopDiagTracePowerStateEventRundown @ 0x140990EFC (PopDiagTracePowerStateEventRundown.c)
 *     PopDiagTraceSystemIdleRundown @ 0x140991D80 (PopDiagTraceSystemIdleRundown.c)
 *     PopTraceStandbyConnectivityRundown @ 0x140992C34 (PopTraceStandbyConnectivityRundown.c)
 *     ExTraceTimerResolution @ 0x1409F7C58 (ExTraceTimerResolution.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTraceControlCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        int *CallbackContext)
{
  PVOID *i; // rbx
  PVOID *v8; // rbx
  __int64 v9; // rsi
  _DWORD *v10; // rax
  int v11; // ecx
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  PVOID v16; // rsi
  unsigned int v17; // r15d
  char *v18; // r14
  unsigned int v19; // r12d
  char *v20; // r13
  ULONG v21; // ebx
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // [rsp+30h] [rbp-30h] BYREF
  BOOL v27; // [rsp+34h] [rbp-2Ch] BYREF
  PVOID P; // [rsp+38h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-20h] BYREF

  if ( (_DWORD)ControlCode == 2 )
  {
    v26 = 0;
    if ( CallbackContext == &dword_140C03950 )
    {
      if ( (MatchAnyKeyword & 0x800000000000LL) != 0 )
        PopTransitionTelemetryOsState(5, 1);
      if ( PopPowerPlane )
        PopPlTraceLogPowerPlane((unsigned __int16 *)PopPowerPlane, ControlCode, Level);
    }
    else
    {
      ExTraceTimerResolution(SourceId, ControlCode, Level, MatchAnyKeyword);
      PopDiagTraceSystemLatencyUpdate(1, PopFxSystemLatencyLimit);
      PopAcquirePowerRequestPushLock(0);
      for ( i = (PVOID *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (PVOID *)*i )
        PopDiagTracePowerRequestCreate(1, (__int64)i);
      PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
      UserData.Size = 4;
      UserData.Reserved = 0;
      v27 = dword_140C3D90C == 0;
      UserData.Ptr = (ULONGLONG)&v27;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_ACDC_STATE_RUNDOWN, 0LL, 1u, &UserData);
      ExAcquireFastMutex(&PopSettingLock);
      v8 = (PVOID *)PopPowerSettings;
      if ( PopPowerSettings != &PopPowerSettings )
      {
        v9 = dword_140C3D90C;
        do
        {
          v10 = v8[v9 + 8];
          if ( v10 )
            PopDiagTracePowerSetting(1, (ULONGLONG)(v8 + 4), v10[1], (__int64)(v10 + 3));
          v8 = (PVOID *)*v8;
        }
        while ( v8 != &PopPowerSettings );
      }
      ExReleaseFastMutex(&PopSettingLock);
      PopThermalTraceRundownEvents();
      P = 0LL;
      PopAcquirePolicyLock(v11);
      v12 = PopLoggingInformation(&P, &v26);
      PopReleasePolicyLock(v14, v13, v15);
      v16 = P;
      if ( v12 >= 0 )
      {
        v17 = *(_DWORD *)P;
        v18 = (char *)P + 4;
        v19 = 0;
        if ( *(_DWORD *)P )
        {
          v20 = (char *)P + v26;
          do
          {
            if ( v18 >= v20 )
              break;
            v21 = *((_DWORD *)v18 + 3);
            UserData.Reserved = 0;
            v21 += 16;
            UserData.Size = v21;
            UserData.Ptr = (ULONGLONG)v18;
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SLEEP_DISABLE_REASON_RUNDOWN, 0LL, 1u, &UserData);
            ++v19;
            v18 += v21;
          }
          while ( v19 < v17 );
        }
      }
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
      if ( !_InterlockedCompareExchange(&PopDiagDeviceRundownRequests, 1, 0) )
        ExQueueWorkItem(&PopDiagDeviceRundownWorkItem, DelayedWorkQueue);
      if ( CallbackContext == (int *)&PopDiagHandle )
        PopDiagTraceFxRundown(0LL);
      PopDiagTracePlatformRoleRundown();
      PopRundownThermalRequests();
      PopAcquirePolicyLock(v22);
      PopTraceStandbyConnectivityRundown();
      PopDiagTraceDeviceComplianceRundown();
      PopReleasePolicyLock(v24, v23, v25);
      PopDiagTraceDynamicTickStatusRundown();
      PopDiagTraceDeepSleepConstraintRundown();
      PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerEventLock);
      PopDiagTracePowerStateEventRundown();
      PopReleaseRwLock(&PopPowerEventLock);
      PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
      PopDiagTraceSystemIdleRundown();
      PopReleaseRwLock(&PopSystemIdleLock);
    }
  }
}
