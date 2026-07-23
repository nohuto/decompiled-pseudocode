/*
 * XREFs of PopScanIdleList @ 0x14026EAB8
 * Callers:
 *     PopPolicySystemIdle @ 0x14066D1E0 (PopPolicySystemIdle.c)
 *     PopIdleDetection @ 0x1408E43B0 (PopIdleDetection.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     PopDiagTraceEventNoPayload @ 0x14024B6D4 (PopDiagTraceEventNoPayload.c)
 *     PopGetPowerSettingValue @ 0x140270104 (PopGetPowerSettingValue.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027171C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopRequestPowerIrp @ 0x14036DED0 (PopRequestPowerIrp.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PopCoalescingCheck @ 0x14056ED9C (PopCoalescingCheck.c)
 *     PopDiagTraceDiskIdleCheck @ 0x140571970 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x140572FBC (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopSetPowerSettingValueAcDc @ 0x14066D5A8 (PopSetPowerSettingValueAcDc.c)
 *     PopSetPowerSettingValue @ 0x14066E018 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopScanIdleList(int a1, unsigned __int64 a2)
{
  int v2; // ebx
  unsigned __int64 v3; // r14
  int v4; // r12d
  int v5; // esi
  KIRQL v6; // al
  unsigned __int64 v7; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v11; // eax
  bool v12; // zf
  __int64 *v13; // r13
  unsigned int v14; // r15d
  __int64 *v15; // rbx
  __int32 v16; // r12d
  unsigned __int32 v17; // r14d
  unsigned int v18; // esi
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  int v25; // eax
  int v26; // eax
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v28; // rdx
  char v29; // al
  char v30; // al
  int v31; // ecx
  __int64 v32; // rdx
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r8
  int v36; // eax
  int v37; // r8d
  unsigned __int64 v38; // rcx
  char v40; // [rsp+40h] [rbp-C0h] BYREF
  char v41; // [rsp+41h] [rbp-BFh] BYREF
  int Src; // [rsp+44h] [rbp-BCh] BYREF
  KIRQL v43; // [rsp+48h] [rbp-B8h]
  __int16 v44; // [rsp+4Ch] [rbp-B4h] BYREF
  int v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+54h] [rbp-ACh]
  int v47; // [rsp+58h] [rbp-A8h]
  int v48; // [rsp+60h] [rbp-A0h]
  unsigned int v49; // [rsp+64h] [rbp-9Ch]
  unsigned int v50; // [rsp+68h] [rbp-98h]
  unsigned int v51; // [rsp+6Ch] [rbp-94h]
  unsigned __int32 v52; // [rsp+70h] [rbp-90h] BYREF
  __int32 v53; // [rsp+78h] [rbp-88h] BYREF
  int v54; // [rsp+80h] [rbp-80h]
  _QWORD *v55; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v56; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v58; // [rsp+B0h] [rbp-50h]
  __int64 v59; // [rsp+B8h] [rbp-48h]
  __int16 *v60; // [rsp+C0h] [rbp-40h]
  __int64 v61; // [rsp+C8h] [rbp-38h]
  __int64 v62; // [rsp+D0h] [rbp-30h]
  int v63; // [rsp+D8h] [rbp-28h]
  int v64; // [rsp+DCh] [rbp-24h]
  __int64 *v65; // [rsp+E0h] [rbp-20h]
  __int64 v66; // [rsp+E8h] [rbp-18h]
  char *v67; // [rsp+F0h] [rbp-10h]
  __int64 v68; // [rsp+F8h] [rbp-8h]
  unsigned __int32 *v69; // [rsp+100h] [rbp+0h]
  __int64 v70; // [rsp+108h] [rbp+8h]
  __int32 *v71; // [rsp+110h] [rbp+10h]
  __int64 v72; // [rsp+118h] [rbp+18h]
  char *v73; // [rsp+120h] [rbp+20h]
  __int64 v74; // [rsp+128h] [rbp+28h]
  char *v75; // [rsp+130h] [rbp+30h]
  __int64 v76; // [rsp+138h] [rbp+38h]
  char *v77; // [rsp+140h] [rbp+40h]
  __int64 v78; // [rsp+148h] [rbp+48h]

  v48 = dword_140C23348;
  v3 = a2;
  v56 = a2;
  v4 = a1;
  LOBYTE(v2) = 0;
  v5 = 0;
  v54 = a1;
  Src = 0;
  v47 = 0;
  v49 = *((_DWORD *)PopPolicy + 53);
  v50 = PopCurrentCoalescingSpindownTimeout;
  v45 = v2;
  v46 = 0;
  v51 = dword_140C23344;
  v6 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  v7 = v6;
  v43 = v6;
  if ( byte_140C505F4 )
  {
    KxReleaseSpinLock(&PopDopeGlobalLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
  }
  else
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_START);
    v13 = (__int64 *)PopIdleDetectList;
    if ( (__int64 *)PopIdleDetectList != &PopIdleDetectList )
    {
      v14 = 0;
      do
      {
        v15 = v13 - 4;
        v16 = _InterlockedExchange((volatile __int32 *)v13 - 7, 0);
        *((_DWORD *)v13 - 5) += v16;
        if ( v16 || *((_DWORD *)v15 + 2) )
          *(_DWORD *)v15 = 0;
        v17 = _InterlockedExchangeAdd((volatile signed __int32 *)v15, PopIdleScanInterval);
        if ( !v17 )
          *((_DWORD *)v15 + 14) = 1;
        if ( v48 == 1 )
          v18 = *((_DWORD *)v15 + 4);
        else
          v18 = *((_DWORD *)v15 + 5);
        v19 = *((unsigned int *)v15 + 12);
        if ( (_DWORD)v19 == 1 )
        {
          if ( v18 == -1 )
            v18 = v49;
          v21 = PopCoalescingCheck(v50, v18, v17);
          v18 = v21;
          if ( v21 )
            ++v46;
          v14 = v51;
          if ( v51 > v21 )
            v14 = v21;
          v22 = *((_DWORD *)v15 + 23);
          v20 = (unsigned int)(PopIdleScanInterval + *((_DWORD *)v15 + 22));
          if ( v17 )
          {
            if ( v22 <= PopIdleScanInterval )
              v24 = 0;
            else
              v24 = v22 - PopIdleScanInterval;
          }
          else
          {
            v23 = PopIdleScanInterval + v22;
            v20 = v14;
            v24 = v14;
            if ( v23 <= v14 )
            {
              v20 = (unsigned int)(PopIdleScanInterval + *((_DWORD *)v15 + 22));
              v24 = v23;
            }
          }
          v19 = *((unsigned int *)v15 + 12);
          *((_DWORD *)v15 + 22) = v20;
          *((_DWORD *)v15 + 23) = v24;
        }
        else
        {
          v20 = v17;
        }
        if ( v18 && (unsigned int)v20 >= v18 && *((_DWORD *)v15 + 14) == 1 && (v17 || (PopSimulate & 0x2000000) != 0) )
        {
          if ( *((_DWORD *)v15 + 12) == 1 )
            PopDiagTraceIoCoalescingDiskIdle(v15[3], v20, v19);
          if ( (int)PopRequestPowerIrp(v15[3], 0LL, 0, 0LL) >= 0 )
          {
            v25 = *((_DWORD *)v15 + 13);
            ++dword_140C505F0;
            *((_DWORD *)v15 + 14) = v25;
            *((_DWORD *)v15 + 3) = 0;
          }
        }
        else if ( (_DWORD)v19 == 1 )
        {
          v26 = (unsigned __int8)v45;
          if ( !v17 )
            v26 = 1;
          v45 = v26;
        }
        v53 = v16;
        v52 = v17;
        v41 = 0;
        v40 = 0;
        v44 = 0;
        v55 = 0LL;
        if ( PopDiagHandleRegistered )
        {
          if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK) )
          {
            DeviceAttachmentBaseRefWithTag = (_QWORD *)IoGetDeviceAttachmentBaseRefWithTag(v15[3], 1732538192LL);
            v55 = DeviceAttachmentBaseRefWithTag;
            if ( DeviceAttachmentBaseRefWithTag )
            {
              v28 = *(_QWORD *)(DeviceAttachmentBaseRefWithTag[39] + 40LL);
              if ( v28 )
              {
                v44 = *(_WORD *)(v28 + 40) >> 1;
                v29 = *((_BYTE *)v15 + 52) - 1;
                UserData.Ptr = (ULONGLONG)(v15 + 3);
                v40 = v29;
                v30 = *((_BYTE *)v15 + 56) - 1;
                *(_QWORD *)&UserData.Size = 8LL;
                v41 = v30;
                v58 = &v55;
                v60 = &v44;
                v59 = 8LL;
                v61 = 2LL;
                v31 = *(unsigned __int16 *)(v28 + 40);
                v62 = *(_QWORD *)(v28 + 48);
                v65 = v15 + 2;
                v67 = (char *)v15 + 20;
                v69 = &v52;
                v71 = &v53;
                v73 = (char *)v15 + 12;
                v75 = &v40;
                v77 = &v41;
                v63 = v31;
                v64 = 0;
                v66 = 4LL;
                v68 = 4LL;
                v70 = 4LL;
                v72 = 4LL;
                v74 = 4LL;
                v76 = 1LL;
                v78 = 1LL;
                EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK, 0LL, 0xBu, &UserData);
                DeviceAttachmentBaseRefWithTag = v55;
              }
              if ( DeviceAttachmentBaseRefWithTag )
                ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x67446F50u);
            }
          }
        }
        if ( *((_DWORD *)v15 + 12) == 1 )
          PopDiagTraceDiskIdleCheck(v13 - 4, v18, v14);
        v13 = (__int64 *)*v13;
      }
      while ( v13 != &PopIdleDetectList );
      LOBYTE(v7) = v43;
      LOBYTE(v2) = v45;
      v5 = v46;
      v3 = v56;
      v4 = v54;
    }
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_END);
    KxReleaseSpinLock(&PopDopeGlobalLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v33 = KeGetCurrentIrql();
        if ( v33 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v33 >= 2u )
        {
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v12 = (v36 & v35[5]) == 0;
          v32 = (unsigned int)v36 & v35[5];
          v35[5] = v32;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
    }
    __writecr8((unsigned __int8)v7);
    v37 = PopIdleBackgroundIgnoreCount;
    if ( PopIdleBackgroundIgnoreCount )
      v37 = --PopIdleBackgroundIgnoreCount;
    if ( PopBackgroundTaskIgnoreCount )
      --PopBackgroundTaskIgnoreCount;
    if ( !v4
      || (v32 = (PopIdleScanInterval + 179) % (unsigned int)PopIdleScanInterval,
          v38 = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval,
          v3 == v38) )
    {
      PopBackgroundTaskAllowed = 1;
    }
    else if ( v3 < v38 )
    {
      PopBackgroundTaskAllowed = 0;
    }
    if ( !v5 || (_BYTE)v2 )
    {
      if ( !v37 && !dword_140C2332C )
      {
        PopGetPowerSettingValue(&GUID_IDLE_BACKGROUND_TASK, v32, 3LL, &Src);
        ++Src;
        PopSetPowerSettingValueAcDc(&GUID_IDLE_BACKGROUND_TASK);
        v32 = (PopIdleScanInterval + 59) % (unsigned int)PopIdleScanInterval;
        PopIdleBackgroundIgnoreCount = (PopIdleScanInterval + 59) / (unsigned int)PopIdleScanInterval;
      }
      if ( !PopBackgroundTaskIgnoreCount && !dword_140C2332C && PopSIdle >= 50 && PopBackgroundTaskAllowed )
      {
        PopGetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, v32, 0LL, &Src);
        ++Src;
        PopSetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, &Src);
        PopBackgroundTaskAllowed = 0;
        PopBackgroundTaskIgnoreCount = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval;
      }
    }
  }
  return 0LL;
}
