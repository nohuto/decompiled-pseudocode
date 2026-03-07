__int64 PopCheckForIdleness()
{
  __int64 v0; // rdx
  _DWORD *v1; // r8
  signed int ActiveProcessorCount; // r12d
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // r9
  _DWORD *SchedulerAssist; // r10
  int v6; // eax
  int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v12; // eax
  bool v13; // zf
  unsigned int v14; // r14d
  unsigned int v15; // esi
  int v16; // r15d
  signed int v17; // edi
  __int64 v18; // rcx
  signed int v19; // eax
  __int64 v20; // rdx
  int v22; // [rsp+20h] [rbp-30h] BYREF
  __int64 v23; // [rsp+28h] [rbp-28h]
  unsigned __int16 *v24; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+38h] [rbp-18h]
  __int16 v26; // [rsp+40h] [rbp-10h]
  int v27; // [rsp+42h] [rbp-Eh]
  __int16 v28; // [rsp+46h] [rbp-Ah]

  v27 = 0;
  v28 = 0;
  v22 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = -1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v6 = 4;
    if ( CurrentIrql != 2 )
    {
      v0 = -1LL << (CurrentIrql + 1);
      v6 = v0 & 4;
    }
    v1 = (_DWORD *)((unsigned int)v6 | SchedulerAssist[5]);
    SchedulerAssist[5] = (_DWORD)v1;
  }
  v7 = qword_140C3C9B8;
  v8 = MEMORY[0xFFFFF78000000320];
  v9 = (unsigned int)KiIrqlFlags;
  v23 = MEMORY[0xFFFFF78000000320];
  if ( KiIrqlFlags )
  {
    v10 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = (unsigned int)CurrentIrql + 1;
      v4 = -1LL << (CurrentIrql + 1);
      v1 = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)v4;
      v13 = (v12 & v1[5]) == 0;
      v0 = (unsigned int)v12 & v1[5];
      v1[5] = v0;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( byte_140C3C9B5 )
  {
    v14 = v8 - v7;
    if ( (int)v8 - v7 <= 0 )
    {
      byte_140C3C9B5 = 0;
      goto LABEL_39;
    }
    v25 = qword_140D1EFE8[0];
    v26 = 0;
    v15 = 100;
    v24 = (unsigned __int16 *)KeActiveProcessors;
    v16 = 0;
    v17 = 100;
    if ( !(unsigned int)KeEnumerateNextProcessor(&v22, &v24) )
    {
      do
      {
        v19 = 100
            * (*(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v22] + 24) + 652LL) - *(_DWORD *)(KiProcessorBlock[v22] + 33828))
            / v14;
        if ( v19 < v17 )
          v17 = 100
              * (*(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v22] + 24) + 652LL)
               - *(_DWORD *)(KiProcessorBlock[v22] + 33828))
              / v14;
        v16 += v19;
      }
      while ( !(unsigned int)KeEnumerateNextProcessor(&v22, &v24) );
      v8 = v23;
      if ( v17 <= 100 )
      {
        if ( v17 < 0 )
          v17 = 0;
      }
      else
      {
        v17 = 100;
      }
    }
    v20 = (unsigned int)(v16 >> 31);
    if ( v16 / ActiveProcessorCount <= 100 )
    {
      v15 = v16 / ActiveProcessorCount;
      if ( v16 / ActiveProcessorCount < 0 )
        v15 = 0;
    }
    dword_140C3C984 = v17;
    PopSIdle = v15;
    if ( !PopPlatformAoAc )
    {
      LODWORD(v20) = v16 % ActiveProcessorCount;
      Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage(v18, v20);
    }
    if ( dword_140C3C98C )
    {
      dword_140C3C988 += PopIdleScanInterval;
      PopDiagTraceIdleCheck(v18, (unsigned int)v17, v15);
      if ( !PopPlatformAoAc
        && PopPreSleepNotificationSeconds + 120 <= (unsigned int)dword_140C3C98C
        && dword_140C3C988 + PopPreSleepNotificationSeconds >= (unsigned int)dword_140C3C98C
        && !PopIsAboutToSleep )
      {
        PopIsAboutToSleep = 1;
        PopQueueWorkItem(&PopPreSleepNotifyWorkItem, 1LL);
      }
    }
  }
  v25 = qword_140D1EFE8[0];
  v24 = (unsigned __int16 *)KeActiveProcessors;
  qword_140C3C9B8 = v8;
  byte_140C3C9B5 = 1;
  v26 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v22, &v24) )
    *(_DWORD *)(KiProcessorBlock[v22] + 33828) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v22] + 24) + 652LL);
LABEL_39:
  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage(v9, v0);
  PopGetPolicyWorker(128LL, v0, v1, v4);
  return PopCheckForWork();
}
