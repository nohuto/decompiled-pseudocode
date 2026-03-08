/*
 * XREFs of KeInitializeClock @ 0x140B67BE8
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B42D0C (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     KiSetPendingTick @ 0x14022AF40 (KiSetPendingTick.c)
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     RtlRbInsertNodeEx @ 0x14024D3A0 (RtlRbInsertNodeEx.c)
 *     KiSetupTimeIncrement @ 0x1403A5E18 (KiSetupTimeIncrement.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     strstr @ 0x1403D3650 (strstr.c)
 *     Feature_PerProcessorClockTick__private_ReportDeviceUsage @ 0x14040A770 (Feature_PerProcessorClockTick__private_ReportDeviceUsage.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PoTraceDynamicTickDisabled @ 0x14058EB5C (PoTraceDynamicTickDisabled.c)
 *     EmClientQueryRuleState @ 0x140A85190 (EmClientQueryRuleState.c)
 */

char __fastcall KeInitializeClock(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char result; // al
  __int64 v3; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r10d
  __int64 v10; // rdx
  bool v11; // r8
  __int64 v12; // rax
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  const char *v18; // rcx
  signed __int32 v19[8]; // [rsp+0h] [rbp-70h] BYREF
  int v20; // [rsp+30h] [rbp-40h] BYREF
  __int64 v21; // [rsp+38h] [rbp-38h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-30h] BYREF
  __int128 v23; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-18h]
  unsigned int v25; // [rsp+60h] [rbp-10h]
  char v26; // [rsp+64h] [rbp-Ch]

  v21 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v24 = 0LL;
  v25 = 0;
  v26 = 0;
  v23 = 0LL;
  if ( (_DWORD)BugCheckParameter2 )
  {
    if ( (_DWORD)BugCheckParameter2 == 1 )
    {
      Feature_PerProcessorClockTick__private_ReportDeviceUsage();
      if ( KiClockTimerPerCpu && KiSerializeTimerExpiration )
        KiClockTimerPerCpuTickScheduling = 1;
      if ( KiEnableClockTimerPerCpuTickScheduling && KiClockTimerPerCpu )
        KiClockTimerPerCpuTickScheduling = KiEnableClockTimerPerCpuTickScheduling == 1;
      v3 = MEMORY[0xFFFFF78000000008];
      CurrentPrcb = KeGetCurrentPrcb();
      KeQueryPerformanceCounter(&PerformanceFrequency);
      KiClockStateUpdateTimeout = 5 * PerformanceFrequency.QuadPart;
      *(_BYTE *)(KiProcessorBlock[(unsigned int)KiClockTimerOwner] + 33) = 1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xDuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 13 )
          LODWORD(v7) = 0x2000;
        else
          v7 = (-1LL << (CurrentIrql + 1)) & 0x3FFC;
        SchedulerAssist[5] |= v7;
      }
      CurrentPrcb->ClockTimerState.ClockActive = 1;
      KiClockState = 0;
      off_140C01C98[0]();
      KiSetPendingTick(0);
      off_140C01C90[0]();
      LOBYTE(v8) = 1;
      ((void (__fastcall *)(__int64))off_140C01C88[0])(v8);
      ((void (__fastcall *)(_QWORD, _QWORD, __int64 *))off_140C01CA0[0])(0LL, (unsigned int)KeMaximumIncrement, &v21);
      KiSetPendingTick(1);
      v9 = KeMaximumIncrement;
      KeTimeIncrement = v21;
      CurrentPrcb->ClockTimerState.TimeIncrement = v21;
      CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement = v9;
      KiLastRequestedTimeIncrement = v9;
      CurrentPrcb->ClockTimerState.NextTickDueTime = v3 + v21;
      KeNonHrTimeIncrement = v9;
      KePseudoHrTimeIncrement = v9;
      dword_140C41C3C = v9;
      if ( (qword_140D0C178 & 1) != 0 )
      {
        if ( KiClockIntervalRequests )
          v10 = KiClockIntervalRequests ^ (unsigned __int64)&KiClockIntervalRequests;
        else
          v10 = 0LL;
      }
      else
      {
        v10 = KiClockIntervalRequests;
      }
      v11 = 0;
      if ( v10 )
      {
        while ( 1 )
        {
          if ( v9 >= *(_DWORD *)(v10 + 28) )
          {
            v12 = *(_QWORD *)(v10 + 8);
            if ( (qword_140D0C178 & 1) != 0 )
            {
              if ( !v12 )
                goto LABEL_42;
              v12 ^= v10;
            }
            if ( !v12 )
            {
LABEL_42:
              v11 = 1;
              break;
            }
          }
          else
          {
            v12 = *(_QWORD *)v10;
            if ( (qword_140D0C178 & 1) != 0 )
            {
              if ( !v12 )
                break;
              v12 ^= v10;
            }
            if ( !v12 )
              break;
          }
          v10 = v12;
        }
      }
      RtlRbInsertNodeEx(
        (unsigned __int64 *)&KiClockIntervalRequests,
        v10,
        v11,
        (unsigned __int64)&KiDefaultClockIntervalRequest);
      byte_140C41C38 = 1;
      if ( KiIrqlFlags )
      {
        v13 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = v14->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v17 = (v16 & v15[5]) == 0;
          v15[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick((__int64)v14);
        }
      }
      __writecr8(CurrentIrql);
      dword_140C417F0 = KeTimeIncrement;
      dword_140C417F4 = KeTimeIncrement;
      result = KiLastRequestedTimeIncrement;
      dword_140C417F8 = KiLastRequestedTimeIncrement;
      dword_140C417FC = KiLastRequestedTimeIncrement;
    }
    else
    {
      if ( (_DWORD)BugCheckParameter2 != 2 )
        KeBugCheckEx(0x33u, 1uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
      if ( (_BYTE)KiDynamicTickDisableReason )
        goto LABEL_10;
      if ( !HvlHypervisorConnected || (result = HvlpFlags, (HvlpFlags & 2) != 0) )
      {
        v20 = 1;
        result = EmClientQueryRuleState(&GUID_EM_CPU_TYPE_INTEL_DTT_DISABLE, &v20);
        if ( v20 == 2 )
          KiDynamicTickDisableReason = 3;
      }
      if ( (_BYTE)KiDynamicTickDisableReason )
      {
LABEL_10:
        result = PoTraceDynamicTickDisabled();
        KiForceIdleDisabled = 1;
      }
      _InterlockedOr(v19, 0);
      KiDynamicTickInitialized = 1;
    }
  }
  else
  {
    v18 = *(const char **)(a2 + 216);
    qword_140C417E8 = -1LL;
    qword_140C41808 = -1LL;
    if ( v18 && strstr(v18, "DISABLEDYNAMICTICK") )
      KiDynamicTickDisableReason = 1;
    ((void (__fastcall *)(__int128 *))off_140C01C80[0])(&v23);
    if ( (v23 & 4) != 0 )
      KiClockTimerPerCpu = 1;
    if ( (v23 & 2) != 0 )
      KiClockTimerHighLatency = 1;
    if ( (v23 & 1) != 0 )
      KiClockTimerAlwaysOnPresent = 1;
    if ( !(_BYTE)KiDynamicTickDisableReason && (v23 & 8) == 0 )
      KiDynamicTickDisableReason = 2;
    return KiSetupTimeIncrement(v24, v25);
  }
  return result;
}
