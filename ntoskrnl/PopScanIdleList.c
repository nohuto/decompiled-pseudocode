__int64 __fastcall PopScanIdleList(int a1, unsigned __int64 a2)
{
  int v2; // r13d
  char v3; // bl
  unsigned __int64 v4; // r15
  int v5; // r14d
  KIRQL v6; // al
  unsigned __int64 v7; // rsi
  __int64 *v8; // r12
  __int64 v9; // rdx
  int v10; // r8d
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v15; // eax
  bool v16; // zf
  char v17; // si
  __int64 *v18; // rbx
  unsigned __int32 v19; // r13d
  unsigned __int32 v20; // r15d
  unsigned int v21; // r14d
  __int64 v22; // rdx
  unsigned int v23; // r8d
  unsigned int v24; // eax
  unsigned int v25; // r10d
  unsigned int v26; // edx
  unsigned int v27; // edx
  bool v28; // cc
  unsigned int v29; // ecx
  unsigned int v30; // edx
  int v31; // eax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r8
  int v35; // eax
  unsigned __int64 v36; // rcx
  int v37; // [rsp+44h] [rbp-24h]
  unsigned int v38; // [rsp+48h] [rbp-20h]
  int v39; // [rsp+4Ch] [rbp-1Ch] BYREF
  int v40; // [rsp+50h] [rbp-18h]
  unsigned int v41; // [rsp+54h] [rbp-14h]
  unsigned int v42; // [rsp+58h] [rbp-10h]
  unsigned int v43; // [rsp+5Ch] [rbp-Ch]
  KIRQL v46; // [rsp+C0h] [rbp+58h]
  int v47; // [rsp+C8h] [rbp+60h] BYREF

  v40 = dword_140C3D4A8;
  v2 = a1;
  v3 = 0;
  v4 = a2;
  v43 = dword_140C3D4A4;
  v5 = 0;
  v47 = 0;
  v39 = 0;
  v41 = *((_DWORD *)PopPolicy + 53);
  v42 = PopCurrentCoalescingSpindownTimeout;
  v37 = 0;
  v38 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  v7 = v6;
  v46 = v6;
  if ( byte_140D17884 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)&PopDopeGlobalLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v7);
  }
  else
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_START);
    v8 = (__int64 *)PopIdleDetectList;
    if ( (__int64 *)PopIdleDetectList != &PopIdleDetectList )
    {
      v17 = 0;
      do
      {
        v18 = v8 - 4;
        v19 = _InterlockedExchange((volatile __int32 *)v8 - 7, 0);
        *((_DWORD *)v8 - 5) += v19;
        if ( v19 || *((_DWORD *)v18 + 2) )
          *(_DWORD *)v18 = 0;
        v20 = _InterlockedExchangeAdd((volatile signed __int32 *)v18, PopIdleScanInterval);
        if ( !v20 )
          *((_DWORD *)v18 + 14) = 1;
        if ( v40 == 1 )
          v21 = *((_DWORD *)v18 + 4);
        else
          v21 = *((_DWORD *)v18 + 5);
        v22 = *((unsigned int *)v18 + 12);
        v23 = v20;
        if ( (_DWORD)v22 == 1 )
        {
          if ( v21 == -1 )
            v21 = v41;
          v24 = PopCoalescingCheck(v42, v21, v20);
          v21 = v24;
          if ( v24 )
            ++v37;
          v25 = v43;
          if ( v43 > v24 )
            v25 = v24;
          v26 = *((_DWORD *)v18 + 23);
          v23 = PopIdleScanInterval + *((_DWORD *)v18 + 22);
          v38 = v25;
          if ( v20 )
          {
            if ( v26 <= PopIdleScanInterval )
              v30 = 0;
            else
              v30 = v26 - PopIdleScanInterval;
          }
          else
          {
            v27 = PopIdleScanInterval + v26;
            v23 = v25;
            v28 = v27 <= v25;
            v29 = v27;
            v30 = v25;
            if ( v28 )
            {
              v23 = PopIdleScanInterval + *((_DWORD *)v18 + 22);
              v30 = v29;
            }
          }
          *((_DWORD *)v18 + 23) = v30;
          v22 = *((unsigned int *)v18 + 12);
          *((_DWORD *)v18 + 22) = v23;
        }
        if ( v21 && v23 >= v21 && *((_DWORD *)v18 + 14) == 1 && (v20 || (PopSimulate & 0x2000000) != 0) )
        {
          if ( *((_DWORD *)v18 + 12) == 1 )
            PopDiagTraceIoCoalescingDiskIdle(v18[3], v22);
          if ( (int)PopRequestPowerIrp(v18[3], 2, *((_DWORD *)v18 + 13), (int)PopDeviceIdleCompletion, 0LL, 0, 0LL) >= 0 )
          {
            *((_DWORD *)v18 + 3) = 0;
            v31 = *((_DWORD *)v18 + 13);
            ++dword_140D17880;
            *((_DWORD *)v18 + 14) = v31;
          }
        }
        else if ( (_DWORD)v22 == 1 && !v20 )
        {
          v17 = 1;
        }
        PopDiagTraceDeviceIdleCheck(v8 - 4, v20, v19);
        if ( *((_DWORD *)v18 + 12) == 1 )
          PopDiagTraceDiskIdleCheck(v8 - 4, v21, v38);
        v8 = (__int64 *)*v8;
      }
      while ( v8 != &PopIdleDetectList );
      v5 = v37;
      v4 = a2;
      v2 = a1;
      v3 = v17;
      LOBYTE(v7) = v46;
    }
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_END);
    KxReleaseSpinLock((volatile signed __int64 *)&PopDopeGlobalLock);
    if ( KiIrqlFlags )
    {
      v32 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v32 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v34 = v33->SchedulerAssist;
        v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v16 = (v35 & v34[5]) == 0;
        v9 = (unsigned int)v35 & v34[5];
        v34[5] = v9;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
    __writecr8((unsigned __int8)v7);
    v10 = PopIdleBackgroundIgnoreCount;
    if ( PopIdleBackgroundIgnoreCount )
      v10 = --PopIdleBackgroundIgnoreCount;
    if ( PopBackgroundTaskIgnoreCount )
      --PopBackgroundTaskIgnoreCount;
    if ( !v2
      || (v9 = (PopIdleScanInterval + 179) % (unsigned int)PopIdleScanInterval,
          v36 = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval,
          v4 == v36) )
    {
      PopBackgroundTaskAllowed = 1;
    }
    else if ( v4 < v36 )
    {
      PopBackgroundTaskAllowed = 0;
    }
    if ( !v5 || v3 )
    {
      if ( !v10 && !dword_140C3D48C )
      {
        PopGetPowerSettingValue(&GUID_IDLE_BACKGROUND_TASK, v9, 3LL, &v47, 4, &v39);
        ++v47;
        PopSetPowerSettingValueAcDc(&GUID_IDLE_BACKGROUND_TASK, 4LL, &v47);
        v9 = (PopIdleScanInterval + 59) % (unsigned int)PopIdleScanInterval;
        PopIdleBackgroundIgnoreCount = (PopIdleScanInterval + 59) / (unsigned int)PopIdleScanInterval;
      }
      if ( !PopBackgroundTaskIgnoreCount && PopSIdle >= 50 && !dword_140C3D48C && PopBackgroundTaskAllowed )
      {
        PopGetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, v9, 0LL, &v47, 4, &v39);
        ++v47;
        PopSetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, 0xFFFFFFFFLL, 0LL, 4LL, &v47);
        PopBackgroundTaskAllowed = 0;
        PopBackgroundTaskIgnoreCount = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval;
      }
    }
  }
  return 0LL;
}
